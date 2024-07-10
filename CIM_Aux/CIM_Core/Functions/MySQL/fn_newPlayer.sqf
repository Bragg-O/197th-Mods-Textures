params ["_uid"];

_query = format["new_player:%1", _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["extDB3 - %1 add to database", _uid];