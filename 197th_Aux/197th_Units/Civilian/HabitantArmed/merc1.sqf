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
this addWeapon "JMSLLTE_E17DRifle";
this addPrimaryWeaponItem "JMSLLTE_E17d_5Rnd_Mag";
this addWeapon "JMSLLTE_dl18pistol";
this addHandgunItem "JMSLLTE_DL18_20rnd_Mag";

comment "Add containers";
this forceAddUniform "SWLB_MPStealth_Uniform";
this addVest "k_clone_arc_vest6";
this addBackpack "SC_MercerJumppack_Black";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
for "_i" from 1 to 3 do {this addItemToUniform "JLTS_credits_1000";};
this addItemToUniform "ACE_Can_Spirit";
for "_i" from 1 to 2 do {this addItemToUniform "JLTS_drugs_bacta";};
this addItemToUniform "JLTS_drugs_medikit";
this addItemToUniform "JLTS_ids_license_weapon_secondary";
this addItemToUniform "JLTS_ids_license_weapon_primary";
this addItemToUniform "JLTS_ids_license_driver_large";
this addItemToUniform "JLTS_ids_license_driver_small";
for "_i" from 1 to 6 do {this addItemToUniform "JMSLLTE_E17d_5Rnd_Mag";};
for "_i" from 1 to 5 do {this addItemToUniform "JMSLLTE_DL18_20rnd_Mag";};
for "_i" from 1 to 3 do {this addItemToUniform "197th_BactaGrenade_Mag";};
for "_i" from 1 to 2 do {this addItemToVest "JLTS_drugs_kolto";};
for "_i" from 1 to 2 do {this addItemToVest "JLTS_drugs_medikit";};
this addItemToVest "JLTS_sabacc_deck";
this addItemToVest "JLTS_drugs_protein";
this addItemToVest "JLTS_pazaak_deck";
for "_i" from 1 to 9 do {this addItemToVest "ACE_Banana";};
this addItemToVest "plp_bo_w_BocceBalls";
for "_i" from 1 to 2 do {this addItemToVest "plp_bo_w_BottleGin";};
this addItemToVest "plp_bo_w_BottleBitters";
this addItemToVest "ACE_Can_RedGull";
this addItemToVest "JLTS_credits_1000";
this addHeadgear "LST_Gextan";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"JMSGD_Head_Fett5","ace_novoice"] call BIS_fnc_setIdentity;