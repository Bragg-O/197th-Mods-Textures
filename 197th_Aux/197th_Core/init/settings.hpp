/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

author = "197th Compagnie Chimaera"; //Mission Author 
loadScreen = "\197th_Core\Init\Data\loadscreen.paa"; //LoadScreen
respawn = 3; //Respawn type
respawnTemplatesWest[] = { "MenuPosition" };
respawnTemplatesEast[] = { "MenuPosition"};
respawnTemplatesGuer[] = { "MenuPosition"};
respawnTemplatesCiv[] = { "MenuPosition" };
respawnTemplatesVirtual[] = {}; // Virtual players, used mainly in Curator (Zeus) missions
respawnOnStart = 0; //Respawn on start
enableDebugConsole[] = { // admins and players with their UID in this list have access
	"76561198113173701", //Bragg
	"76561198169985342", //Hermes
	"76561198203156987"  //Apollyon
};
enableItemsDropping = 1; // 0: disabled - 1: enabled. Default: ?
enableTeamSwitch = 0; // 0: disabled - 1: enabled. Default: 1
aiKills = 0; // 0: disabled - 1: enabled. Default: 0
briefing = 0; // 0: disabled - 1: enabled. Default: 1
disabledAI = 1; // 0: disabled - 1: enabled. Default: 0
joinUnassigned = 1; // 0: disabled - 1: enabled. Default: 1
showCompass = 1; // 0: disabled - 1: enabled. Default: 1
showGPS = 1; // 0: disabled - 1: enabled. Default: 1
showGroupIndicator = 0; // 0: disabled - 1: enabled. Default: 0
showMap = 1; // 0: disabled - 1: enabled. Default: 1
showSquadRadar = 0; // 0: disabled - 1: enabled. Default: 0
showUAVFeed = 1; // 0: disabled - 1: enabled. Default: 1
allowProfileGlasses = 0; // 0: disabled - 1: enabled. Default: 1 
corpseLimit = 15; // Default: 15
corpseRemovalMinTime = 60; // seconds. Default: 10
corpseRemovalMaxTime = 120; // seconds. Default: 3600
wreckLimit = 5; // seconds. Default: 15
wreckRemovalMinTime = 360; // seconds. Default: 10
wreckRemovalMaxTime = 500; // seconds. Default: 36000 (10 hours)
minPlayerDistance = 0; // meters. Default: 0
saving = 0; // 0: disabled - 1: enabled. Default: 1
allowFunctionsLog = 1; // 0: disabled - 1: enabled. Default: ?
allowFunctionsRecompile = 1; // 0: disabled - 1: enabled. Default: 0
zeusCompositionScriptLevel = 2;	// 0: all scripts are forbidden
								// 1: only attributes are allowed (including custom attributes added by mods)
								// 2: all scripts are allowed including init scripts
								// Default: 1
LARs_overrideVA_debug = 1; //Show RPT debug info

LARs_overrideVA_showMsg = -1; //Display client message if they load an inventory with items that are not allowed
							 // -1 - wait for user to close
							 // 0 - disabled
							 // > 0 - time to show message

LARs_overrideVA_random = 1; //Disable random - will disable random button and shortcut keys

class Header {
	gameType = Zeus; // Game type
	minPlayers = 1;	// minimum number of players the mission supports
	maxPlayers = 64; // maximum number of players the mission supports
};

class CfgWorlds {
	class Any {
		author = "197th Development Team";
		description = "197th Compagnie Chimaera";
		pictureMap = "\197th_Core\Init\Data\loadmap.paa";
		pictureShot = "\197th_Core\Init\Data\loadscreen.paa";
		loadingTexts[] = { "197th Compagnie Chimaera", "La Compagnie Chimaera vous accueille en son sein", "Préparez vous pour une expérience RolePlay unique et immersive" };
	};
};

CIM_RestrictedArsenal_AllClassWith = "197th"; // classes that are allowed to use this arsenal;

CIM_RestrictedArsenal_Backpack[] += {}; // backpacks that are allowed to use this arsenal

CIM_RestrictedArsenal_MiscShit[] += { // misc items that are allowed to use this arsenal
	"ace_Altimeter",
	"ace_Banana",
	"ace_bodyBag",
	"ace_CableTie",
	"ace_Clacker",
	"ace_DefusalKit",
	"ace_EntrenchingTool",
	"ace_Flashlight_MX991",
	"ace_Flashlight_XL50",
	"ace_Fortify",
	"ACE_IR_Strobe_Item",
	"ace_M26_Clacker",
	"ace_MapTools",
	"ace_marker_flags_black",
	"ace_marker_flags_blue",
	"ace_marker_flags_green",
	"ace_marker_flags_orange",
	"ace_marker_flags_purple",
	"ace_marker_flags_red",
	"ace_marker_flags_white",
	"ace_marker_flags_yellow",
	"ace_SpottingScope",
	"ace_SpraypaintBlack",
	"ace_SpraypaintBlue",
	"ace_SpraypaintGreen",
	"ace_SpraypaintRed",
	"ace_tourniquet",
	"ace_Tripod",
	"ace_wirecutter",
	"Attachable_Helistretcher",
	"CWHUD_Ab_Barc_base",
	"CWHUD_Ab_Barc_blue",
	"CWHUD_Ab_Barc_green",
	"CWHUD_Ab_Barc_purple",
	"CWHUD_Ab_Barc_red",
	"CWHUD_ARF_base",
	"CWHUD_ARF_blue",
	"CWHUD_ARF_green",
	"CWHUD_ARF_purple",
	"CWHUD_ARF_red",
	"CWHUD_P2_base",
	"CWHUD_P2_blue",
	"CWHUD_P2_green",
	"CWHUD_P2_purple",
	"CWHUD_P2_red",
	"ItemCompass",
	"ItemGPS",
	"ItemMap",
	"JLTS_CloneBinocular_black",
	"JLTS_CloneBinocular",
	"JLTS_repairkit_weapon_mini",
	"JLTS_repairkit_weapon",
	"Laserbatteries",
	"ls_holoprojector_bountyPuck",
	"MineDetector",
	"ToolKit",
	"JLTS_clone_comlink"
};

CIM_RestrictedArsenal_Magazine[] += { // magazines that are allowed to use this arsenal
	"1Rnd_HE_Grenade_shell",
	"3AS_SmokeBlue",
	"3AS_SmokeGreen",
	"3AS_SmokeRed",
	"3AS_SmokeWhite",
	"3AS_SmokeYellow",
	"3AS_ThermalDetonator",
	"3AS_ThrowableCharge",
	"ace_40mm_Flare_green",
	"ace_40mm_Flare_red",
	"ace_40mm_Flare_white",
	"ACE_HandFlare_Green",
	"ACE_HandFlare_Red",
	"ACE_HandFlare_White",
	"ACE_HandFlare_Yellow",
	"APERSMineDispenser_Mag",
	"B_IR_Grenade",
	"JLTS_grenade_emp_mag",
	"JLTS_stun_mag_long",
	"JLTS_stun_mag_short",
	"ls_mag_glowrod_hiBlue",
	"ls_mag_glowrod_hiGreen",
	"ls_mag_glowrod_hiOrange",
	"ls_mag_glowrod_hiRed",
	"ls_mag_glowrod_hiWhite",
	"ls_mag_glowrod_hiYellow",
	"OPTRE_1Rnd_MasterKey_Pellets",
	"OPTRE_1Rnd_MasterKey_Slugs",
	"OPTRE_1Rnd_Smoke_Grenade_shell",
	"OPTRE_1Rnd_SmokeRed_Grenade_shell",
	"OPTRE_ELB47_Strobe",
	"OPTRE_signalSmokeB",
	"OPTRE_signalSmokeG",
	"OPTRE_signalSmokeR",
	"ShieldGrenade_Mag",
	"SquadShieldMagazine",
	"UGL_FlareWhite_F"
};

CIM_RestrictedArsenal_Weapon[] += { // weapons that are allowed to use this arsenal
	"Police_Bat",
	"UNSC_Knife"
};

CIM_Garage_Boat[] += {}; // boats that are allowed to use in garage

CIM_Garage_Box[] += { // boxes that are allowed to use in garage
	"197th_Supply_Empty",
	"197th_Supply_Ammo",
	"197th_Supply_Medical",
	"197th_Supply_Explosive",
	"197th_Supply_Weapon",
	"197th_Supply_NVG",
	"197th_Supply_ATAA"
};

CIM_Garage_Car[] += { // cars that are allowed to use in garage
	"197th_BARC",
	"197th_BARCSideCar",
	"197th_Bison_APC",
	"197th_Bison_IFV",
	"197th_Bison_MGS",
	"197th_ITT",
	"197th_ITT_Transport",
	"197th_ITT_Medical",
	"197th_ITT_Logistic",
	"197th_RTT",
	"197th_Saber",
	"197th_Saber_Super",
	"197th_Saber_GL",
	"197th_Saber_Recon",
	"197th_M12A1_LRV",
	"197th_M12_APC",
	"197th_M914_RV",
	"197th_M12G1_LRV",
	"197th_M12R_AA",
	"197th_M813_TT",
	"197th_M12_LRV",
	"197th_M12_FAV"
};

CIM_Garage_Heli[] += { // helis that are allowed to use in garage
	"197th_LAATC",
	"197th_LAATI_Mk1",
	"197th_LAATI_Mk2",
	"197th_LAATI_Mk1Lights",
	"197th_LAATI_Mk2Lights"
};

CIM_Garage_Plane[] += { // planes that are allowed to use in garage
	"197th_ARC170",
	"197th_VWing",
	"197th_YWing",
	"197th_Z95"
};