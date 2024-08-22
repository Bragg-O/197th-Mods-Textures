params ["_player", "_uid"];

_timeUTC = systemTimeUTC;
[
	_uid,
	[
		(format["%1-%2-%3", (_timeUTC select 2), (_timeUTC select 1), (_timeUTC select 0)]),
		(name _player),
		(getUnitLoadout _player)
	]
] call DB_fnc_updatePlayer;

diag_log format ["extDB3 - Player %1 synced.", _player];