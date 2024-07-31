params ["_target", "_object"];

_color = [
	"#FF0000",
	"#FD1403",
	"#FB2806",
	"#F93B09",
	"#F74F0C",
	"#F5610F",
	"#F37412",
	"#F18615",
	"#EF9918",
	"#EDAC1B",
	"#EBBF1E",
	"#E9D221",
	"#E7E525",
	"#D5E62A",
	"#C2E92E",
	"#AFEF33",
	"#9CF438",
	"#89F83C",
	"#76FB41",
	"#63FE46",
	"#50FF4A",
	"#3DFF4F",
	"#2AFF54",
	"#17FF58",
	"#04FF5D"
];

_load = 0;

{
	if (_target distance _object > 5) exitWith {
		hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>CANCEL<br/><br/><img size='5' image='\CIM_Core\Functions\Medical\Data\medicallogo_ca.paa'/><br/><br/>Vous êtes sorti de la zone de traitement."];
	};

	uiSleep .2;

	hintSilent parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='%1'>%2%3</t><br/><br/><img size='5' image='\CIM_Core\Functions\Medical\Data\medicallogo_ca.paa'/><br/><br/>Traitement en cours...", _x, (_load * 4), "%"];

	_load = _load + 1;
} forEach _color;

if (_target distance _object > 5) exitWith {
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>CANCEL<br/><br/><img size='5' image='\CIM_Core\Functions\Medical\Data\medicallogo_ca.paa'/><br/><br/>Vous êtes sorti de la zone de traitement."];
};

hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>END<br/><br/><img size='5' image='\CIM_Core\Functions\Medical\Data\medicallogo_ca.paa'/><br/><br/>Vous avez été complètement soigné"];

[_target, false, 5, true] call ace_medical_fnc_setUnconscious;
[_target] call ace_medical_treatment_fnc_fullHealLocal;