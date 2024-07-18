params ["_uid"];

_query = format["check_player_exists:%1", _uid];
_return = [_query, 2, true] call DB_fnc_asyncCall;

diag_log format["extDB3 - check %1 from database", _uid];
_return