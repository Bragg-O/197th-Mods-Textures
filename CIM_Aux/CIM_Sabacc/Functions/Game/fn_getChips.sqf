#include "macro.sqf"

params ["_type", "_SabaccTable", "_playerNumber"];

private _Chips = [];

if (_type == 0) then {
	ChipsMise(_playerNumber);
} else {
	ChipsReserve(_playerNumber);
};

private _ChipsCount = 0;
{
	if (!isObjectHidden _x) then {
		_ChipsCount = _ChipsCount + 1;
	};
} forEach _Chips;

_ChipsCount