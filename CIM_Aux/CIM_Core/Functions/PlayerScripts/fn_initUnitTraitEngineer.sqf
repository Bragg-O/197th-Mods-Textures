params ["_object"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	["[197th/fnc_initUnitTraitEngineer] Missing parameter: _object"] call BIS_fnc_logFormatServer;
};

_object addAction ["<t color='#58D68D' size='1.5'>Attribuer des autorisations de sapeur</t>", {
	player setUnitTrait ["engineer", true];
	player setUnitTrait ["explosiveSpecialist", true];
}, nil, 1.5, false, false, "", 'Player getUnitTrait "engineer" == false && (player getVariable "CIM_IngLevel" > 0)'];

_object addAction ["<t color='#E74C3C' size='1.5'>Supprimer les autorisations de sapeur</t>", {
	player setUnitTrait ["engineer", false];
	player setUnitTrait ["explosiveSpecialist", false];
}, nil, 1.5, false, false, "", 'Player getUnitTrait "engineer" == true && (player getVariable "CIM_IngLevel" > 0)'];
