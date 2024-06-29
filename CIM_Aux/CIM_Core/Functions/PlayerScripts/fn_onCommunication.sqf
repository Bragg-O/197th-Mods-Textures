params ["_text"];

[
	[
		["Communication prioritaire", "<t align = 'center' color='#3498DB' shadow = '1' size = '1'>%1</t><br/>"],
		[_text, "<t align = 'center' shadow = '1' size = '0.8'>%1</t>", 15]
	], 0, safeZoneY
] remoteExec ["BIS_fnc_typeText", 0, true];