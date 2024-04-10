/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_unit"];

private _AddonsName = "197th_Units";

private _Classnamesplit = (format["%1", typeOf _unit]) splitString "_";

[_Classnamesplit select 1, _Classnamesplit select 2, _Classnamesplit select 3] params ["_Side", "_Type", "_Name"];

private _loadoutfile = format ["%1\%2\%3\%4.sqf", _AddonsName, _Side, _Type, _Name];

if (fileExists _loadoutfile) then {
	[_unit] execVM _loadoutfile;
} else {
	systemChat format["'%1' not found!", _loadoutfile];
};