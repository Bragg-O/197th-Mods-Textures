params ["_object"];

removeAllActions _object;

{
	[_x] spawn CIM_onUseHealTerminal;
} forEach (_object nearEntities ["Man", 5]);

uiSleep 5;

[_object] call CIM_fnc_initHealTerminal;