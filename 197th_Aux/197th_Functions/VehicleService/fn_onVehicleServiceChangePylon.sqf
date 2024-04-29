/*
	Author: Bragg
	
	Description:
	This code snippet is written in the Arma scripting language. It takes a _position as input and finds the nearest helicopter or plane within a radius of 10 units.
	It then selects the nearest object and assigns it to the variable veh. Finally, it calls the ace_pylons_fnc_showDialog function with the veh variable as an argument.
	If no helicopter or plane is found within the specified radius, it displays a hint message saying "il n'a pas de vehicule dans la zone" (which translates to "there is no vehicle in the zone").
	
	Parameter(s):
	0: position - Object or Array in format PositionAGL or Position2D - where to find objects, center position.
	
	Example:
	[ServicePadVarName] call CIM_fnc_onVehicleServiceChangePylon;
*/

params ["_position"];

_objectselect = 0;
while { isPlayer (nearestObjects [_position, ["Helicopter", "Plane"], 10] select _objectselect) } do {
	_objectselect = _objectselect + 1;
	if {
		_objectselect == 100
	} exitWith {
		hint "il n'a pas de vehicule dans la zone";
	};
};
_veh = nearestObjects [_position, ["Helicopter", "Plane"], 10] select _objectselect;
[_veh] call ace_pylons_fnc_showDialog