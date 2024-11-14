#include "macro.sqf"

params ["_SabaccTable", "_gameprice"];

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

SetTexture_Bonus(1, "\cim_sabacc\data\Bonus\0-0.jpg");
SetTexture_Bonus(2, "\cim_sabacc\data\Bonus\0-0.jpg");
SetTexture_Bonus(3, "\cim_sabacc\data\Bonus\0-0.jpg");
SetTexture_Bonus(4, "\cim_sabacc\data\Bonus\0-0.jpg");

SetTexture_CurrentPlayer("\cim_sabacc\data\Background1.jpg");

SetTexture_Computer("\cim_sabacc\data\Computer\0-0.jpg");

for "_i" from 60 to 0 step -1 do {
	{
		removeAllActions _x;
		_x addAction [format ["En cours de préparation... (%1s restantes)", _i], {}, [], 1, true, true, "", "true", 5];
	} forEach [Computer_Player1, Computer_Player2, Computer_Player3, Computer_Player4];
	uiSleep 1;
};
[_SabaccTable] call SABACC_fnc_initChips;

{
	removeAllActions _x;
} forEach [Computer_Player1, Computer_Player2, Computer_Player3, Computer_Player4];

{
	_x setVariable ["player", objNull, true];
	_x addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Table de Sabacc ===</t>", {}, [], 1, true, true, "", "true", 5];

	_actionId = _x addAction ["Join the game", {
		params ["_target", "_caller", "_actionId", "_arguments"];

		_playerjeton = _caller getvariable ["SABACC_Jeton", 0];

		if ((_caller getVariable ['SABACC_Jeton', 0]) < (_arguments)) exitWith {
			"SABACC - Vous n'avez pas assez de jeton pour rejoindre la partie." remoteExec ["systemChat", _caller];
		};
		[getPlayerUID _caller, (_caller getvariable ["SABACC_Jeton", 0]) - _arguments] remoteExec ["SABACC_fnc_updateJeton", 2];

		[(format ["SABACC - Vous avez été débité de %1 Jetons.", _arguments])] remoteExec ["systemChat", _caller];
		_target setVariable ["player", _caller, true];
		_caller setVariable ["SABACC_PlaySabacc", true, true];
	}, _gameprice, 1, true, true, "", "(isNull (_target getVariable 'player')) && !(_this getVariable ['SABACC_PlaySabacc', false])", 5];
	_x setUserActionText [_actionId, format["<t color='#00ff00'>[J]</t> Rejoindre la partie (Mise : <t color='#ffff00'>%1 Jetons</t>)", _gameprice], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

	_actionId = _x addAction ["Left the game", {
		params ["_target", "_caller", "_actionId", "_arguments"];

		[getPlayerUID _caller, (_caller getvariable ["SABACC_Jeton", 0]) + _arguments] remoteExec ["SABACC_fnc_updateJeton", 2];

		[(format ["SABACC - Vous avez été remboursé de %1 Jetons.", _arguments])] remoteExec ["systemChat", _caller];
		_target setVariable ["player", objNull, true];
		sleep 60;
		_caller setVariable ["SABACC_PlaySabacc", false, true];
		"SABACC - Vous avez la possibilité de vous joindre à nouveau à une table de sabacc." remoteExec ["systemChat", _caller];
	}, _gameprice, 1, true, true, "", "(_target getVariable 'player') == _this", 5];
	_x setUserActionText [_actionId, "<t color='#ff0000'>[Q]</t> Quitter la partie", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

	_x addAction ["En attente de joueur supplémentaire", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

	_x addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 1, true, true, "", "true", 5];
} forEach [Computer_Player1, Computer_Player2, Computer_Player3, Computer_Player4];

waitUntil {
	uiSleep 1;
	((!isNull Player1) or (!isNull Player2) or (!isNull Player3) or (!isNull Player4))
};

waitUntil {
	uiSleep 2;

	private _playerlist = [];

	{
		if (!isNull _x) then {
			_playerlist pushBack _x;
		};
	} forEach AllPlayer;

	[(parseText format [ "<t size='7'><img image='cim_sabacc\data\CardsCombo\S-S.paa'/></t><br/><t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>Vous allez faire une partie avec :<br/>- %1<br/>- %2<br/>- %3<br/>- %4<br/><t color='#ffff00'>En attente de joueur supplémentaire.</t>",
		if (isNull Player1) then {
			"N/A"
		} else {
			name Player1
		},
		if (isNull Player2) then {
			"N/A"
		} else {
			name Player2
		},
		if (isNull Player3) then {
			"N/A"
		} else {
			name Player3
		},
		if (isNull Player4) then {
			"N/A"
		} else {
			name Player4
		}
	])] remoteExec ["hintSilent", _playerlist];
	((!isNull Player1) and (!isNull Player2) and (!isNull Player3) and (!isNull Player4))
};

{
	removeAllActions _x;
} forEach [Computer_Player1, Computer_Player2, Computer_Player3, Computer_Player4];

{
	_x addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Table de Sabacc ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

	_x setVariable ["playerReady", false, true];
	_actionId = _x addAction ["ready", {
		params ["_target", "_caller", "_actionId", "_arguments"];
		_target setVariable ["playerReady", true, true];
	}, [], 1, true, true, "", "(_target getVariable 'player') == _this && (_target getVariable 'playerReady') == false", 5];
	_x setUserActionText [_actionId, "<t color='#00ff00'>[Y]</t> Je suis prêt à commencer", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

	_actionId = _x addAction ["Left the game", {
		params ["_target", "_caller", "_actionId", "_arguments"];

		[getPlayerUID _caller, (_caller getvariable ["SABACC_Jeton", 0]) + _arguments] remoteExec ["SABACC_fnc_updateJeton", 2];

		[(format ["SABACC - Vous avez été remboursé de %1 Jetons.", _arguments])] remoteExec ["systemChat", _caller];
		_target setVariable ["player", objNull, true];
		sleep 60;
		_caller setVariable ["SABACC_PlaySabacc", false, true];
		"SABACC - Vous avez la possibilité de vous joindre à nouveau à une table de sabacc." remoteExec ["systemChat", _caller];
	}, _gameprice, 1, true, true, "", "(_target getVariable 'player') == _this && (_target getVariable 'playerReady') == false", 5];
	_x setUserActionText [_actionId, "<t color='#ff0000'>[N]</t> Quitter la partie", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

	_x addAction ["En attente des autres joueurs", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this && (_target getVariable 'playerReady') == true", 5];

	_x addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
} forEach [Computer_Player1, Computer_Player2, Computer_Player3, Computer_Player4];

waitUntil {
	uiSleep 2;
	if !((!isNull Player1) and (!isNull Player2) and (!isNull Player3) and (!isNull Player4)) exitWith {
		true
	};

	[(parseText format["<t size='7'><img image='cim_sabacc\data\CardsCombo\S-S.paa'/></t><br/><t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>Vous allez faire une partie avec :<br/>- %1 [%2]<br/>- %3 [%4]<br/>- %5 [%6]<br/>- %7 [%8]<br/><t color='#00ff00'>Merci de vous dirigez vers votre écran.</t>",
		name Player1,
		if (Computer_Player1 getVariable "playerReady") then {
			"<t color='#00ff00'>OK</t>"
		} else {
			"<t color='#ff0000'>X</t>"
		},
		name Player2,
		if (Computer_Player2 getVariable "playerReady") then {
			"<t color='#00ff00'>OK</t>"
		} else {
			"<t color='#ff0000'>X</t>"
		},
		name Player3,
		if (Computer_Player3 getVariable "playerReady") then {
			"<t color='#00ff00'>OK</t>"
		} else {
			"<t color='#ff0000'>X</t>"
		},
		name Player4,
		if (Computer_Player4 getVariable "playerReady") then {
			"<t color='#00ff00'>OK</t>"
		} else {
			"<t color='#ff0000'>X</t>"
		}
	])] remoteExec ["hintSilent", AllPlayer];

	(Computer_Player1 getVariable "playerReady") && (Computer_Player2 getVariable "playerReady") && (Computer_Player3 getVariable "playerReady") && (Computer_Player4 getVariable "playerReady")
};

{
	removeAllActions _x;
} forEach [Computer_Player1, Computer_Player2, Computer_Player3, Computer_Player4];

if !((!isNull Player1) and (!isNull Player2) and (!isNull Player3) and (!isNull Player4)) exitWith {
	{
		[getPlayerUID _x, (_x getvariable ["SABACC_Jeton", 0]) + _gameprice] remoteExec ["SABACC_fnc_updateJeton", 2];

		_x setVariable ["SABACC_PlaySabacc", false, true];
	} forEach AllPlayer;

	[(format ["SABACC - Vous avez été remboursé de %1 Jetons.", _gameprice])] remoteExec ["systemChat", AllPlayer];

	["SABACC - Vous avez la possibilité de vous joindre à nouveau à une table de sabacc."] remoteExec ["systemChat", AllPlayer];

	[(parseText format["<t size='7'><img image='cim_sabacc\data\CardsCombo\S-S.paa'/></t><br/><t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>Partie annulée</t></br>Nouvelle partie en cours de préparation...",
		name Player1,
		name Player2,
		name Player3,
		name Player4
	])] remoteExec ["hintSilent", AllPlayer];

	uiSleep 2;

	[("")] remoteExec ["hintSilent", AllPlayer];
	[_SabaccTable, _gameprice] spawn SABACC_fnc_initNewGame;
};

for "_i" from 5 to 0 step -1 do {
	uiSleep 1;

	[(parseText format["<t size='7'><img image='cim_sabacc\data\CardsCombo\S-S.paa'/></t><br/><t size='1.25' color='#ff0000'>Table de Sabacc</t><br/>Vous allez faire une partie avec :<br/>- %1<br/>- %2<br/>- %3<br/>- %4<br/><t color='#00ff00'>Début de la partie dans %5s.</t><br/><t color='#ff0000'>Merci de rester devant votre écran.</t>",
		name Player1,
		name Player2,
		name Player3,
		name Player4,
		_i
	])] remoteExec ["hintSilent", AllPlayer];
};

Player1 setVariable ["PlayerNumber", 1, true];
Player2 setVariable ["PlayerNumber", 2, true];
Player3 setVariable ["PlayerNumber", 3, true];
Player4 setVariable ["PlayerNumber", 4, true];

Player1 setVariable ["SabaccComputer", Computer_Player1, true];
Player2 setVariable ["SabaccComputer", Computer_Player2, true];
Player3 setVariable ["SabaccComputer", Computer_Player3, true];
Player4 setVariable ["SabaccComputer", Computer_Player4, true];

Player1 setVariable ["SabaccTable", _SabaccTable, true];
Player2 setVariable ["SabaccTable", _SabaccTable, true];
Player3 setVariable ["SabaccTable", _SabaccTable, true];
Player4 setVariable ["SabaccTable", _SabaccTable, true];

{
	private _PlayerNumber = PlayerNumber(_x);
	[1, 8, _SabaccTable, _PlayerNumber] call SABACC_fnc_setChips;
	[_x] spawn SABACC_fnc_3rdPersonBlocker;
} forEach AllPlayer;

[("")] remoteExec ["hintSilent", AllPlayer];

[_SabaccTable, _gameprice] spawn SABACC_fnc_startNewGame;