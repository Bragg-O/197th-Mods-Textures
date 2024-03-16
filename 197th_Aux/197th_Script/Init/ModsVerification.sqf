/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator. Script lié à la vérification des mods chargés dans un jeu. Il compare les mods chargés avec la liste blanche des mods autorisés et gère les erreurs si des mods non autorisés sont trouvés.
	    
	    Website: [www.197th.fr]
	
	
		To get the '_RequiredlistModsdir' array, execute the following command in your debug console with all Required mods activated:
	
			_RequiredlistModsdir = [];
			_loadedMods = getLoadedModsInfo;
			
			{
				_modDir = _x select 7;
					_RequiredlistModsdir pushBack _modDir;
			} forEach _loadedMods;
			
			_RequiredlistModsdir sort true;
			copyToClipboard str _RequiredlistModsdir;


		To get the '_WhitelistModsdir' array, execute the following command in your debug console with all Whitelist + all Required mods activated:
	
			_WhitelistModsdir = [];
			_loadedMods = getLoadedModsInfo;
			
			{
				_modDir = _x select 7;
					_WhitelistModsdir pushBack _modDir;
			} forEach _loadedMods;
			
			_WhitelistModsdir sort true;
			copyToClipboard str _WhitelistModsdir;
	
*/
_bypassuser = ["76561198113173701"];

_RequiredlistModsdir = ["0","0","0","0","0","1021790","1224892496","1251859358","1325500","1355481562","1360626473","1376867375","1393068220","1572627279","1770265310","1779063631","1876589191","1940589429","2010222986","2010224487","2018593688","2058554822","2060770170","2061309401","2095827925","2095882226","2129532219","2162749089","2215872933","2291129343","2306758518","2320596778","2323185592","2332457910","2421703737","2447965207","2467589125","2476559740","2480263219","2515887728","2526965189","2567352444","2616555444","2631999150","275700","2781143469","2781146469","2789152015","2791403093","2794721649","2797232351","2806487814","2809399991","2819732932","288520","2918542818","2933180786","2969350304","2993442344","3028025089","3032131959","304380","3043987264","3085697583","3171833292","3178352493","332350","395180","450814997","463939057","571710","583496184","583544987","601670","623475643","639600","730310357","744950","766491311","767380317","769440155","798390","837729515","894678801","925018569"];

_WhitelistModsdir = ["0","0","0","0","0","1021790","1224892496","1251859358","1325500","1355481562","1360626473","1376867375","1393068220","1572627279","1770265310","1779063631","1876589191","1940589429","2010222986","2010224487","2018593688","2058554822","2060770170","2061309401","2095827925","2095882226","2129532219","2162749089","2215872933","2291129343","2306758518","2320596778","2323185592","2332457910","2421703737","2447965207","2467589125","2476559740","2480263219","2515887728","2526965189","2567352444","2616555444","2631999150","275700","2781143469","2781146469","2789152015","2791403093","2794721649","2797232351","2806487814","2809399991","2819732932","288520","2918542818","2933180786","2969350304","2993442344","3028025089","3032131959","304380","3043987264","3085697583","3171833292","3178352493","332350","395180","450814997","463939057","571710","583496184","583544987","601670","623475643","639600","730310357","744950","766491311","767380317","769440155","798390","837729515","894678801","925018569"];

_ExcludeModsBragg = ["2421703737","3171833292","3178352493"];

_RequiredlistModsdirZero = {
	_x == "0"
} count _RequiredlistModsdir;

_WhitelistModsdirZero = {
	_x == "0"
} count _WhitelistModsdir;

_loadedModsdir = [];
_loadedModsError = [];
_RequiredloadedModsError = [];
_loadedMods = getLoadedModsInfo;
_ModnameErrorText = "";

{
	_loadedModsdir pushBack (_x select 7);
	if ((_x select 7) in _WhitelistModsdir) then {
		if ((_x select 7) == "0") then {
			if (_WhitelistModsdirZero > 0) then {
				_WhitelistModsdirZero = _WhitelistModsdirZero - 1;
			} else {
				_loadedModsError pushBack ("Inconnu");
			};
		};
	} else {
		switch true do {
			case ((_x select 7) in _ExcludeModsBragg) : {};
			default {
				_loadedModsError pushBack (_x select 1)
			};
		};
	};
} forEach _loadedMods;

{
	if ((_x) in _loadedModsdir) then {
		if ((_x) == "0") then {
			if (_RequiredlistModsdirZero > 0) then {
				_RequiredlistModsdirZero = _RequiredlistModsdirZero - 1;
			} else {
				_RequiredloadedModsError pushBack ("Inconnu");
			};
		};
	} else {
		switch true do {
			case ((_x) in _ExcludeModsBragg) : {};
			default {
				_RequiredloadedModsError pushBack (_x)
			};
		};
	};
} forEach _RequiredlistModsdir;

{
	_ModnameErrorText = _ModnameErrorText + format["<t color='#E67E22'>%1</t><br/>", _x];
} forEach _loadedModsError;

sleep 20;
switch true do {
	case (((count _loadedModsError) > 0) && ((count _RequiredloadedModsError) > 0)) : {
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>%1", _ModnameErrorText];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#3498DB'>Bye Bye</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>%1", _ModnameErrorText];
		sleep 5;
		hintSilent "";
		if ((getPlayerUID player) in _bypassuser) then {} else {
			cutText [format["<img image='197th_Script\Data\Error.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %2 mods qui ne sont pas autorisés :</t><br/>%1<br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><t color='#87CEEB'>https://197th.fr/installation</t>", _ModnameErrorText, (count _loadedModsError)], "BLACK", -1, true, true];
			while { true } do {
				playSound "bip1";
				sleep 2;
			};
		};
	};
	case ((count _loadedModsError) > 0) : {
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>%1", _ModnameErrorText];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#3498DB'>Bye Bye</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>%1", _ModnameErrorText];
		sleep 5;
		hintSilent "";
		if ((getPlayerUID player) in _bypassuser) then {} else {
			cutText [format["<img image='197th_Script\Data\Error.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %2 mods qui ne sont pas autorisés :</t><br/>%1<br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><t color='#87CEEB'>https://197th.fr/installation</t>", _ModnameErrorText, (count _loadedModsError)], "BLACK", -1, true, true];
			while { true } do {
				playSound "bip1";
				sleep 2;
			};
		};
	};
	case ((count _RequiredloadedModsError) > 0) : {
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#3498DB'>Bye Bye</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#FF0000'>NOK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 5;
		hintSilent "";
		if ((getPlayerUID player) in _bypassuser) then {} else {
			cutText [format["<img image='197th_Script\Data\Error.paa' size='6'/><br/><br/><t size='1.5' color='#FF0000'>Vous avez %1 mods manquant</t><br/><br/>Télécharger le Preset depuis notre site et assurez-vous de les activer correctement.<br/><br/>Pour réinstaller le preset, veuillez visiter le lien suivant :<br/><t color='#87CEEB'>https://197th.fr/installation</t>", (count _RequiredloadedModsError)], "BLACK", -1, true, true];
			while { true } do {
				playSound "bip1";
				sleep 2;
			};
		};
	};
	default {
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 1;
		hintSilent parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#8E44AD'>LOADING</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#8E44AD'>LOADING</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 1;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Chargement des mods</t><br/>Statut <t color='#3498DB'>GOOD GAME</t><br/><br/>Vérification des mods chargés<br/>Statut <t color='#28B463'>OK</t><br/><br/>Tous les mods dans la Whitelist<br/>Statut <t color='#28B463'>OK</t>"];
		sleep 5;
		hintSilent "";
	};
};