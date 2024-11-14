#include "macro.sqf"

params ["_SabaccTable", "_player"];

private _PlayerNumber = PlayerNumber(_player);

private _SandCard = [_SabaccTable, 0, _PlayerNumber] call SABACC_fnc_getPlayerCard;

private _BloodCard = [_SabaccTable, 1, _PlayerNumber] call SABACC_fnc_getPlayerCard;

private _cards = [_SandCard select 0, _BloodCard select 0];

private _texture = format["\cim_sabacc\data\CardsCombo\%1-%2.jpg", _SandCard select 0, _BloodCard select 0];

SetTexture_HideCard(_PlayerNumber, _texture);

[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%3 à les cartes :<br/><t size='7'><img image='cim_sabacc\data\CardsCombo\%1-%2.paa'/></t><br/><t color='#ffff00'>%4</t><br/><t color='#ff0000'>%5</t>.",
	_SandCard select 0,
	_BloodCard select 0,
	name _player,
	[_SandCard select 0, 0] call SABACC_fnc_getCardName,
	[_BloodCard select 0, 1] call SABACC_fnc_getCardName
])] remoteExec ["hintSilent", AllPlayer];

_player setVariable ["SABACC_FinalCards", _cards, true];

_cards