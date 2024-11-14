#include "macro.sqf"

params ["_dice", "_SabaccTable", "_player"];

private _playercards = _player getVariable "SABACC_FinalCards";

private _color = 0;

if ((_playercards select 0) == "I") then {
	_color = 0;
} else {
	_color = 1;
};

private _PlayerNumber = PlayerNumber(_player);

_playercards set [_color, _dice];

private _texture = format["\cim_sabacc\data\CardsCombo\%1-%2.jpg", _playercards select 0, _playercards select 1];

SetTexture_HideCard(_PlayerNumber, _texture);

[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%3 à les cartes :<br/><t size='7'><img image='cim_sabacc\data\CardsCombo\%1-%2.paa'/></t><br/><t color='#ffff00'>%4</t><br/><t color='#ff0000'>%5</t>.",
	_playercards select 0,
	_playercards select 1,
	name _player,
	[_playercards select 0, 0] call SABACC_fnc_getCardName,
	[_playercards select 1, 1] call SABACC_fnc_getCardName
])] remoteExec ["hintSilent", AllPlayer];

_player setVariable ["SABACC_FinalCards", _playercards, true];