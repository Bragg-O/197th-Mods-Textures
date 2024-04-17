/*
	Author: Bragg
	
	Description:
	This function initializes a garage object with a set of vehicles.
	
	Parameter(s):
	0: Object - The garage object to initialize.
	1: Object - The garage spawn object.
	2: String - GarageType. Can be : "Boat" / "Box" / "Car" / "Heli" / "Plane"
	
	Examples:
	[this, GarageSpawnName, "GarageType"] call CIM_fnc_initGarage;
*/

params ["_object", "_position", "_garageType"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initGarage] Missing parameter: _object"];
};

if (isNil "_position") exitWith {
	diag_log format ["[197th/fnc_initGarage] Missing parameter: _position"];
};

if (isNil "_garageType") exitWith {
	diag_log format ["[197th/fnc_initGarage] Missing parameter: _garageType"];
};

private "_vehList";

switch (_garageType) do {
	case "Boat" : {
		_vehList = getMissionConfigValue ["CIM_Garage_Boat", []];
	};
	case "Box" : {
		_vehList = getMissionConfigValue ["CIM_Garage_Box", []];
	};
	case "Car" : {
		_vehList = getMissionConfigValue ["CIM_Garage_Car", []];
	};
	case "Heli" : {
		_vehList = getMissionConfigValue ["CIM_Garage_Heli", []];
	};
	case "Plane" : {
		_vehList = getMissionConfigValue ["CIM_Garage_Plane", []];
	};
};

if (isNil "_vehList") exitWith {
	diag_log format ["[197th/fnc_initGarage] Unsupported Cfg file name: %1", _garageType];
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