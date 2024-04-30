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
this addWeapon "OPTRE_M73";
this addPrimaryWeaponItem "OPTRE_MA5Suppressor";
this addPrimaryWeaponItem "OPTRE_M6C_Laser";
this addPrimaryWeaponItem "OPTRE_M73_SmartLink";
this addPrimaryWeaponItem "OPTRE_100Rnd_95x40_Box";
this addPrimaryWeaponItem "bipod_01_F_blk";
this addWeapon "JMSLLTE_K16pistol";
this addHandgunItem "JMSLLTE_K16_15rnd_Mag";

comment "Add containers";
this forceAddUniform "OPTRE_Ins_BJ_Undersuit";
this addVest "OPTRE_UNSC_M52D_Armor_Evolved_White";
this addBackpack "SC_MercerJumppack_Black";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
for "_i" from 1 to 5 do {this addItemToUniform "197th_Medical_packingBandage";};
for "_i" from 1 to 10 do {this addItemToUniform "197th_Medical_elasticBandage";};
for "_i" from 1 to 5 do {this addItemToUniform "197th_Medical_quikclot";};
this addItemToUniform "197th_Medical_morphine";
this addItemToUniform "OPTRE_100Rnd_95x40_Box";
for "_i" from 1 to 3 do {this addItemToUniform "JMSLLTE_K16_15rnd_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "OPTRE_100Rnd_95x40_Box";};
this addItemToBackpack "JLTS_intel_bountypuck";
this addItemToBackpack "JLTS_intel_holoProjector";
this addItemToBackpack "JLTS_scanner_bounty";
for "_i" from 1 to 2 do {this addItemToBackpack "3AS_Intel_CreditCase";};
this addItemToBackpack "JLTS_ids_rep_civ";
this addItemToBackpack "JLTS_ids_license_driver_large";
this addItemToBackpack "JLTS_ids_license_driver_medium";
this addItemToBackpack "JLTS_ids_license_driver_small";
this addItemToBackpack "JLTS_ids_license_weapon_secondary";
this addItemToBackpack "JLTS_ids_license_weapon_primary";
this addHeadgear "OPTRE_UNSC_CH252D_Helmet_Evolved_White";
this addGoggles "Merc_Vest_Skirata";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";
this linkItem "OPTRE_NVG_HURS_CNM";

comment "Set identity";
[this,"ls_chiss_male3_purple","ace_novoice"] call BIS_fnc_setIdentity;
[this,"OPTRE_Insignia_emblems_stare"] call BIS_fnc_setUnitInsignia;