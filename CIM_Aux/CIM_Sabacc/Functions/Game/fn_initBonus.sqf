#include "macro.sqf"

params ["_player", "_SabaccTable"];

private _bonus1 = PlayerBonus1(_player);
private _bonus2 = PlayerBonus2(_player);
private _PlayerNumber = PlayerNumber(_player);

private _texture = "";

if (_bonus1 >= _bonus2) then {
	_texture = format["\cim_sabacc\data\Bonus\%1-%2.jpg", _bonus2, _bonus1];
} else {
	_texture = format["\cim_sabacc\data\Bonus\%1-%2.jpg", _bonus1, _bonus2];
};

SetTexture_Bonus(_PlayerNumber, _texture);

_player setVariable ["SABACC_SabaccBonus1Available", true, true];
_player setVariable ["SABACC_SabaccBonus2Available", true, true];