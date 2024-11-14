params ["_uid", "_name"];

_query = format["sabacc_update_player:%1:%2", _uid, _name];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - sabacc_update_player : %2", _uid, _name];