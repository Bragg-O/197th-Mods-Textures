createDialog "CIM_Dialog_Perm";

((findDisplay -1) displayCtrl 5200) ctrlSetText "Atribution de permission (Admin)";

// _return = [[uid, name, money, rank_level, medic_level, ing_level, pilot_level, crewman_level, donator_level, zeus_level, admin_level], ...]

private _AllPlayersInfo = CIM_GetAllPlayersInfo;

_players = [];

{
	_name = _x select 1;
	_level = _x select 6;
	switch (_level) do {
		case 0: {
			_level = "";
		};
		case 1: {
			_level = " (Artiste)";
		};
		case 2: {
			_level = " (Modérateur)";
		};
		case 3: {
			_level = " (Fondateur)";
		};
	};
	_players pushBack format ["%1%2", _name, _level];
} forEach _AllPlayersInfo;

{
	((findDisplay -1) displayCtrl 5000) lbAdd _x;
} forEach _players;

_levels = ["", "Artiste", "Modérateur", "Fondateur"];

{
	((findDisplay -1) displayCtrl 5100) lbAdd _x;
} forEach _levels;

((findDisplay -1) displayCtrl 5101) ctrlAddEventHandler ["ButtonDown", {
	["AdminLevel"] spawn CIM_fnc_permUpdate;
}];