/*
	    Author: NemesisRE modified by Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

waitUntil {!isNull player}; //to prevent MP / JIP issues

if (isNil "NreEarplugsActive") then {
	NreEarplugsActive = 0;
	1 fadeSound 1;
	// Handle respawn
	player addEventHandler ["Respawn", {
		NreEarplugsActive = 0;
		1 fadeSound 1;
	}];
	breakto "firstInitFinished";
};

if ( NreEarplugsActive == 1 ) then {
	NreEarplugsActive = 0;
	1 fadeSound 1;
	hint parseText format[ "<img size='1.5' image='\197th_Script\Data\waves.paa'/><br/><t color='#FF0000' size='1'>Les filtres audio ont été désactivés</t>" ];
} else {
	NreEarplugsActive = 1;
	1 fadeSound 0.4;
	hint parseText format[ "<img size='1.5' image='\197th_Script\Data\waves.paa'/><br/><t color='#00FF00' size='1'>Les filtres audio ont été activés</t>" ];
};

scopename "firstInitFinished";