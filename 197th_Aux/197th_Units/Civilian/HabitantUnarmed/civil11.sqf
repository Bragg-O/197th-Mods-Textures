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
this addWeapon "JMSLLTE_relbyk23pistol";
this addHandgunItem "JMSLLTE_K23_20rnd_Mag";

comment "Add containers";
this forceAddUniform "JMSLLTE_ScumAlCommando_base_F_CombatUniform";
this addVest "JMSLLTE_Jinata_Emp_ammoStrip";
this addBackpack "JMSLLTE_back_rebsmall_v1";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_ids_rep_civ";
this addItemToUniform "JLTS_ids_license_driver_medium";
this addItemToUniform "JLTS_ids_license_driver_small";
this addItemToUniform "JLTS_ids_license_weapon_primary";
for "_i" from 1 to 3 do {this addItemToUniform "JMSLLTE_K23_20rnd_Mag";};
this addGoggles "SWLB_CEE_Clone_Scarf_Blue";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"Head_DurosBlue2","ace_novoice"] call BIS_fnc_setIdentity;