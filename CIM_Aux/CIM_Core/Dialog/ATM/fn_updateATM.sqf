private _nameindex = lbCurSel 6000;

private _AllPlayersInfo = missionNamespace getVariable ["CIM_GetAllPlayersInfo", []];

_players = [];

{
	_money = _x select 2;
	_players pushBack format ["%1", _money];
} forEach _AllPlayersInfo;

_playerSelect = _players select _nameindex;

_text = format ["Solde du compte : %1", _playerSelect];

((findDisplay -1) displayCtrl 6300) ctrlSetText _text;