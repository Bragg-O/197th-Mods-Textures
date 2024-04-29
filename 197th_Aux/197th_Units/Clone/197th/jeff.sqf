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
this addWeapon "197th_DC17SA_Regs";
this addHandgunItem "197th_Accessoires_Flashlight";
this addHandgunItem "197th_Accessoires_HoloScope";
this addHandgunItem "197th_DC17SA_mag";
this addHandgunItem "JLTS_stun_mag_short";

comment "Add containers";
this forceAddUniform "197th_Uniform_Regs_Trooper";
this addVest "197th_Vest_Regs_5";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "FirstAidKit";};
this addItemToUniform "SWLW_beltGrenade_mag";
for "_i" from 1 to 3 do {this addItemToUniform "197th_DC17SA_mag";};
this addGoggles "SWLB_CEE_Clone_Scarf_Green";

comment "Set identity";
[this,"lsd_community_cloneVaelin_head","male10eng"] call BIS_fnc_setIdentity;