diag_log format ["[CIM | Addon Scanner] ----------- Init %1 -----------", profileName];

private _playerUID = getPlayerUID player;
private _debugUID = getMissionConfigValue ["enableDebugConsole", []];
private _debugAddonsScanner = false;
if (_playerUID in _debugUID) then {
	_debugAddonsScanner = true;
	diag_log format ["[CIM | Addon Scanner] Debug mode enabled"];
};

if (isNil "CIM_ActivatedAddons") exitWith {
	diag_log format ["[CIM | Addon Scanner] ERROR - CIM_ActivatedAddons not defined"];
	diag_log format ["[CIM | Addon Scanner] ----------- End %1 -----------", profileName];
	if (isServer || _debugAddonsScanner) exitWith {};
	systemChat "CIM_ActivatedAddons not found! (fn_ClientAddonScanner)";
};

_errorAddons = [];
_realerrorAddons = [];
_activatedAddons = [];
_WhiteListAddons = getMissionConfigValue ["CIM_WhiteListAddons", []];
_numberOfAddonsServer = getMissionConfigValue ["CIM_numberOfAddonsServer", 0];
_activatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;

diag_log format ["[CIM | Addon Scanner] Activated Addons Count: %1", count _activatedAddons];

if (((count _activatedAddons) + _numberOfAddonsServer) < count CIM_ActivatedAddons) exitWith {
	diag_log format ["[CIM | Addon Scanner] ERROR - Activated client addons is not equal to server addons"];
	diag_log format ["[CIM | Addon Scanner] ----------- End %1 -----------", profileName];

	if (isServer || _debugAddonsScanner) exitWith {};

	failMission "AddonScannerMissing";
};

{
	if (!(_x in _activatedAddons)) then {
		_errorAddons pushBack _x;
	};
} forEach _activatedAddons;

{
	if (!(_x in _WhiteListAddons)) then {
		_realerrorAddons pushBack _x;
	};
} forEach _errorAddons;

if (count _realerrorAddons != 0) exitWith {
	diag_log format ["[CIM | Addon Scanner] ERROR - Activated client addons is not equal to server addons"];
	diag_log format ["[CIM | Addon Scanner] ERROR - Activated Addons List:"];

	{
		diag_log format ["[CIM | Addon Scanner] ERROR - %1", _x];
	} forEach _realerrorAddons;

	diag_log format ["[CIM | Addon Scanner] ----------- End %1 -----------", profileName];

	if (isServer || _debugAddonsScanner) exitWith {};

	failMission "AddonScannerDetected";
};

diag_log format ["[CIM | Addon Scanner] All Activated client addons are allow"];
diag_log format ["[CIM | Addon Scanner] ----------- End %1 -----------", profileName];