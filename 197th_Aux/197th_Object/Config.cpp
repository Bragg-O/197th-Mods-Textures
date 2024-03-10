/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Object {
        name = "197th Object";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_weapon","197th_Equipment","197th_Script"};
        weapons[] = {};
        units[] = { //All for curator
            "197th_Supply_Empty",
            "197th_Supply_Ammo",
            "197th_Supply_Medical",
            "197th_Supply_Explosive",
            "197th_Supply_Weapon",
            "197th_Supply_NVG",
            "197th_Supply_ATAA",
            "197th_Flag",
            "197th_Banner",
            "197th_Flag_Vertical",
            "197th_Flag_Horizontal",
            "197th_TerminalMedical",
            "197th_Terminal",
            "197th_Terminal_Air",
            "197th_Terminal_Supply",
            "197th_Terminal_Car",
            "197th_Terminal_Medical",
            "197th_Terminal_Repair",
            "197th_Terminal_Sapeur",
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
//Flag
    #include "Flag\CfgVehicles.hpp"

//Supply
    #include "Supply\CfgVehicles.hpp"

//Terminal
    #include "Terminal\CfgVehicles.hpp"

//Loadout
    #include "Loadout\CfgVehicles.hpp"

};