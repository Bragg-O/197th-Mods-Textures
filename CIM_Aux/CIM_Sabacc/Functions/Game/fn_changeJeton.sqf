params ["_screen"];

_screen setObjectTextureGlobal [0, "\cim_sabacc\data\Money\Change.jpg"];

// consulter ça solde de jeton
_screen addAction ["<img size = '1.2' image='cim_sabacc\data\Money\Jeton.paa'/> Consulter votre solde de jeton", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[parseText format ["<img size = '1.2' image='cim_sabacc\data\Money\Jeton.paa'/><br/><br/>Vous avez %1 jeton", _caller getvariable ["SABACC_Jeton", 0]]] remoteExec ["hint", _caller];
}, [], 4, true, true, "", "true", 5];

_screen addAction ["<t size = '1.2' color='#00ffff'>=== === ===</t>", {}, [], 4, true, true, "", "", 5];

{
	_screen addAction [format ["<img size = '1.2' image='cim_sabacc\data\Money\Credit.paa'/> -> <img size = '1.2' image='cim_sabacc\data\Money\Jeton.paa'/> Changer %1 crédits en %2 jeton", _x * 1, _x * 8], {
		params ["_target", "_caller", "_actionId", "_arguments"];
		if ((_caller getVariable ['CIM_Money', 0]) < (_arguments * 1)) exitWith {
			[("Vous n'avez pas assez de crédit !")] remoteExec ["hint", _caller];
		};
		[parseText format ["<img size = '1.2' image='cim_sabacc\data\Money\Jeton.paa'/><br/><br/>Vous avez %1 jeton", ((_caller getvariable ["SABACC_Jeton", 0]) + (_arguments * 8))]] remoteExec ["hint", _caller];
		[getPlayerUID _caller, ((_caller getvariable ["CIM_Money", 0]) - (_arguments * 1))] remoteExec ["DB_fnc_UpdateMoney", 2];
		[getPlayerUID _caller, ((_caller getvariable ["SABACC_Jeton", 0]) + (_arguments * 8))] remoteExec ["SABACC_fnc_UpdateJeton", 2];
		format ["Vous avez changer %1 crédits en %2 jeton", _arguments * 1, _arguments * 8] remoteExec ["systemChat", _caller];
		{
			[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
		} forEach allPlayers;
	}, _x, 3, false, true, "", "true", 5];

	_screen addAction [format ["<img size = '1.2' image='cim_sabacc\data\Money\Jeton.paa'/> -> <img size = '1.2' image='cim_sabacc\data\Money\Credit.paa'/> Changer %1 jeton en %2 crédits", _x * 8, _x * 1], {
		params ["_target", "_caller", "_actionId", "_arguments"];
		if ((_caller getVariable ['SABACC_Jeton', 0]) < (_arguments * 8)) exitWith {
			[("Vous n'avez pas assez de jeton !")] remoteExec ["hint", _caller];
		};
		[parseText format ["<img size = '1.2' image='cim_sabacc\data\Money\Jeton.paa'/><br/><br/>Vous avez %1 jeton", ((_caller getvariable ["SABACC_Jeton", 0]) - (_arguments * 8))]] remoteExec ["hint", _caller];
		[getPlayerUID _caller, ((_caller getvariable ["SABACC_Jeton", 0]) - (_arguments * 8))] remoteExec ["SABACC_fnc_UpdateJeton", 2];
		[getPlayerUID _caller, ((_caller getvariable ["CIM_Money", 0]) + (_arguments * 1))] remoteExec ["DB_fnc_UpdateMoney", 2];
		format ["Vous avez changer %1 jeton en %2 crédits", _arguments * 8, _arguments * 1] remoteExec ["systemChat", _caller];
		{
			[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
		} forEach allPlayers;
	}, _x, 2, false, true, "", "true", 5];
} forEach [5, 10, 15, 20, 25];