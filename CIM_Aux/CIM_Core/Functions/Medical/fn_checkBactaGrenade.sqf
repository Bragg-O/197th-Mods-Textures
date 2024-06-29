_this spawn {
	params ["_unit", "_container"]; // get the unit and container parameters

	if (!hasInterface) exitWith {}; // if this is a headless client, exit the function

	if ({
		_x == "197th_BactaGrenade_Ammo"
	} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) > 0) then {
		// if the unit has the "197th_BactaGrenade_Ammo" item
		for [{
			_i = 0 // set a counter to 0
		}, {
			_i < 120 // loop as long as the counter is less than 120
		}, {
			_i = _i + 1 // increment the counter by 1
		}]
		do {
			// start a loop
			sleep 1; // wait 1 second
			if ({
				_x == "197th_BactaGrenade_Ammo"
			} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) == 0) exitWith {}; // if the unit doesn't have the item anymore, exit the loop
		}; // end of the loop that checks every second if the unit still has the item
		if ({
			_x == "197th_BactaGrenade_Ammo"
		} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) >= 1) then {
			while ({
				_x == "197th_BactaGrenade_Ammo"
			} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) >= 1) do {
				// if the unit still has the item
				sleep 5; // wait 5 seconds

				if ((_unit getUnitTrait "medic" == true) && ({
					_x == "197th_BactaGrenade_Ammo"
				} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) <= 1)) exitWith {}; // if the unit is a medic and still has only 1 item, exit the loop

				hint parseText format [ // display an error message to the unit
					"<t size='1.5' color='#FF0000'>Tu à %1 grenade bacta dans ton inventaire ! </t>",
					({
						_x == "197th_BactaGrenade_Ammo"
					} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)))
				];

				playSound "AlarmCar"; // play an alarm sound
			}; // end of the loop that checks every 5 seconds if the unit still has the item
		};
	}; // end of the if statement that checks if the unit has the item
}; // end of the anonymous function