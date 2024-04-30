#include "../../PreProcessor.sqf"

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add weapons";
this addWeapon "OPTRE_FC_T51J_Repeater";
this addPrimaryWeaponItem "OPTRE_FC_T51J_Repeater_Battery";
this addWeapon "OPTRE_FC_T25J_Rifle_Folded";
this addHandgunItem "OPTRE_FC_T25J_Rifle_Battery";

comment "Add containers";
this forceAddUniform "SithBase";
this addVest "LST_Cold_Vest";
this addBackpack "ls_mandalorian_demo_backpack";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
this addItemToUniform "JLTS_ids_license_driver_small";
this addItemToUniform "JLTS_ids_license_weapon_primary";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_FC_T51J_Repeater_Battery";};
this addItemToVest "JLTS_ids_license_weapon_secondary";
this addItemToVest "JLTS_ids_license_weapon_primary";
this addItemToVest "JLTS_ids_license_driver_medium";
this addItemToVest "JLTS_ids_license_driver_small";
this addItemToVest "JLTS_ids_rep_civ";
this addItemToVest "OPTRE_FC_T25J_Rifle_Battery";
for "_i" from 1 to 4 do {this addItemToBackpack "OPTRE_FC_T25J_Rifle_Battery";};
for "_i" from 1 to 4 do {this addItemToBackpack "OPTRE_FC_T51J_Repeater_Battery";};
this addGoggles "SWLB_CEE_Clone_Scarf_White";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Head_KeldorYelLow","ace_novoice"] call BIS_fnc_setIdentity;