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
this addWeapon "JMSLLTE_dl44pistol";
this addHandgunItem "JMSLLTE_DL44_10rnd_Mag";

comment "Add containers";
this forceAddUniform "OPTRE_UNSC_Army_Uniform_BLK_SlimLeg";
this addVest "SC_Vest_WD_Light_Black";
this addBackpack "SC_MercerJumppack_Black";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
for "_i" from 1 to 5 do {this addItemToUniform "197th_Medical_packingBandage";};
for "_i" from 1 to 10 do {this addItemToUniform "197th_Medical_elasticBandage";};
for "_i" from 1 to 5 do {this addItemToUniform "197th_Medical_quikclot";};
this addItemToUniform "197th_Medical_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "JMSLLTE_DL44_10rnd_Mag";};
for "_i" from 1 to 5 do {this addItemToBackpack "197th_Medical_morphine";};
for "_i" from 1 to 5 do {this addItemToBackpack "197th_Medical_epinephrine";};
for "_i" from 1 to 3 do {this addItemToBackpack "197th_Medical_plasmaIV_250";};
for "_i" from 1 to 2 do {this addItemToBackpack "197th_Medical_salineIV_250";};
for "_i" from 1 to 20 do {this addItemToBackpack "197th_Medical_quikclot";};
for "_i" from 1 to 15 do {this addItemToBackpack "197th_Medical_elasticBandage";};
for "_i" from 1 to 10 do {this addItemToBackpack "197th_Medical_packingBandage";};
this addItemToBackpack "197th_Medical_surgicalKit";
this addItemToBackpack "197th_Medical_personalAidKit";
this addHeadgear "SC_MilTac";
this addGoggles "G_Goggles_VR";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";
this linkItem "OPTRE_NVG_HUL3";

comment "Set identity";
[this,"sangheiliHead_03S2","ace_novoice"] call BIS_fnc_setIdentity;