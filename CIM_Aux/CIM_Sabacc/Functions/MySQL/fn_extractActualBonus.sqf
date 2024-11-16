params ["_uid"];

_query = format["sabacc_extract_actual_bonus:%1", _uid];
_return = [_query, 2, true] call DB_fnc_asyncCall;

_return = (_return select 0);

diag_log format["%1 - sabacc_extract_actual_bonus : %2", _uid, _return];
_return;