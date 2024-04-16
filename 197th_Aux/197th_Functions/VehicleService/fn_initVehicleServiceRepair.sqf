/*
	Author: Bragg
	
	Description:
	This code snippet defines a function that adds an action to an object in a game.
	The action is called "Réparation" and it calls the function CIM_fnc_onVehicleServiceRepair when triggered.
	The function takes two parameters: _object and _position.
	It first checks if the game interface is available, and if not, exits.
	Then, it checks if the _object and _position parameters are provided, and if not, logs an error message and exits. Finally, it adds the action to the _object with the specified
	
	Parameter(s):
	0: Object
	1: Position - Object or Array in format PositionAGL or Position2D - where to find objects, center position.
	
	Example:
	[this, ServicePadVarName] call CIM_fnc_initVehicleServiceRepair;
*/

params ["_object", "_position"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initVehicleServiceRepair] Missing parameter: _object"];
};
if (isNil "_position") exitWith {
	diag_log format ["[197th/fnc_initVehicleServiceRepair] Missing parameter: _position"];
};

_object addAction["Réparation", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[_arguments] call CIM_fnc_onVehicleServiceRepair;
}, _position, 1.5, true, true, "", "true", 15, false, "", ""];