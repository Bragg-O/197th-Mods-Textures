class 442_box1;

class CIM_ArsenalRestricted: 442_box1 {
	displayName = "[CIM] Arsenal Restricted";
	editorCategory = "CIM_Script";
	editorSubcategory = "CIM_Arsenal";
	scope = 2;
	scopecurator = 2;
	author = "[CIM] Bragg";
	editorPreview = "";
    class EventHandlers {
		class initRestrictedArsenal {
			init = "[(_this select 0)] spawn CIM_fnc_initRestrictedArsenal;"
		};
    };
    class TransportItems {};
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportBackpacks {};
};