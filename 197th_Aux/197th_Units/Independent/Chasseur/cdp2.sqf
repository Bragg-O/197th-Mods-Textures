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
this addWeapon "JMSLLTE_a300c";
this addPrimaryWeaponItem "JMSLLTE_acc_flashlight_reb";
this addPrimaryWeaponItem "JMSLLTE_a280_holo_Scope";
this addPrimaryWeaponItem "JMSLLTE_A300C_30rnd_Mag";
this addWeapon "WBK_SciFi_Sword_1";
this addHandgunItem "WBK_Cybercrystal";

comment "Add containers";
this forceAddUniform "LST_Merc_Uniform_ZanBlack";
this addVest "GoG_HolsterSwordVestBack";
this addBackpack "LST_Clone_Trooper_BackPack_Alpha_Shield";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
this addItemToUniform "JLTS_ids_license_driver_small";
this addItemToUniform "JLTS_ids_license_weapon_primary";
this addItemToUniform "JLTS_ids_license_weapon_secondary";
this addItemToUniform "WBK_Cybercrystal";
for "_i" from 1 to 11 do {this addItemToBackpack "JMSLLTE_A300C_30rnd_Mag";};
this addHeadgear "LST_Jedi_Gray_Mask_helm";
this addGoggles "Zan_X_Kama_Glasses";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"ls_chiss_male1_purple","ace_novoice"] call BIS_fnc_setIdentity;