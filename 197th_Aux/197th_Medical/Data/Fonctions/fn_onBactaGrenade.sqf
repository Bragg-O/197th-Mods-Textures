_this spawn {
	params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];
	switch (_ammo) do {
		case "197th_BactaGrenade_Ammo": {
			private _vehbacta = "442_BactaPack_Item" createVehicle getPosASL player;
			_vehbacta setPosASL getPosASL player;

			for [{
				_i = 0
			}, {
				_i < 10
			}, {
				_i = _i + 1
			}] do {
			playSound3D ["197th_Medical\Data\sounds\Bacta.ogg", _vehbacta, false, getPosASL _vehbacta, 20, 0.6, 25];

			sleep 0.5;

			if (_i == 6) then {
				playSound3D ["197th_Medical\Data\sounds\BactaExplo.ogg", _vehbacta, false, getPosASL _vehbacta, 10, 1, 30];
			};
		};
		[getPosASL _vehbacta] call ace_grenades_fnc_flashbangExplosionEH;
		{
			[_x] call ace_medical_treatment_fnc_fullHealLocal;
			[_x, false, 5, true] call ace_medical_fnc_setUnconscious;
		} forEach (_vehbacta nearEntities ["Man", 5]);
		sleep 60;
		deleteVehicle _vehbacta;
	};
};
};