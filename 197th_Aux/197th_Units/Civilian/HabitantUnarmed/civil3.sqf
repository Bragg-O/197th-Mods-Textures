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
this forceAddUniform "U_C_WorkerCoveralls";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
for "_i" from 1 to 5 do {this addItemToUniform "JLTS_credits_50";};

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Head_MimbaneseDark","ace_novoice"] call BIS_fnc_setIdentity;