/*
	Author: Bragg
	
	Description:
	Create the animation of the hangar and vehicle
	
	Parameter(s):
	0: className of the vehicle to be spawnned
	
	Example:
	[] spawn CIM_fnc_createVehHangarAnimation;
*/

params ["_ClassNameVeh"];

CIM_HangarDoorOpenning = true;
publicVariable "CIM_HangarDoorOpenning";

private _PosHangarAnim_0 = getPosASL HangarAnim_0;
private _PosHangarAnim_1 = getPosASL HangarAnim_1;
private _PosHangarAnim_2 = getPosASL HangarAnim_2;
private _PosHangarAnim_3 = getPosASL HangarAnim_3;
private _PosHangarAnim_4 = getPosASL HangarAnim_4;
private _PosHangarAnim_5 = getPosASL HangarAnim_5;
private _PosHangarAnim_6 = getPosASL HangarAnim_6;
private _PosHangarAnim_7 = getPosASL HangarAnim_7;
private _PosHangarAnim_8 = getPosASL HangarAnim_8;
private _PosHangarAnim_9 = getPosASL HangarAnim_9;
private _PosHangarAnim_10 = getPosASL HangarAnim_10;
private _PosHangarAnim_11 = getPosASL HangarAnim_11;
private _PosHangarAttach = getPosASL HangarAttach;

[HangarAnim_2, false] remoteExec ["hideObject"];
[HangarAnim_3, false] remoteExec ["hideObject"];
[HangarAnim_4, false] remoteExec ["hideObject"];
[HangarAnim_5, false] remoteExec ["hideObject"];
[HangarAnim_6, false] remoteExec ["hideObject"];
[HangarAnim_7, false] remoteExec ["hideObject"];
[HangarAnim_8, false] remoteExec ["hideObject"];
[HangarAnim_9, false] remoteExec ["hideObject"];
[HangarAnim_10, false] remoteExec ["hideObject"];
[HangarAnim_11, false] remoteExec ["hideObject"];

private _veh = _ClassNameVeh createVehicle [0, 0, 0];
_veh enableSimulation false;
_veh allowDamage false;
_veh setPosASL _PosHangarAttach;
_veh setDir (getDir HangarAttach);

HangarDoor animateSource ["door_open", 1];
[HangarDoor, "BIG_door1_open"] remoteExec ["say3d", 0, false];

_alarm = createSoundSource ["Sound_Alarm2", _PosHangarAttach, [], 0]; // starts alarm 

sleep 5;

private _AnimHeight = 0;

while { _AnimHeight >= -28 } do {
	_AnimHeight = _AnimHeight - 0.2;

	HangarAnim_0 setPosASL [_PosHangarAnim_0 select 0, _PosHangarAnim_0 select 1, ((getPosASL HangarAnim_0) select 2) - 0.2];
	HangarAnim_1 setPosASL [_PosHangarAnim_1 select 0, _PosHangarAnim_1 select 1, ((getPosASL HangarAnim_1) select 2) - 0.2];
	HangarAnim_2 setPosASL [_PosHangarAnim_2 select 0, _PosHangarAnim_2 select 1, ((getPosASL HangarAnim_2) select 2) - 0.2];
	HangarAnim_3 setPosASL [_PosHangarAnim_3 select 0, _PosHangarAnim_3 select 1, ((getPosASL HangarAnim_3) select 2) - 0.2];
	HangarAnim_4 setPosASL [_PosHangarAnim_4 select 0, _PosHangarAnim_4 select 1, ((getPosASL HangarAnim_4) select 2) - 0.2];
	HangarAnim_5 setPosASL [_PosHangarAnim_5 select 0, _PosHangarAnim_5 select 1, ((getPosASL HangarAnim_5) select 2) - 0.2];
	HangarAnim_6 setPosASL [_PosHangarAnim_6 select 0, _PosHangarAnim_6 select 1, ((getPosASL HangarAnim_6) select 2) - 0.2];
	HangarAnim_7 setPosASL [_PosHangarAnim_7 select 0, _PosHangarAnim_7 select 1, ((getPosASL HangarAnim_7) select 2) - 0.2];
	HangarAnim_8 setPosASL [_PosHangarAnim_8 select 0, _PosHangarAnim_8 select 1, ((getPosASL HangarAnim_8) select 2) - 0.2];
	HangarAnim_9 setPosASL [_PosHangarAnim_9 select 0, _PosHangarAnim_9 select 1, ((getPosASL HangarAnim_9) select 2) - 0.2];
	HangarAnim_10 setPosASL [_PosHangarAnim_10 select 0, _PosHangarAnim_10 select 1, ((getPosASL HangarAnim_10) select 2) - 0.2];
	HangarAnim_11 setPosASL [_PosHangarAnim_11 select 0, _PosHangarAnim_11 select 1, ((getPosASL HangarAnim_11) select 2) - 0.2];
	HangarAttach setPosASL [_PosHangarAttach select 0, _PosHangarAttach select 1, ((getPosASL HangarAttach) select 2) - 0.2];

	_veh setPosASL [_PosHangarAttach select 0, _PosHangarAttach select 1, ((getPosASL HangarAttach) select 2) - 0.2];

	sleep 0.01;
};

sleep 0.5;

_veh enableSimulation true;

[HangarAnim_2, true] remoteExec ["hideObject"];
[HangarAnim_3, true] remoteExec ["hideObject"];
[HangarAnim_4, true] remoteExec ["hideObject"];
[HangarAnim_5, true] remoteExec ["hideObject"];
[HangarAnim_6, true] remoteExec ["hideObject"];
[HangarAnim_7, true] remoteExec ["hideObject"];
[HangarAnim_8, true] remoteExec ["hideObject"];
[HangarAnim_9, true] remoteExec ["hideObject"];
[HangarAnim_10, true] remoteExec ["hideObject"];
[HangarAnim_11, true] remoteExec ["hideObject"];

sleep 0.5;

while { _AnimHeight <= 0 } do {
	_AnimHeight = _AnimHeight + 0.2;

	HangarAnim_0 setPosASL [_PosHangarAnim_0 select 0, _PosHangarAnim_0 select 1, ((getPosASL HangarAnim_0) select 2) + 0.2];
	HangarAnim_1 setPosASL [_PosHangarAnim_1 select 0, _PosHangarAnim_1 select 1, ((getPosASL HangarAnim_1) select 2) + 0.2];
	HangarAttach setPosASL [_PosHangarAttach select 0, _PosHangarAttach select 1, ((getPosASL HangarAttach) select 2) + 0.2];

	sleep 0.01;
};

HangarDoor animateSource ["door_open", 0];
[HangarDoor, "BIG_door1_close"] remoteExec ["say3d", 0, false];

deleteVehicle _alarm; // stops alarm 

_veh allowDamage true;

sleep 5;

HangarAnim_0 setPosASL _PosHangarAnim_0;
HangarAnim_1 setPosASL _PosHangarAnim_1;
HangarAnim_2 setPosASL _PosHangarAnim_2;
HangarAnim_3 setPosASL _PosHangarAnim_3;
HangarAnim_4 setPosASL _PosHangarAnim_4;
HangarAnim_5 setPosASL _PosHangarAnim_5;
HangarAnim_6 setPosASL _PosHangarAnim_6;
HangarAnim_7 setPosASL _PosHangarAnim_7;
HangarAnim_8 setPosASL _PosHangarAnim_8;
HangarAnim_9 setPosASL _PosHangarAnim_9;
HangarAnim_10 setPosASL _PosHangarAnim_10;
HangarAnim_11 setPosASL _PosHangarAnim_11;
HangarAttach setPosASL _PosHangarAttach;

CIM_HangarDoorOpenning = false;
publicVariable "CIM_HangarDoorOpenning";