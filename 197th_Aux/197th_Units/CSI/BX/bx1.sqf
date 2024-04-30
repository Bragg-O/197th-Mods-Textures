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
this addWeapon "WBK_Dutch_Vibro";
this addHandgunItem "WBK_Cybercrystal";

comment "Add containers";
this forceAddUniform "lsd_cis_bxDroid_uniform";
this addVest "GoG_HolsterSwordVestBack";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
this addItemToUniform "JLTS_riot_shield_droid_item";
for "_i" from 1 to 7 do {this addItemToUniform "JLTS_E5_mag";};
this addItemToUniform "3AS_ThermalDetonator";
for "_i" from 1 to 2 do {this addItemToUniform "JMSLLTE_dioxis_HandGrenade";};
for "_i" from 1 to 3 do {this addItemToUniform "ACE_M84";};
this addItemToUniform "3AS_SonicDet";
this addItemToUniform "WBK_Cybercrystal";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"GreekHead_A3_01","ace_novoice"] call BIS_fnc_setIdentity;