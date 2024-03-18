/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
	
	null = [this, ServicePadVarName] execVM "197th_Script\Exec\Service.sqf";
*/

params ["_Terminal", "_ServicePad"];

_Terminal addAction["Ravitaillement", {
	_objectselect = 0;
	while { isPlayer (nearestObjects [_this select 3, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect) } do {
		_objectselect = _objectselect + 1;
		if {_objectselect == 100} exitwith {hint "il n'a pas de vehicule dans la zone";};
	};
	veh = nearestObjects [_this select 3, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect;
	["Ravitaillement", 5, {
		!isEngineOn veh;
	}, {
		hint "Ravitaillement en carburant terminé";
		veh setFuel 1;
	}, {
		hint "Ravitaillement en carburant interrompu";
	}] call CBA_fnc_progressBar;
}, _ServicePad, 1.5, true, true, "", "true", 15, false, "", ""];
_Terminal addAction["Réparation", {
	_objectselect = 0;
	while { isPlayer (nearestObjects [_this select 3, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect) } do {
		_objectselect = _objectselect + 1;
		if {_objectselect == 100} exitwith {hint "il n'a pas de vehicule dans la zone";};
	};
	veh = nearestObjects [_this select 3, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect;
	["Réparation", 5, {
		!isEngineOn veh;
	}, {
		hint "Réparation terminée";
		veh setDamage 0;
	}, {
		hint "Réparation interrompu";
	}] call CBA_fnc_progressBar;
}, _ServicePad, 1.5, true, true, "", "true", 15, false, "", ""];
_Terminal addAction["Réarmement", {
	_objectselect = 0;
	while { isPlayer (nearestObjects [_this select 3, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect) } do {
		_objectselect = _objectselect + 1;
		if {_objectselect == 100} exitwith {hint "il n'a pas de vehicule dans la zone";};
	};
	veh = nearestObjects [_this select 3, ["Helicopter", "Plane", "Car", "Tanks", "Truck"], 10] select _objectselect;
	["Réarmement", 5, {
		!isEngineOn veh;
	}, {
		hint "Réarmement terminé";
		[objNull, veh] call ace_rearm_fnc_rearmEntireVehicleSuccess;
	}, {
		hint "Réarmement interrompu";
	}] call CBA_fnc_progressBar;
}, _ServicePad, 1.5, true, true, "", "true", 15, false, "", ""];
_Terminal addAction["Changer les Point d'emport", {
	_objectselect = 0;
	while { isPlayer (nearestObjects [_this select 3, ["Helicopter", "Plane"], 10] select _objectselect) } do {
		_objectselect = _objectselect + 1;
		if {_objectselect == 100} exitwith {hint "il n'a pas de vehicule dans la zone";};
	};
	veh = nearestObjects [_this select 3, ["Helicopter", "Plane"], 10] select _objectselect;
	[_veh] call ace_pylons_fnc_showDialog
}, _ServicePad, 1.5, true, true, "", "true", 15, false, "", ""];