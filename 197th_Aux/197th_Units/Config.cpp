/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Units {
        name = "197th Units";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_Core","197th_Equipment","197th_Vehicule","197th_Fonctions"};
        weapons[] = {};
        units[] = { //Register all units here to have access in curator mode
		//CfgPatches_XX(Faction,EditorSubcategory,UniqueName),
			//BlueFor

			//Civilian
			//Independent
			//OpFor

        };
    };
};

class CfgFactionClasses {
	//Faction_197th_XX(type,display name);
	Faction_197th_XX(Civilian,Civil);
	Faction_197th_XX(Clone,Clone);
	Faction_197th_XX(CSI,Confederation des systemes independants);
	Faction_197th_XX(Independent,Independent);
	Faction_197th_XX(OpFor,Force d'opposition);
};

class CfgEditorSubcategories {
	//Categories_197th_XX(type,display name);
	Categories_197th_XX(Merc,Mercenaire);
	Categories_197th_XX(HabitantUnarmed,Habitant (unarmed));
	Categories_197th_XX(HabitantArmed,Habitant (armed));
};

class CfgVehicles {
	#include "CfgVehicles.hpp" //Base classes
	//BlueFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName);

	//Civilian_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	//Independent_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	//OpFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName);

};

class CfgGroups {
	class West {
		#include "Clone/197th/CfgGroups.hpp"
	};
};