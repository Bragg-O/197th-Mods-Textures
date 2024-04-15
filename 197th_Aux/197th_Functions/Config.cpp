/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Functions {
        name = "197th Functions";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = {};
    };
};
class CfgFunctions {
    class CIM_197th_Functions {
        tag = "CIM";
        class EarPlugs {
            class checkEarPlugs {};
            class initEarPlugs {
                postInit = 1;
            };
            class switchEarPlugs {};
        };
        class HealTerminal {
            class initHealTerminal {};
            class useHealTerminal {};
        };
        class Loadout {
            class addLoadout {};
            class initLoadout {};
        };
        class RestrictedArsenal {
            class initRestrictedArsenal {};
        };
    };
};