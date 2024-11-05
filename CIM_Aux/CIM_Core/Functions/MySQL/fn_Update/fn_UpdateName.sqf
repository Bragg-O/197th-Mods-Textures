params ["_uid", "_name"];

if (_name = "") exitWith {};

_query = format["update_player_info_name:%1:%2", _name, _uid];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - update_player_info_name : %2", _uid, _name];