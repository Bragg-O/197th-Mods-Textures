if (!hasInterface) exitWith {};
if (!isMultiplayer) exitWith {};
waitUntil {
	// to prevent MP / JIP issues
	sleep 5;
	!isNull player
};

_statement = {
	createDialog "CIM_Dialog_Perm";
};

_condition = {
	(player getVariable ["CIM_AdminLevel", 0] >= 2) or (player getVariable ["CIM_ZeusLevel", 0] >= 3) or (player getVariable ["CIM_CrewLevel", 0] >= 2) or (player getVariable ["CIM_PilotLevel", 0] >= 3) or (player getVariable ["CIM_IngLevel", 0] >= 2) or (player getVariable ["CIM_MedicLevel", 0] >= 2)
};

_action0 = [" Atribution de permission", " Atribution de permission", "\CIM_Core\Functions\MySQL\Data\synchroniser_ca.paa", _statement, _condition] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action0] call ace_interact_menu_fnc_addActionToClass;