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
this forceAddUniform "JMSLLTE_EmpOfficerCoat_black_F_CombatUniform";
this addVest "JMSLLTE_StormtrooperCape_armor";
this addBackpack "JMSLLTE_back_rebpackH_v1_black";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "JMSLLTE_K23_20rnd_Mag";};
this addHeadgear "H_HeadBandage_stained_F";
this addGoggles "G_Bandanna_blk";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";
this linkItem "JMSLLTE_JinataTranslatorNV";

comment "Set identity";
[this,"WBK_ZombieFace_3","ace_novoice"] call BIS_fnc_setIdentity;