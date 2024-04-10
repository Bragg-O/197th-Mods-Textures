/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_Terminal"];

_actionId = _Terminal addAction ["Traitement médical", {
	[(_this select 0)] spawn CIM_fnc_useMedicalTerminal;
}, nil, 1.5, true, true, "", "true", 5, false, "", ""];

_Terminal setUserActionText [_actionId, "<t color='#fb0000' size='1.5'>Recevoir un traitement médical</t>", "<img size='3' image='\197th_Fonctions\MedicalTerminal\Medical_emblem.paa'/>"];