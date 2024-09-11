params ["_uid", "_money"];

_query = format["update_player_info_money:%1:%2", _money, _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - update_player_info_money : %2", _uid, _money];