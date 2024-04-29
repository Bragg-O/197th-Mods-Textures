/*
	Author: Bragg
	
	Description:
	This code snippet defines a function CIM_fnc_loadUnitsEquipment that requires _unit and _addonsName parameters.
	It splits the type of _unit to get _side, _type, and _name.
	It then constructs the path to a loadout file and checks if it exists.
	If it does, it executes the loadout file.
	If it doesn't, it logs an error message.
	
	Parameter(s):
	0: Object
	1: AddonsName - Name of the folder
	
	Example:
	[(_this select 0),"197th_Units"] spawn CIM_fnc_loadUnitsEquipment;
*/

params ["_unit", "_AddonsName"];

private _Classnamesplit = (format["%1", typeOf _unit]) splitString "_";

[_Classnamesplit select 1, _Classnamesplit select 2, _Classnamesplit select 3] params ["_Side", "_Type", "_Name"];

private _loadoutfile = "";
private _loadoutfile = format ["%1\%2\%3\%4.sqf", _AddonsName, _Side, _Type, _Name];

if (fileExists _loadoutfile) then {
	[_unit] execVM _loadoutfile;
} else {
	systemChat format["'%1' not found! (fn_loadUnitsEquipment)", _loadoutfile];
};