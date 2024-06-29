// param FortifyTools
[west, 5000, [
	// H-Barrier
	["Land_lsb_fob_hBarrier_ramp", 5, "H-Barrier"],
	["Land_lsb_fob_hBarrier_1", 5, "H-Barrier"],
	["Land_lsb_fob_hBarrier_wall", 10, "H-Barrier"],
	["Land_lsb_fob_hBarrier_3", 15, "H-Barrier"],
	["Land_lsb_fob_hBarrier_5", 25, "H-Barrier"],
	["Land_lsb_fob_hBarrierWall_invertedCorner", 45, "H-Barrier"],
	["Land_lsb_fob_hBarrierWall_exvertedCorner", 45, "H-Barrier"],
	["Land_lsb_fob_hBarrierWall_7", 60, "H-Barrier"],
	["Land_lsb_fob_hBarrier_tower", 90, "H-Barrier"],

	// Barricades
	["3AS_Cover2", 5, "Barricades"],
	["442_barricade3", 10, "Barricades"],
	["442_barricade1_rep", 15, "Barricades"],

	// Checkpoint
	["3AS_Short_Wall_Curved", 5, "Checkpoint"],
	["3AS_Short_Wall_Long", 5, "Checkpoint"],
	["3AS_Short_Wall_Bunker", 30, "Checkpoint"],
	["land_3AS_Imperial_Checkpoint_Long", 30, "Checkpoint"],

	// Divers
	["197th_Banner", 5, "Divers"],
	["197th_Flag", 10, "Divers"],
	["3as_GNK_music", 10, "Divers"],
	["land_3AS_light_s_small", 10, "Divers"],
	["land_3AS_light_s_tall", 15, "Divers"],
	["fob_light_gar_tall", 25, "Divers"],
	["land_3AS_Tent_Med", 60, "Divers"],
	["land_3AS_Tent_Grey", 60, "Divers"],

	// weapons
	["3AS_Republic_Mortar", 60, "Weapons"],
	["3AS_StationaryTurret", 60, "Weapons"],
	["3AS_HeavyRepeater_Armoured", 50, "Weapons"],
	["3AS_HeavyRepeater_Unarmoured", 30, "Weapons"]
]] call acex_fortify_fnc_registerObjects;

[] call DB_fnc_initMySQL;

// Cinematique
["\CIM_Core\Missions\Data\DebutMission.ogv"] call BIS_fnc_quotations;
_handle = ["<t color='#ffffff' size='.5'>Bienvenue à bord de la 197th Compagnie Chimaera !<br />Vous avez déjà vu l'introduction ?<br />Appuyez sur la touche [Espace] pour la passer.</t>", -1, 1, 6, 1, 0, 789] spawn BIS_fnc_dynamicText;

if (hasInterface) then {
	waitUntil {
		sleep 10;
		scriptDone _handle
	};
};

[] spawn CIM_fnc_initScanner;