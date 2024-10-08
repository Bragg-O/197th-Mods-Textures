params ["_object"];

_object addAction ["Ouvir la Banque", {
	[] spawn DIALOG_fnc_loadATM;
}, nil, 1.5, false, false, "", 'true'];