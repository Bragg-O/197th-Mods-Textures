#include "macro.sqf"

params ["_keepcard", "_discardcard", "_color", "_SabaccTable", "_player"];

_cards = SabaccCards;

private _subList = _cards select _color;

private _PlayerNumber = PlayerNumber(_player);

private _computer = Player_Computer(_player);

private _ColorText = "#ffffff";

private _Colorlettre = "";

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

removeAllActions _computer;

private _selecteddiscardcard = [];

[_SabaccTable, _Color, _keepcard, _PlayerNumber] call SABACC_fnc_setCard;

[_SabaccTable, _Color, _discardcard, IndexDiscard] call SABACC_fnc_setCard;

IndexDiscard_Add_1;

[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%3 à jeté la carte :<br/><t size='7'><img image='cim_sabacc\data\Cards\%1-%2.paa'/></t><br/><t color='%4'>%5</t>.",
	_discardcard select 0,
	_Colorlettre,
	name _player,
	_ColorText,
	[_discardcard select 0, _color] call SABACC_fnc_getCardName
])] remoteExec ["hintSilent", AllPlayer];

_player setVariable ["SABACC_SabaccEndOfRound", true, true];