/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

waitUntil {
	!isNull player
};

if (isNil "CIM_EarplugsActive") then {
	CIM_EarplugsActive = 0;
	1 fadeSound 1;
	player addEventHandler ["Respawn", {
		CIM_EarplugsActive = 0;
		1 fadeSound 1;
	}];
};

while { !(isNil "CIM_EarplugsActive") } do {
	sleep 5;
	if (CIM_EarplugsActive == 0) then {
		if (soundVolume < 1) then {
			hint parseText format[ "<img size='1.5' image='\197th_Fonctions\Earplugs\unwaves_ca.paa'/><br/><t color='#FF0000' size='1'>Les filtres audio ont été désactivés</t>" ];
		};
		1 fadeSound 1;
	} else {
		if (soundVolume == 1) then {
			hint parseText format[ "<img size='1.5' image='\197th_Fonctions\Earplugs\waves_ca.paa'/><br/><t color='#00FF00' size='1'>Les filtres audio ont été activés</t>" ];
		};
		1 fadeSound 0.2;
	};
};

[_player] spawn CIM_fnc_Earplugs;