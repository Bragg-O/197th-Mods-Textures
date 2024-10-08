params ["_type"];

_player = lbCurSel 5000;
if (_player == -1) exitWith {
	hint "Vous devez sélectionner un joueur !";
};

_level = lbCurSel 5100;
if (_level == -1) exitWith {
	hint "Vous devez sélectionner une permission !";
};

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
		[] spawn DIALOG_fnc_loadPermMenuMedecin;
	};
	case "IngLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateIngLevel", 2];
		[] spawn DIALOG_fnc_loadPermMenuSapeur;
	};
	case "PilotLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdatePilotLevel", 2];
		[] spawn DIALOG_fnc_loadPermMenuPilote;
	};
	case "CrewLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateCrewmanLevel", 2];
		[] spawn DIALOG_fnc_loadPermMenuCrewman;
	};
	case "DonatorLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateDonatorLevel", 2];
		[] spawn DIALOG_fnc_loadPermMenuDonator;
	};
	case "ZeusLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateZeusLevel", 2];
		[] spawn DIALOG_fnc_loadPermMenuZeus;
	};
	case "AdminLevel": {
		[_uid, _level] remoteExec ["DB_fnc_UpdateAdminLevel", 2];
		[] spawn DIALOG_fnc_loadPermMenuAdmin;
	};
};

hint format ["le %1 de %2 a été modifié", _type, _name];

{
	[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
} forEach allPlayers;