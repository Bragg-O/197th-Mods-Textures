#include "macro.sqf"

params ["_Color", "_SabaccTable", "_player"];

private _ColorText = "#ffffff";

private _Colorlettre = "";

private _PlayerNumber = PlayerNumber(_player);

private _computer = Player_Computer(_player);

private _OldCard = [_SabaccTable, _Color, _PlayerNumber] call SABACC_fnc_getPlayerCard;

private _NewCard = [_SabaccTable, _Color] call SABACC_fnc_getLastCardDiscard;

_player setVariable ["SABACC_HaveChosen", false, true];

removeAllActions _computer;

switch (_Color) do {
	case 0: {
		_ColorText = "#ffff00";
		_Colorlettre = "Sand";
	};
	case 1:	{
		_ColorText = "#ff0000";
		_Colorlettre = "Blood";
	};
};

[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%3 à pris la carte :<br/><t size='7'><img image='cim_sabacc\data\Cards\%1-%2.paa'/></t><br/><t color='%4'>%5</t>.",
	_NewCard select 0,
	_Colorlettre,
	name _player,
	_ColorText,
	[_NewCard select 0, _Color] call SABACC_fnc_getCardName
])] remoteExec ["hintSilent", AllPlayer];

_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Défausser une carte ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

_actionId = _computer addAction ["Garder la carte : _NewCard", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_arguments call SABACC_fnc_discardCard;
	_caller setVariable ["SABACC_HaveChosen", true, true];
}, [_NewCard, _OldCard, _Color, _SabaccTable, _player], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
_computer setUserActionText [_actionId, format["<t color='%1'>Garder la carte : %2</t>", _ColorText, [_NewCard select 0, _Color] call SABACC_fnc_getCardName], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

_actionId = _computer addAction ["Garder la carte : _OldCard", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_arguments call SABACC_fnc_discardCard;
	_caller setVariable ["SABACC_HaveChosen", true, true];
}, [_OldCard, _NewCard, _Color, _SabaccTable, _player], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
_computer setUserActionText [_actionId, format["<t color='%1'>Garder la carte : %2</t>", _ColorText, [_OldCard select 0, _Color] call SABACC_fnc_getCardName], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

waitUntil {
	uiSleep 5;
	_player getVariable ["SABACC_SabaccEndOfRound", false]
};

if !(_player getVariable ["SABACC_HaveChosen", false]) then {
	[_NewCard, _OldCard, _Color, _SabaccTable, _player] call SABACC_fnc_discardCard;
};