params ["_screen"];

_screen setObjectTextureGlobal [0, "\cim_sabacc\data\Bonus\0-0.jpg"];

_screen addAction ["<img size = '1.2' image='cim_sabacc\data\CardsCombo\S-S.paa'/><t size = '1.2' color='#00ffff'> Sélectionner les bonus actif</t>", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[_target, _caller] spawn SABACC_fnc_BonusSelector;
	removeAllActions _target;
}, nil, 1.5, true, true, "", "true", 5, false, "", ""];