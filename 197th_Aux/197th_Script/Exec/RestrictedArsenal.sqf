/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_crate"];

// Init stuff
["AmmoboxInit", [_crate, false, {
	true
}]] spawn BIS_fnc_arsenal;

// automatic add 197th object and item in arsenal
_all197objects = [];
_all197items = [];
_197Backpacks = [];
_197Miscshits = [];
_197Guns = [];
_ComLinkList = [];

_allvehicules = "'197th' in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgVehicles");

{
	_all197objects pushBack (configName (_x));
} forEach _allvehicules;

{
	switch (true) do {
		case ("Backpack" in _x): {
			_197Backpacks pushBack (_x)
		};
		default {};
	};
} forEach _all197objects;

_allitems = "'197th' in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgWeapons");

{
	_all197items pushBack (configName (_x));
	0
} forEach _allitems;

{
	switch (true) do {
		case ("Uniform" in _x): {
			_197Miscshits pushBack (_x)
		};
		case ("Helmet" in _x): {
			_197Miscshits pushBack (_x)
		};
		case ("Vest" in _x): {
			_197Miscshits pushBack (_x)
		};
		case ("NVG" in _x): {
			_197Miscshits pushBack (_x)
		};
		case ("Accessoires" in _x): {
			_197Miscshits pushBack (_x)
		};
		case ("Accessory" in _x): {
			_197Miscshits pushBack (_x)
		};
		case ("DC1" in _x): {
			_197Guns pushBack (_x)
		};
		case ("Z6" in _x): {
			_197Guns pushBack (_x)
		};
		case ("PLX" in _x): {
			_197Guns pushBack (_x)
		};
		case ("RPS" in _x): {
			_197Guns pushBack (_x)
		};
		default {};
	};
} forEach _all197items;

// Lists of items to include

for [{ _i = 0 }, { _i < 21 }, { _i = _i + 1 }] do {
	_ComLinkList pushBack (format ["JLTS_clone_comlink_%1", _i]);
};

_BackpackRegs = [];

_MiscshitRegs = [

	"197th_riot_shield_item",

	// CWHUD
	"CWHUD_P2_base",
	"CWHUD_P2_blue",
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
	"CWHUD_P1_base",
	"CWHUD_P1_blue",
	"CWHUD_P1_red",
	"CWHUD_P1_green",
	"CWHUD_P1_purple",
	"CWHUD_P2_purple",
	"CWHUD_P2_green",
	"CWHUD_P2_red",

	// binocular
	"JLTS_CloneBinocular",
	"JLTS_CloneBinocular_black",
	"Laserbatteries",

	// More
	"ace_Banana",
	"ace_SpraypaintBlack",
	"ace_SpraypaintBlue",
	"ace_SpraypaintGreen",
	"ace_SpraypaintRed",
	"ace_Tripod",
	"Attachable_Helistretcher",
	"MineDetector",
	"ToolKit",
	"ace_marker_flags_black",
	"ace_marker_flags_blue",
	"ace_marker_flags_green",
	"ace_marker_flags_orange",
	"ace_marker_flags_purple",
	"ace_marker_flags_red",
	"ace_marker_flags_white",
	"ace_marker_flags_yellow",
	"ls_holoprojector_bountyPuck",
	"ace_CableTie",
	"ace_Clacker",
	"ace_M26_Clacker",
	"ace_DefusalKit",
	"ace_EntrenchingTool",
	"ace_Flashlight_MX991",
	"ace_Flashlight_XL50",
	"ace_Fortify",
	"197th_Medical_adenosine",
	"197th_Medical_bloodIV",
	"197th_Medical_bloodIV_250",
	"197th_Medical_bloodIV_500",
	"ace_bodyBag",
	"197th_Medical_elasticBandage",
	"197th_Medical_epinephrine",
	"197th_Medical_morphine",
	"197th_Medical_packingBandage",
	"197th_Medical_quikclot",
	"197th_Medical_personalAidKit",
	"197th_Medical_salineIV",
	"197th_Medical_salineIV_250",
	"197th_Medical_salineIV_500",
	"197th_Medical_plasmaIV",
	"197th_Medical_plasmaIV_250",
	"197th_Medical_plasmaIV_500",
	"197th_Medical_splint",
	"197th_Medical_surgicalKit",
	"ace_tourniquet",
	"ace_wirecutter",
	"JLTS_repairkit_weapon_mini",
	"JLTS_repairkit_weapon",
	"ACE_IR_Strobe_Item",

	// Basic
	"ace_Altimeter",
	"ItemCompass",
	"ItemGPS",
	"ItemMap",
	"JLTS_clone_comlink",
	"ace_MapTools",
	"ace_SpottingScope"
];

_MagazinesRegs = [
	"3AS_SmokeBlue",
	"3AS_SmokeGreen",
	"3AS_SmokeRed",
	"3AS_SmokeWhite",
	"3AS_SmokeYellow",
	"3AS_ThermalDetonator",
	"3AS_ThrowableCharge",
	"1Rnd_HE_Grenade_shell",
	"UGL_FlareWhite_F",
	"ACE_HandFlare_Green",
	"ACE_HandFlare_Red",
	"ACE_HandFlare_White",
	"ACE_HandFlare_Yellow",
	"B_IR_Grenade",
	"197th_Medical_painkillers",
	"ls_mag_glowrod_hiBlue",
	"ls_mag_glowrod_hiGreen",
	"ls_mag_glowrod_hiOrange",
	"ls_mag_glowrod_hiRed",
	"ls_mag_glowrod_hiWhite",
	"ls_mag_glowrod_hiYellow",
	"ShieldGrenade_Mag",
	"OPTRE_1Rnd_MasterKey_Pellets",
	"OPTRE_1Rnd_MasterKey_Slugs",
	"OPTRE_ELB47_Strobe",
	"SquadShieldMagazine",
	"1Rnd_HE_Grenade_shell",
	"JLTS_stun_mag_long",
	"JLTS_stun_mag_short",
	"OPTRE_signalSmokeR",
	"OPTRE_signalSmokeG",
	"OPTRE_signalSmokeB",
	"OPTRE_1Rnd_Smoke_Grenade_shell",
	"OPTRE_1Rnd_SmokeRed_Grenade_shell",
	"ace_40mm_Flare_white",
	"ace_40mm_Flare_green",
	"ace_40mm_Flare_red",
	"197th_DC15_mag",
	"197th_DC15A_mag",
	"197th_DC15S_mag",
	"197th_DC15X_mag",
	"197th_DC17SA_mag",
	"197th_Z6_mag",
	"197th_AA_mag",
	"197th_AT_mag",
	"197th_HE_mag",
	"APERSMineDispenser_Mag",
	"JLTS_grenade_emp_mag",
	"197th_Breach_Mag",
	"197th_DemoPack_Mag",
	"197th_DetPack_Mag"
];

_GunsRegs = [
	"Police_Bat",
	"UNSC_Knife"
];

// Populate with predefined items and whatever is already in the crate
[_crate, ((backpackCargo _crate) + _197Backpacks + _BackpackRegs)] call BIS_fnc_addVirtualBackpackCargo;
[_crate, ((itemCargo _crate) + _MiscshitRegs + _197Miscshits + _ComLinkList)] call BIS_fnc_addVirtualItemCargo;
[_crate, ((magazineCargo _crate) + _MagazinesRegs)] call BIS_fnc_addVirtualMagazineCargo;
[_crate, ((weaponCargo _crate) + _GunsRegs + _197Guns)] call BIS_fnc_addVirtualWeaponCargo;