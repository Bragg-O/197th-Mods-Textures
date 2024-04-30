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
this addWeapon "OPTRE_M99A2S3";
this addPrimaryWeaponItem "OPTRE_7Rnd_20mm_APFSDS_Mag";
this addWeapon "OPTRE_FC_Plasma_Pistol";
this addHandgunItem "OPTRE_FC_Plasma_Pistol_Battery";

comment "Add containers";
this forceAddUniform "OPTRE_Ins_BJ_Undersuit";
this addVest "OPTRE_UNSC_M52D_Armor_Nighto";
this addBackpack "SC_MercerJumppack_Black";

comment "Add binoculars";
this addMagazine "Laserbatteries";
this addWeapon "JLTS_CloneBinocular";

comment "Add items to containers";
for "_i" from 1 to 5 do {this addItemToUniform "197th_Medical_packingBandage";};
for "_i" from 1 to 10 do {this addItemToUniform "197th_Medical_elasticBandage";};
for "_i" from 1 to 5 do {this addItemToUniform "197th_Medical_quikclot";};
this addItemToUniform "197th_Medical_morphine";
for "_i" from 1 to 3 do {this addItemToUniform "OPTRE_FC_Plasma_Pistol_Battery";};
for "_i" from 1 to 6 do {this addItemToVest "OPTRE_7Rnd_20mm_APFSDS_Mag";};
this addItemToBackpack "JLTS_intel_bountypuck";
this addItemToBackpack "JLTS_intel_holoProjector";
this addItemToBackpack "JLTS_scanner_bounty";
for "_i" from 1 to 2 do {this addItemToBackpack "3AS_Intel_CreditCase";};
this addItemToBackpack "JLTS_ids_rep_civ";
this addItemToBackpack "JLTS_ids_license_driver_large";
this addItemToBackpack "JLTS_ids_license_driver_medium";
this addItemToBackpack "JLTS_ids_license_driver_small";
this addItemToBackpack "JLTS_ids_license_weapon_secondary";
this addItemToBackpack "JLTS_ids_license_weapon_primary";
for "_i" from 1 to 7 do {this addItemToBackpack "OPTRE_7Rnd_20mm_APFSDS_Mag";};
for "_i" from 1 to 5 do {this addItemToBackpack "OPTRE_FC_Plasma_Pistol_Battery";};
this addHeadgear "OPTRE_UNSC_CH252D_Helmet_Nighto";
this addGoggles "G_Goggles_VR";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "JLTS_clone_comlink";
this linkItem "ItemGPS";

comment "Set identity";
[this,"sangheiliHead_03S2","ace_novoice"] call BIS_fnc_setIdentity;