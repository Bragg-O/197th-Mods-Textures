if (!hasInterface) exitWith {};

waitUntil {
	// to prevent MP / JIP issues
	sleep 5;
	!isNull player
};

if (isNil "CIM_EarplugsActive") then {
	CIM_EarplugsActive = 0;
	1 fadeSound 1;
	// Handle respawn
	player addEventHandler ["Respawn", {
		CIM_EarplugsActive = 0;
		1 fadeSound 1;
	}];
};

_statement = {
	[_player] call CIM_fnc_switchEarPlugs;
};
_condition0 = {
	CIM_EarplugsActive == 0
};
_condition1 = {
	CIM_EarplugsActive == 1
};

_action0 = [" Enclencher les filtres audio", " Enclencher les filtres audio", "\CIM_Core\Functions\PlayerScripts\Data\waves_ca.paa", _statement, _condition0] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action0] call ace_interact_menu_fnc_addActionToClass;

_action1 = [" Désactiver les filtres audio", " Désactiver les filtres audio", "\CIM_Core\Functions\PlayerScripts\Data\unwaves_ca.paa", _statement, _condition1] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action1] call ace_interact_menu_fnc_addActionToClass;

[player] spawn CIM_fnc_checkEarPlugs;