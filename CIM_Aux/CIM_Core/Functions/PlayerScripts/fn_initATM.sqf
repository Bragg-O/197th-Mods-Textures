params ["_object"];

_object addAction ["Consulter son solde", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	hint format ["Vous avez %1 crédit sur votre compte", _caller getVariable "CIM_money"];
}, nil, 1.5, false, false, "", 'true'];

_object addAction ["Ajouter des crédit", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	["Ajouter des crédit"] call CIM_fnc_loadDialog2;
}, nil, 1.5, false, false, "", 'player getVariable "CIM_AdminLevel" > 0'];

_object addAction ["Soustraire des crédit", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	["Soustraire des crédit"] call CIM_fnc_loadDialog3;
}, nil, 1.5, false, false, "", 'player getVariable "CIM_Artiste" || player getVariable "CIM_AdminLevel" > 0'];