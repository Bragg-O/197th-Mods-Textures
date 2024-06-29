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
_units addWeapon "197th_DC15A_Regs";
_units addPrimaryWeaponItem "197th_Accessoires_Flashlight";
_units addPrimaryWeaponItem "197th_DC15A_mag";
_units addPrimaryWeaponItem "JLTS_stun_mag_long";
_units addWeapon "197th_DC17SA_Regs";
_units addHandgunItem "197th_Accessoires_Flashlight";
_units addHandgunItem "197th_Accessoires_HoloScope";
_units addHandgunItem "197th_DC17SA_mag";

comment "Add containers";
_units forceAddUniform "197th_Uniform_Regs_Medecin";
_units addVest "197th_Vest_Regs_Medical";
_units addBackpack "197th_Backpack_Regs_Medecin";

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
for "_i" from 1 to 10 do {_units addItemToVest "197th_DC15A_mag";};
for "_i" from 1 to 3 do {_units addItemToVest "197th_DC17SA_mag";};
for "_i" from 1 to 5 do {_units addItemToVest "3AS_SmokeWhite";};
for "_i" from 1 to 3 do {_units addItemToVest "3AS_ThermalDetonator";};
for "_i" from 1 to 2 do {_units addItemToVest "JLTS_stun_mag_long";};
for "_i" from 1 to 80 do {_units addItemToBackpack "197th_Medical_elasticBandage";};
for "_i" from 1 to 80 do {_units addItemToBackpack "197th_Medical_packingBandage";};
for "_i" from 1 to 3 do {_units addItemToBackpack "ACE_bodyBag";};
for "_i" from 1 to 10 do {_units addItemToBackpack "197th_Medical_epinephrine";};
for "_i" from 1 to 20 do {_units addItemToBackpack "197th_Medical_morphine";};
for "_i" from 1 to 15 do {_units addItemToBackpack "197th_Medical_splint";};
_units addItemToBackpack "197th_Medical_surgicalKit";
for "_i" from 1 to 12 do {_units addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 5 do {_units addItemToBackpack "197th_Medical_adenosine";};
for "_i" from 1 to 10 do {_units addItemToBackpack "197th_Medical_bloodIV";};
for "_i" from 1 to 10 do {_units addItemToBackpack "197th_Medical_bloodIV_500";};
for "_i" from 1 to 10 do {_units addItemToBackpack "197th_Medical_bloodIV_250";};
_units addItemToBackpack "197th_Medical_personalAidKit";
_units addHeadgear "197th_Helmet_Regs_Trooper";
_units addGoggles "CWHUD_P2_base";

comment "Add items";
_units linkItem "ItemMap";
_units linkItem "ItemCompass";
_units linkItem "ACE_Altimeter";
_units linkItem "JLTS_clone_comlink";
_units linkItem "ItemGPS";
