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
			CfgPatches_XX(Civilian,HabitantUnarmed,civil4),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil5),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil6),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil7),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil8),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil9),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil10),
			CfgPatches_XX(Civilian,HabitantUnarmed,civil11),
			CfgPatches_XX(Civilian,HabitantUnarmed,civilSick),
			CfgPatches_XX(Civilian,HabitantArmed,civil1),
			CfgPatches_XX(Civilian,HabitantArmed,merc1),

			//Independent
			CfgPatches_XX(Independent,Merc,merc1),
			CfgPatches_XX(Independent,Merc,merc2),
			CfgPatches_XX(Independent,Merc,merc3),
			CfgPatches_XX(Independent,Merc,merc4),
			CfgPatches_XX(Independent,Merc,merc5),
			CfgPatches_XX(Independent,Merc,merc6),
			CfgPatches_XX(Independent,Chasseur,cdp1),
			CfgPatches_XX(Independent,Chasseur,cdp2),
			CfgPatches_XX(Independent,Assassin,ass1),
			CfgPatches_XX(Independent,Assassin,ass2),
			CfgPatches_XX(Independent,Assassin,ass3),

			//OpFor
			CfgPatches_XX(CSI,BX,bx1),
			CfgPatches_XX(CSI,B1,bd1),
			CfgPatches_XX(CSI,B1,bd2),
			CfgPatches_XX(CSI,B1,bd3),
			CfgPatches_XX(CSI,B1,bd4),
			CfgPatches_XX(CSI,B1,bd5),
			CfgPatches_XX(CSI,B1,bd6),
			CfgPatches_XX(CSI,B1,bd7),
			CfgPatches_XX(CSI,ST,st1),
			CfgPatches_XX(CSI,ST,st2),
			CfgPatches_XX(CSI,ST,st3),
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
	Categories_197th_XX(Assassin,Assassin);
	Categories_197th_XX(Chasseur,Chasseur de prime);
	Categories_197th_XX(BX,BX-series commandos);
	Categories_197th_XX(B1,B1-series battle);
	Categories_197th_XX(ST,ST-series tactics);
};

class CfgVehicles {
	#include "CfgVehicles.hpp" //Base classes
	//BlueFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	BlueFor_XX(Clone,197th,jeff,Jeff);

	//Civilian_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	Civilian_XX(Civilian,HabitantUnarmed,civil1,Habitant 1);
	Civilian_XX(Civilian,HabitantUnarmed,civil2,Habitant 2);
	Civilian_XX(Civilian,HabitantUnarmed,civil3,Habitant 3);
	Civilian_XX(Civilian,HabitantUnarmed,civil4,Habitant 4);
	Civilian_XX(Civilian,HabitantUnarmed,civil5,Habitant 5);
	Civilian_XX(Civilian,HabitantUnarmed,civil6,Habitant 6);
	Civilian_XX(Civilian,HabitantUnarmed,civil7,Habitant 7);
	Civilian_XX(Civilian,HabitantUnarmed,civil8,Habitant 8);
	Civilian_XX(Civilian,HabitantUnarmed,civil9,Habitant 9);
	Civilian_XX(Civilian,HabitantUnarmed,civil10,Habitant 10);
	Civilian_XX(Civilian,HabitantUnarmed,civil11,Habitant 11);
	Civilian_XX(Civilian,HabitantUnarmed,civilSick,Habitant (Malade));
	Civilian_XX(Civilian,HabitantArmed,civil1,Habitant 1);
	Civilian_XX(Civilian,HabitantArmed,merc1,Mercenaire 1);

	//Independent_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	Independent_XX(Independent,Merc,merc1,Mercenaire);
	Independent_XX(Independent,Merc,merc2,Mercenaire (AT));
	Independent_XX(Independent,Merc,merc3,Mercenaire (Laser));
	Independent_XX(Independent,Merc,merc4,Mercenaire (Medic));
	Independent_XX(Independent,Merc,merc5,Mercenaire (Officier));
	Independent_XX(Independent,Merc,merc6,Mercenaire (Bizzard));
	Independent_XX(Independent,Chasseur,cdp1,Chasseur de prime 1);
	Independent_XX(Independent,Chasseur,cdp2,Chasseur de prime 2);
	Independent_XX(Independent,Assassin,ass1,Assassin 1);
	Independent_XX(Independent,Assassin,ass2,Assassin 2);
	Independent_XX(Independent,Assassin,ass3,Assassin 3);

	//OpFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName);
	OpFor_XX(CSI,BX,bx1,Droid BX);
	OpFor_XX(CSI,B1,bd1,Droid B1 (E5));
	OpFor_XX(CSI,B1,bd2,Droid B1 (Commander));
	OpFor_XX(CSI,B1,bd3,Droid B1 (Jetpack));
	OpFor_XX(CSI,B1,bd4,Droid B1 (Police));
	OpFor_XX(CSI,B1,bd5,Droid B1 (Sniper));
	OpFor_XX(CSI,B1,bd6,Droid B1 (E5C / Heavy));
	OpFor_XX(CSI,B1,bd7,Droid B1 (Crew));
	OpFor_XX(CSI,ST,st1,Droid tactics (Bleu));
	OpFor_XX(CSI,ST,st2,Droid tactics (Vert));
	OpFor_XX(CSI,ST,st3,Droid tactics (Rouge));

};

class CfgGroups {
	class West {
		#include "Clone/197th/CfgGroups.hpp"
	};
};