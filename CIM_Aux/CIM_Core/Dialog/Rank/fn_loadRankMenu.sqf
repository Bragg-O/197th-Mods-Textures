closeDialog 0;

uiSleep 0.1;

createDialog "CIM_Dialog_Rank";

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

private _AllPlayersInfo = missionNamespace getVariable ["CIM_GetAllPlayersInfo", []];

_players = [];

_levels = [
	["Cadet", "\CIM_Core\Dialog\Rank\data\cadet_ca.paa"], // 0
	["Trooper", "\CIM_Core\Dialog\Rank\data\trooper_ca.paa"], // 1
	["Vétéran", "\CIM_Core\Dialog\Rank\data\vet_ca.paa"], // 2
	["Caporal", "\CIM_Core\Dialog\Rank\data\caporal_ca.paa"], // 3
	["Sergent", "\CIM_Core\Dialog\Rank\data\sergent_ca.paa"], // 4
	["2nd Lieutenant", "\CIM_Core\Dialog\Rank\data\2ndlieutenant_ca.paa"], // 5
	["1st Lieutenant", "\CIM_Core\Dialog\Rank\data\1stlieutenant_ca.paa"], // 6
	["Capitaine", "\CIM_Core\Dialog\Rank\data\capitaine_ca.paa"]// 7
];

// PlayerList load
{
	_name = _x select 1;
	_rank = _x select 3;
	_icon = (_levels select _rank) select 1;
	_players pushBack [_name, _icon];
} forEach _AllPlayersInfo;

{
	_x params ["_name", "_icon"];
	((findDisplay -1) displayCtrl 3000) lbAdd _name;
	((findDisplay -1) displayCtrl 3000) lbSetPicture [_forEachIndex, _icon];
	((findDisplay -1) displayCtrl 3000) lbSetPictureColor [_forEachIndex, [1, 1, 1, 1]];
} forEach _players;

// RankList load
{
	_x params ["_name", "_icon"];
	((findDisplay -1) displayCtrl 3100) lbAdd _name;
	((findDisplay -1) displayCtrl 3100) lbSetPicture [_forEachIndex, _icon];
	((findDisplay -1) displayCtrl 3100) lbSetPictureColor [_forEachIndex, [1, 1, 1, 1]];
} forEach _levels;