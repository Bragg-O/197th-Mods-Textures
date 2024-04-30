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
this addWeapon "ls_weapon_westar35s_primary";
this addPrimaryWeaponItem "SWLW_Westar35S_scope";
this addPrimaryWeaponItem "SWLW_Westar35S_Mag";
this addPrimaryWeaponItem "SWLW_Westar35S_scatter_Mag";
this addWeapon "WBK_SciFi_Sword_3";
this addHandgunItem "WBK_Cybercrystal";

comment "Add containers";
this forceAddUniform "LST_Merc_Uniform_Assasin";
this addVest "GoG_HolsterSwordVestBack";
this addBackpack "SC_MercerJumppack_Black";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
this addItemToUniform "JLTS_ids_license_driver_small";
this addItemToUniform "JLTS_ids_license_weapon_primary";
for "_i" from 1 to 3 do {this addItemToUniform "WBK_Cybercrystal";};
for "_i" from 1 to 3 do {this addItemToUniform "SWLW_Westar35S_Mag";};
for "_i" from 1 to 3 do {this addItemToUniform "SWLW_Westar35S_scatter_Mag";};
this addGoggles "Zan_X_Kama_Glasses";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"OPTRE_JackalFace_02","ace_novoice"] call BIS_fnc_setIdentity;