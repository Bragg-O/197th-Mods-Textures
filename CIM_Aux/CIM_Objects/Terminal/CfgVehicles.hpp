class 442_terminal3;
class 442_terminal4;

class 197th_TerminalMedical: 442_terminal4 {
	displayName = "[CIM] Medical Terminal";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Terminal";
	scope = 2;
	scopecurator = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\TerminalMedical_co.paa",
        "kobra\442_misc\terminal\data\terminal4_lights_co.paa"
	};
	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	editorPreview = "\CIM_Objects\_EditorPreviews\TerminalMedical_ca.jpg";
    class EventHandlers {
		class InitHealTerminal197th {
			init = "[(_this select 0)] call CIM_fnc_initHealTerminal;";
		};
    };
};

class 197th_Terminal: 442_terminal3 {
	displayName = "[CIM] Terminal";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Terminal";
	scope = 2;
	scopecurator = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Empty_co.paa"
	};
	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_Boat: 197th_Terminal {
	displayName = "[CIM] Terminal (Bateau)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Boat_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_Air: 197th_Terminal {
	displayName = "[CIM] Terminal (Aerien)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Air_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_AirCombat: 197th_Terminal {
	displayName = "[CIM] Terminal (Aerien - Combat)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_AirCombat_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_Supply: 197th_Terminal {
	displayName = "[CIM] Terminal (Fourniture)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Supply_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_Car: 197th_Terminal {
	displayName = "[CIM] Terminal (Terrestre)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Car_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_Medical: 197th_Terminal {
	displayName = "[CIM] Terminal (Medical)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Medical_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Medical_ca.jpg";
    class EventHandlers {
        init = "[(_this select 0)] call CIM_fnc_initUnitTraitMedic;";
    };
};

class 197th_Terminal_Repair: 197th_Terminal {
	displayName = "[CIM] Terminal (Reparation)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Repair_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Repair_ca.jpg";
};

class 197th_Terminal_Sapeur: 197th_Terminal {
	displayName = "[CIM] Terminal (Sapeur)";
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Terminal\Data\Terminal_co.paa",
		"CIM_Objects\Terminal\Data\Screen_Sapeur_co.paa"
	};
	editorPreview = "\CIM_Objects\_EditorPreviews\Terminal_Sapeur_ca.jpg";
    class EventHandlers {
        init = "[(_this select 0)] call CIM_fnc_initUnitTraitEngineer;";
    };
};