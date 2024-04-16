/*
	Author: Bragg
	
	Description:
	This function initializes a garage object with a set of vehicles.
	
	Parameter(s):
	0: Object - The garage object to initialize.
	1: Object - The garage spawn object.
	2: String - Path to the Cfg file to load. Can be a CfgGarageBoat.sqf / CfgGarageBox.sqf / CfgGarageCar.sqf / CfgGarageHeli.sqf / CfgGaragePlane.sqf
	
	Examples:
	[this, GarageSpawnName, "\197th_Core\init\Script\CfgGarageBoat.sqf"] call CIM_fnc_initGarage;
*/

params ["_object", "_position", "_cfg"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initGarage] Missing parameter: _object"];
};

if (isNil "_position") exitWith {
	diag_log format ["[197th/fnc_initGarage] Missing parameter: _position"];
};

if (isNil "_cfg") exitWith {
	diag_log format ["[197th/fnc_initGarage] Missing parameter: _cfg"];
};

if (!fileExists _cfg) exitWith {
	diag_log format ["[197th/fnc_initGarage] Cfg file not found: %1", _cfg];
};

_handle = execVM _cfg;
waitUntil {
	scriptDone _handle
};

private "_vehList";

switch (true) do {
	case {
		"CfgGarageBoat.sqf" in _cfg
	}: {
		if (isNil "CIM_InitGarageBoat") exitWith {
			diag_log format ["[197th/fnc_initGarage] Missing variable: CIM_InitGarageBoat in %1", _cfg];
		};
		_vehList = CIM_InitGarageBoat;
	};
	case {
		"CfgGarageBox.sqf" in _cfg
	}: {
		if (isNil "CIM_InitGarageBox") exitWith {
			diag_log format ["[197th/fnc_initGarage] Missing variable: CIM_InitGarageBox in %1", _cfg];
		};
		_vehList = CIM_InitGarageBox;
	};
	case {
		"CfgGarageCar.sqf" in _cfg
	}: {
		if (isNil "CIM_InitGarageCar") exitWith {
			diag_log format ["[197th/fnc_initGarage] Missing variable: CIM_InitGarageCar in %1", _cfg];
		};
		_vehList = CIM_InitGarageCar;
	};
	case {
		"CfgGarageHeli.sqf" in _cfg
	}: {
		if (isNil "CIM_InitGarageHeli") exitWith {
			diag_log format ["[197th/fnc_initGarage] Missing variable: CIM_InitGarageHeli in %1", _cfg];
		};
		_vehList = CIM_InitGarageHeli;
	};
	case {
		"CfgGaragePlane.sqf" in _cfg
	}: {
		if (isNil "CIM_InitGaragePlane") exitWith {
			diag_log format ["[197th/fnc_initGarage] Missing variable: CIM_InitGaragePlane in %1", _cfg];
		};
		_vehList = CIM_InitGaragePlane;
	};
};

if (isNil "_vehList") exitWith {
	diag_log format ["[197th/fnc_initGarage] Unsupported Cfg file name: %1", _cfg];
};

_pos = getPosATL (_position);
_dir = getDir (_position);

_trg = createTrigger ["EmptyDetector", _pos];
_trg setPosATL _pos;
_trg setTriggerArea [10, 10, _dir, true, 10];

{
	_VehiculeName = getText(configfile >> "CfgVehicles" >> _x >> "displayName");
	if ("197th" in _VehiculeName) then {
		_VehiculeName = _VehiculeName select [7];
		_VehiculeName = format ["<t size='1.2' color='#27AE60'>[197th]</t><t size='1.2'>%1</t>", _VehiculeName];
	} else {
		_VehiculeName = format ["<t size='1.2'>%1</t>", _VehiculeName];
	};
	_object addAction [
		format ["%1", _VehiculeName],
		{
			_deleteveh = [];
			_deletevehText = format["<t size='1.2'>Empty</t><br/>"];
			{
				_deletevehclass = typeOf _x;
				_deletevehname = getText(configfile >> "CfgVehicles" >> _deletevehclass >> "displayName");
				if ("197th" in _deletevehname) then {
					_deletevehname = _deletevehname select [7];
					_deletevehname = format ["<t size='1.2' color='#27AE60'>[197th]</t><t size='1.2'>%1</t>", _deletevehname];
				} else {
					_deletevehname = format ["<t size='1.2'>%1</t>", _deletevehname];
				};
				_deleteveh pushBack _deletevehname;
				deleteVehicle _x;
			} forEach (vehicles inAreaArray (_this select 3 select 3));
			{
				_deletevehText = "";
				_deletevehText = _deletevehText + format["<t size='1.2'>%1</t><br/>", _x];
			} forEach _deleteveh;
			hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1", _deletevehText];
			sleep 1;
			_veh = (_this select 3 select 0) createVehicle (_this select 3 select 1);
			_veh setDir (_this select 3 select 2);
			_veh setPosATL (_this select 3 select 1);
			hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1<br/><br/><t size='1.5' color='#F1C40F'>Spawn Vehicle</t><br/>%2", _deletevehText, (_this select 3 select 4)];
		},
	[_x, _pos, _dir, _trg, _VehiculeName], 1.5, true, true, "", "true", 5, false, "", ""];
} forEach _vehList;

_object addAction [
	"<t size='1.2' color='#FF0000'>Delete Vehicles</t>",
	{
		_deleteveh = [];
		_deletevehText = format["<t size='1.2'>Empty</t><br/>"];
		{
			_deletevehclass = typeOf _x;
			_deletevehname = getText(configfile >> "CfgVehicles" >> _deletevehclass >> "displayName");
			if ("197th" in _deletevehname) then {
				_deletevehname = _deletevehname select [7];
				_deletevehname = format ["<t size='1.2' color='#27AE60'>[197th]</t><t size='1.2'>%1</t>", _deletevehname];
			} else {
				_deletevehname = format ["<t size='1.2'>%1</t>", _deletevehname];
			};
			_deleteveh pushBack _deletevehname;
			deleteVehicle _x;
		} forEach (vehicles inAreaArray (_this select 3 select 3));
		{
			_deletevehText = "";
			_deletevehText = _deletevehText + format["<t size='1.2'>%1</t><br/>", _x];
		} forEach _deleteveh;
		hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1", _deletevehText];
	},
[_x, _pos, _dir, _trg], 1.5, true, true, "", "true", 5, false, "", ""];
