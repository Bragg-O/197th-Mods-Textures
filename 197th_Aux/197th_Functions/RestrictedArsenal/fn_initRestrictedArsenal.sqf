/*
	Author: Bragg
	
	Description:
	This code snippet initializes a restricted arsenal by loading configurations and items based on specified parameters _object and _pathCfgRestrictedArsenal.
	It logs errors for missing parameters, loads the configurations, and adds virtual cargo to the _object for vehicles, weapons, items, and magazines.
	It also populates lists of vehicles and weapons based on the loaded configurations.
	
	Parameter(s):
	0: object
	1: String - path to CfgRestrictedArsenal.sqf
	
	Example:
	[(this select 0), "\197th_Core\init\Script\CfgRestrictedArsenal.sqf"] call CIM_fnc_initRestrictedArsenal;
*/

params ["_object", "_pathCfgRestrictedArsenal"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initRestrictedArsenal] Missing parameter: _object"];
};
if (isNil "_pathCfgRestrictedArsenal") exitWith {
	diag_log format ["[197th/fnc_initRestrictedArsenal] Missing parameter: _pathCfgRestrictedArsenal"];
};

diag_log format ["[197th/fnc_initRestrictedArsenal] Loading %1", _pathCfgRestrictedArsenal];

["AmmoboxInit", [_object, false, {
	true
}]] spawn BIS_fnc_arsenal;

_handle = execVM _pathCfgRestrictedArsenal;
waitUntil {
	scriptDone _handle
};

if (isNil "CIM_InitRestrictedArsenal") exitWith {
	diag_log format ["[197th/CIM_fnc_initRestrictedArsenal] Missing variable: CIM_InitRestrictedArsenal in %1", _pathCfgRestrictedArsenal];
};

[CIM_InitRestrictedArsenal select 0, CIM_InitRestrictedArsenal select 1, CIM_InitRestrictedArsenal select 2, CIM_InitRestrictedArsenal select 3, CIM_InitRestrictedArsenal select 4] params [_allClassWith, _backpack, _miscshit, _magazine, _weapon];

diag_log format ["[197th/fnc_initRestrictedArsenal] Loaded %1", _pathCfgRestrictedArsenal];

_allVehicles = [];
_allWeapons = [];

_allVehicles = "_allClassWith in (getText (_x >>'displayName))" configClasses (configFile >> "CfgVehicles");
_allWeapons = "_allClassWith in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgWeapons");

_allClassVehicles = [];
_allClassWeapons = [];

{
	_allClassVehicles pushBack (configName _x);
} forEach _allVehicles;

{
	_allClassWeapons pushBack (configName _x);
} forEach _allWeapons;

_backpack = _backpack + _allVehicles;
_miscshit = _miscshit + _allWeapons;
_magazine = _magazine + _allWeapons;
_weapon = _weapon + _allWeapons;

[_object, ((backpackCargo _object) + _backpack)] call BIS_fnc_addVirtualBackpackCargo;
[_object, ((itemCargo _object) + _miscshit)] call BIS_fnc_addVirtualItemCargo;
[_object, ((magazineCargo _object) + _magazine)] call BIS_fnc_addVirtualMagazineCargo;
[_object, ((weaponCargo _object) + _weapon)] call BIS_fnc_addVirtualWeaponCargo;