/*
	Author: Bragg
	
	Description:
	This function initializes a garage object with a set of vehicles.
	
	Parameter(s):
	0: Object - The garage object to initialize.
	1: Object - The garage spawn object.
	2: String - GarageType. Can be : "Boat" / "Box" / "Car" / "Heli" / "Plane"
	3: Bool - Activate Hangar animation. true if the garage is a hangar, false by default.
	4: Bool - Activate Forklift animation. true if the garage is a forklift, false by default.
	
	Examples:
	[this, GarageSpawnName, "GarageType", true, false] call CIM_fnc_initGarage;
*/

params ["_object", "_position", "_garageType", ["_isHangar", false], ["_isForklift", false]];

if (!hasInterface) exitWith {};

CIM_HangarDoorOpenning = false;
publicVariable "CIM_HangarDoorOpenning";

CIM_ForkliftDoorOpenning = false;
publicVariable "CIM_ForkliftDoorOpenning";

if (isNil "_object") exitWith {
	["[197th/fnc_initGarage] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};

if (isNil "_position") exitWith {
	["[197th/fnc_initGarage] Missing parameter: _position"] call BIS_fnc_logFormatServer;
};

if (isNil "_garageType") exitWith {
	["[197th/fnc_initGarage] Missing parameter: _garageType"] call BIS_fnc_logFormatServer;
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
	["[197th/fnc_initGarage] Unsupported Cfg file name: %1", _garageType] call BIS_fnc_logFormatServer;
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
			if (_this select 3 select 5) then {
				if (count (vehicles inAreaArray trg_1) > 0) then {
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
					} forEach (vehicles inAreaArray trg_1);
					{
						_deletevehText = "";
						_deletevehText = _deletevehText + format["<t size='1.2'>%1</t><br/>", _x];
					} forEach _deleteveh;
					hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1", _deletevehText];
					[] call CIM_fnc_deleteVehHangarAnimation;
				};
				sleep 1;
				hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1<br/><br/><t size='1.5' color='#F1C40F'>Spawn Vehicle</t><br/>%2", _deletevehText, (_this select 3 select 4)];
				[_this select 3 select 0] call CIM_fnc_createVehHangarAnimation;
			} else {
				if (_this select 3 select 6) then {
					hint parseText format ["<t size='1.5' color='#F1C40F'>Spawn Vehicle</t><br/>%1", (_this select 3 select 4)];
					[_this select 3 select 0] call CIM_fnc_createVehForkliftAnimation;
				} else {
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
				};
			};
		},
	[_x, _pos, _dir, _trg, _VehiculeName, _isHangar, _isForklift], 1.5, true, true, "", "!CIM_HangarDoorOpenning && !CIM_ForkliftDoorOpenning", 5, false, "", ""];
} forEach _vehList;

if (_isForklift) exitWith {};

_object addAction [
	"<t size='1.2' color='#FF0000'>Delete Vehicles</t>",
	{
		_deleteveh = [];
		_deletevehText = format["<t size='1.2'>Empty</t><br/>"];
		if (_this select 3 select 4) then {
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
			} forEach (vehicles inAreaArray trg_1);
			{
				_deletevehText = "";
				_deletevehText = _deletevehText + format["<t size='1.2'>%1</t><br/>", _x];
			} forEach _deleteveh;
			hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1", _deletevehText];
			[] call CIM_fnc_deleteVehHangarAnimation;
		} else {
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
		};
	},
[_x, _pos, _dir, _trg, _isHangar], 1.5, true, true, "", "!CIM_HangarDoorOpenning && !CIM_ForkliftDoorOpenning", 5, false, "", ""];