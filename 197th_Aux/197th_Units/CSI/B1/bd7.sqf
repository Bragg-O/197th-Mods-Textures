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
this addWeapon "JLTS_E5";
this addPrimaryWeaponItem "JLTS_E5_mag";

comment "Add containers";
this forceAddUniform "JLTS_DroidB1_Crew";
this addVest "ls_cis_bxCommando_vest";
this addBackpack "JLTS_B1_antenna";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_tourniquet";};
this addItemToUniform "3AS_Intel_DataChip";
for "_i" from 1 to 2 do {this addItemToUniform "3AS_ThermalDetonator";};
this addItemToUniform "ShieldGrenade_Mag";
for "_i" from 1 to 2 do {this addItemToUniform "JLTS_E5_mag";};

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"GreekHead_A3_01","ace_novoice"] call BIS_fnc_setIdentity;