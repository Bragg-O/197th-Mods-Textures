params ["_uid", "_playername", "_position", "_equipment"];

_query = format["update_player:%1:%2:%3:%4", _uid, _playername, _position, _equipment];
[_query, 1] call DB_fnc_asyncCall;

diag_log format["extDB3 - %1 update to database", _uid];