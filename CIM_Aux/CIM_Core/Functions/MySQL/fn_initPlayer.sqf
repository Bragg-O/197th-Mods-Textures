params ["_player", "_uid"];

_playerExists = [_uid] call DB_fnc_checkPlayerExists;

_firstconnection = false;

if (((_playerExists select 0) select 0) == 0) then {
	[_uid] call DB_fnc_newPlayer;
	_firstconnection = true;
};

if (!_firstconnection) then {
	_DBextract = [_uid] call DB_fnc_extractPlayer;
	_player setUnitLoadout (((_DBextract select 0) select 0) select 2);
};

while { true } do {
	uiSleep 300;
	[_player, _uid] call DB_fnc_syncPlayer;
};