params ["_uid", "_lastview"];

_query = format["update_player_info_last_view:%1:%2", _lastview, _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - update_player_info_last_view : %2", _uid, _lastview];