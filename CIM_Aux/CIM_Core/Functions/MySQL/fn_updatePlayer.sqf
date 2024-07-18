params ["_uid", "_info"];

_query = format["update_player:%1:%2", _info, _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["extDB3 - %1 update to database", _uid];