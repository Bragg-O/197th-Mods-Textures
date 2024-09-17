private _text = ctrlText 2400;
private _nameindex = lbCurSel 2100;

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

private _AllPlayersInfo = CIM_GetAllPlayersInfo;

_players = [];

{
	_uid = _x select 0;
	_name = _x select 1;
	_money = _x select 2;
	_players pushBack [_name, _money, _uid]
} forEach _AllPlayersInfo;

_playerSelect = _players select _nameindex;

_playerSelect params ["_name", "_money", "_uid"];

hint format ["Vous avez ajouté %1 crédit à %2", _text, _name];

_newActualMoney = call compile format["%1 + %2", _money, _text];

[_uid, _newActualMoney] remoteExec ["DB_fnc_UpdateMoney", 2];

{
	[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
} forEach allPlayers;