params ["_object"];

_object addAction ["Atribution de permission", {
	createDialog "CIM_Dialog_Perm";
}, nil, 1.5, false, false, "", '(player getVariable ["CIM_AdminLevel", 0] >= 2) or (player getVariable ["CIM_ZeusLevel", 0] >= 3) or (player getVariable ["CIM_CrewLevel", 0] >= 2) or (player getVariable ["CIM_PilotLevel", 0] >= 3) or (player getVariable ["CIM_IngLevel", 0] >= 2) or (player getVariable ["CIM_MedicLevel", 0] >= 2)'];