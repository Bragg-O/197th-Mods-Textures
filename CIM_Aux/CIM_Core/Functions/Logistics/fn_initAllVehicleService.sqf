params ["_object", "_position"];

if (!hasInterface) exitWith {};
if (isNil "_object") exitWith {
	["[197th/fnc_initGarage] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};

if (isNil "_position") exitWith {
	["[197th/fnc_initGarage] Missing parameter: _position"] call BIS_fnc_logFormatServer;
};

_pos = getPosATL (_position);
_dir = getDir (_position);

_trg = createTrigger ["EmptyDetector", _pos];
_trg setPosATL _pos;
_trg setTriggerArea [10, 10, _dir, true, 10];

_color = [
	"#FF0000",
	"#FD1403",
	"#FB2806",
	"#F93B09",
	"#F74F0C",
	"#F5610F",
	"#F37412",
	"#F18615",
	"#EF9918",
	"#EDAC1B",
	"#EBBF1E",
	"#E9D221",
	"#E7E525",
	"#D5E62A",
	"#C2E92E",
	"#AFEF33",
	"#9CF438",
	"#89F83C",
	"#76FB41",
	"#63FE46",
	"#50FF4A",
	"#3DFF4F",
	"#2AFF54",
	"#17FF58",
	"#04FF5D"
];

CIM_serviceinprogress = true;
publicVariable "CIM_serviceinprogress";
_object addAction [
	"<t color='#FFFFFF' size='1'> Réparer</t>",
	{
		CIM_serviceinprogress = false;
		publicVariable "CIM_serviceinprogress";
		params ["_target", "_caller", "_actionId", "_arguments"];
		{
			if !(isPlayer _x) then {
				_load = 0;

				{
					if (_target distance (_arguments select 0) > 5) exitWith {
						hint parseText format["<t color='#fb0000' size='1.5'>Service</t><br/>CANCEL<br/>Vous êtes sorti de la zone."];
					};

					uiSleep .2;

					hintSilent parseText format["<t color='#fb0000' size='1.5'>Service</t><br/><t color='%1'>%2%3</t><br/>Réparation en cours...", _x, (_load * 4), "%"];

					_load = _load + 1;
				} forEach (_arguments select 2);

				hint parseText format["<t color='#fb0000' size='1.5'>Service</t><br/>END<br/>Réparation terminée"];

				_x setDamage 0;
			};
		} forEach (vehicles inAreaArray (_arguments select 1));
		CIM_serviceinprogress = true;
		publicVariable "CIM_serviceinprogress";
	},
[_object, _trg, _color], 1.5, true, true, "", "CIM_serviceinprogress", 5, false, "", ""];

_object addAction [
	"<t color='#FFFFFF' size='1'> Ravitailler</t>",
	{
		CIM_serviceinprogress = false;
		publicVariable "CIM_serviceinprogress";
		params ["_target", "_caller", "_actionId", "_arguments"];
		{
			if !(isPlayer _x) then {
				_load = 0;

				{
					if (_target distance (_arguments select 0) > 5) exitWith {
						hint parseText format["<t color='#fb0000' size='1.5'>Service</t><br/>CANCEL<br/>Vous êtes sorti de la zone."];
					};

					uiSleep .2;

					hintSilent parseText format["<t color='#fb0000' size='1.5'>Service</t><br/><t color='%1'>%2%3</t><br/>Ravitaillement en cours...", _x, (_load * 4), "%"];

					_load = _load + 1;
				} forEach (_arguments select 2);

				hint parseText format["<t color='#fb0000' size='1.5'>Service</t><br/>END<br/>Ravitaillement terminé"];

				_x setFuel 1;
			};
		} forEach (vehicles inAreaArray (_arguments select 1));
		CIM_serviceinprogress = true;
		publicVariable "CIM_serviceinprogress";
	},
[_object, _trg, _color], 1.5, true, true, "", "CIM_serviceinprogress", 5, false, "", ""];

_object addAction [
	"<t color='#FFFFFF' size='1'> Réarmer</t>",
	{
		CIM_serviceinprogress = false;
		publicVariable "CIM_serviceinprogress";
		params ["_target", "_caller", "_actionId", "_arguments"];
		{
			if !(isPlayer _x) then {
				_load = 0;

				{
					if (_target distance (_arguments select 0) > 5) exitWith {
						hint parseText format["<t color='#fb0000' size='1.5'>Service</t><br/>CANCEL<br/>Vous êtes sorti de la zone."];
					};

					uiSleep .2;

					hintSilent parseText format["<t color='#fb0000' size='1.5'>Service</t><br/><t color='%1'>%2%3</t><br/>Réarmement en cours...", _x, (_load * 4), "%"];

					_load = _load + 1;
				} forEach (_arguments select 2);

				hint parseText format["<t color='#fb0000' size='1.5'>Service</t><br/>END<br/>Réarmement terminé"];

				_x setVehicleAmmo 1;
			};
		} forEach (vehicles inAreaArray (_arguments select 1));
		CIM_serviceinprogress = true;
		publicVariable "CIM_serviceinprogress";
	},
[_object, _trg, _color], 1.5, true, true, "", "CIM_serviceinprogress", 5, false, "", ""];