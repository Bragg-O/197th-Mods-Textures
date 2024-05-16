/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Vehicule {
        name = "197th Vehicule";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        units[] = { //All for curator
            "197th_ARC170",
            "197th_ATTE",
            "197th_BARC",
            "197th_BARCSideCar",
            "197th_Bison_APC",
            "197th_Bison_IFV",
            "197th_Bison_MGS",
            "197th_ITT",
            "197th_ITT_Transport",
            "197th_ITT_Medical",
            "197th_ITT_Logistic",
            "197th_LAATC",
            "197th_LAATI_Mk1",
            "197th_LAATI_Mk2",
            "197th_LAATI_Mk1Lights",
            "197th_LAATI_Mk2Lights",
            "197th_PX10",
            "197th_PX10_Repair",
            "197th_PX10_Armored",
            "197th_RTT",
            "197th_Saber",
            "197th_Saber_Super",
            "197th_Saber_GL",
            "197th_Saber_Recon",
            "197th_VWing",
            "197th_M12A1_LRV",
            "197th_M12_APC",
            "197th_M914_RV",
            "197th_M12G1_LRV",
            "197th_M12R_AA",
            "197th_M813_TT",
            "197th_M12_LRV",
            "197th_M12_FAV",
            "197th_YWing",
            "197th_Z95"
        };
    };
};

class CfgVehicles {
//ARC_170
    #include "ARC_170\CfgVehicles.hpp"

//ATTE
    #include "ATTE\CfgVehicles.hpp"

//BARC
    #include "BARC\CfgVehicles.hpp"

//Bison
    #include "Bison\CfgVehicles.hpp"

//ITT
    #include "ITT\CfgVehicles.hpp"

//LAAT_C
    #include "LAAT_C\CfgVehicles.hpp"

//LAAT_I
    #include "LAAT_I\CfgVehicles.hpp"

//PX_10
    #include "PX_10\CfgVehicles.hpp"

//RTT
    #include "RTT\CfgVehicles.hpp"

//Saber
    #include "Saber\CfgVehicles.hpp"

//V_Wing
    #include "V_Wing\CfgVehicles.hpp"

//Warthog
    #include "Warthog\CfgVehicles.hpp"

//Y_Wing
    #include "Y_Wing\CfgVehicles.hpp"

//Z_95
    #include "Z_95\CfgVehicles.hpp"
};