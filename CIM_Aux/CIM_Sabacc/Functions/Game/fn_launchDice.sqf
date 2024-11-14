#include "macro.sqf"

params ["_SabaccTable", "_player"];

private _computer = Player_Computer(_player);

_player setVariable ["SABACC_HaveChosen1", false, true];
_player setVariable ["SABACC_HaveChosen2", false, true];

_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Lancer de dés ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

_actionId = _computer addAction ["Lancer les dés", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_arguments params ["_SabaccTable", "_player"];
	_player setVariable ["SABACC_HaveChosen1", true, true];

	removeAllActions _target;

	_dice = ["", ""];

	for "_i" from 1 to 20 do {
		private _dice1 = selectRandom ["1", "2", "3", "4", "5", "6"];
		private _dice2 = selectRandom ["1", "2", "3", "4", "5", "6"];

		_dice set [0, _dice1];
		_dice set [1, _dice2];

		private _texture = format["\cim_sabacc\data\Computer\Dice\%1-%2.jpg", _dice1, _dice2];
		SetTexture_Computer(_texture);

		uiSleep 0.2;
	};

	_target addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== Choix du dé ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

	_actionId = _target addAction ["Prendre le dé 1", {
		params ["_target", "_caller", "_actionId", "_arguments"];
		_arguments call SABACC_fnc_revealDice;
		(_arguments select 2) setVariable ["SABACC_HaveChosen2", true, true];
		removeAllActions _target;
	}, [_dice select 0, _SabaccTable, _player], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
	_target setUserActionText [_actionId, format["<t color='#ffffff'>Prendre le %1</t>", _dice select 0], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

	_actionId = _target addAction ["Prendre le dé 2", {
		params ["_target", "_caller", "_actionId", "_arguments"];
		_arguments call SABACC_fnc_revealDice;
		(_arguments select 2) setVariable ["SABACC_HaveChosen2", true, true];
		removeAllActions _target;
	}, [_dice select 1, _SabaccTable, _player], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
	_target setUserActionText [_actionId, format["<t color='#ffffff'>Prendre le %1</t>", _dice select 1], "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

	_target addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

	uiSleep 60;

	if !(_player getVariable ["SABACC_HaveChosen2", false]) then {
		_player setVariable ["SABACC_HaveChosen2", true, true];
		removeAllActions _target;
		[(selectRandom _dice), _SabaccTable, _player] call SABACC_fnc_revealDice;
	};
}, [_SabaccTable, _player], 1, true, true, "", "(_target getVariable 'player') == _this", 5];
_computer setUserActionText [_actionId, "<t color='#ffffff'>Lancer les dés</t>", "<img image='\a3\ui_f\data\igui\cfg\simpletasks\types\interact_ca.paa'/>"];

_computer addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 1, true, true, "", "(_target getVariable 'player') == _this", 5];

uiSleep 60;

if !(_player getVariable ["SABACC_HaveChosen1", false]) then {
	_player setVariable ["SABACC_HaveChosen1", true, true];
	removeAllActions _computer;
	[(selectRandom ["1", "2", "3", "4", "5", "6"]), _SabaccTable, _player] call SABACC_fnc_revealDice;
};