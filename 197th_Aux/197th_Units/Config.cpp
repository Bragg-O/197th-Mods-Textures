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
        requiredAddons[] = {"197th_Core","197th_Equipment","197th_Vehicule","197th_Functions"};
        weapons[] = {};
        units[] = { //Register all units here to have access in curator mode
		//CfgPatches_XX(Faction,EditorSubcategory,UniqueName),
			//BlueFor
			CfgPatches_XX(Clone,197th,jeff),
			//Civilian
			CfgPatches_XX(Civilian,HabitantUnarmed,civil1),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil2),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil3),
			//Independent
			CfgPatches_XX(Independent,Merc,merc1),
			//OpFor

        };
    };
};

class CfgFactionClasses {
	//Faction_197th_XX(type,DisplayName);
	Faction_197th_XX(Civilian,Civil);
	Faction_197th_XX(Clone,Clone);
	Faction_197th_XX(CSI,Confederation des systemes independants);
	Faction_197th_XX(Independent,Independent);
	Faction_197th_XX(OpFor,Force d'opposition);
};

class CfgEditorSubcategories {
	//Categories_197th_XX(type,DisplayName);
	Categories_197th_XX(197th,197th);
	Categories_197th_XX(Merc,Mercenaire);
	Categories_197th_XX(HabitantUnarmed,Habitant (unarmed));
	Categories_197th_XX(HabitantArmed,Habitant (armed));
};

class CfgVehicles {
	#include "CfgVehicles.hpp" //Base classes
	//BlueFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	BlueFor_XX(Clone,197th,jeff,Jeff);
	//Civilian_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	Civilian_XX(Civilian,HabitantUnarmed,civil1,Habitant 1);
	Civilian_XX(Civilian,HabitantUnarmed,civil2,Habitant 2);
	Civilian_XX(Civilian,HabitantUnarmed,civil3,Habitant 3);

	//Independent_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	Independent_XX(Independent,Merc,merc1,Mercenaire 1);

	//OpFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName);

};

class CfgGroups {
	class West {
		#include "Clone/197th/CfgGroups.hpp"
	};
};