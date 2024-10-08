_player = lbCurSel 3000;
if (_player == -1) exitWith {
	hint "Vous devez sélectionner un joueur !";
};

_newrank = lbCurSel 3100;
if (_newrank == -1) exitWith {
	hint "Vous devez sélectionner un grade !";
};

private _AllPlayersInfo = CIM_GetAllPlayersInfo;

_players = [];

{
	_uid = _x select 0;
	_name = _x select 1;
	_players pushBack [_name, _uid];
} forEach _AllPlayersInfo;

_playerSelect = _players select _player;

_playerSelect params ["_name", "_uid"];

[_uid, _newrank] remoteExec ["DB_fnc_UpdateRankLevel", 2];
[] spawn DIALOG_fnc_loadRankMenu;

hint format ["le garde de %1 a été modifié!", _name];
{
	[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
} forEach allPlayers;