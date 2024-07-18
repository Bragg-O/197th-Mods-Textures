params ["_object"];

removeAllActions _object;

{
	if (_x distance _object < 5) then {
		[_x, _object] spawn CIM_onUseHealTerminal;
	};
} forEach allPlayers;

uiSleep 6;

[_object] call CIM_fnc_initHealTerminal;