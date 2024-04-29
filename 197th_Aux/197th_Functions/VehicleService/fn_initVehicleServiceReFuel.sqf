/*
	Author: Bragg
	
	Description:
	This code snippet defines a function that adds an action to an object in a game.
	The action is called "Ravitaillement" and it calls the function CIM_fnc_onVehicleServiceReFuel when triggered.
	The function takes two parameters: _object and _position.
	It first checks if the game interface is available, and if not, exits.
	then, it checks if the _object and _position parameters are provided, and if not, logs an error message and exits. Finally, it adds the action to the _object with the specified
	
	Parameter(s):
	0: Object
	1: position - Object or Array in format PositionAGL or Position2D - where to find objects, center position.
	
	Example:
	[this, ServicePadVarName] call CIM_fnc_initVehicleServiceReFuel;
*/

params ["_object", "_position"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	["[197th/fnc_initVehicleServiceReFuel] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};
if (isNil "_position") exitWith {
	["[197th/fnc_initVehicleServiceReFuel] Missing parameter: _position"] call BIS_fnc_logFormatServer;
};

_object addAction["Ravitaillement", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[_arguments] call CIM_fnc_onVehicleServiceReFuel;
}, _position, 1.5, true, true, "", "true", 15, false, "", ""];