params ["_LAAT"];

_vehicles = _LAAT getVariable "TAS_Loaded";

_LAAT allowDamage false;
playSound "TAS_Clamps";
_LAAT animatesource ["Clamp_hinges",-0.2,2];
sleep 0.5;
{
	_x allowDamage false;
	detach _x;
	_x setVelocity [0,0,-3];
	_LAAT setVelocity (velocity _LAAT vectorAdd [0,0,7]);
	sleep 0.5;
	_x allowDamage true;
} forEach _vehicles;

_LAAT allowDamage true;
_LAAT setVariable ["TAS_Loaded", [], true];
_LAAT animatesource ["Clamp_hinges",0,2];
_laat animatesource ["Clamp", 0.35, 1];