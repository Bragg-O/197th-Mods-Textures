private "_ret";

// Vérifiez si la base de données est déjà connectée
if (isNil { uiNamespace getVariable "JL_persistence_protocolID" }) then {
    /* get extDB3 version */
    _ret = "extDB3" callExtension "9:VERSION";
    if (_ret == "") exitWith {
        diag_log "extDB3: Initialization failed"
    };
    diag_log format ["extDB3 - Version %1", _ret];
    
    /* Add database */
    _ret = call compile ("extDB3" callExtension format["9:ADD_DATABASE:%1", "cim"]);
    if (_ret select 0 == 0) exitWith {
        diag_log format ["extDB3 - Database error %1", _ret]
    };
    diag_log "extDB3 - Database connected";
    
    /* Add custom SQL protocol */
    _ret = call compile ("extDB3" callExtension format["9:ADD_DATABASE_PROTOCOL:%1:SQL_CUSTOM:%2:requete.ini", "cim", "sqf"]);
    if (_ret select 0 == 0) exitWith {
        diag_log format ["extDB3 - Database error %1", _ret]
    };
    diag_log "extDB3 - Custom protocol added";
    
    /* lock database */
    "extDB3" callExtension "9:LOCK";
    diag_log "extDB3 - Database locked";
    
    /* Store protocol ID */
    uiNamespace setVariable ["JL_persistence_protocolID", _ret];
} else {
    // La base de données est déjà connectée et le protocole est en place
    diag_log "extDB3 - Database already connected";
};