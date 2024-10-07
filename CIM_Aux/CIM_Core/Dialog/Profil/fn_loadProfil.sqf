params ["_player"];

closeDialog 0;

uiSleep 0.1;

createDialog "CIM_Dialog_Profil";

_levels = [
	["Cadet", "\CIM_Core\Dialog\Profil\data\cadet_ca.paa"], // 0
	["Trooper", "\CIM_Core\Dialog\Profil\data\trooper_ca.paa"], // 1
	["Vétéran", "\CIM_Core\Dialog\Profil\data\vet_ca.paa"], // 2
	["Caporal", "\CIM_Core\Dialog\Profil\data\caporal_ca.paa"], // 3
	["Sergent", "\CIM_Core\Dialog\Profil\data\sergent_ca.paa"], // 4
	["2nd Lieutenant", "\CIM_Core\Dialog\Profil\data\2ndlieutenant_ca.paa"], // 5
	["1st Lieutenant", "\CIM_Core\Dialog\Profil\data\1stlieutenant_ca.paa"], // 6
	["Capitaine", "\CIM_Core\Dialog\Profil\data\capitaine_ca.paa"]// 7
];

// player load
_name = name _player;
_rank = _player getVariable ["CIM_rankLevel", 0];
_rankicon = (_levels select _rank) select 1;

((findDisplay -1) displayCtrl 2000) ctrlSetText _name;
((findDisplay -1) displayCtrl 2100) ctrlSetText _rankicon;

uiSleep 10;

closeDialog 0;