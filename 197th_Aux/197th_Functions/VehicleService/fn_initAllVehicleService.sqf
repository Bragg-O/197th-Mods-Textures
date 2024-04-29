/*
	Author: Bragg
	
	Description:
	This code snippet defines a function fn_initAllVehicleService that expects two parameters _object and _position.
	It checks if these parameters are present, logs an error if they are missing,
	and then calls four different functions (CIM_fnc_initVehicleServiceReFuel, CIM_fnc_initVehicleServiceRepair, CIM_fnc_initVehicleServiceReArm, CIM_fnc_initVehicleServiceChangePylon) with the provided _object and _position parameters.
	
	Parameter(s):
	0: Object
	1: Position - Object or Array in format PositionAGL or Position2D - where to find objects, center position.
	
	Example:
	[this, ServicePadVarName] call CIM_fnc_initAllVehicleService;
*/

params ["_object", "_position"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	["[197th/fnc_initAllVehicleService] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};
if (isNil "_position") exitWith {
	["[197th/fnc_initAllVehicleService] Missing parameter: _position"] call BIS_fnc_logFormatServer;
};

[_object, _position] call CIM_fnc_initVehicleServiceReFuel;
[_object, _position] call CIM_fnc_initVehicleServiceRepair;
[_object, _position] call CIM_fnc_initVehicleServiceReArm;
[_object, _position] call CIM_fnc_initVehicleServiceChangePylon;