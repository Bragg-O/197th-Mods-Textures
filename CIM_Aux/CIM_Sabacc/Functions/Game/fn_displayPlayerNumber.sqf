#include "macro.sqf"

params ["_SabaccTable", "_currentPlayer", "_tour"];

{
	private _PlayerNumber = PlayerNumber(_x);

	private _texture = format ["\cim_sabacc\data\PlayerNumber\%1-%2.jpg", _tour, _PlayerNumber];

	SetTexture_PlayerNumber(_PlayerNumber, _texture);

	if (_currentPlayer == _x) then {
		private _type = "C";
		private _round = _tour;

		if (_tour == 4) then {
			_type = "R";
			_round = "";
		};

		private _texture = format ["\cim_sabacc\data\CurrentPlayer\%1%2-%3.jpg", _type, _round, _PlayerNumber];

		SetTexture_CurrentPlayer(_texture);
	};
} forEach AllPlayer;