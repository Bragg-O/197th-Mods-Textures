params ["_uid", "_name"];

_query = format["update_player_info_loadout:%1:%2", _name, _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - update_player_info_loadout : %2", _uid, _name];