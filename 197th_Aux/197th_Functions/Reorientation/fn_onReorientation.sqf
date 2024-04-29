/*
	Author: Bragg
	
	Description:
	Check if the patient is stable and if so, make him conscious
	
	Parameter(s):
	0: _medic
	1: _patient
	
	Example:
	["_medic", "_patient"] call CIM_fnc_loadUnitsEquipment;
*/

_this spawn {
	params ["_medic", "_patient"];

	_patientisStable = [_patient] call ace_medical_status_fnc_hasStableVitals;

	if (_patientisStable && ((random 1) > 0.6)) then {
		[_patient, false, 5, true] call ace_medical_fnc_setUnconscious;
	};
};