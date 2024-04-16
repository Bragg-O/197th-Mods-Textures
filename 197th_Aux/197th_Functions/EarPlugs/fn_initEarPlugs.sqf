/*
	Author: Bragg
	
	Description:
	This code snippet waits for 5 seconds to ensure multiplayer and join-in-progress issues are prevented.
	It then checks if a variable named "CIM_EarplugsActive" is nil and initializes it to 0 if it is.
	It also sets up a sound effect and a respawn event handler for the player.
	Finally, it triggers a function called "CIM_fnc_checkEarPlugs".
	
	Parameter(s):
	0: Object
	
	Example:
	[player] call CIM_fnc_initEarPlugs;
*/

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

_action0 = ["Enclencher les filtres audio", "Filtres audio", "\Data\waves_ca.paa", _statement, _condition0] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action0] call ace_interact_menu_fnc_addActionToClass;

_action1 = ["Enclencher les filtres audio", "Filtres audio", "\Data\unwaves_ca.paa", _statement, _condition1] call ace_interact_menu_fnc_createAction;
[(typeOf player), 1, ["ACE_SelfActions"], _action1] call ace_interact_menu_fnc_addActionToClass;

[player] spawn CIM_fnc_checkEarPlugs;