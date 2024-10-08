if !(isDedicated) exitWith {
	diag_log "extDB3 - need to be on Serveur!";
};

if (isServer) then {
	[] spawn DB_fnc_server_initialization;
};