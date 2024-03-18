/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Weapon {
        name = "197th Weapon";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        weapons[] = { //All for arsenal
            "197th_riot_shield_item",
            "197th_riot_shield_attachment",
            "197th_Attachement_Bipods",
            "197th_Attachement_HoloScope",
            "197th_Attachement_Laser",
            "197th_Attachement_Flashlight",
            "197th_Attachement_LRPS_Scope",
            "197th_Attachement_LR_Scope",
            "197th_DC15A_Regs",
            "197th_DC15A_ugl_Regs",
            "197th_DC15S_Regs",
            "197th_DC15X_Regs",
            "197th_DC17SA_Regs",
            "197th_RPS6_Regs",
            "197th_PLX1_Regs"
        };
        units[] = { //All for curator
            "197th_DC15A",
            "197th_DC15A_UGL",
            "197th_DC15S",
            "197th_DC15X",
            "197th_DC17SA",
            "197th_PLX1",
            "197th_RPS6",
            "197th_DetPack_Explosive",
            "197th_DemoPack_Explosive",
            "197th_Breach_Explosive",
        };
    };
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class CfgCloudlets {
    #include "Explosives\CfgCloudlets.hpp"
};

class CfgSoundSets {
    #include "Explosives\CfgSoundSets.hpp"
};

class CfgSoundShaders {
    #include "Explosives\CfgSoundShaders.hpp"
};

class CfgAmmo {
    #include "Explosives\CfgAmmo.hpp"
};

class CfgMagazines {
    #include "Ammunitions\CfgMagazines.hpp"
    #include "Explosives\CfgMagazines.hpp"
};

class CfgWeapons {
//Attachements
    #include "Attachements\CfgWeapons.hpp"
    
//DC-15A
    #include "DC15A\CfgWeapons.hpp"

//DC-15S
    #include "DC15S\CfgWeapons.hpp"

//DC-15X
    #include "DC15X\CfgWeapons.hpp"

//DC-17SA
    #include "DC17SA\CfgWeapons.hpp"

//PLX-1
    #include "PLX1\CfgWeapons.hpp"

//RPS-6
    #include "RPS6\CfgWeapons.hpp"

//Z-6
    #include "Z6\CfgWeapons.hpp"

//Explosives
    #include "Explosives\CfgWeapons.hpp"
};

class CfgVehicles {
//DC-15A
    #include "DC15A\CfgVehicles.hpp"

//DC-15S
    #include "DC15S\CfgVehicles.hpp"

//DC-15X
    #include "DC15X\CfgVehicles.hpp"

//DC-17SA
    #include "DC17SA\CfgVehicles.hpp"

//PLX-1
    #include "PLX1\CfgVehicles.hpp"

//RPS-6
    #include "RPS6\CfgVehicles.hpp"

//Z-6
    #include "Z6\CfgVehicles.hpp"

//Explosives
    #include "Explosives\CfgVehicles.hpp"
};

#include "BlastWaveEffect\Effect.hpp"