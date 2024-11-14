#include "macro.sqf"

params ["_SabaccTable", "_Color", "_PlayerNumber"];

_cards = SabaccCards;

private _subList = _cards select _Color;

private _selectedCard = [];

{
	if ((_x select 1) == _PlayerNumber) then {
		_selectedCard = _x;
	};
} forEach _subList;

_selectedCard