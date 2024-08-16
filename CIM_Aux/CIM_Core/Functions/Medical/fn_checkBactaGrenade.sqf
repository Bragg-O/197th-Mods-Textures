_this spawn {
	private _maxBactaGrenades = 0;

	if (player getUnitTrait "Medic") then {
		_maxBactaGrenades = 1;
	};

	while {
		(({
			_x == "197th_BactaGrenade_Mag"
		} count (magazines player)) > _maxBactaGrenades)
	} do {
		hint parseText format [
			"<t size='1.5' color='#FF0000'>Tu à trop de grenade bacta dans ton inventaire ! </br> %1 grenade bacta </t>",
			({
				_x == "197th_BactaGrenade_Mag"
			} count (magazines player))
		];

		playSound "AlarmCar";

		sleep 5;
	};
};