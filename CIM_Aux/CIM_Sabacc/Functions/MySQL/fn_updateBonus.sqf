params ["_uid", "_bonuslist"];

_query = format["sabacc_update_bonus:%1:%2", _uid, _bonuslist];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - sabacc_update_bonus : %2", _uid, _bonuslist];