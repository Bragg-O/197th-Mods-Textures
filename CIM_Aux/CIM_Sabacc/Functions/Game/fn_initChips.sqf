#include "macro.sqf"

params ["_SabaccTable"];

private _Chips = [];

for "_i" from 1 to 4 do {
	ChipsMise(_i);
	{
		[_x, true] remoteExec ["hideObjectGlobal", 0, true];
	} forEach _Chips;

	ChipsReserve(_i);
	{
		[_x, true] remoteExec ["hideObjectGlobal", 0, true];
	} forEach _Chips;
};