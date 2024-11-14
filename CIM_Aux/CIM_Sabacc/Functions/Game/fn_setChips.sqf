#include "macro.sqf"

params ["_type", "_ChipsQtt", "_SabaccTable", "_playerNumber"];

private _Chips = [];

if (_type == 0) then {
	ChipsMise(_playerNumber);
} else {
	ChipsReserve(_playerNumber);
};

{
	[_x, true] remoteExec ["hideObjectGlobal", 0, true];
} forEach _Chips;

for "_i" from 0 to (_ChipsQtt - 1) do {
	[_Chips select _i, false] remoteExec ["hideObjectGlobal", 0, true];
};

_ChipsQtt