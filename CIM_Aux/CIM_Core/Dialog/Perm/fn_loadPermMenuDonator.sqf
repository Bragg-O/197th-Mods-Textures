closeDialog 0;

uisleep 0.1;

createDialog "CIM_Dialog_Perm";

((findDisplay -1) displayCtrl 5200) ctrlSetText "Atribution de permission (Donateur)";

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

private _AllPlayersInfo = missionNamespace getVariable ["CIM_GetAllPlayersInfo", []];

_players = [];

{
	_name = _x select 1;
	_level = _x select 8;
	switch (_level) do {
		case 0: {
			_level = "";
		};
		case 1: {
			_level = " (x1.34)";
		};
		case 2: {
			_level = " (x1.67)";
		};
		case 3: {
			_level = " (x2)";
		};
	};
	_players pushBack format ["%1%2", _name, _level];
} forEach _AllPlayersInfo;

{
	((findDisplay -1) displayCtrl 5000) lbAdd _x;
} forEach _players;

_levels = ["0 (x0)", "1 / 2 / 3 (x1.34)", "4 / 5 / 6 (x1.67)", "7 / 8 / 9 (x2)"];

{
	((findDisplay -1) displayCtrl 5100) lbAdd _x;
} forEach _levels;

((findDisplay -1) displayCtrl 5101) ctrlAddEventHandler ["ButtonDown", {
	["DonatorLevel"] spawn DIALOG_fnc_permUpdate;
}];