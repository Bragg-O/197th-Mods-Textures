params ["_object"];

_object addAction ["Atribution de grade", {
	[] spawn DIALOG_fnc_loadRankMenu;
}, nil, 1.5, false, false, "", '(player getVariable ["CIM_AdminLevel", 0] >= 2) or (player getVariable ["CIM_RankLevel", 0] >= 5)'];