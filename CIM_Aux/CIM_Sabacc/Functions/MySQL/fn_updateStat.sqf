params ["_uid", "_stat"];

_query = format["sabacc_update_stat:%1:%2", _uid, _stat];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - sabacc_update_stat : %2", _uid, _stat];