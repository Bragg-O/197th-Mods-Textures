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
this addWeapon "JLTS_RG4D";
this addHandgunItem "JLTS_RG4D_mag";

comment "Add containers";
this forceAddUniform "3AS_U_CIS_TS_Red";
this addVest "197th_Vest_Regs_0";
this addBackpack "JLTS_B1_antenna";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
for "_i" from 1 to 4 do {this addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_tourniquet";};
this addItemToUniform "3AS_Intel_DataChip";
this addItemToUniform "JLTS_intel_datacard";
this addItemToUniform "JLTS_intel_holoProjector";
this addItemToUniform "3AS_Intel_DataPad";
for "_i" from 1 to 2 do {this addItemToUniform "3AS_ThermalDetonator";};
this addItemToUniform "ShieldGrenade_Mag";
for "_i" from 1 to 3 do {this addItemToUniform "JLTS_RG4D_mag";};

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"lsd_community_cloneLance_head","ace_novoice"] call BIS_fnc_setIdentity;