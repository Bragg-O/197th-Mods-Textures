params ["_uid", "_level"];

_query = format["update_player_info_rank_level:%1:%2", _level, _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - update_player_info_rank_level : %2", _uid, _level];