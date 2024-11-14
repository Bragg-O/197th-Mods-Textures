#include "macro.sqf"

params ["_type", "_qtt", "_SabaccTable", "_playerNumber"];

private _Chips = [];
private _ChipsQtt = 0;

private _ChipsCount = [_type, _SabaccTable, _playerNumber] call SABACC_fnc_getChips;

if (_type == 0) then {
	ChipsMise(_playerNumber);
} else {
	ChipsReserve(_playerNumber);
};

{
	[_x, true] remoteExec ["hideObjectGlobal", 0, true];
} forEach _Chips;

_ChipsQtt = _ChipsCount - _qtt;

if (_ChipsQtt < 1) exitWith {
	0
};

for "_i" from 0 to (_ChipsQtt - 1) do {
	[_Chips select _i, false] remoteExec ["hideObjectGlobal", 0, true];
};

_ChipsQtt