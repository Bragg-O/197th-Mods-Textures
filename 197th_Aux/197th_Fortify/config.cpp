/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Fortify {
        name = "197th Fortify";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_Functions","ace_fortify"};
        units[] = {};
        weapons[] = {
            "197th_FortifyTools"
        };
    };
};

#include "CfgWeapons.hpp"

#include "CfgVehicles.hpp"