switch (CIM_EarplugsActive) do {
	case 0: {
		CIM_EarplugsActive = 1;
		1 fadeSound 0.2;
		hint parseText format[ "<img size='1.5' image='\CIM_Core\Functions\PlayerScripts\Data\waves_ca.paa'/><br/><t color='#00FF00' size='1'>Les filtres audio ont été activés</t>" ];
	};
	case 1: {
		CIM_EarplugsActive = 0;
		1 fadeSound 1;
		hint parseText format[ "<img size='1.5' image='\CIM_Core\Functions\PlayerScripts\Data\unwaves_ca.paa'/><br/><t color='#FF0000' size='1'>Les filtres audio ont été désactivés</t>" ];
	};
};