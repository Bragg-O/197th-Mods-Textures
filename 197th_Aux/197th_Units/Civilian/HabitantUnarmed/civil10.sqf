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

comment "Add containers";
this forceAddUniform "JMSLLTE_ScumCommando_woodD_F_CombatUniform";
this addVest "JMSLLTE_PathfinderBags_armor";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
for "_i" from 1 to 4 do {this addItemToUniform "JLTS_credits_50";};
this addItemToUniform "JLTS_credits_1000";
for "_i" from 1 to 6 do {this addItemToUniform "JLTS_credits_5000";};
for "_i" from 1 to 2 do {this addItemToVest "JLTS_drugs_kolto";};
for "_i" from 1 to 2 do {this addItemToVest "JLTS_drugs_medikit";};
this addItemToVest "JLTS_sabacc_deck";
this addItemToVest "JLTS_drugs_protein";
this addItemToVest "JLTS_pazaak_deck";
for "_i" from 1 to 9 do {this addItemToVest "ACE_Banana";};
this addItemToVest "plp_bo_w_BocceBalls";
for "_i" from 1 to 2 do {this addItemToVest "plp_bo_w_BottleGin";};
for "_i" from 1 to 2 do {this addItemToVest "plp_bo_w_BottleBitters";};
for "_i" from 1 to 4 do {this addItemToVest "ACE_Can_RedGull";};
for "_i" from 1 to 4 do {this addItemToVest "ACE_WaterBottle";};

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Head_DurosGreen","ace_novoice"] call BIS_fnc_setIdentity;