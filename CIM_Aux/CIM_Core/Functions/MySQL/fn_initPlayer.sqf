params ["_player", "_uid"];

if (!isMultiplayer) exitWith {
	diag_log "extDB3 - need to be in Multiplayer!";
};

private _playerExists = [_uid] call DB_fnc_PlayerCountForUid;

if (_playerExists == 0) then {
	[_uid, (name _player)] call DB_fnc_CreateNewPlayer;
} else {
	_loadout = [_uid] call DB_fnc_ExtractLoadout;
	_player setUnitLoadout _loadout;

	_isIng = [_uid] call DB_fnc_ExtractActualIng;
	_player setUnitTrait ["engineer", _isIng];
	_player setUnitTrait ["explosiveSpecialist", _isIng];

	_isMedic = [_uid] call DB_fnc_ExtractActualMedic;
	_player setUnitTrait ["medic", _isMedic];
	if (_isMedic) then {
		_player setVariable ["ace_medical_medicclass", 2, true];
	};
};
while { true } do {
	[_player, _uid] call DB_fnc_syncPlayer;
	uiSleep 300;
};