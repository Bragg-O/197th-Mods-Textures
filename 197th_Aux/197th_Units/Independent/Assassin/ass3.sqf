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
this addWeapon "WBK_SciFi_Sword_6";
this addHandgunItem "WBK_Cybercrystal";

comment "Add containers";
this forceAddUniform "LST_Jedi_Uniform_Gray";
this addVest "GoG_HolsterSwordVestBack";

comment "Add items to containers";
for "_i" from 1 to 3 do {this addItemToUniform "WBK_Cybercrystal";};
this addHeadgear "LST_Jedi_Gray_Mask_helm";
this addGoggles "LST_Jedi_Gray_Cape";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";

comment "Set identity";
[this,"GreekHead_A3_09","male05gre"] call BIS_fnc_setIdentity;