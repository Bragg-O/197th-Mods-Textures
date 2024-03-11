/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

//Vérifie en permanence la présence d'objets "BulletBase" à proximité du joueur. Si des objets sont trouvés à moins de 50 mètres, la caméra du joueur est basculée en mode "INTERNAL".
[] execVM "197th_Script\Init\UnderFire.sqf";

//Script lié à la vérification des mods chargés dans un jeu. Il compare les mods chargés avec la liste blanche des mods autorisés et gère les erreurs si des mods non autorisés sont trouvés.
[] execVM "197th_Script\Init\ModsVerification.sqf";

//param FortifyTools
[] execVM "197th_Script\Init\FortifyTools.sqf";

//Add MapIcon
[] execVM "197th_Script\Init\MapIcon.sqf";

//Add Earplugs
[] execVM "197th_Script\Init\Earplugs.sqf";

// Cinematique
["197th_Script\Data\DebutMission.ogv"] call BIS_fnc_quotations;
["<t color='#ffffff' size='.5'>Bienvenue à bord de la 197th Compagnie Chimaera !<br />Vous avez déjà vu l'introduction ?<br />Appuyez sur la touche [Espace] pour la passer.</t>", -1, 1, 6, 1, 0, 789] spawn BIS_fnc_dynamicText;

while { true } do {
	sleep 10;
	   // Carry and Drag
	ace_maxWeightCarry = 3500;
	ace_maxWeightDrag = 5000;
	   // Add allPlayers to allCurators
	{
		_x addCuratorEditableObjects [allPlayers, true];
		_x addCuratorEditableObjects [vehicles, true];
	} forEach allCurators;
};