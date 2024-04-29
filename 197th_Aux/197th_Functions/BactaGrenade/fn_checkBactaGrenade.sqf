/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

_this spawn {
	params ["_unit", "_container"];

	if (!hasInterface) exitWith {};

	while ({
		_x == "197th_BactaGrenade_Ammo"
	} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) > 0) do {
		/* sleep for 5 seconds before displaying the hint */
			sleep 5;
			
		/* Check if the unit is a medic and there is only 1 "197th_BactaGrenade_Ammo" ammo */
			if ((_unit getUnitTrait "medic" == true) && ({
				_x == "197th_BactaGrenade_Ammo"
			} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)) <= 1)) exitWith {};
			
		/* Display a hint message with the number of "197th_BactaGrenade_Ammo" ammo */
			hint parseText format [
				"<img size='5' image='\197th_Functions\BactaGrenade\Data\error_ca.paa'/><br/><t size='1.5' color='#FF0000'>Tu à %1 grenade bacta dans ton inventaire ! </t>", 
				({
					_x == "197th_BactaGrenade_Ammo"
				} count ((backpackItems _unit) + (uniformItems _unit) + (vestItems _unit)))
			];
			
		/* Play an alarm sound */
			playSound "AlarmCar";
		};
	};