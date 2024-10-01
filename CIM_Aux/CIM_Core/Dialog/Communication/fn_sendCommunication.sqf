private _text = ctrlText 4100;

uiSleep 0.1;

closeDialog 0;

[
	[
		["Communication prioritaire", "<t align = 'center' color='#3498DB' shadow = '1' size = '1'>%1</t><br/>"],
		[_text, "<t align = 'center' shadow = '1' size = '0.8'>%1</t>", 5]
	], 0, safeZoneY
] remoteExec ["BIS_fnc_typeText", 0, false];