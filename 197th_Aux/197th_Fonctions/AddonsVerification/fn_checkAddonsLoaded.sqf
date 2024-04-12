/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/


if (isServer) then {
	diag_log format["[197th/fn_checkAddonsLoaded] ----------- Init SERVER -----------"];
	CIM_WhiteListAddons = ["aws"];
	CIM_ActivatedAddons = [];
	CIM_ActivatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;
	diag_log format ["[197th/fn_checkAddonsLoaded] Activated Addons Count: %1", count CIM_ActivatedAddons];
	publicVariable "CIM_WhiteListAddons";
	publicVariable "CIM_ActivatedAddons";
	diag_log format ["[197th/fn_checkAddonsLoaded] ----------- End SERVER -----------"];
};

if (hasInterface) exitWith {
	diag_log format ["[197th/fn_checkAddonsLoaded] ----------- Init %1 -----------", profileName];
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (isNil "CIM_ActivatedAddons") exitWith {
		hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#ff0000'>ERROR</t>"];
		diag_log format ["[197th/fn_checkAddonsLoaded] ERROR - CIM_ActivatedAddons not defined"];
		diag_log format ["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName];
		if (isServer) exitWith {};
		systemChat "CIM_ActivatedAddons not found! (fn_checkAddonsLoaded)";
	};
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t>"];
	sleep 1;
	_errorAddons = [];
	_realerrorAddons = [];
	_activatedAddons = [];
	_activatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;
	diag_log format ["[197th/fn_checkAddonsLoaded] Activated Addons Count: %1", count _activatedAddons];
	{
		if (!(_x in _activatedAddons)) then {
			_errorAddons pushBack _x;
		};
		hintSilent parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#8E44AD'>%1</t>", _x];
		sleep 0.00001;
	} forEach _activatedAddons;
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (count _activatedAddons < count CIM_ActivatedAddons) exitWith {
		hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons requis<br/><t color='#ff0000'>ERROR</t>"];
		diag_log format ["[197th/fn_checkAddonsLoaded] ERROR - Activated client addons is not equal to server addons"];
		diag_log format ["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName];

		if (isServer) exitWith {};
		cutText [format["<img image='\197th_fonctions\AddonsVerification\Error_ca.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 addons manquants.</t><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><a href='https// 197th.fr/installation'>www.197th.fr/installation</a>", ((count CIM_ActivatedAddons) - (count _activatedAddons))], "BLACK", -1, true, true];
		while { true } do {
			playSound "AlarmCar";
			sleep 4;
		};
	};
	{
		if (!(_x in CIM_WhiteListAddons)) then {
			_realerrorAddons pushBack _x;
		};
		hintSilent parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#8E44AD'>%1</t>", _x];
		sleep 0.5;
	} forEach _errorAddons;
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#8E44AD'>LOADING</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#8E44AD'>PENDING</t>"];
	sleep 1;
	if (count _realerrorAddons == 0) exitWith {
		hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#28B463'>OK</t>"];
		diag_log format ["[197th/fn_checkAddonsLoaded] All Activated client addons are allow"];
		diag_log format ["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName];
	};
	hint parseText format ["<img size='5' image='\197th_Fonctions\AddonsVerification\Logo197th_ca.paa'/><br/><t size='1.5' color='#F1C40F'>Chargement des addons</t><br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons requis<br/><t color='#28B463'>OK</t><br/><br/>Vérification des addons WhiteList<br/><t color='#FF0000'>ERROR</t>"];
	diag_log format ["[197th/fn_checkAddonsLoaded] ERROR - Activated client addons is not equal to server addons"];
	diag_log format ["[197th/fn_checkAddonsLoaded] ERROR - Activated Addons List:"];
	{
		diag_log format ["[197th/fn_checkAddonsLoaded] ERROR - %1", _x];
	} forEach _realerrorAddons;
	diag_log format ["[197th/fn_checkAddonsLoaded] ----------- End %1 -----------", profileName];
	if (isServer) exitWith {};
	cutText [format["<img image='\197th_fonctions\AddonsVerification\Error_ca.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 addons qui ne sont pas autorisés</t><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><a href='https// 197th.fr/installation'>www.197th.fr/installation</a>", (count _realerrorAddons)], "BLACK", -1, true, true];
	while { true } do {
		playSound "AlarmCar";
		sleep 4;
	};
};