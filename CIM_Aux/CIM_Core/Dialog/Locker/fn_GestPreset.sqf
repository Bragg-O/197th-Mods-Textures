params ["_switch"];

private _presetselected = lbCurSel 1000;

private _presetname = ctrlText 1200;

private _PresetLocker = player getVariable ["CIM_PresetLocker", []];

uiSleep 0.1;

switch (_switch) do {
	case "New": {
		if (_presetname == "") exitWith {
			hint "Vous devez donner un nom à votre preset !";
		};
		_PresetLocker pushBack [_presetname, (getUnitLoadout player)];

		[getPlayerUID player, _PresetLocker] remoteExec ["DB_fnc_UpdatePresetLocker", 2];
	};
	case "Load": {
		if (_presetselected == -1) exitWith {
			hint "Vous devez sélectionner un preset !";
		};
		_PresetLockerSelected = _PresetLocker select _presetselected;

		_PresetLockerSelected params ["_name", "_loadout"];

		player setUnitLoadout _loadout;
	};
	case "Delete": {
		if (_presetselected == -1) exitWith {
			hint "Vous devez sélectionner un preset !";
		};

		_PresetLockerSelected = _PresetLocker select _presetselected;

		_PresetLocker deleteAt _presetselected;

		[getPlayerUID player, _PresetLocker] remoteExec ["DB_fnc_UpdatePresetLocker", 2];
	};
};

{
	[_x, getPlayerUID _x] remoteExec ["DB_fnc_syncPlayer", 2];
} forEach allPlayers;

[] spawn DIALOG_fnc_loadGestPreset;