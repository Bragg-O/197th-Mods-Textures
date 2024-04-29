/*
	Author: Bragg
	
	Description:
	if the script is running on the server:
	It initializes two global variables CIM_WhiteListAddons and CIM_ActivatedAddons.
	It logs the server initialization process.
	It makes CIM_WhiteListAddons and CIM_ActivatedAddons public variables.
	It logs the end of the server initialization process.

	if the script is running on a client with an interface:
	It logs the client initialization process.
	It displays a hint message indicating that addons are being loaded.
	It checks if CIM_ActivatedAddons is defined. if not, it displays an error message and logs the error.
	It updates the hint message to indicate that addons are being loaded.
	It checks if each activated addon on the client is also activated on the server. if not, it displays an error message, logs the error, and exits.
	It also displays a message to the user about missing addons and suggests reinstalling the preset.
	
	Parameter(s):
	none
	
	Example:
	call CIM_fnc_initAddonsScanner;
*/

if (isServer) then {
	["[197th/fn_checkAddonsLoaded] ----------- Init SERVER -----------"] call BIS_fnc_logFormatServer;
	CIM_WhiteListAddons = ["aws"];
	CIM_ActivatedAddons = [];
	CIM_ActivatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;
	["[197th/fn_checkAddonsLoaded] Activated Addons Count: %1", count CIM_ActivatedAddons] call BIS_fnc_logFormatServer;
	publicVariable "CIM_WhiteListAddons";
	publicVariable "CIM_ActivatedAddons";
	["[197th/fn_checkAddonsLoaded] ----------- End SERVER -----------"] call BIS_fnc_logFormatServer;
};

if (hasInterface) then {
	["[197th/fn_checkAddonsLoaded] ----------- Init %1 -----------", profileName] call BIS_fnc_logFormatServer;
	private _playerUID = getPlayerUID player;
	private _debugUID = getMissionConfigValue ["enableDebugConsole", []];
	if (_playerUID in _debugUID) then {
		private _debugAddonsScanner = true;
		["[197th/fn_checkAddonsLoaded] Debug mode enabled"] call BIS_fnc_logFormatServer;
	};
	hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (isNil "CIM_ActivatedAddons") exitWith {
		hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#ff0000'>ERROR</t>"];
		["[197th/fn_checkAddonsLoaded] ERROR - CIM_ActivatedAddons not defined"] call BIS_fnc_logFormatServer;
		["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName] call BIS_fnc_logFormatServer;
		if (isServer || _debugAddonsScanner) exitWith {};
		systemChat "CIM_ActivatedAddons not found! (fn_checkAddonsLoaded)";
	};
	hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t>"];
	sleep 1;
	_errorAddons = [];
	_realerrorAddons = [];
	_activatedAddons = [];
	_activatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;
	["[197th/fn_checkAddonsLoaded] Activated Addons Count: %1", count _activatedAddons] call BIS_fnc_logFormatServer;
	{
		if (!(_x in _activatedAddons)) then {
			_errorAddons pushBack _x;
		};
		hintSilent parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#8E44AD'>%1</t>", _x];
		sleep 0.00001;
	} forEach _activatedAddons;
	hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (count _activatedAddons < count CIM_ActivatedAddons) exitWith {
		hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons requis<br/><t color='#ff0000'>ERROR</t>"];
		["[197th/fn_checkAddonsLoaded] ERROR - Activated client addons is not equal to server addons"] call BIS_fnc_logFormatServer;
		["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName] call BIS_fnc_logFormatServer;

		if (isServer || _debugAddonsScanner) exitWith {};
		cutText [format["<img image='\197th_Functions\AddonsScanner\Data\Error_ca.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 addons manquants.</t><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><a href='https// 197th.fr/installation'>www.197th.fr/installation</a>", ((count CIM_ActivatedAddons) - (count _activatedAddons))], "BLACK", -1, true, true];
		while { true } do {
			playSound "AlarmCar";
			sleep 4;
		};
	};
	{
		if (!(_x in CIM_WhiteListAddons)) then {
			_realerrorAddons pushBack _x;
		};
		hintSilent parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#8E44AD'>%1</t>", _x];
		sleep 0.01;
	} forEach _errorAddons;
	hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (count _realerrorAddons == 0) exitWith {
		hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#28B463'>OK</t>"];
		["[197th/fn_checkAddonsLoaded] All Activated client addons are allow"] call BIS_fnc_logFormatServer;
		["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName] call BIS_fnc_logFormatServer;
	};
	hint parseText format ["<img size='5' image='\197th_Functions\AddonsScanner\Data\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#FF0000'>ERROR</t>"];
	["[197th/fn_checkAddonsLoaded] ERROR - Activated client addons is not equal to server addons"] call BIS_fnc_logFormatServer;
	["[197th/fn_checkAddonsLoaded] ERROR - Activated Addons List:"] call BIS_fnc_logFormatServer;
	{
		["[197th/fn_checkAddonsLoaded] ERROR - %1", _x] call BIS_fnc_logFormatServer;
	} forEach _realerrorAddons;
	["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName] call BIS_fnc_logFormatServer;
	if (isServer || _debugAddonsScanner) exitWith {};
	cutText [format["<img image='\197th_Functions\AddonsScanner\Data\Error_ca.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 addons qui ne sont pas autorisés</t><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><a href='https// 197th.fr/installation'>www.197th.fr/installation</a>", (count _realerrorAddons)], "BLACK", -1, true, true];
	while { true } do {
		playSound "AlarmCar";
		sleep 4;
	};
};