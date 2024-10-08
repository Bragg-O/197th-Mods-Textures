_query = "get_all_players_info:0";
_return = [_query, 2, true] call DB_fnc_asyncCall;
diag_log format["get_all_players_info : %1", _return];
// _return = [[uid, name, money, rank_level, medic_level, ing_level, pilot_level, crewman_level, donator_level, zeus_level, admin_level], ...]
_return;

CIM_GetAllPlayersInfo = _return;

publicVariable "CIM_GetAllPlayersInfo";