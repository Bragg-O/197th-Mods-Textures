/*
	Author: Bragg
	
	Description:
	Create the animation of the forklift and vehicle
	
	Parameter(s):
	0: className of the vehicle to be spawnned
	
	Example:
	[] spawn CIM_fnc_createVehForkliftAnimation;
*/

params ["_ClassNameVeh"];

CIM_ForkliftDoorOpenning = true;
publicVariable "CIM_ForkliftDoorOpenning";

private _PosForklift = getPosASL Forklift;
private _PosHangarAttach_1 = getPosASL HangarAttach_1;
private _DirForklift = getDir Forklift;

private _AnimHeight = 0;

private _AnimHeightLimit = 0;

if ((count (vehicles inAreaArray trg_2)) == 0 && (count (vehicles inAreaArray trg_3)) + (count (vehicles inAreaArray trg_4)) == 0) then {
	_AnimHeightLimit = -23;
} else {
	if ((count (vehicles inAreaArray trg_3)) == 0 && (count (vehicles inAreaArray trg_4)) == 0) then {
		_AnimHeightLimit = -16;
	} else {
		if ((count (vehicles inAreaArray trg_4)) == 0) then {
			_AnimHeightLimit = -9;
		} else {
			hint parseText format ["<t size='1.5' color='#F1C40F'>Spawn Vehicle</t><br/><t size='1.2' color='#ff0000'>The hangar is full !!</t><br/>"];
			breakTo "end";
		};
	};
};

private _veh = _ClassNameVeh createVehicle [0, 0, 0];
_veh enableSimulation false;
_veh allowDamage false;
_veh setPosASL _PosHangarAttach_1;
_veh setDir (getDir HangarAttach);
if ("SupplySlingload" in _ClassNameVeh) then {
	_veh setDir ((getDir HangarAttach) + 90);
};

HangarDoor_1 animateSource ["door_open", 1, 2];
[HangarDoor_1, "LS_door1_open"] remoteExec ["say3d", 0, false];

0 spawn {
	for [{
		_i = 0
	}, {
		_i < 5
	}, {
		_i = _i + 1
	}] do {
		_random = selectRandom [1, 2, 3];
		switch (_random) do {
			case 1: {
				[Forklift, "forklift_1"] remoteExec ["say3d", 0, false];
			};
			case 2: {
				[Forklift, "forklift_2"] remoteExec ["say3d", 0, false];
			};
			case 3: {
				[Forklift, "forklift_3"] remoteExec ["say3d", 0, false];
			};
		};
		sleep 3;
	};
};

sleep 2;

while { _AnimHeight >= _AnimHeightLimit } do {
	_AnimHeight = _AnimHeight - 0.1;

	Forklift setPosASL [(((getPosASL Forklift) select 0) - 0.1 * sin(getDir Forklift)), (((getPosASL Forklift) select 1) - 0.1 * cos(getDir Forklift)), ((getPosASL Forklift) select 2)];
	HangarAttach_1 setPosASL [(((getPosASL HangarAttach_1) select 0) + 0.1 * sin(getDir HangarAttach_1)), (((getPosASL HangarAttach_1) select 1) + 0.1 * cos(getDir HangarAttach_1)), ((getPosASL HangarAttach_1) select 2)];

	_veh setPosASL (getPosASL HangarAttach_1);

	sleep 0.02;
};

_AnimHeightLimit = _AnimHeight;

sleep 0.5;

_veh enableSimulation true;

sleep 0.5;

while { _AnimHeight <= _AnimHeightLimit + 2 } do {
	_AnimHeight = _AnimHeight + 0.1;

	Forklift setPosASL [(((getPosASL Forklift) select 0) + 0.1 * sin(getDir Forklift)), (((getPosASL Forklift) select 1) + 0.1 * cos(getDir Forklift)), ((getPosASL Forklift) select 2)];
	HangarAttach_1 setPosASL [(((getPosASL HangarAttach_1) select 0) + 0.1 * sin(getDir HangarAttach_1)), (((getPosASL HangarAttach_1) select 1) + 0.1 * cos(getDir HangarAttach_1)), ((getPosASL HangarAttach_1) select 2)];

	sleep 0.02;
};

for [{
	_i = 0
}, {
	_i < 15
}, {
	_i = _i + 0.5
}] do {
sleep 0.0008;
Forklift setDir ((getDir Forklift) + 0.5);
};

for [{
	_i = 0
}, {
	_i < 30
}, {
	_i = _i + 0.5
}] do {
sleep 0.0008;
Forklift setDir ((getDir Forklift) - 0.5);
};

for [{
	_i = 0
}, {
	_i < 195
}, {
	_i = _i + 0.5
}] do {
sleep 0.0006;
Forklift setDir ((getDir Forklift) + 0.5);
};

while { _AnimHeight <= 0 } do {
	_AnimHeight = _AnimHeight + 0.1;

	Forklift setPosASL [(((getPosASL Forklift) select 0) - 0.1 * sin(getDir Forklift)), (((getPosASL Forklift) select 1) - 0.1 * cos(getDir Forklift)), ((getPosASL Forklift) select 2)];
	HangarAttach_1 setPosASL [(((getPosASL HangarAttach_1) select 0) - 0.1 * sin(getDir HangarAttach_1)), (((getPosASL HangarAttach_1) select 1) - 0.1 * cos(getDir HangarAttach_1)), ((getPosASL HangarAttach_1) select 2)];

	sleep 0.02;
};

HangarDoor_1 animateSource ["door_open", 0, 2];
[HangarDoor_1, "LS_door1_close"] remoteExec ["say3d", 0, false];

_veh allowDamage true;

sleep 3;

Forklift setPosASL _PosForklift;
Forklift setDir _DirForklift;
HangarAttach_1 setPosASL _PosHangarAttach_1;

scopeName "end";

CIM_ForkliftDoorOpenning = false;
publicVariable "CIM_ForkliftDoorOpenning";