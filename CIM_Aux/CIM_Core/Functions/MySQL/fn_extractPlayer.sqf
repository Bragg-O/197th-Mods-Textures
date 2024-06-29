params ["_uid"];

_query = format["extract_player:%1", _uid];
_return = [2, _query] call DB_fnc_asyncCall;

diag_log format["extDB3 - %1 extracted from database", _uid];
_return;