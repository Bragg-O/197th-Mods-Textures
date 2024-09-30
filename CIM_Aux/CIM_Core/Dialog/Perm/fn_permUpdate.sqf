params ["_type"];

_player = lbCurSel 5000;
if (_player == -1) exitWith {
	hint "Vous devez sélectionner un joueur !";
};

_level = lbCurSel 5100;
if (_level == -1) exitWith {
	hint "Vous devez sélectionner une permission !";
};

closeDialog 0;

private _AllPlayersInfo = CIM_GetAllPlayersInfo;

_players = [];

{
	_uid = _x select 0;
	_name = _x select 1;
	_players pushBack [_name, _uid]
} forEach _AllPlayersInfo;

_playerSelect = _players select _player;

_playerSelect params ["_name", "_uid"];

switch (_type) do {
	case "MedicLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateMedicLevel", 2];
	};
	case "IngLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateIngLevel", 2];
	};
	case "PilotLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdatePilotLevel", 2];
	};
	case "CrewLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateCrewmanLevel", 2];
	};
	case "DonatorLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateDonatorLevel", 2];
	};
	case "ZeusLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateZeusLevel", 2];
	};
	case "AdminLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateAdminLevel", 2];
	};
};

uiSleep 1;

hint format ["%1 a été modifier", _name];

{
	[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
} forEach allPlayers;

uiSleep 1;
createDialog "CIM_Dialog_Perm";