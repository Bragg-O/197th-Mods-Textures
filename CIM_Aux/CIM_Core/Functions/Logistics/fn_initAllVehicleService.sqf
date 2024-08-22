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

_object addAction [
	"<t color='#FFFFFF' size='1'> Réparer</t>",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		{
			if !(isPlayer _x) then {
				["Réparation ...", 5, {
					player distance (_arguments select 0) < 10 && alive player
				}, {
					hint "Réparation terminé";
					_x setDamage 0;
				}, {
					hint "Réparation annulé"
				}] spawn CBA_fnc_progressBar;
			};
		} forEach (vehicles inAreaArray (_arguments select 1));
	},
[_object, _trg], 1.5, true, true, "", "true", 5, false, "", ""];

_object addAction [
	"<t color='#FFFFFF' size='1'> Ravitailler</t>",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		{
			if !(isPlayer _x) then {
				["Ravitaillement ... ", 5, {
					player distance (_arguments select 0) < 10 && alive player
				}, {
					hint "Ravitaillement terminé";
					_x setFuel 1;
				}, {
					hint "Ravitaillement annulé"
				}] spawn CBA_fnc_progressBar;
			};
		} forEach (vehicles inAreaArray (_arguments select 1));
	},
[_object, _trg], 1.5, true, true, "", "true", 5, false, "", ""];

_object addAction [
	"<t color='#FFFFFF' size='1'> Réarmer</t>",
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		{
			if !(isPlayer _x) then {
				["Réarmement ... ", 5, {
					player distance (_arguments select 0) < 10 && alive player
				}, {
					hint "Réarmement terminé";
					_x setVehicleAmmo 1;
				}, {
					hint "Réarmement annulé"
				}] spawn CBA_fnc_progressBar;
			};
		} forEach (vehicles inAreaArray (_arguments select 1));
	},
[_object, _trg], 1.5, true, true, "", "true", 5, false, "", ""];