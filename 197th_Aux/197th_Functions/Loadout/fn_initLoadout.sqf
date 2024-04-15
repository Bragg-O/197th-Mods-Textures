/*
	Author: Bragg
	
	Description:
	This code snippet defines a function CIM_fnc_initLoadouts that checks for required parameters _object, _type, and _pathCfgLoadouts, logs errors if any parameter is missing or if _pathCfgLoadouts doesn't exist as a file.
	It then loads a script specified by _pathCfgLoadouts, processes loadout types, and handles certain simulation and damage settings based on conditions.
	It also checks for the existence of the variable CIM_LoadoutInit and performs further operations based on its content.
	
	Parameter(s):
	0: Object
	1: String - Loadout type
	2: String - Path to CfgLoadouts.sqf
	
	Example:
	[(_this select 0), "AA", "\197th_Loadout\CfgLoadouts.sqf"] call CIM_fnc_initLoadouts;
*/
params ["_object", "_type", "_pathCfgLoadouts"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/CIM_fnc_initLoadouts] Missing parameter: _object"];
}
if (isNil "_type") exitWith {
	diag_log format ["[197th/CIM_fnc_initLoadouts] Missing parameter: _type"];
};
if (isNil "_pathCfgLoadouts") exitWith {
	diag_log format ["[197th/CIM_fnc_initLoadouts] Missing parameter: _pathCfgLoadouts"];
};
if (!fileExists _pathCfgLoadouts) exitWith {
	diag_log format ["[197th/CIM_fnc_initLoadouts] _pathCfgLoadouts does not exist: %1", _pathCfgLoadouts];
};

diag_log format ["[197th/CIM_fnc_initLoadouts] Loading %1 from %2", _type, _pathCfgLoadouts];

_handle = execVM _pathCfgLoadouts;
waitUntil {
	scriptDone _handle
};

if (isNil "CIM_LoadoutInit") exitWith {
	diag_log format ["[197th/CIM_fnc_initLoadouts] Missing variable: CIM_LoadoutInit in %1", _pathCfgLoadouts];
};

{
	_pathToLogo = "";
	params ["_prefix", "_prefixColor", "_loadoutType", "_pathLoadout", "_displayNameOfLoadout", "_variantsLoadout"];

	if (_loadoutType != _type) exitWith {};

	_displayNameOfLoadout = format ["<t size='1.5' color='#%1'>%2</t> <t size='1.5'>%3</t>", _prefixColor, _prefix, _displayNameOfLoadout];

	_pathToLogo = format ["%1\%2\logo_ca.paa", _pathCfgLoadouts, _pathLoadout];
	if (!fileExists _pathToLogo) then {
		_pathToLogo = "";
	};

	{
		_pathToLoadout = "";
		params ["_variantType", "_dispalyNameOfVariant"];

		_dispalyNameOfVariant = format ["%1 <t size='1.5'>(%2)</t>", _displayNameOfLoadout, _dispalyNameOfVariant];

		_pathToLoadout = format ["%1%2\loadout.sqf", _pathLoadout, _variantType];

		[_object, _dispalyNameOfVariant, _pathToLoadout, _pathToLogo] call CIM_fnc_addLoadout;
	} forEach _variantsLoadout;
} forEach CIM_LoadoutInit;

if (side _object != sideEmpty) exitWith {
	_object enableSimulation true;
	_object enableDynamicSimulation false;
	_object allowDamage false;
	[_object] call {
		_this action ["WeaponOnBack", _this];
	};
	_object disableAI "ALL";
};