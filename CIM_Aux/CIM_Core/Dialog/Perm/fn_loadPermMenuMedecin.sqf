closeDialog 0;

uisleep 0.1;

createDialog "CIM_Dialog_Perm";

((findDisplay -1) displayCtrl 5200) ctrlSetText "Atribution de permission (Médecin)";

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

private _AllPlayersInfo = CIM_GetAllPlayersInfo;

_players = [];

{
	_name = _x select 1;
	_level = _x select 4;
	switch (_level) do {
		case 0: {
			_level = "";
		};
		case 1: {
			_level = " (Médecin)";
		};
		case 2: {
			_level = " (Formateur)";
		};
	};
	_players pushBack format ["%1%2", _name, _level];
} forEach _AllPlayersInfo;

{
	((findDisplay -1) displayCtrl 5000) lbAdd _x;
} forEach _players;

_levels = ["Vide", "Médecin", "Formateur"];

{
	((findDisplay -1) displayCtrl 5100) lbAdd _x;
} forEach _levels;

((findDisplay -1) displayCtrl 5101) ctrlAddEventHandler ["ButtonDown", {
	["MedicLevel"] spawn DIALOG_fnc_permUpdate;
}];