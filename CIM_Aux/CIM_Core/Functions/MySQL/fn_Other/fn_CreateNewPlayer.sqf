params ["_uid", "_name"];

_date = (format["%1-%2-%3", (systemTimeUTC select 0), (systemTimeUTC select 1), (systemTimeUTC select 2)]);

_query = format["create_new_player:%1:%2:%3", _uid, _name, _date];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["%1 - create_new_player : %2 - %3", _uid, _name, _date];