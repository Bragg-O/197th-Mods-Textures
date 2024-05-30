/*
	Author: Bragg
	
	Description:
	open dialog 1
	
	Parameter(s):
	0: text - Title of the dialog
	
	Example:
	[] spawn CIM_fnc_LoadDialog1;
*/


params ["_title"];

CIM_TitleText = _title;

createDialog "CIM_Dialog1";

((findDisplay -1) displayCtrl 1000) ctrlSetText CIM_TitleText;