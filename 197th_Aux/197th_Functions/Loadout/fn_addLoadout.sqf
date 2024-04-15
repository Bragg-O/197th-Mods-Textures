/*
	Author: Bragg
	
	Description:
	This code snippet defines a function CIM_fnc_addLoadouts that requires _object, _dispalyNameOfVariant, _pathToLoadout, and _pathToLogo parameters.
	It checks if these parameters are missing or if the specified files exist. If any are missing, it logs an error message.
	It then loads a specified script, adds an action to _object to execute the script, sets user action text, and finally executes the script.
	
	Parameter(s):
	0: Object
	1: Loadout name
	2: Path to Loadout.sqf
	3: (Optional, default "") - Path to logo_ca.paa
	
	Example:
	[(_this select 0), "<t size='1.5' color='#27AE60'>[197th]</t> <t size='1.5'>AA</t> <t size='1.5'>(DC-15S)</t>", "\197th_Loadout\Data\ARC\DC15S\loadout.sqf", "\197th_Loadout\Data\ARC\logo_ca.paa"] call CIM_fnc_addLoadout;
*/
params ["_object", "_dispalyNameOfVariant", "_pathToLoadout", "_pathToLogo"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/CIM_fnc_addLoadouts] Missing parameter: _object"];
};
if (isNil "_dispalyNameOfVariant") exitWith {
	diag_log format ["[197th/CIM_fnc_addLoadouts] Missing parameter: _dispalyNameOfVariant"];
};
if (isNil "_pathToLoadout") exitWith {
	diag_log format ["[197th/CIM_fnc_addLoadouts] Missing parameter: _pathToLoadout"];
};
if (!fileExists "_pathToLoadout") exitWith {
	diag_log format ["[197th/CIM_fnc_addLoadouts] _pathToLoadout does not exist: %1", _pathToLoadout];
};
if (isNil "_pathToLogo") then {
	diag_log format ["[197th/CIM_fnc_addLoadouts] Missing parameter: _pathToLogo"];
	_pathToLogo = "";
};
if (!fileExists "_pathToLogo") then {
	diag_log format ["[197th/CIM_fnc_addLoadouts] _pathToLogo does not exist: %1", _pathToLogo];
	_pathToLogo = "";
};

diag_log format ["[197th/CIM_fnc_addLoadouts] Loading %1", _pathToLoadout];

_actionId = _object addAction [ "CIM_fnc_Loadouts", {
	[player] execVM _this select 3;
}, _pathToLoadout, 1.5, true, true, "", "true", 5, false, "", ""];

_object setUserActionText [_actionId, _dispalyNameOfVariant, _pathToLogo];

[_object] execVM _pathToLoadout;

diag_log format ["[197th/CIM_fnc_addLoadouts] Loaded %1", _pathToLoadout];