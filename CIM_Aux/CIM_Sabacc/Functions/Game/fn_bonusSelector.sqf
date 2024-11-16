#include "macro.sqf"

params ["_screen", "_player"];

_screen setVariable ["player", _player, true];

private _bonuslist = BonusList;

private _timeout = 0;

private _texture = "";

private _playerbonus = [getPlayerUID _player] call SABACC_fnc_extractBonus;

uiSleep 0.1;

_player setVariable ["SABACC_SabaccBonus1", 0, true];
_player setVariable ["SABACC_SabaccBonus2", 0, true];

{
	if (_x) then {
		_screen addAction [format ["<img size = '1.2' image='cim_sabacc\data\Bonus\%2.paa'/> Prendre le bonus : %1", _bonuslist select _forEachIndex, _forEachIndex], {
			params ["_target", "_caller", "_actionId", "_arguments"];
			if ((_caller getVariable ["SABACC_SabaccBonus1", 0]) == 0) then {
				_caller setVariable ["SABACC_SabaccBonus1", _arguments, true];
			} else {
				_caller setVariable ["SABACC_SabaccBonus2", _arguments, true];
			};
			_target removeAction _actionId;
		}, _forEachIndex, 0, false, true, "", "((_target getVariable 'player') == _this) && (((_this getVariable ['SABACC_SabaccBonus1', 0]) == 0) || ((_this getVariable ['SABACC_SabaccBonus2', 0]) == 0))", 5];
	};
} forEach _playerbonus;

waitUntil {
	uiSleep 2;
	private _bonus1 = _player getVariable ["SABACC_SabaccBonus1", 0];
	private _bonus2 = _player getVariable ["SABACC_SabaccBonus2", 0];
	if (_bonus1 >= _bonus2) then {
		_texture = format["\cim_sabacc\data\Bonus\%1-%2.jpg", _bonus2, _bonus1];
	} else {
		_texture = format["\cim_sabacc\data\Bonus\%1-%2.jpg", _bonus1, _bonus2];
	};
	_screen setObjectTextureGlobal [0, _texture];
	_timeout = _timeout + 1;
	((_player getVariable ["SABACC_SabaccBonus1", 0] != 0) && (_player getVariable ["SABACC_SabaccBonus2", 0] != 0)) || (_timeout == 30)
};

removeAllActions _screen;

uiSleep 5;

[_screen] call SABACC_fnc_initBonusSelector;