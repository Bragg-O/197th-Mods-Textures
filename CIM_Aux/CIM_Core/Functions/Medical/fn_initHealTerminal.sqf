params ["_object"];

if (!hasInterface) exitWith {};

_actionId = _object addAction ["Traitement médical", {
	[_this select 3] call CIM_fnc_useHealTerminal;
}, _object, 1.5, true, true, "", "true", 5, false, "", ""];

_object setUserActionText [_actionId, "<t color='#fb0000' size='1.5'>Recevoir un traitement médical</t>", "<img size='3' image='\CIM_Core\Functions\HealTerminal\Data\MedicalLogo_ca.paa'/>"];