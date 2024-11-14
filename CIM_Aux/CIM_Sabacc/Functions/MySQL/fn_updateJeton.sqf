params ["_uid", "_jeton"];

_query = format["sabacc_update_jeton:%1:%2", _uid, _jeton];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - sabacc_update_jeton : %2", _uid, _jeton];