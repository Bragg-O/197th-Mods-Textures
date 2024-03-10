params ["_units"];

comment "Remove existing items";
removeAllWeapons _units;
removeAllItems _units;
removeAllAssignedItems _units;
removeUniform _units;
removeVest _units;
removeBackpack _units;
removeHeadgear _units;
removeGoggles _units;

comment "Add weapons";
_units addWeapon "197th_DC15X_Regs";
_units addPrimaryWeaponItem "197th_Accessoires_Laser";
_units addPrimaryWeaponItem "197th_Accessoires_LRPS_Scope";
_units addPrimaryWeaponItem "197th_DC15X_mag";
_units addPrimaryWeaponItem "197th_Accessoires_Bipods";
_units addWeapon "197th_DC17SA_Regs";
_units addHandgunItem "197th_Accessoires_Flashlight";
_units addHandgunItem "197th_Accessoires_HoloScope";
_units addHandgunItem "197th_DC17SA_mag";

comment "Add containers";
_units forceAddUniform "197th_Uniform_Regs_Trooper";
_units addVest "197th_Vest_Regs_1";

comment "Add binoculars";
_units addMagazine "Laserbatteries";
_units addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
_units addItemToUniform "JLTS_ids_gar_army";
for "_i" from 1 to 15 do {_units addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 15 do {_units addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 5 do {_units addItemToUniform "ACE_CableTie";};
_units addItemToUniform "ACE_EntrenchingTool";
_units addItemToUniform "ACE_Flashlight_XL50";
_units addItemToUniform "ACE_morphine";
_units addItemToUniform "ACE_splint";
for "_i" from 1 to 4 do {_units addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {_units addItemToUniform "ACE_plasmaIV_250";};
for "_i" from 1 to 3 do {_units addItemToUniform "197th_DC15X_mag";};
_units addItemToVest "197th_NVG_Regs_Headlamp";
for "_i" from 1 to 3 do {_units addItemToVest "197th_DC17SA_mag";};
for "_i" from 1 to 5 do {_units addItemToVest "3AS_SmokeWhite";};
for "_i" from 1 to 3 do {_units addItemToVest "3AS_ThermalDetonator";};
for "_i" from 1 to 8 do {_units addItemToVest "197th_DC15X_mag";};
_units addHeadgear "197th_HelmetARF_Regs_ARF";
_units addGoggles "CWHUD_P2_base";

comment "Add items";
_units linkItem "ItemMap";
_units linkItem "ItemCompass";
_units linkItem "ACE_Altimeter";
_units linkItem "JLTS_clone_comlink";
_units linkItem "ItemGPS";
