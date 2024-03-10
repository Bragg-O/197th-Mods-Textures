/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_Terminal"];

_actionId = _Terminal addAction ["Mraitement médical", {
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>||||||||||<br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Patientez pendant 5 secondes."];
	sleep 1;
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>||||||||||||||||||||<br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Patientez pendant 4 secondes."];
	sleep 1;
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>||||||||||||||||||||||||||||||<br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Patientez pendant 3 secondes."];
	sleep 1;
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>||||||||||||||||||||||||||||||||||||||||<br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Patientez pendant 2 secondes."];
	sleep 1;
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>||||||||||||||||||||||||||||||||||||||||||||||||||<br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Patientez pendant 1 secondes."];
	sleep 1;
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>END<br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Vous avez été complètement soigné"];
	[player] call ace_medical_treatment_fnc_fullHealLocal;
}];

_Terminal setUserActionText [_actionId, "<t color='#fb0000' size='1.5'>Recevoir un traitement médical</t>", "<img size='3' image='\197th_Script\Data\Medical_emblem.paa'/>"];