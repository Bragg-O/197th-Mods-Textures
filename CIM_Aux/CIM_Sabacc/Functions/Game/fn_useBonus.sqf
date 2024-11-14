#include "macro.sqf"

params ["_selected", "_SabaccTable", "_player"];

private _playerNumber = PlayerNumber(_player);

private _computer = Player_Computer(_player);

private _bonus = 0;

if (_selected == 1) then {
	_bonus = PlayerBonus1(_player);
	_player setVariable ["SABACC_SabaccBonus1Available", false, true];
} else {
	_bonus = PlayerBonus2(_player);
	_player setVariable ["SABACC_SabaccBonus2Available", false, true];
};

switch (_bonus) do {
	case 1: {
		// Remboursement supplémentaire : Récupérez 3 jetons.
		private _max = 0;
		switch ([0, _SabaccTable, _playerNumber] call SABACC_fnc_getChips) do {
			case 0: {};
			case 1: {
				_max = 1;
			};
			case 2: {
				_max = 2;
			};
			default {
				_max = 3;
			};
		};
		[0, _max, _SabaccTable, _playerNumber] call SABACC_fnc_removeChips;
		[1, _max, _SabaccTable, _playerNumber] call SABACC_fnc_addChips;

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Remboursement supplémentaire</t><br/>Il récupère %2 jeton de mise.",
			name _player,
			_max
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 2: {
		// Audit : Choisissez un joueur qui a au moins 3 jetons de mise. Il doit payer une taxe de 3 jetons de mise.
		private _playerCanPay = [];
		private _actionIDlist = [];
		{
			if (([1, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_getChips) >= 3) then {
				_playerCanPay pushBack _x;
			};
		} forEach AllPlayer;

		_actionID = _computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Utiliser le bonus : Audit ===</t>", {}, [], -1, true, true, "", "(_target getVariable 'player') == _this", 5];
		_actionIDlist pushBack _actionID;
		{
			_actionID = _computer addAction [format["Utiliser le bonus : Audit sur %1", name _x], {
				params ["_target", "_caller", "_actionId", "_arguments"];
				[1, 3, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
				[0, 3, _arguments select 0, ((_arguments select 1) getVariable "PlayerNumber")] call SABACC_fnc_addChips;
				_caller setVariable ["SABACC_BonusUse", true, true];
				[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Audit</t><br/>%2 doit ajouter 3 jetons de mise à son pot.",
					name _player,
					name (_arguments select 1)
				])] remoteExec ["hintSilent", AllPlayer];
			}, [_SabaccTable, _x], -1, true, true, "", "(_target getVariable 'player') == _this", 5];
			_actionIDlist pushBack _actionID;
		} forEach _playerCanPay;

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Audit</t><br/>Il doit choisir un joueur qui a au moins 3 jetons de mise. Il doit ajouter 3 jetons de mise à son pot.",
			name _player
		])] remoteExec ["hintSilent", AllPlayer];

		waitUntil {
			uiSleep 1;
			_player getVariable ["SABACC_BonusUse", false]
		};
		_player setVariable ["SABACC_BonusUse", false, true];
		{
			_computer removeAction _x;
		} forEach _actionIDlist;
	};

	case 3: {}; // TODO - Grosse arnaque : Fixez la valeur de l’imposteur à 6 jusqu’à la prochaine révélation.

	case 4: {}; // TODO - Transaction directe : Choisissez un joueur et échangez vos cartes avec lui.

	case 5: {}; // TODO - Réduction : La valeur du sylop est fixée à 0 jusqu’à la prochaine révélation.

	case 6: {
		// Embargo : Le prochain joueur doit passer son tour.
		_SabaccTable setVariable ["SABACC_Embargo", true, true];

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Embargo</t></br>>Le prochain joueur doit passer son tour.",
			name _player
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 7: {
		// Détournement de fonds : Prenez 1 jeton dans le pot de chaque joueur et ajoutez-les à votre pot.
		{
			if (_x != _player) then {
				private _chips = [0, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_getChips;
				[0, _chips, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
				[1, _chips, _SabaccTable, _playerNumber] call SABACC_fnc_addChips;
			};
		} forEach AllPlayer;

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Détournement de fonds</t><br/>Il récupère 1 jeton de mise dans le pot de chaque joueur.",
			name _player
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 8: {}; // TODO - Epuisement : Choisissez un joueur. Il doit défausser sa main et piocher à nouveau.

	case 9: {
		// Tirage gratuit : Ignorez le coût pour tirer une carte à ce tour
		_player setVariable ["SABACC_FreeTrain", true, true];

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Tirage gratuit</t></br>Il ne payera pas de jeton de mise pour tirer une carte à ce tour.",
			name _player
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 10: {}; // TODO - Immunité : Les Bonus n’ont pas d’effet sur vous jusqu'à la prochaine révélation.

	case 11: {
		// Raid : Les autres joueurs en position de tenir doivent payer une taxe de 2 jetons de mise.
		{
			if (_x != _player) then {
				if (([0, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_getChips) >= 2) then {
					[0, 2, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_addChips;
					[1, 2, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
				};
			};
		} forEach AllPlayer;

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Raid</t><br/>Tous les joueurs doivent payer un 2 jeton de mise.",
			name _player
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 12: {
		// Régulation : Les autres joueurs doivent payer une taxe de 1 jeton de mise.
		{
			if (_x != _player) then {
				if (([0, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_getChips) >= 1) then {
					[0, 1, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_addChips;
					[1, 1, _SabaccTable, (_x getVariable "PlayerNumber")] call SABACC_fnc_removeChips;
				};
			};
		} forEach AllPlayer;

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Régulation</t><br/>Tous les joueurs doivent payer un 1 jeton de mise.",
			name _player
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 13: {
		// Remboursement : Récupérez 2 jetons
		private _max = 0;
		switch ([0, _SabaccTable, _playerNumber] call SABACC_fnc_getChips) do {
			case 0: {};
			case 1: {
				_max = 1;
			};
			default {
				_max = 2;
			};
		};
		[0, _max, _SabaccTable, _playerNumber] call SABACC_fnc_removeChips;
		[1, _max, _SabaccTable, _playerNumber] call SABACC_fnc_addChips;

		[(parseText format["<t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>%1 à utiliser le bonus :<br/><t size='1.25'>Remboursement</t><br/>Il récupère %2 jeton de mise.",
			name _player,
			_max
		])] remoteExec ["hintSilent", AllPlayer];
	};

	case 14: {}; // TODO - Réévaluation : Lancez 2 dés. Choisissez un résultat comme dernière main la plus forte de Sabacc.

	case 15: {}; // TODO - Droit spécial : Choisissez un joueur. Il doit payer une taxe de 2 jetons de mise.

	case 16: {}; // TODO - Fraude comptable : La force des mains de Sabacc est inversée jusqu’à la prochaine révélation.

	default {};
};