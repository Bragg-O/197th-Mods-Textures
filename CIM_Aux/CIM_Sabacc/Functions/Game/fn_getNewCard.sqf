#include "macro.sqf"

params ["_SabaccTable", "_Color"];

_cards = SabaccCards;

private _subList = _cards select _color;

private _canGetList = [];

{
	if (_x select 1 == 0) then {
		_canGetList pushBack _x;
	};
} forEach _subList;

private _selectedCard = selectRandom _canGetList;

_selectedCard