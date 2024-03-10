class 442_terminal3;
class 442_terminal4;

class 197th_TerminalMedical: 442_terminal4 {
	displayName = "[197th] Medical Terminal";
	editorCategory = "197th_Object";
	editorSubcategory = "197th_Terminal";
	scope = 2;
	scopecurator = 2;
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\TerminalMedical_co.paa",
        "kobra\442_misc\terminal\data\terminal4_lights_co.paa"
	};
	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	editorPreview = "197th_Object\_EditorPreviews\TerminalMedical_ca.jpg";
    class EventHandlers {
        init = "if (hasInterface) exitWith {null = [(_this select 0)] execVM '197th_Script\exec\Medical.sqf';};";
    };
};

class 197th_Terminal: 442_terminal3 {
	displayName = "[197th] Terminal";
	editorCategory = "197th_Object";
	editorSubcategory = "197th_Terminal";
	scope = 2;
	scopecurator = 2;
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Empty_co.paa"
	};
	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Empty_ca.jpg";
};

class 197th_Terminal_Air: 197th_Terminal {
	displayName = "[197th] Terminal (Aerien)";
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Air_co.paa"
	};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Air_ca.jpg";
};

class 197th_Terminal_Supply: 197th_Terminal {
	displayName = "[197th] Terminal (Fourniture)";
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Supply_co.paa"
	};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Supply_ca.jpg";
};

class 197th_Terminal_Car: 197th_Terminal {
	displayName = "[197th] Terminal (Terrestre)";
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Car_co.paa"
	};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Car_ca.jpg";
};

class 197th_Terminal_Medical: 197th_Terminal {
	displayName = "[197th] Terminal (Medical)";
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Medical_co.paa"
	};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Medical_ca.jpg";
};

class 197th_Terminal_Repair: 197th_Terminal {
	displayName = "[197th] Terminal (Reparation)";
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Repair_co.paa"
	};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Repair_ca.jpg";
};

class 197th_Terminal_Sapeur: 197th_Terminal {
	displayName = "[197th] Terminal (Sapeur)";
	author = "197th Compagnie Chimaera";
	hiddenSelectionsTextures[] = {
		"197th_Object\Terminal\Data\Terminal_co.paa",
		"197th_Object\Terminal\Data\Screen_Sapeur_co.paa"
	};
	editorPreview = "197th_Object\_EditorPreviews\Terminal_Sapeur_ca.jpg";
};