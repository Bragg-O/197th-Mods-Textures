/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

_this spawn {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

	if (_ammo == "197th_BactaGrenade_Ammo") then {
		private _vehbacta = "442_BactaPack_Item" createVehicle getPosASL player;

		_vehbacta setPosASL getPosASL player;

		for [{
			_i = 0
		}, {
			_i < 10
		}, {
			_i = _i + 1
		}]
		do {
			[_vehbacta, "BactaTimer"] remoteExec ["say3d", 0, false];

			sleep 0.5;

			if (_i == 6) then {
				[_vehbacta, "BactaExplo"] remoteExec ["say3d", 0, false];
			};
		};

		[getPosASL _vehbacta] remoteExec ["ace_grenades_fnc_flashbangExplosionEH"];

		{
			[_x] call ace_medical_treatment_fnc_fullHealLocal;
			[_x, false, 5, true] call ace_medical_fnc_setUnconscious;
		} forEach (_vehbacta nearEntities ["Man", 5]);
		sleep 60;
		deleteVehicle _vehbacta;
	};
};