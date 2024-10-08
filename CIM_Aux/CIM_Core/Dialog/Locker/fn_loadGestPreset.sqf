closeDialog 0;

uiSleep 0.1;

createDialog "CIM_Dialog_GestPreset";

[player, getPlayerUID player] remoteExec ["DB_fnc_syncPlayer", 2];

uiSleep 0.1;

_PresetLocker = player getVariable ["CIM_PresetLocker", []];

{
	_x params ["_name", "_loadout"];
	((findDisplay -1) displayCtrl 1000) lbAdd _name;
} forEach _PresetLocker;

_equipementTexte = parseText format [
	"===== Armes =====<br/>" +
	"<br/>" +
	"<br/>" +
	"<br/>" +
	"<br/>" +
	"===== Casque =====<br/>" +
	"<br/>" +
	"===== Uniforme =====<br/>" +
	"<br/>" +
	"===== Veste =====<br/>" +
	"<br/>" +
	"===== Sac à dos =====<br/>" +
	"<br/>"
];

((findDisplay -1) displayCtrl 1100) ctrlSetStructuredText _equipementTexte;