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
this addWeapon "JMSLLTE_dl18pistol";
this addHandgunItem "JMSLLTE_DL18_20rnd_Mag";

comment "Add containers";
this forceAddUniform "JMSLLTE_ScumTroopHeavy_brown_F_CombatUniform";
this addVest "JMSLLTE_CommandoBelt_armor";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
for "_i" from 1 to 4 do {this addItemToUniform "JLTS_credits_50";};
this addItemToUniform "JLTS_credits_1000";
this addItemToUniform "ACE_Can_Spirit";
this addItemToUniform "JLTS_ids_license_weapon_primary";
for "_i" from 1 to 2 do {this addItemToUniform "JLTS_drugs_bacta";};
this addItemToUniform "JLTS_drugs_medikit";
for "_i" from 1 to 5 do {this addItemToUniform "JMSLLTE_DL18_20rnd_Mag";};
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

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Head_KeldorYelLow","ace_novoice"] call BIS_fnc_setIdentity;