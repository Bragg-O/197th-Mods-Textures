/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

diag_log "[197th/fn_checkAddonsLoaded] ----------- Init -----------";

CIM_WhiteListAddons = [
];

if (isServer) exitWith {
	diag_log "[197th/fn_checkAddonsLoaded] ----------- Init SERVER -----------";
	private CIM_ActivatedAddons = [];
	private CIM_ActivatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;
	diag_log "[197th/fn_checkAddonsLoaded] Activated Addons Count: " + str (count CIM_ActivatedAddons);
	diag_log "[197th/fn_checkAddonsLoaded] Activated Addons List: ";
	{
		diag_log parseText format ["[197th/fn_checkAddonsLoaded] - %1", _x];
	} forEach CIM_ActivatedAddons;
	diag_log "[197th/fn_checkAddonsLoaded] ----------- End SERVER -----------";
};

if (hasInterface) exitWith {
	diag_log "[197th/fn_checkAddonsLoaded] ----------- Init CLIENT -----------";
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (isNil CIM_ActivatedAddons) exitWith {
		hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#ff0000'>ERROR</t>"];
		diag_log "[197th/fn_checkAddonsLoaded] ERROR - CIM_ActivatedAddons not defined";
		diag_log "[197th/fn_checkAddonsLoaded] ----------- End CLIENT -----------";
		if (isServer) exitWith {};
		systemChat "CIM_ActivatedAddons not found! (fn_checkAddonsLoaded)";
	};
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t>"];
	sleep 1;
	_errorAddons = [];
	_realerrorAddons = [];
	_activatedAddons = [];
	_activatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;
	diag_log "[197th/fn_checkAddonsLoaded] Activated Addons Count: " + str (count _activatedAddons);
	diag_log "[197th/fn_checkAddonsLoaded] Activated Addons List: ";
	{
		diag_log parseText format ["[197th/fn_checkAddonsLoaded] - %1 | Loaded on Server: %2", _x, _x in CIM_ActivatedAddons];
		if (_x in _activatedAddons) then {
			_x pushBack _errorAddons;
		};
		hintSilent parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#8E44AD'>%1</t>", _x];
		sleep 0.1;
	} forEach _activatedAddons;
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (count _activatedAddons < count CIM_ActivatedAddons) exitWith {
		hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#ff0000'>ERROR</t>"];
		diag_log "[197th/fn_checkAddonsLoaded] ERROR - Activated client addons is not equal to server addons";
		diag_log "[197th/fn_checkAddonsLoaded] ----------- End CLIENT -----------";

		if (isServer) exitWith {};
		cutText [format["<img image='\197th_fonctions\AddonsVerification\Error_ca.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 addons manquants.</t><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><a href='https://197th.fr/installation'>www.197th.fr/installation</a>", ((count CIM_ActivatedAddons) - (count _activatedAddons))], "BLACK", -1, true, true];
		while { true } do {
			playSound "AlarmCar";
			sleep 4;
		};
	};
	{
		if (_x in CIM_WhiteListAddons) then {
			_x pushBack _realerrorAddons;
		};
		hintSilent parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_WhiteListAddons<br/><t color='#8E44AD'>%1</t>", _x];
		sleep 0.1;
	} forEach _errorAddons;
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_WhiteListAddons<br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (_realerrorAddons == []) exitWith {
		hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_WhiteListAddons<br/><t color='#28B463'>OK</t>"];
		diag_log "[197th/fn_checkAddonsLoaded] Activated client addons is equal to server addons";
		diag_log "[197th/fn_checkAddonsLoaded] ----------- End CLIENT -----------";
	};
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_ActivatedAddons<br/><t color='#28B463'>OK</t><br/><br/>Vérification du CIM_WhiteListAddons<br/><t color='#FF0000'>ERROR</t>"];
	diag_log "[197th/fn_checkAddonsLoaded] ERROR - Activated client addons is not equal to server addons";
	diag_log "[197th/fn_checkAddonsLoaded] ERROR - Activated Addons List: ";
	{
		diag_log parseText format ["[197th/fn_checkAddonsLoaded] ERROR - %1", _x];
	} forEach _realerrorAddons;
	diag_log "[197th/fn_checkAddonsLoaded] ----------- End CLIENT -----------";
	if (isServer) exitWith {};
	cutText [format["<img image='\197th_fonctions\AddonsVerification\Error_ca.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 addons qui ne sont pas autorisés</t><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><a href='https://197th.fr/installation'>www.197th.fr/installation</a>", (count _realerrorAddons)], "BLACK", -1, true, true];
	while { true } do {
		playSound "AlarmCar";
		sleep 4;
	};
};