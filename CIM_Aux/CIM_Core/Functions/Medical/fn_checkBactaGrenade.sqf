_this spawn {
	private _maxBactaGrenades = 0;

	if (player getUnitTrait "Medic") then {
		_maxBactaGrenades = 1;
	};

	if (player getVariable ["CIM_BactaFilter", false]) exitWith {};

	while {
		(({
			_x == "197th_BactaGrenade_Mag"
		} count (magazines player)) > _maxBactaGrenades)
	} do {
		player setVariable ["CIM_BactaFilter", true];

		hint parseText format [
			"<img size='1.5' image='\CIM_Core\Functions\Medical\Data\MedicalLogo_ca.paa'/><br/><t color='#FF0000' size='1.5'>Tu as trop de grenades à bacta sur toi<br/>%1/%2</t>",
			({
				_x == "197th_BactaGrenade_Mag"
			} count (magazines player)),
			_maxBactaGrenades
		];

		playSound "AlarmCar";

		sleep 5;
	};

	player setVariable ["CIM_BactaFilter", false];
};