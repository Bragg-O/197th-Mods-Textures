params ["_unitLoadout"];

_primaryWeapon = _unitLoadout select 0 select 0;
_handgunWeapon = _unitLoadout select 1 select 0;
_secondaryWeapon = _unitLoadout select 2 select 0;

_uniform = _unitLoadout select 3 select 0;
_uniformItems = _unitLoadout select 3 select 1;

_vest = _unitLoadout select 4 select 0;
_vestItems = _unitLoadout select 4 select 1;

_backpack = _unitLoadout select 5 select 0;
_backpackItems = _unitLoadout select 5 select 1;

_headgear = _unitLoadout select 6;

_equipementTexte = parseText format [
	"===== Armes =====<br/>" +
	"<img image='%1'/> %2<br/>" +
	"<img image='%3'/> %4<br/>" +
	"<img image='%5'/> %6<br/>" +
	"<br/>" +
	"===== Casque =====<br/>" +
	"<img image='%7'/> %8<br/>" +
	"<br/>" +
	"===== Uniforme =====<br/>" +
	"<img image='%9'/> %10<br/>" +
	"<br/>" +
	"===== Veste =====<br/>" +
	"<img image='%11'/> %12<br/>" +
	"<br/>" +
	"===== Sac à dos =====<br/>" +
	"<img image='%13'/> %14<br/>",
	if (isNil "_primaryWeapon") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgWeapons" >> _primaryWeapon >> "picture")},
	if (isNil "_primaryWeapon") then {"N/A"} else {getText(configFile >> "CfgWeapons" >> _primaryWeapon >> "displayName")},
	if (isNil "_secondaryWeapon") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgWeapons" >> _secondaryWeapon >> "picture")},
	if (isNil "_secondaryWeapon") then {"N/A"} else {getText(configFile >> "CfgWeapons" >> _secondaryWeapon >> "displayName")},
	if (isNil "_handgunWeapon") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgWeapons" >> _handgunWeapon >> "picture")},
	if (isNil "_handgunWeapon") then {"N/A"} else {getText(configFile >> "CfgWeapons" >> _handgunWeapon >> "displayName")},
	if (isNil "_headgear") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgWeapons" >> _headgear >> "picture")},
	if (isNil "_headgear") then {"N/A"} else {getText(configFile >> "CfgWeapons" >> _headgear >> "displayName")},
	if (isNil "_uniform") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgWeapons" >> _uniform >> "picture")},
	if (isNil "_uniform") then {"N/A"} else {getText(configFile >> "CfgWeapons" >> _uniform >> "displayName")},
	if (isNil "_vest") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgWeapons" >> _vest >> "picture")},
	if (isNil "_vest") then {"N/A"} else {getText(configFile >> "CfgWeapons" >> _vest >> "displayName")},
	if (isNil "_backpack") then {"\197th_Regs\Equipments\_ui\base.paa"} else {getText(configFile >> "CfgVehicles" >> _backpack >> "picture")},
	if (isNil "_backpack") then {"N/A"} else {getText(configFile >> "CfgVehicles" >> _backpack >> "displayName")}
];

_equipementTexte