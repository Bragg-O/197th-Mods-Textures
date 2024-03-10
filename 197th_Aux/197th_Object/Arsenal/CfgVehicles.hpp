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
        init = "if (hasInterface) exitWith {null = [(_this select 0)] execVM '197th_Script\Exec\RestrictedArsenal.sqf';};";
    };
    class TransportItems {};
    class TransportWeapons {};
    class TransportMagazines {};
    class TransportBackpacks {};
};