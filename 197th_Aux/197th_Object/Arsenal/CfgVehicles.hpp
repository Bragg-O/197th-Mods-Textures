class 442_box1;

class 197th_ArsenalRestricted: 442_box1 {
	displayName = "[197th] Arsenal Restricted";
	editorCategory = "197th_Object";
	editorSubcategory = "197th_Arsenal";
	scope = 2;
	scopecurator = 2;
	author = "197th Compagnie Chimaera";
	editorPreview = "";
    class EventHandlers {
		class initRestrictedArsenal {
			init = "[(this select 0), '\197th_Core\init\Script\CfgRestrictedArsenal.sqf'] call CIM_fnc_initRestrictedArsenal;"
		};
    };
    class TransportItems {};
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportBackpacks {};
};