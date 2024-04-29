/*
	Author: Bragg
	
	Description:
	This code snippet defines a function CIM_fnc_addLoadouts that requires _object, _dispalyNameOfVariant, _pathToLoadout, and _pathToLogo parameters.
	It checks if these parameters are missing or if the specified files exist. if any are missing, it logs an error message.
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
	["[197th/CIM_fnc_addLoadouts] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};
if (isNil "_dispalyNameOfVariant") exitWith {
	["[197th/CIM_fnc_addLoadouts] Missing parameter: _dispalyNameOfVariant"] call BIS_fnc_logFormatServer;
};
if (isNil "_pathToLoadout") exitWith {
	["[197th/CIM_fnc_addLoadouts] Missing parameter: _pathToLoadout"] call BIS_fnc_logFormatServer;
};
if (isNil "_pathToLogo") then {
	["[197th/CIM_fnc_addLoadouts] Missing parameter: _pathToLogo"] call BIS_fnc_logFormatServer;
};

["[197th/CIM_fnc_addLoadouts] Loading %1", _pathToLoadout] call BIS_fnc_logFormatServer;

_actionId = _object addAction [ "CIM_fnc_Loadouts", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[_caller] execVM _arguments;
}, _pathToLoadout, 1.5, true, true, "", "true", 5, false, "", ""];

_object setUserActionText [_actionId, _dispalyNameOfVariant, _pathToLogo];

[_object] execVM _pathToLoadout;

["[197th/CIM_fnc_addLoadouts] Loaded %1", _pathToLoadout] call BIS_fnc_logFormatServer;