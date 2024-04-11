/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_Terminal"];

private _colorArray = [
	"#ff0000",
	"#ff1400",
	"#ff2800",
	"#ff3c00",
	"#ff5000",
	"#ff6400",
	"#ff7800",
	"#ff8c00",
	"#ffa000",
	"#ffb400",
	"#ffc800",
	"#ffd200",
	"#ffdc00",
	"#ffe600",
	"#fff000",
	"#f0ff00",
	"#ddff00",
	"#caff00",
	"#b7ff00",
	"#a3ff00",
	"#8fff00",
	"#7cff00",
	"#68ff00",
	"#54ff00",
	"#40ff00",
	"#2dff00",
	"#19ff00",
	"#06ff00",
	"#00ff00"
];

removeAllActions _Terminal;

{
	[_Terminal, _colorArray, _x] spawn {
		params ["_Terminal", "_colorArray", "_unit"];
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
		hintSilent parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='%2'>%1</t><br/><br/><img size='5' image='\197th_Fonctions\MedicalTerminal\LogoMedical_ca.paa'/><br/><br/>Traitement en cours...", _loadbar, (_colorArray select _i)];
		sleep .25;
		if ((player distance _Terminal) > 5) exitWith {};
	};

	if ((player distance _Terminal) < 5) then {
		hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='#00ff00' size='1'>END</t><br/><br/><img size='5' image='\197th_Fonctions\MedicalTerminal\LogoMedical_ca.paa'/><br/><br/>Vous avez été complètement soigné"];
		[_unit] call ace_medical_treatment_fnc_fullHealLocal;
		[_unit, false, 5, true] call ace_medical_fnc_setUnconscious;
	} else {
		hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='#ff0000' size='1'>CANCEL</t><br/><br/><img size='5' image='\197th_Fonctions\MedicalTerminal\LogoMedical_ca.paa'/><br/><br/>Traitement annulé.<br/>Vous êtes trop loin du terminal."];
	};
};
} forEach (_Terminal nearEntities ["Man", 5]);

sleep 1;

if (hasInterface) exitWith {
	[_Terminal] call CIM_fnc_addMedicalTerminal;
};