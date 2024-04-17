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
	[(this select 0)] spawn CIM_fnc_initRestrictedArsenal;
*/
params ["_object"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initRestrictedArsenal] Missing parameter: _object"];
};

["AmmoboxInit", [_object, false, {
	true
}]] spawn BIS_fnc_arsenal;

_allClassWith = getMissionConfigValue ["CIM_RestrictedArsenal_AllClassWith", ["_UwU_"]];
_backpack = getMissionConfigValue ["CIM_RestrictedArsenal_Backpack", []];
_miscshit = getMissionConfigValue ["CIM_RestrictedArsenal_MiscShit", []];
_radio = getMissionConfigValue ["CIM_RestrictedArsenal_TFAR", []];
_magazine = getMissionConfigValue ["CIM_RestrictedArsenal_Magazine", []];
_weapon = getMissionConfigValue ["CIM_RestrictedArsenal_Weapon", []];
_radioList = [];

{
	for [{
		_i = 0
	}, {
		_i < 999
	}, {
		_i = _i + 1
	}] do {
	_radioclass = "";
	_radioclass = format ["%1_%2", _x, _i];
	_radioList pushBack _radioclass;
};
} forEach _radio;

_miscshit = _miscshit + _radioList + _radio;

allconfigFile = {
	params ["_object", "_allconfigFile", "_backpack", "_miscshit", "_magazine", "_weapon"];
	_allVehicles = [];
	_allWeapons = [];
	_allMagazines = [];

	_allVehicles = "_allconfigFile in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgVehicles");
	_allWeapons = "_allconfigFile in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgWeapons");
	_allMagazines = "_allconfigFile in (getText (_x >>'displayName'))" configClasses (configFile >> "CfgMagazines");

	_allClassVehicles = [];
	_allClassWeapons = [];
	_allClassMagazines = [];

	{
		_allClassVehicles pushBack (configName _x);
	} forEach _allVehicles;

	{
		_allClassWeapons pushBack (configName _x);
	} forEach _allWeapons;

	{
		_allClassMagazines pushBack (configName _x);
	} forEach _allMagazines;

	_backpack = _backpack + _allClassVehicles;
	_miscshit = _miscshit + _allClassWeapons;
	_magazine = _magazine + _allClassMagazines;
	_weapon = _weapon + _allClassWeapons;

	[_object, ((backpackCargo _object) + _backpack)] call BIS_fnc_addVirtualBackpackCargo;
	[_object, ((itemCargo _object) + _miscshit)] call BIS_fnc_addVirtualItemCargo;
	[_object, ((magazineCargo _object) + _magazine)] call BIS_fnc_addVirtualMagazineCargo;
	[_object, ((weaponCargo _object) + _weapon)] call BIS_fnc_addVirtualWeaponCargo;
};

{
	[_object, _x, _backpack, _miscshit, _magazine, _weapon] call allconfigFile;
} forEach _allClassWith;