closeDialog 0;

uiSleep 0.1;

createDialog "CIM_Dialog_ATM";

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

private _AllPlayersInfo = missionNamespace getVariable ["CIM_GetAllPlayersInfo", []];

_players = [];

{
	_name = _x select 1;
	_players pushBack format ["%1", _name];
} forEach _AllPlayersInfo;

{
	((findDisplay -1) displayCtrl 6000) lbAdd _x;
} forEach _players;