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
_units addWeapon "197th_DC15A_ugl_Regs";
_units addPrimaryWeaponItem "197th_Accessoires_Flashlight";
_units addPrimaryWeaponItem "1Rnd_HE_Grenade_shell";
_units addPrimaryWeaponItem "197th_DC15A_mag";
_units addWeapon "197th_DC17SA_Regs";
_units addHandgunItem "197th_Accessoires_Flashlight";
_units addHandgunItem "197th_Accessoires_HoloScope";
_units addHandgunItem "197th_DC17SA_mag";

comment "Add containers";
_units forceAddUniform "197th_Uniform_Regs_Trooper";
_units addVest "197th_Vest_Regs_5";
_units addBackpack "197th_Backpack_Regs_Radio";

comment "Add items to containers";

for "_i" from 1 to 15 do {_units addItemToUniform "197th_Medical_elasticBandage";};
for "_i" from 1 to 15 do {_units addItemToUniform "197th_Medical_packingBandage";};
for "_i" from 1 to 5 do {_units addItemToUniform "ACE_CableTie";};
_units addItemToUniform "ACE_EntrenchingTool";
_units addItemToUniform "ACE_Flashlight_XL50";
_units addItemToUniform "197th_Medical_painkillers";
_units addItemToUniform "197th_Medical_splint";
for "_i" from 1 to 4 do {_units addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {_units addItemToUniform "197th_Medical_plasmaIV_250";};
_units addItemToVest "197th_NVG_Regs_Headlamp";
for "_i" from 1 to 3 do {_units addItemToVest "197th_DC17SA_mag";};
for "_i" from 1 to 5 do {_units addItemToVest "3AS_SmokeWhite";};
for "_i" from 1 to 3 do {_units addItemToVest "3AS_ThermalDetonator";};
for "_i" from 1 to 10 do {_units addItemToVest "197th_DC15A_mag";};
for "_i" from 1 to 6 do {_units addItemToBackpack "3AS_SmokeBlue";};
for "_i" from 1 to 5 do {_units addItemToBackpack "3AS_SmokeGreen";};
for "_i" from 1 to 10 do {_units addItemToBackpack "3AS_SmokeRed";};
for "_i" from 1 to 5 do {_units addItemToBackpack "ACE_HandFlare_Green";};
for "_i" from 1 to 10 do {_units addItemToBackpack "ACE_HandFlare_Red";};
for "_i" from 1 to 10 do {_units addItemToBackpack "OPTRE_1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 5 do {_units addItemToBackpack "OPTRE_signalSmokeB";};
for "_i" from 1 to 5 do {_units addItemToBackpack "OPTRE_signalSmokeY";};
for "_i" from 1 to 5 do {_units addItemToBackpack "OPTRE_signalSmokeO";};
_units addHeadgear "197th_Helmet_Regs_Trooper";
_units addGoggles "CWHUD_P2_base";

comment "Add items";
_units linkItem "ItemMap";
_units linkItem "ItemCompass";
_units linkItem "ACE_Altimeter";
_units linkItem "JLTS_clone_comlink";
_units linkItem "ItemGPS";

