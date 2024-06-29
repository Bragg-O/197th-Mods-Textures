params ["_object"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	["[197th/fnc_initUnitTraitMedic] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};

_object addAction ["<t color='#58D68D' size='1.5'>Attribuer des autorisations médicales</t>", {
	player setVariable ["ace_medical_medicclass", 2, true];
	player setUnitTrait ["medic", true];
}, nil, 1.5, false, false, "", 'Player getUnitTrait "Medic" == false'];

_object addAction ["<t color='#E74C3C' size='1.5'>Supprimer les autorisations médicales</t>", {
	player setVariable ["ace_medical_medicclass", 0, true];
	player setUnitTrait ["medic", false];
}, nil, 1.5, false, false, "", 'Player getUnitTrait "medic" == true'];
