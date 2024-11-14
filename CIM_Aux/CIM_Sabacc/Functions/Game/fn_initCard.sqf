#include "macro.sqf"

params ["_SabaccTable"];

{
	if (_x in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
		private _PlayerNumber = PlayerNumber(_x);

		private _SelectedSandCard = [_SabaccTable, 0, [_SabaccTable, 0] call SABACC_fnc_getNewCard, _PlayerNumber] call SABACC_fnc_setCard;
		private _SelectedBloodCard = [_SabaccTable, 1, [_SabaccTable, 1] call SABACC_fnc_getNewCard, _PlayerNumber] call SABACC_fnc_setCard;

		private _texture = format["\cim_sabacc\data\CardsCombo\%1-%2.jpg", _SelectedSandCard select 0, _SelectedBloodCard select 0];

		SetTexture_Card(_PlayerNumber, _texture);
	};
} forEach AllPlayer;

SetIndexDiscard(5);

private _SelectedSandCard = [_SabaccTable, 0, [_SabaccTable, 0] call SABACC_fnc_getNewCard, IndexDiscard] call SABACC_fnc_setCard;
private _SelectedBloodCard = [_SabaccTable, 1, [_SabaccTable, 1] call SABACC_fnc_getNewCard, IndexDiscard] call SABACC_fnc_setCard;

private _texture = format["\cim_sabacc\data\Computer\%1-%2.jpg", _SelectedSandCard select 0, _SelectedBloodCard select 0];

SetTexture_Computer(_texture);

IndexDiscard_Add_1;