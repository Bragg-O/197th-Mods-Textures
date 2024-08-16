if (!isMultiplayer) exitWith {
	   diag_log "extDB3 - need to be in Multiplayer!";
};

if (isServer) then {
	[] spawn DB_fnc_server_initialization;
};