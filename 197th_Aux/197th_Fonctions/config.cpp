/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Fonctions {
        name = "197th Fonctions";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_Core"};
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgFunctions.hpp"

class CfgVehicles {
//Add Ace interactions Earplugs
    #include "Earplugs\CfgVehicles.hpp"
};