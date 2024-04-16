/*
	Author: Bragg
	
	Description:
	Initialize the Engineer trait addaction on a object

	Parameter(s):
	0: Object
	
	Example:
	[this] call CIM_fnc_initUnitTraitEngineer;
*/

params ["_object"];

if (!hasInterface) exitWith {};

if (isNil "_object") exitWith {
	diag_log format ["[197th/fnc_initUnitTraitEngineer] Missing parameter: _object"];
};

_object addAction ["<t color='#58D68D' size='1.5'>Attribuer des autorisations de sapeur</t>", {
	player setUnitTrait ["engineer", true];
	player setUnitTrait ["explosiveSpecialist", true];
}, nil, 1.5, false, false, "", 'Player getUnitTrait "engineer" == false'];

_object addAction ["<t color='#E74C3C' size='1.5'>Supprimer les autorisations de sapeur</t>", {
	player setUnitTrait ["engineer", false];
	player setUnitTrait ["explosiveSpecialist", false];
}, nil, 1.5, false, false, "", 'Player getUnitTrait "engineer" == true'];
