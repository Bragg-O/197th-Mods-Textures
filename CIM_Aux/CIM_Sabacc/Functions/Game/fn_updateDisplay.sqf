#include "macro.sqf"

params ["_SabaccTable", "_playerNumber"];

if ((getPlayer(_playerNumber)) in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
	[_SabaccTable, _playerNumber] spawn {
		params ["_SabaccTable", "_playerNumber"];
		private _SelectedSandCard = [_SabaccTable, 0, _playerNumber] call SABACC_fnc_getPlayerCard;
		private _SelectedBloodCard = [_SabaccTable, 1, _playerNumber] call SABACC_fnc_getPlayerCard;
		uiSleep 0.1;
		private _texture = format["\cim_sabacc\data\CardsCombo\%1-%2.jpg", _SelectedSandCard select 0, _SelectedBloodCard select 0];
		SetTexture_Card(_PlayerNumber, _texture);
	};
};

[_SabaccTable] spawn {
	params ["_SabaccTable", "_PlayerNumber"];
	private _SelectedSandCard = [_SabaccTable, 0] call SABACC_fnc_getLastCardDiscard;
	private _SelectedBloodCard = [_SabaccTable, 1] call SABACC_fnc_getLastCardDiscard;
	uiSleep 0.1;
	private _texture = format["\cim_sabacc\data\Computer\%1-%2.jpg", _SelectedSandCard select 0, _SelectedBloodCard select 0];
	SetTexture_Computer(_texture);
};