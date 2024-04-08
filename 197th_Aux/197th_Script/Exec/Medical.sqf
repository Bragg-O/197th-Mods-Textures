/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_Terminal"];

_actionId = _Terminal addAction ["Traitement médical", {
	{
		_loadmedical = "";
		for [{
			_i = 0
		}, {
			_i < 25
		}, {
			_i = _i + 1
		}] do {
		_loadmedical = "|" + _loadmedical;
		_loadbar = format["%1 %2%3 %1", _loadmedical, (_i*4), "%"];
		hintSilent parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='#ffff00' size='1'>%1</t><br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Traitement en cours...", _loadbar];
		sleep .25;
		if ((player distance (_this select 3)) > 5) exitWith {};
	};
	if ((player distance (_this select 3)) < 5) then {
		hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='#00ff00' size='1'>END</t><br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Vous avez été complètement soigné"];
		[_x] call ace_medical_treatment_fnc_fullHealLocal;
		[_x, false, 5, true] call ace_medical_fnc_setUnconscious;
	} else {
		hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='#ff0000' size='1'>CANCEL</t><br/><br/><img size='5' image='\197th_Script\Data\Medical_emblem.paa'/><br/><br/>Traitement annulé.<br/>Vous êtes trop loin du terminal."];
	};
} forEach ((_this select 3) nearEntities ["Man", 5]);
}, _Terminal, 1.5, true, true, "", "true", 5, false, "", ""];

_Terminal setUserActionText [_actionId, "<t color='#fb0000' size='1.5'>Recevoir un traitement médical</t>", "<img size='3' image='\197th_Script\Data\Medical_emblem.paa'/>"];