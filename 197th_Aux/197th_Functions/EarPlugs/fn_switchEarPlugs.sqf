/*
	Author: Bragg
	
	Description:
	This code snippet is a switch statement that toggles the value of CIM_EarplugsActive between 0 and 1.
	When CIM_EarplugsActive is 0, it sets it to 1, fades a sound at a specific rate, and displays a message indicating that the earplugs have been activated.
	When CIM_EarplugsActive is 1, it sets it to 0, fades a sound at a different rate, and displays a message indicating that the earplugs have been deactivated.
	
	Parameter(s):
	0: Object
	
	Example:
	[_player] call CIM_fnc_switchEarPlugs;
*/

switch (CIM_EarplugsActive) do {
	case 0: {
		CIM_EarplugsActive = 1;
		1 fadeSound 0.2;
		hint parseText format[ "<img size='1.5' image='\197th_Functions\EarPlugs\Data\waves_ca.paa'/><br/><t color='#00FF00' size='1'>Les filtres audio ont été activés</t>" ];
	};
	case 1: {
		CIM_EarplugsActive = 0;
		1 fadeSound 1;
		hint parseText format[ "<img size='1.5' image='\197th_Functions\EarPlugs\Data\unwaves_ca.paa'/><br/><t color='#FF0000' size='1'>Les filtres audio ont été désactivés</t>" ];
	};
};