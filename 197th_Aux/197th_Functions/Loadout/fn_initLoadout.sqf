/*
	Author: Bragg
	
	Description:
	This code snippet defines a function CIM_fnc_initLoadout that checks for required parameters _object, _type, and _pathCfgLoadouts, logs errors if any parameter is missing or if _pathCfgLoadouts doesn't exist as a file.
	It then loads a script specified by _pathCfgLoadouts, processes loadout types, and handles certain simulation and damage settings based on conditions.
	It also checks for the existence of the variable CIM_LoadoutInit and performs further operations based on its content.
	
	Parameter(s):
	0: Object
	1: String - Loadout type
	
	Example:
	[(_this select 0), "AA_197th"] call CIM_fnc_initLoadout;
*/

params ["_object", "_type"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	["[197th/CIM_fnc_initLoadout] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};
if (isNil "_type") exitWith {
	["[197th/CIM_fnc_initLoadout] Missing parameter: _type"] call BIS_fnc_logFormatServer;
};

if !(isClass (configFile >> "CIM_CfgLoadouts" >> _type)) exitWith {
	["[197th/CIM_fnc_initLoadout] Invalid loadout type: %1", _type] call BIS_fnc_logFormatServer;
};

private["_prefix", "_prefixColor", "_displayName", "_loadoutPath", "_variants"];
_prefix = getText(configFile >> "CIM_CfgLoadouts" >> _type >> "Prefix");
_prefixColor = getText(configFile >> "CIM_CfgLoadouts" >> _type >> "PrefixColor");
_displayName = getText(configFile >> "CIM_CfgLoadouts" >> _type >> "displayName");
_loadoutPath = getText(configFile >> "CIM_CfgLoadouts" >> _type >> "LoadoutPath");
_variants = "true" configClasses(configFile >> "CIM_CfgLoadouts" >> _type >> "CIM_CfgVariants");

_pathToLogo = format ["<img size='2' image='%1\logo_ca.paa'/>", _loadoutPath];

_displayName = format ["<t size='1.5' color='%1'>%2</t> <t size='1.5'>%3</t>", _prefixColor, _prefix, _displayName];

{
	_pathToLoadout = "";
	_variantType = configName _x;
	_displayNameOfVariant = getText(_x >> "displayName");

	_displayNameOfVariant = format ["%1 <t size='1.5'>(%2)</t>", _displayName, _displayNameOfVariant];

	_pathToLoadout = format ["%1\%2\loadout.sqf", _loadoutPath, _variantType];

	[_object, _displayNameOfVariant, _pathToLoadout, _pathToLogo] call CIM_fnc_addLoadout;
} forEach _variants;

if (side _object != sideEmpty) exitWith {
	_object enableSimulation true;
	_object enableDynamicSimulation false;
	_object allowDamage false;
	call {
		_object action ["WeaponOnBack", _this];
	};
	_object disableAI "ALL";
};