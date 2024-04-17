/*
	Author: Bragg
	
	Description:
	This code snippet adds an action to an object.
	When this action is triggered, it calls a function CIM_fnc_useHealTerminal.
	It also sets a text and an image for the user action displayed in the game interface.
	
	Parameter(s):
	0: Object
	
	Example:
	[(_this select 0)] call CIM_fnc_initHealTerminal;
*/
params ["_object"];

if (!hasInterface) exitWith {};

_actionId = _object addAction ["Traitement médical", {
	[_this select 3] call CIM_fnc_useHealTerminal;
}, _object, 1.5, true, true, "", "true", 5, false, "", ""];

_object setUserActionText [_actionId, "<t color='#fb0000' size='1.5'>Recevoir un traitement médical</t>", "<img size='3' image='\197th_Functions\HealTerminal\Data\MedicalLogo_ca.paa'/>"];