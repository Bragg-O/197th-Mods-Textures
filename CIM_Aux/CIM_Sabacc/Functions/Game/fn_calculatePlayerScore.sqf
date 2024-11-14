#include "macro.sqf"

params ["_SabaccTable", "_player"];

private _playercards = _player getVariable "SABACC_FinalCards";

private _PlayerNumber = PlayerNumber(_player);

private _point = 0;
private _level = 0;

{
	if (_x == "S") then {
		_playercards set [_forEachIndex, "0"];
	};
} forEach _playercards;

private _card1 = call compile (_playercards select 0);
private _card2 = call compile (_playercards select 1);

if ((_card1 >= _card2)) then {
	_point = _card1 - _card2;
} else {
	_point = _card2 - _card1;
};

_level = _card1 + _card2;

private _score = [_point, _level];

_SabaccTable setVariable ["Player" + str _PlayerNumber + "Score", _score, true];