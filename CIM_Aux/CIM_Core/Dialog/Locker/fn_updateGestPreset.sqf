_selected = lbCurSel 1000;

_PresetLocker = player getVariable ["CIM_PresetLocker", []];

_select = _PresetLocker select _selected;

_select params ["_name", "_loadout"];

_equipementTexte = [_loadout] call DIALOG_fnc_equipmentDetail;

((findDisplay -1) displayCtrl 1100) ctrlSetStructuredText _equipementTexte;

((findDisplay -1) displayCtrl 1200) ctrlSetText _name;