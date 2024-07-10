private "_ret";

if (isNil {
	uiNamespace getVariable "JL_persistence_protocolID"
}) then
{
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
		
	/* Compute a random protocol ID */
		JL_persistence_protocolID = compileFinal str round(random(999999));
		
	/* Add custom SQL protocol */
		_ret = call compile ("extDB3" callExtension format["9:ADD_DATABASE_PROTOCOL:%1:SQL_CUSTOM:%2:requete.ini", "cim", call JL_persistence_protocolID]);
		if (_ret select 0 == 0) exitWith {
			diag_log format ["extDB3 - Database error %1", _ret]
		};
		diag_log "extDB3 - Custom protocol added";
		
	/* lock database */
		"extDB3" callExtension "9:LOCK";
		diag_log "extDB3 - Database locked";
		
	/* Store protocol ID */
		uiNamespace setVariable ["JL_persistence_protocolID", JL_persistence_protocolID];
	} else {
		JL_persistence_protocolID = compileFinal str (uiNamespace getVariable "JL_persistence_protocolID");
		diag_log "extDB3 - Database already connected";
	/* Initialisation */
	};