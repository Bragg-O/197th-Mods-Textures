#include "macro.sqf"

params ["_SabaccTable", "_color", "_card", "_IndexNumber"];

_cards = SabaccCards;

private _subList = _cards select _color;

{
	if (_x isEqualTo _card) exitWith {
		_x set [1, _IndexNumber];
	};
} forEach _subList;

SetSabaccCards(_cards);

_card