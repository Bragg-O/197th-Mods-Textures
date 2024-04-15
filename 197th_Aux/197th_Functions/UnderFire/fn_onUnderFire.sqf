/*
	Author: Bragg
	
	Description:
	
	
	Parameter(s):
	0: object
	
	Example:
	[this] call CIM_fnc_onUnderFire;
*/

_this spawn {
	params ["_unit", "_firer", "_distance", "_weapon", "_muzzle", "_mode", "_ammo", "_gunner"];

	if (!isPlayer _unit) exitWith {};

	if (side _firer == side _unit) exitWith {};

	if (_distance > 500) exitWith {};

	if (vehicle _unit != _unit) exitWith {};

	for [{
		_i = 0
	}, {
		_i < 120
	}, {
		_i = _i + 1
	}] do {
	if (vehicle _unit != _unit) exitWith {};

	if (player in cameraOn && cameraView == "External") then {
		hint parseText format["<img size='2' image='\Data\waves_ca.paa'/><br/>Communication entrante<br/><t color='#FB0000' size='1.5'> Reste concentré soldat !</t>"];
		player switchCamera "INTERNAL";
	};

	sleep 0.5;
};
hintSilent "";
};