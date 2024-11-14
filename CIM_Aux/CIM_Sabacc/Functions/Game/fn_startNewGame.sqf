#include "macro.sqf"

params ["_SabaccTable", "_gameprice"];

private _bonuslist = BonusList;

{
	[_x, _SabaccTable] call SABACC_fnc_initBonus;
} forEach AllPlayer;

private _manche = 0;

{
	private _playerNumber = PlayerNumber(_x);
	_x setVariable ["SABACC_SabaccEndOfRound", false, true];
	_x setVariable ["SABACC_LastRoundPassed", false, true];
	_SabaccTable setVariable ["Player" + str _playerNumber + "IsEliminate", false, true];
} forEach AllPlayer;

while { !((count ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) <= 1) } do {
	_manche = _manche + 1;

	SetTexture_PlayerNumber(1, "\cim_sabacc\data\Background1.jpg");
	SetTexture_PlayerNumber(2, "\cim_sabacc\data\Background1.jpg");
	SetTexture_PlayerNumber(3, "\cim_sabacc\data\Background1.jpg");
	SetTexture_PlayerNumber(4, "\cim_sabacc\data\Background1.jpg");

	SetTexture_Card(1, "\cim_sabacc\data\CardsCombo\0-0.jpg");
	SetTexture_Card(2, "\cim_sabacc\data\CardsCombo\0-0.jpg");
	SetTexture_Card(3, "\cim_sabacc\data\CardsCombo\0-0.jpg");
	SetTexture_Card(4, "\cim_sabacc\data\CardsCombo\0-0.jpg");

	SetTexture_HideCard(1, "\cim_sabacc\data\CardsCombo\0-0.jpg");
	SetTexture_HideCard(2, "\cim_sabacc\data\CardsCombo\0-0.jpg");
	SetTexture_HideCard(3, "\cim_sabacc\data\CardsCombo\0-0.jpg");
	SetTexture_HideCard(4, "\cim_sabacc\data\CardsCombo\0-0.jpg");

	SetTexture_CurrentPlayer("\cim_sabacc\data\Background1.jpg");

	SetTexture_Computer("\cim_sabacc\data\Computer\0-0.jpg");

	private _cards = BaseCards;
	SetSabaccCards(_cards);

	[_SabaccTable] call SABACC_fnc_initCard;

	private _currentPlayerIndex = floor (random count AllPlayer);
	private _currentPlayer = AllPlayer select _currentPlayerIndex;

	_SabaccTable setVariable ["Cards", _cards, true];

	for "_tour" from 1 to 4 do {
		uiSleep 1;
		if (_tour == 4) then {
			(format ["SABACC - Reaveal de la manche %1", _manche]) remoteExec ["systemChat", AllPlayer];
			for "_p" from 0 to (count AllPlayer - 1) do {
				_nextIndex = (_currentPlayerIndex + _p) mod count AllPlayer;
				_player = AllPlayer select _nextIndex;

				if (_player in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
					(format ["SABACC - C'est au tour de %1 pour le reaveal", name _player]) remoteExec ["systemChat", AllPlayer];

					[_SabaccTable, _player, _tour] call SABACC_fnc_displayPlayerNumber;

					private _playercards = [_SabaccTable, _player] call SABACC_fnc_revealCards;

					{
						if (_x == "I") then {
							[_SabaccTable, _player] spawn SABACC_fnc_launchDice;

							private _PCards = _player getVariable "SABACC_FinalCards";

							[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%3 dois lancée les dés.<br/><t size='7'><img image='cim_sabacc\data\CardsCombo\%1-%2.paa'/></t>",
								_PCards select 0,
								_PCards select 1,
								name _player
							])] remoteExec ["hintSilent", AllPlayer];

							waitUntil {
								uiSleep 1;
								!(((_player getVariable "SABACC_FinalCards") select _forEachIndex) == "I")
							};
						};
					} forEach _playercards;

					{
						[_SabaccTable, PlayerNumber(_x)] spawn SABACC_fnc_updateDisplay;
					} forEach AllPlayer;

					[_SabaccTable, _player] call SABACC_fnc_calculatePlayerScore;

					uiSleep 5;
				};
			};

			private _sortedScores = [_SabaccTable] call SABACC_fnc_calculateWinner;

			uiSleep 1;

			_playerwinner = [];

			{
				_x params ["_classement", "_player"];
				if (_player in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
					private _playerNumber = PlayerNumber(_player);
					if (_classement == 1) then {
						private _chipsmise = [0, _SabaccTable, _playerNumber] call SABACC_fnc_getChips;
						[0, 0, _SabaccTable, _playerNumber] call SABACC_fnc_setChips;
						[1, _chipsmise, _SabaccTable, _playerNumber] call SABACC_fnc_addChips;
						_playerwinner pushBack _player;
					} else {
						[0, 0, _SabaccTable, _playerNumber] call SABACC_fnc_setChips;
						[1, 1, _SabaccTable, _playerNumber] call SABACC_fnc_removeChips;
					};
				};
			} forEach _sortedScores;

			private _winnerlist = "";

			{
				if ((count _playerwinner) == 1) then {
					_winnerlist = _winnerlist + name _x;
				} else {
					_winnerlist = _winnerlist + name _x + " et ";
				};
			} forEach _playerwinner;

			(format ["SABACC - %1 gagne la manche %2", _winnerlist, _manche]) remoteExec ["systemChat", AllPlayer];

			[(parseText format["<t size='7'><img image='cim_sabacc\data\CardsCombo\S-S.paa'/></t><br/><t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 gagne la manche %2<br/>",
				_winnerlist,
				_manche
			])] remoteExec ["hintSilent", AllPlayer];

			uiSleep 1;

			{
				if (_x in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
					private _playerNumber = PlayerNumber(_x);
					private _chipsreserve = [1, _SabaccTable, _playerNumber] call SABACC_fnc_getChips;

					_x setVariable ["SABACC_SabaccEndOfRound", false, true];
					_x setVariable ["SABACC_LastRoundPassed", false, true];

					if (_chipsreserve < 1) then {
						(format ["SABACC - %1 est éliminé", name _x]) remoteExec ["systemChat", AllPlayer];
						_SabaccTable setVariable ["Player" + str _playerNumber + "IsEliminate", true, true];
						_x setVariable ["SABACC_SabaccEndOfRound", true, true];
						_x setVariable ["SABACC_LastRoundPassed", true, true];
					};

					_x setVariable ["SABACC_FinalCards", [], true];
				};
			} forEach AllPlayer;

			uiSleep 10;
		} else {
			if !((Player1 getVariable ["SABACC_LastRoundPassed", false]) && (Player2 getVariable ["SABACC_LastRoundPassed", false]) && (Player3 getVariable ["SABACC_LastRoundPassed", false]) && (Player4 getVariable ["SABACC_LastRoundPassed", false])) then {
				(format ["SABACC - Tour %1/3", _tour]) remoteExec ["systemChat", AllPlayer];
			};
			for "_p" from 0 to (count AllPlayer - 1) do {
				_nextIndex = (_currentPlayerIndex + _p) mod count AllPlayer;
				_player = AllPlayer select _nextIndex;

				if (_player in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
					if (_SabaccTable getVariable ["SABACC_Embargo", false]) then {
						_SabaccTable setVariable ["SABACC_Embargo", false, true];
						(format ["SABACC - %1 à passer son tour à cause du bonus : Embargo.", name _player]) remoteExec ["systemChat", AllPlayer];
						[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à passer son tour à cause du bonus : Embargo.<br/>",
							name _player
						])] remoteExec ["hintSilent", AllPlayer];
						uiSleep 1;
					} else {
						[_player, _SabaccTable] spawn {
							params ["_player", "_SabaccTable"];
							for "_i" from 240 to 0 step -1 do {
								if (_i in [10, 30, 60, 120, 240]) then {
									(format ["SABACC - C'est au tour de %1! Il reste %2s", name _player, _i]) remoteExec ["systemChat", AllPlayer];
								};
								if (_player getVariable ["SABACC_SabaccEndOfRound", false]) exitWith {};
								uiSleep 1;
							};
							if (_player getVariable ["SABACC_SabaccEndOfRound", false]) exitWith {};
							_player setVariable ["SABACC_SabaccEndOfRound", true, true];
							_player setVariable ["SABACC_LastRoundPassed", true, true];
							[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>Le tour de %1 a été passé!<br/>",
								name _player
							])] remoteExec ["hintSilent", AllPlayer];
							(format ["SABACC - Le tour de %1 a été passé!", name _player]) remoteExec ["systemChat", AllPlayer];
						};

						[_SabaccTable, _player, _tour] call SABACC_fnc_displayPlayerNumber;

						_computer = Player_Computer(_player);

						if ((Player1 getVariable ["SABACC_LastRoundPassed", false]) && (Player2 getVariable ["SABACC_LastRoundPassed", false]) && (Player3 getVariable ["SABACC_LastRoundPassed", false]) && (Player4 getVariable ["SABACC_LastRoundPassed", false])) exitWith {
							_player setVariable ["SABACC_SabaccEndOfRound", true, true];
							removeAllActions _computer;
						};

						_player setVariable ["SABACC_LastRoundPassed", false, true];

						_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Bonus ===</t>", {}, [], 1, true, true, "", "((_target getVariable 'player') == _this) && ((_this getvariable ['SABACC_SabaccBonus1Available', false]) || (_this getvariable ['SABACC_SabaccBonus2Available', false]))", 5];

						_actionId = _computer addAction ["Bonus1", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							[1, _arguments select 0, _arguments select 1] spawn SABACC_fnc_useBonus;
						}, [_SabaccTable, _player], 1, true, true, "", "((_target getVariable 'player') == _this) && (_this getvariable ['SABACC_SabaccBonus1Available', false])", 5];
						_computer setUserActionText [_actionId, format["<t color='#ffffff'>Utiliser le bonus : %1</t>", _bonuslist select PlayerBonus1(_player)], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_actionId = _computer addAction ["Bonus2", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							[2, _arguments select 0, _arguments select 1] spawn SABACC_fnc_useBonus;
						}, [_SabaccTable, _player], 1, true, true, "", "((_target getVariable 'player') == _this) && (_this getvariable ['SABACC_SabaccBonus2Available', false])", 5];
						_computer setUserActionText [_actionId, format["<t color='#ffffff'>Utiliser le bonus : %1</t>", _bonuslist select PlayerBonus2(_player)], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Carte ===</t>", {}, [], 1, true, true, "", "((_target getVariable 'player') == _this) && (([1, (_this getVariable 'SabaccTable'), (_this getVariable 'PlayerNumber')] call SABACC_fnc_getChips) >= 1)", 5];

						_actionId = _computer addAction ["Piocher une carte de SABLE (SAND)", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							[0, _arguments select 0, _arguments select 1] spawn SABACC_fnc_pickCard;
							if ((_arguments select 1) getVariable ["SABACC_FreeTrain", false]) then {
								(_arguments select 1) setVariable ["SABACC_FreeTrain", false, true];
							} else {
								[1, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
								[0, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_addChips;
							};
						}, [_SabaccTable, _player], 1, true, true, "", "((_target getVariable 'player') == _this) && (([1, (_this getVariable 'SabaccTable'), (_this getVariable 'PlayerNumber')] call SABACC_fnc_getChips) >= 1)", 5];
						_computer setUserActionText [_actionId, "<t color='#ffff00'>Piocher une carte de SABLE (SAND)</t>", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_actionId = _computer addAction ["Piocher une carte de SANG (BLOOD)", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							[1, _arguments select 0, _arguments select 1] spawn SABACC_fnc_pickCard;
							if ((_arguments select 1) getVariable ["SABACC_FreeTrain", false]) then {
								(_arguments select 1) setVariable ["SABACC_FreeTrain", false, true];
							} else {
								[1, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
								[0, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_addChips;
							};
						}, [_SabaccTable, _player], 1, true, true, "", "((_target getVariable 'player') == _this) && (([1, (_this getVariable 'SabaccTable'), (_this getVariable 'PlayerNumber')] call SABACC_fnc_getChips) >= 1)", 5];
						_computer setUserActionText [_actionId, "<t color='#ff0000'>Piocher une carte de SANG (BLOOD)</t>", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_actionId = _computer addAction ["Piocher la derniere carte défausser de SABLE (SAND)", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							[0, _arguments select 0, _arguments select 1] spawn SABACC_fnc_pickCardDiscard;
							if ((_arguments select 1) getVariable ["SABACC_FreeTrain", false]) then {
								(_arguments select 1) setVariable ["SABACC_FreeTrain", false, true];
							} else {
								[1, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
								[0, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_addChips;
							};
						}, [_SabaccTable, _player], 1, true, true, "", "((_target getVariable 'player') == _this) && (([1, (_this getVariable 'SabaccTable'), (_this getVariable 'PlayerNumber')] call SABACC_fnc_getChips) >= 1)", 5];
						_computer setUserActionText [_actionId, "<t color='#ffff00'>Piocher la derniere carte défausser de SABLE (SAND)</t>", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_actionId = _computer addAction ["Piocher la derniere carte défausser de SANG (BLOOD)", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							[1, _arguments select 0, _arguments select 1] spawn SABACC_fnc_pickCardDiscard;
							if ((_arguments select 1) getVariable ["SABACC_FreeTrain", false]) then {
								(_arguments select 1) setVariable ["SABACC_FreeTrain", false, true];
							} else {
								[1, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
								[0, 1, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_addChips;
							};
						}, [_SabaccTable, _player], 1, true, true, "", "((_target getVariable 'player') == _this) && (([1, (_this getVariable 'SabaccTable'), (_this getVariable 'PlayerNumber')] call SABACC_fnc_getChips) >= 1)", 5];
						_computer setUserActionText [_actionId, "<t color='#ff0000'>Piocher la derniere carte défausser de SANG (BLOOD)</t>", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Autre ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

						_actionId = _computer addAction ["Passer son tour", {
							params ["_target", "_caller", "_actionId", "_arguments"];
							_arguments params ["_SabaccTable", "_computer"];
							_caller setVariable ["SABACC_SabaccEndOfRound", true, true];
							_caller setVariable ["SABACC_LastRoundPassed", true, true];
							[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à passer son tour.<br/>",
								name _caller
							])] remoteExec ["hintSilent", AllPlayer];
							(format ["SABACC - %1 à passer son tour.", name _caller]) remoteExec ["systemChat", AllPlayer];
							removeAllActions _computer;
						}, [_SabaccTable, _computer], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
						_computer setUserActionText [_actionId, "<t color='#ffffff'>Passer son tour</t>", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

						_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

						waitUntil {
							uiSleep 5;
							_player getVariable ["SABACC_SabaccEndOfRound", false]
						};

						{
							[_SabaccTable, PlayerNumber(_x)] spawn SABACC_fnc_updateDisplay;
						} forEach AllPlayer;

						_player setVariable ["SABACC_SabaccEndOfRound", false, true];

						removeAllActions _computer;
					};
				};
			};
		};
	};
};

{
	if (_x in ([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer)) then {
		[getPlayerUID _x, (_x getVariable "SABACC_SabaccCredit") + (_gameprice * 2)] remoteExec ["SABACC_fnc_updateJeton", 2];

		[(format ["SABACC - Vous avez gagner %1 Jetons.", (_gameprice * 2)])] remoteExec ["systemChat", _x];
	};
} forEach AllPlayer;

[(parseText format["<t size='7'><img image='cim_sabacc\data\CardsCombo\S-S.paa'/></t><br/><t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>Partie terminé</br>%1 à gagner la Partie</br>Nouvelle partie en cours de préparation...",
	name (([_SabaccTable] call SABACC_fnc_getNotEliminatePlayer) select 0)
])] remoteExec ["hintSilent", AllPlayer];

uiSleep 2;

{
	[_SabaccTable, _x] spawn {
		params ["_SabaccTable", "_player"];
		(Player_Computer(_player)) setVariable ["player", objNull, true];
		sleep 10;
		["SABACC - Vous avez la possibilité de vous joindre à nouveau à une table de sabacc."] remoteExec ["systemChat", AllPlayer];
		_player setVariable ["SABACC_PlaySabacc", false, true];
	};
} forEach AllPlayer;

uiSleep 5;

[_SabaccTable, _gameprice] spawn SABACC_fnc_initNewGame;