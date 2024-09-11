params ["_uid"];

_query = format["extract_player_info_money:%1", _uid];
_return = [_query, 2, true] call DB_fnc_asyncCall;

_return = ((_return select 0) select 0);

diag_log format["%1 - extract_player_info_money : %2", _uid, _return];
_return;