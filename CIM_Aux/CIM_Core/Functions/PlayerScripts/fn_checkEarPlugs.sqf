if (!hasInterface) exitWith {};

waitUntil {
	sleep 5;
	(soundVolume < 1 && CIM_EarplugsActive == 0) || (soundVolume == 1 && CIM_EarplugsActive == 1)
};

switch (CIM_EarplugsActive) do {
	case 0: {
		1 fadeSound 1;
		hint parseText format[ "<img size='1.5' image='\CIM_Core\Functions\EarPlugs\Data\unwaves_ca.paa'/><br/><t color='#FF0000' size='1'>Les filtres audio ont été désactivés</t>" ];
	};
	case 1: {
		1 fadeSound 0.2;
		hint parseText format[ "<img size='1.5' image='\CIM_Core\Functions\EarPlugs\Data\waves_ca.paa'/><br/><t color='#00FF00' size='1'>Les filtres audio ont été réactivés</t>" ];
	};
};

[player] spawn CIM_fnc_checkEarPlugs;