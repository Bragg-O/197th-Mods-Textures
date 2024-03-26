/*
    Author: Bragg for La Horde Taung

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class HT_Equipment {
        name = "HT Equipment";
        author = "Bragg for La Horde Taung";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = { //All for curator
        //CfgPatches_XX(model,type,name) -> HT_##model##_##type##_##name##
            CfgPatches_XX(Unit,Regs,Guerrier),
            CfgPatches_XX(Unit,Regs,Medecin),
            CfgPatches_XX(Unit,Regs,Officier_Medecin),
            CfgPatches_XX(Unit,Regs,Officier),
            CfgPatches_XX(Unit,Regs,SousOfficier_Medecin),
            CfgPatches_XX(Unit,Regs,SousOfficier),
            CfgPatches_XX(Headgear,Regs,Guerrier)
        };
    };
};

class CfgWeapons {
//Uniform
    #include "Uniform\CfgWeapons.hpp"
    //Uniform_HT_XX(type,name) -> HT_Uniform_##type##_##name##
    Uniform_HT_XX(Regs,Guerrier);

//Helmets
    #include "Helmet\CfgWeapons.hpp"
    //HelmetTraditional_HT_XX(type,name) -> HT_Helmet_##type##_##name##
    HelmetTraditional_HT_XX(Regs,Guerrier);

//Vest
    #include "Vest\CfgWeapons.hpp"
    //VestTraditional_HT_XX(type,name) -> HT_Vest_##type##_##name##
    VestTraditional_HT_XX(Regs,Guerrier);
    VestTraditional_HT_XX(Regs,Medecin);
    VestTraditional_HT_XX(Regs,Officier_Medecin);
    VestTraditional_HT_XX(Regs,Officier);
    VestTraditional_HT_XX(Regs,SousOfficier_Medecin);
    VestTraditional_HT_XX(Regs,SousOfficier);

    VestTraditional_HT_XX(Customs,Al_Verde);
    VestTraditional_HT_XX(Customs,Alor);
};

class CfgVehicles {
//Units
    #include "Uniform\CfgVehicles.hpp"
    //Unit_HT_XX(type,name,uniform,helmet,vest) -> HT_Unit_##type##_##name##
    Unit_HT_XX(Regs,Guerrier,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Regs_Guerrier");
    Unit_HT_XX(Regs,Medecin,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Regs_Medecin");
    Unit_HT_XX(Regs,Officier_Medecin,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Regs_Officier_Medecin");
    Unit_HT_XX(Regs,Officier,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Regs_Officier");
    Unit_HT_XX(Regs,SousOfficier_Medecin,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Regs_SousOfficier_Medecin");
    Unit_HT_XX(Regs,SousOfficier,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Regs_SousOfficier");

    Unit_HT_XX(Customs,Al_Verde,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Customs_Al_Verde");
    Unit_HT_XX(Customs,Alor,HT_Uniform_Regs_Traditional,"HT_Helmet_Regs_Guerrier","HT_Vest_Customs_Alor");

//Helmets
    #include "Helmet\CfgVehicles.hpp"
    //HeadgearItem_HT_XX(type,id) -> HT_Headgear_##type##_##name##
    HeadgearItem_HT_XX(Regs,Guerrier);
};