/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Loadout {
        name = "197th Loadout";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = {
            "197th_Loadout_AA",
            "197th_Loadout_ARC",
            "197th_Loadout_ARF",
            "197th_Loadout_AT",
            "197th_Loadout_Fantassin",
            "197th_Loadout_Grenadier",
            "197th_Loadout_Heavy",
            "197th_Loadout_Medecin",
            "197th_Loadout_Pilote",
            "197th_Loadout_Radioman",
            "197th_Loadout_Sapeur",
            "197th_Loadout_Shield"
        };
    };
};

class CfgVehicles {
    class 197th_Unit;
    class 197th_Base_Loadout : 197th_Unit {
        author = "197th Compagnie Chimaera";
        displayName = "[197th] Base (Loadout)";
        scope = 0;
        scopecurator = 0;
	    side = 3;
        editorSubcategory = "197th_Loadout";
        faction = "197th_WorldEdit";
    };
    Loadout_197th_XX(AA);
    Loadout_197th_XX(ARC);
    Loadout_197th_XX(ARF);
    Loadout_197th_XX(AT);
    Loadout_197th_XX(Fantassin);
    Loadout_197th_XX(Grenadier);
    Loadout_197th_XX(Heavy);
    Loadout_197th_XX(Medecin);
    Loadout_197th_XX(Pilote);
    Loadout_197th_XX(Radioman);
    Loadout_197th_XX(Sapeur);
    Loadout_197th_XX(Shield);
};