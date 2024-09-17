params ["_title"];

createDialog "CIM_Dialog2";

((findDisplay -1) displayCtrl 2000) ctrlSetText _title;

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

private _AllPlayersInfo = CIM_GetAllPlayersInfo;

_players = [];

{
	_name = _x select 1;
	_money = _x select 2;
	_players pushBack format ["%1 | %2", _name, _money];
} forEach _AllPlayersInfo;

{
	((findDisplay -1) displayCtrl 2100) lbAdd _x;
} forEach _players;