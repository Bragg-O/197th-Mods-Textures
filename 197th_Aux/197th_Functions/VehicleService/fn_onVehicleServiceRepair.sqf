/*
	Author: Bragg
	
	Description:
	This code snippet checks for vehicles near a specified position.
	If a vehicle is found, it initiates a repair process.
	If the vehicle's engine is off, it starts the repair; otherwise, it displays repair completion or interruption messages.
	
	Parameter(s):
	0: position - Object or Array in format PositionAGL or Position2D - where to find objects, center position.
	
	Example:
	[ServicePadVarName] call CIM_fnc_onVehicleServiceRepair;
*/

params ["_position"];

_objectselect = 0;
while { isPlayer (nearestObjects [_position, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect) } do {
	_objectselect = _objectselect + 1;
	if {
		_objectselect == 100
	} exitWith {
		hint "il n'a pas de vehicule dans la zone";
	};
};
veh = nearestObjects [_position, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect;
["Réparation", 5, {
	!isEngineOn veh;
}, {
	hint "Réparation terminée";
	veh setDamage 0;
}, {
	hint "Réparation interrompu";
}] call CBA_fnc_progressBar;