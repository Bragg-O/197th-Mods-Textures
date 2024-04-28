/*
	Author: Bragg
	
	Description:
	This code snippet initializes a restricted arsenal by loading configurations and items based on specified parameters _object.
	It logs errors for missing parameters, loads the configurations, and adds virtual cargo to the _object for vehicles, weapons, items, and magazines.
	It also populates lists of vehicles and weapons based on the loaded configurations.
	
	Parameter(s):
	0: object
	1: String - path to CfgRestrictedArsenal.sqf
	
	Example:
	[(_this select 0)] spawn CIM_fnc_initRestrictedArsenal;
*/
params ["_object"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initRestrictedArsenal] Missing parameter: _object"];
};

["AmmoboxInit", [_object, false, {
	true
}]] spawn BIS_fnc_arsenal;

_allClassWithRA = getMissionConfigValue ["CIM_RestrictedArsenal_AllClassWith", "_UwU_"];
_CIMbackpackRA = getMissionConfigValue ["CIM_RestrictedArsenal_Backpack", []];
_CIMmiscshitRA = getMissionConfigValue ["CIM_RestrictedArsenal_MiscShit", []];
_CIMmagazineRA = getMissionConfigValue ["CIM_RestrictedArsenal_Magazine", []];
_CIMweaponRA = getMissionConfigValue ["CIM_RestrictedArsenal_Weapon", []];

_allVehicles = [];
_allWeapons = [];
_allMagazines = [];

_allVehicles = "_allClassWithRA in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgVehicles");
_allWeapons = "_allClassWithRA in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgWeapons");
_allMagazines = "_allClassWithRA in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgMagazines");

_allClassVehicles = [];
_allClassCfgWeapons = [];
_allClassMagazines = [];

{
	_allClassVehicles pushBack (configName _x);
} forEach _allVehicles;

{
	_allClassCfgWeapons pushBack (configName _x);
} forEach _allWeapons;

{
	_allClassMagazines pushBack (configName _x);
} forEach _allMagazines;

_allClassWeapons = [];
_allClassItems = [];

{
	_ItemType = _x call BIS_fnc_itemType;
	if ("Weapon" in _ItemType) then {
		_allClassWeapons pushBack (_x);
	} else {
		_allClassItems pushBack (_x);
	};
} forEach _allClassCfgWeapons;

_CIMbackpackRA = _CIMbackpackRA + _allClassVehicles;
_CIMmiscshitRA = _CIMmiscshitRA + _allClassItems;
_CIMmagazineRA = _CIMmagazineRA + _allClassMagazines;
_CIMweaponRA = _CIMweaponRA + _allClassWeapons;

[_object, ((backpackCargo _object) + _CIMbackpackRA)] call BIS_fnc_addVirtualBackpackCargo;
[_object, ((itemCargo _object) + _CIMmiscshitRA)] call BIS_fnc_addVirtualItemCargo;
[_object, ((magazineCargo _object) + _CIMmagazineRA)] call BIS_fnc_addVirtualMagazineCargo;
[_object, ((weaponCargo _object) + _CIMweaponRA)] call BIS_fnc_addVirtualWeaponCargo;