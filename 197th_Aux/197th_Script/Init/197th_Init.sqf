/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

//Script lié à la vérification des mods chargés dans un jeu. Il compare les mods chargés avec la liste blanche des mods autorisés et gère les erreurs si des mods non autorisés sont trouvés.
call CIM_fnc_initAddonsScanner;

//param FortifyTools
[] execVM "197th_Script\Init\FortifyTools.sqf";

// Cinematique
["197th_Script\Data\DebutMission.ogv"] call BIS_fnc_quotations;
["<t color='#ffffff' size='.5'>Bienvenue à bord de la 197th Compagnie Chimaera !<br />Vous avez déjà vu l'introduction ?<br />Appuyez sur la touche [Espace] pour la passer.</t>", -1, 1, 6, 1, 0, 789] spawn BIS_fnc_dynamicText;