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

_actionId = _object addAction [ "CIM_fnc_Loadouts", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[_caller] execVM _arguments;
}, _pathToLoadout, 1.5, true, true, "", "true", 5, false, "", ""];

_object setUserActionText [_actionId, _dispalyNameOfVariant, _pathToLogo];