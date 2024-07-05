params ["_target", "_object"];

_loadmedical = "";
_loadbar = "";
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
	"#04FF5D",
	"#03F66E",
	"#02ED7F"
];
for [{
	_i = 0
}, {
	_i < 20
}, {
	_i = _i + 1
}] do {
if (_target distance _object > 5) exitWith {
	hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>CANCEL<br/><br/><img size='5' image='\CIM_Core\Functions\HealTerminal\Data\MedicalLogo_ca.paa'/><br/><br/>Vous êtes sorti de la zone de traitement."];
};
uiSleep .25;
_loadmedical = "|" + _loadmedical;
_loadbar = format["%1 %2%3 %1", _loadmedical, (_i*4), "%"];
hintSilent parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/><t color='%1'>%2</t><br/><br/><img size='5' image='\CIM_Core\Functions\HealTerminal\Data\MedicalLogo_ca.paa'/><br/><br/>Traitement en cours...", (_color select _i), _loadbar];
};
hint parseText format["<t color='#fb0000' size='1.5'>Traitement médical</t><br/>END<br/><br/><img size='5' image='\CIM_Core\Functions\HealTerminal\Data\MedicalLogo_ca.paa'/><br/><br/>Vous avez été complètement soigné"];
[_target] call ace_medical_treatment_fnc_fullHealLocal;

{
	if (_x distance _object < 5) then {
		[_x, false, 5, true] call ace_medical_fnc_setUnconscious;
	};
} forEach allPlayers;