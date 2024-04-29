/*
	Author: Bragg
	
	Description:
	This code snippet adds an event handler function CIM_fnc_onUnderFire to the event type "FiredNear" using the function CBA_fnc_addEventHandler.
	
	Parameter(s):
	null
	
	Example:
	[] call CIM_fnc_initUnderFire;
*/

["FiredNear", CIM_fnc_onUnderFire] call CBA_fnc_addEventHandler;