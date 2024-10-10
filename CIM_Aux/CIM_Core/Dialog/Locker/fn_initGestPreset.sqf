params ["_object"];

_object addAction ["Ouvir le panneau de gestion des presets", {
	[] spawn DIALOG_fnc_loadGestPreset;
}, nil, 1.5, false, false, "", '(player getVariable ["CIM_LockerID", 0]) != "0"'];