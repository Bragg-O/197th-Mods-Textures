if (!hasInterface) exitWith {};
if !(missionNamespace getVariable ["CIM_CheckFileLoaded", false]) exitWith {};
waitUntil {
	// to prevent MP / JIP issues
	sleep 5;
	!isNull player
};

_statement = {
	[] spawn {
		closeDialog 0;
		uiSleep 0.1;
		createDialog "CIM_Dialog_Shield";
	};
};

_condition = {
	player getVariable ["CIM_RankLevel", 0] >= 4 or player getVariable ["CIM_ZeusLevel", 0] >= 2 or !isMultiplayer
};

_action0 = [" Contrôle des shields", " Contrôle des shields", "\CIM_Core\Dialog\Shield\Data\datapad_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action0] call ace_interact_menu_fnc_addActionToClass;