/*
	Author: Bragg
	
	Description:
	This code first waits for a condition related to sound volume and earplugs to be met.
	then, based on the status of CIM_EarplugsActive, it adjusts the sound volume and displays a message indicating whether the earplugs have been activated or deactivated.
	Finally, it triggers a function called CIM_fnc_checkEarPlugs.
	
	Parameter(s):
	0: Object
	
	Example:
	[player] spawn CIM_fnc_checkEarPlugs;
*/

waitUntil {
	sleep 5;
	(soundVolume < 1 && CIM_EarplugsActive == 0) || (soundVolume == 1 && CIM_EarplugsActive == 1)
};

switch (CIM_EarplugsActive) do {
	case 0: {
		1 fadeSound 1;
		hint parseText format[ "<img size='1.5' image='\197th_Functions\EarPlugs\Data\unwaves_ca.paa'/><br/><t color='#FF0000' size='1'>Les filtres audio ont été désactivés</t>" ];
	};
	case 1: {
		1 fadeSound 0.2;
		hint parseText format[ "<img size='1.5' image='\197th_Functions\EarPlugs\Data\waves_ca.paa'/><br/><t color='#00FF00' size='1'>Les filtres audio ont été réactivés</t>" ];
	};
};

[player] spawn CIM_fnc_checkEarPlugs;