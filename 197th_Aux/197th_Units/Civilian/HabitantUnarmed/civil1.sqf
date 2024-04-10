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
this forceAddUniform "JMSLLTE_ScumCommando_desertS_F_CombatUniform";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Head_WeequayBrown","ace_novoice"] call BIS_fnc_setIdentity;