if (!hasInterface) exitWith {};
if (!isMultiplayer) exitWith {};
waitUntil {
	// to prevent MP / JIP issues
	sleep 5;
	!isNull player
};

_statement = {
	[player, getPlayerUID player] remoteExecCall ["DB_fnc_syncPlayer", 2];
	hintSilent parseText "<img size='1.5' image='\CIM_Core\Functions\MySQL\Data\synchroniser_ca.paa'/><br/><t color='#ffffff' size='1'>Synchronisation terminée</t>";
};

_condition = {
	serverName != ""
};

_action0 = [" Synchroniser", " Synchroniser", "\CIM_Core\Functions\MySQL\Data\synchroniser_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action0] call ace_interact_menu_fnc_addActionToClass;