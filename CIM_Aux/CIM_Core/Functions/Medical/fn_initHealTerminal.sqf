params ["_object"];

if (!hasInterface) exitWith {};

_actionId = _object addAction ["Traitement médical", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	[_caller, _target] spawn CIM_onUseHealTerminal;
}, nil, 1.5, true, true, "", "true", 5, false, "", ""];

_object setUserActionText [_actionId, "<t color='#fb0000' size='1.5'>Recevoir un traitement médical</t>", "<img size='3' image='\CIM_Core\Functions\Medical\Data\medicallogo_ca.paa'/>"];