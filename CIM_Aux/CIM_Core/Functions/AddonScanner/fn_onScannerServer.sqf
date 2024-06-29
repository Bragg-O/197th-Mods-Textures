diag_log format ["[CIM | Addon Scanner] ----------- Init SERVER -----------"];

CIM_ActivatedAddons = [];
CIM_ActivatedAddons = activatedAddons call BIS_fnc_sortAlphabetically;

diag_log format ["[CIM | Addon Scanner] Activated Addons Count: %1", count CIM_ActivatedAddons];

_WhiteListAddons = getMissionConfigValue ["CIM_WhiteListAddons", []];
diag_log format ["[CIM | Addon Scanner] WhiteListed Addons Count: %1", count _WhiteListAddons];

{
	diag_log format ["[CIM | Addon Scanner] - WhiteListed Addon: %1", _x];
} forEach _WhiteListAddons;

_numberOfAddonsServer = getMissionConfigValue ["CIM_numberOfAddonsServer", 0];

diag_log format ["[CIM | Addon Scanner] Server Addons Count: %1", _numberOfAddonsServer];

publicVariable "CIM_ActivatedAddons";

diag_log format ["[CIM | Addon Scanner] ----------- End SERVER -----------"];