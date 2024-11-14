#include "macro.sqf"

params ["_SabaccTable", "_Color"];

_cards = SabaccCards;

private _subList = _cards select _Color;
private _maxValue = -1;
private _selectedCard = [];

{
	private _value = _x select 1;
	if (_value > _maxValue) then {
		_maxValue = _value;
		_selectedCard = _x;
	};
} forEach _subList;

_selectedCard