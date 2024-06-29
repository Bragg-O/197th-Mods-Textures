params ["_title"];

CIM_TitleText = _title;

createDialog "CIM_Dialog1";

((findDisplay -1) displayCtrl 1000) ctrlSetText CIM_TitleText;