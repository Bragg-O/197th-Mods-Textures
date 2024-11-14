#include "macro.sqf"

params ["_SabaccTable"];

private _NotEliminatePlayer = [];
{
	if !(_SabaccTable getVariable ["Player" + str (PlayerNumber(_x)) + "IsEliminate", false]) then {
		_NotEliminatePlayer pushBack _x;
	};
} forEach AllPlayer;

_NotEliminatePlayer