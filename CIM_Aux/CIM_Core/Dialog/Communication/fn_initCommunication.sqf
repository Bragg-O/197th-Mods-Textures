params ["_object"];

_object addAction ["Ouvir le panneau de communication", {
	[] spawn DIALOG_fnc_loadCommunication;
}, nil, 1.5, false, false, "", 'true'];