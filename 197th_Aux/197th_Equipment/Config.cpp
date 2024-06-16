/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Equipment {
        name = "197th Equipment";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_weapon"};
        weapons[] = {};
        units[] = { //All for curator
        //CfgPatches_XX(model,type,name) -> 197th_##model##_##type##_##name##
            CfgPatches_XX(Unit,Regs,Cadet),
            CfgPatches_XX(Unit,Regs,Trooper),
            CfgPatches_XX(Unit,Regs,Medecin),
            CfgPatches_XX(Unit,Regs,Sergent),
            CfgPatches_XX(Unit,Regs,Lieutenant),
            CfgPatches_XX(Unit,Regs,Capitain),
            "197th_Unit_Regs_Pilote",
            "197th_Unit_Regs_ARF",
            "197th_Unit_Regs_ARF_TP",
            "197th_Unit_Regs_ARC",
            "197th_Unit_Regs_AT",
            "197th_Unit_Regs_AA",
            CfgPatches_XX(Unit,Customs,Bragg),
            CfgPatches_XX(Unit,Customs,Apollyon),
            CfgPatches_XX(Unit,Customs,Hermes),
            CfgPatches_XX(Unit,Customs,Volk),
            CfgPatches_XX(Unit,Customs,Tiger),
            CfgPatches_XX(Headgear,Regs,Cadet),
            CfgPatches_XX(Headgear,Regs,Trooper),
            CfgPatches_XX(Headgear,Customs,Bragg),
            CfgPatches_XX(Headgear,Customs,Apollyon),
            CfgPatches_XX(Headgear,Customs,Volk),
            CfgPatches_XX(Headgear,Customs,Cahir),
            CfgPatches_XX(Headgear,Customs,Tiger),
            CfgPatches_XX(Headgear,Customs,Elektro),
            CfgPatches_XX(Headgear,Customs,Launcher),
            CfgPatches_XX(Headgear,Customs,Vanguard),
            CfgPatches_XX(Headgear,Customs,Damos),
            CfgPatches_XX(Headgear,Customs,Viper),
            CfgPatches_XX(Headgear,Customs,Duty),
            CfgPatches_XX(Headgear,Customs,Franck),
            CfgPatches_XX(Headgear,Customs,Doc),
            CfgPatches_XX(Headgear,Customs,Tesler),
            CfgPatches_XX(Headgear,Customs,Blast),
            CfgPatches_XX(Headgear,Customs,Skibur),
            CfgPatches_XX(Headgear,Customs,Algo),
            CfgPatches_XX(HeadgearPilot,Regs,Pilot),
            CfgPatches_XX(HeadgearARF,Regs,ARF),
            CfgPatches_XX(HeadgearBARC,Regs,BARC),
            CfgPatches_XX(HeadgearBARC,Customs,Hermes)
        };
    };
};

class CfgWeapons {
//Uniforms
    #include "Uniform\CfgWeapons.hpp"
    //Uniform_197th_XX(type,name) -> 197th_Uniform_##type##_##name##
        Uniform_197th_XX(Regs,Cadet);
        Uniform_197th_XX(Regs,Trooper);
        Uniform_197th_XX(Regs,Medecin);
        Uniform_197th_XX(Regs,Sergent);
        Uniform_197th_XX(Regs,Lieutenant);
        Uniform_197th_XX(Regs,Capitain);
        Uniform_197th_XX(Customs,Bragg);
        Uniform_197th_XX(Customs,Apollyon);
        Uniform_197th_XX(Customs,Hermes);
        Uniform_197th_XX(Customs,Volk);
        Uniform_197th_XX(Customs,Tiger);
//Helmets
    #include "Helmet\CfgWeapons.hpp"
    //Helmet_197th_XX(type,name) -> 197th_Helmet_##type##_##name##
        Helmet_197th_XX(Regs,Cadet);
        Helmet_197th_XX(Regs,Trooper);
        Helmet_197th_XX(Customs,Apollyon);
        Helmet_197th_XX(Customs,Volk);
        Helmet_197th_XX(Customs,Cahir);
        Helmet_197th_XX(Customs,Tiger);
        Helmet_197th_XX(Customs,Elektro);
        Helmet_197th_XX(Customs,Launcher);
        Helmet_197th_XX(Customs,Vanguard);
        Helmet_197th_XX(Customs,Damos);
        Helmet_197th_XX(Customs,Viper);
        Helmet_197th_XX(Customs,Duty);
        Helmet_197th_XX(Customs,Franck);
        Helmet_197th_XX(Customs,Doc);
        Helmet_197th_XX(Customs,Tesler);
        Helmet_197th_XX(Customs,Blast);
        Helmet_197th_XX(Customs,Skibur);
        Helmet_197th_XX(Customs,Algo);
    //HelmetVisorLight_197th_XX(type,name) -> 197th_Helmet_##type##_##name##
        HelmetVisorLight_197th_XX(Customs,Bragg);
    //HelmetPilot_197th_XX(type,name) -> 197th_HelmetPilot_##type##_##name##
        HelmetPilot_197th_XX(Regs,Pilot);
    //HelmetARF_197th_XX(type,name) -> 197th_HelmetARF_##type##_##name##
        HelmetARF_197th_XX(Regs,ARF);
    //HelmetBARC_197th_XX(type,name) -> 197th_HelmetBARC_##type##_##name##
        HelmetBARC_197th_XX(Regs,BARC);
    //HelmetBARCVisorLight_197th_XX(type,name) -> 197th_HelmetBARC_##type##_##name##
        HelmetBARCVisorLight_197th_XX(Customs,Hermes);

//Vest
    #include "Vest\CfgWeapons.hpp"
    //VestOfficer_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestOfficer_197th_XX(Regs,Officier);
    //VestKama_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestKama_197th_XX(Regs,Kama);
    //VestPauldron_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestPauldron_197th_XX(Regs,Pauldron);
    //VestSergent_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestSergent_197th_XX(Regs,Sergent);
        VestSergent_197th_XX(Customs,Bragg);
    //VestARC_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestARC_197th_XX(Regs,ARC);
        VestARC_197th_XX(Customs,Hermes);
    //VestHolster_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestHolster_197th_XX(Regs,Holster);
    //VestMedical_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        VestMedical_197th_XX(Regs,Medical);
    //Vest0_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest0_197th_XX(Regs,0);
    //Vest1_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest1_197th_XX(Regs,1);
    //Vest2_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest2_197th_XX(Regs,2);
        Vest2_197th_XX(Customs,Apollyon);
    //Vest3_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest3_197th_XX(Regs,3);
    //Vest4_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest4_197th_XX(Regs,4);
    //Vest5_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest5_197th_XX(Regs,5);
    //Vest6_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest6_197th_XX(Regs,6);
    //Vest7_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest7_197th_XX(Regs,7);
    //Vest8_197th_XX(type,name) -> 197th_Vest_##type##_##name##
        Vest8_197th_XX(Regs,8);

//NVG
    #include "NVG\CfgWeapons.hpp"
    //NVG_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_197th_XX(Regs,Trooper);
    //NVG_NCO_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_NCO_197th_XX(Regs,Specialist);
    //NVG_SPC_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_SPC_197th_XX(Regs,SPC);
    //NVG_Rangefinder_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_Rangefinder_197th_XX(Regs,Rangefinder);
    //NVG_Visor_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_Visor_197th_XX(Customs,Bragg);
    //NVG_VisorProtection_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_VisorProtection_197th_XX(Customs,Apollyon);
    //NVG_Scanner_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_Scanner_197th_XX(Regs,MedicalScanner);
    //NVG_Headlamp_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_Headlamp_197th_XX(Regs,Headlamp);
};

class CfgVehicles {
//Units
    #include "Uniform\CfgVehicles.hpp"
    //Unit_197th_XX(type,name,sac,"helmet","vest","accessories1","accessories2","accessories3") -> 197th_Unit_##type##_##name##
        Unit_197th_XX(Regs,Cadet,197th_Backpack_Regs_Trooper,"197th_Helmet_Regs_Cadet","197th_Vest_Regs_0","","","");
        Unit_197th_XX(Regs,Trooper,197th_Backpack_Regs_Trooper,"197th_Helmet_Regs_Trooper","197th_Vest_Regs_0","","","");
        Unit_197th_XX(Regs,Medecin,197th_Backpack_Regs_Medecin,"197th_Helmet_Regs_Trooper","197th_Vest_Regs_Medical","","","");
        Unit_197th_XX(Regs,Sergent,,"197th_Helmet_Regs_Trooper","197th_Vest_Regs_Sergent","","","");
        Unit_197th_XX(Regs,Lieutenant,,"197th_Helmet_Regs_Trooper","197th_Vest_Regs_Pauldron","","","");
        Unit_197th_XX(Regs,Capitain,,"197th_Helmet_Regs_Trooper","197th_Vest_Regs_Officier","","","");
        Unit_197th_XX(Customs,Apollyon,197th_Backpack_Customs_Apollyon,"197th_Helmet_Customs_Apollyon","197th_Vest_Customs_Apollyon","197th_NVG_Customs_Apollyon","","");
        Unit_197th_XX(Customs,Hermes,197th_Backpack_Customs_Hermes,"197th_HelmetBARC_Customs_Hermes","197th_Vest_Customs_Hermes","197th_NVG_Regs_Rangefinder","","");
        Unit_197th_XX(Customs,Volk,,"197th_Helmet_Customs_Volk","197th_Vest_Regs_0","","","");
        Unit_197th_XX(Customs,Tiger,197th_Backpack_Customs_Tiger,"197th_Helmet_Customs_Tiger","197th_Vest_Regs_Kama","","","");
    //UnitCC_197th_XX(type,name,sac,"helmet","vest","accessories1","accessories2","accessories3") -> 197th_Unit_##type##_##name##
        UnitCC_197th_XX(Customs,Bragg,197th_Backpack_Customs_Bragg,"197th_Helmet_Customs_Bragg","197th_Vest_Customs_Bragg","197th_NVG_Customs_Bragg","","");

//Helmets
    #include "Helmet\CfgVehicles.hpp"
    //HeadgearItem_197th_XX(type,name) -> 197th_Headgear_##type##_##name##
        HeadgearItem_197th_XX(Regs,Cadet);
        HeadgearItem_197th_XX(Regs,Trooper);
        HeadgearItem_197th_XX(Customs,Bragg);
        HeadgearItem_197th_XX(Customs,Apollyon);
        HeadgearItem_197th_XX(Customs,Volk);
        HeadgearItem_197th_XX(Customs,Cahir);
        HeadgearItem_197th_XX(Customs,Tiger);
        HeadgearItem_197th_XX(Customs,Elektro);
        HeadgearItem_197th_XX(Customs,Launcher);
        HeadgearItem_197th_XX(Customs,Vanguard);
        HeadgearItem_197th_XX(Customs,Damos);
        HeadgearItem_197th_XX(Customs,Viper);
        HeadgearItem_197th_XX(Customs,Duty);
        HeadgearItem_197th_XX(Customs,Franck);
        HeadgearItem_197th_XX(Customs,Doc);
        HeadgearItem_197th_XX(Customs,Tesler);
        HeadgearItem_197th_XX(Customs,Blast);
        HeadgearItem_197th_XX(Customs,Skibur);
        HeadgearItem_197th_XX(Customs,Algo);
    //HeadgearItemPilot_197th_XX(type,name) -> 197th_HeadgearPilot_##type##_##name##
        HeadgearItemPilot_197th_XX(Regs,Pilot);
    //HeadgearItemARF_197th_XX(type,name) -> 197th_HeadgearARF_##type##_##name##
        HeadgearItemARF_197th_XX(Regs,ARF);
    //HeadgearItemBARC_197th_XX(type,name) -> 197th_HeadgearBARC_##type##_##name##
        HeadgearItemBARC_197th_XX(Regs,BARC);
        HeadgearItemBARC_197th_XX(Customs,Hermes);

//Backpack
    #include "Backpack\CfgVehicles.hpp"
    //Backpack_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        Backpack_197th_XX(Regs,Trooper);
        Backpack_197th_XX(Regs,Sapeur);
    //BackpackRocket_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackRocket_197th_XX(Regs,Rocket);
    //BackpackRadio_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackRadio_197th_XX(Regs,Radio);
    //BackpackMedecin_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackMedecin_197th_XX(Regs,Medecin);
    //BackpackSacocheCeinture_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackSacocheCeinture_197th_XX(Regs,Ceinture);
    //BackpackSacocheJambe_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackSacocheJambe_197th_XX(Regs,Jambe);
    //BackpackSacoche_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackSacoche_197th_XX(Regs,Complete);
    //BackpackARC_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackARC_197th_XX(Regs,ARC);
        BackpackARC_197th_XX(Customs,Hermes);
    //BackpackSacocheCeinturRTO_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
        BackpackSacocheCeinturRTO_197th_XX(Customs,Bragg);
        BackpackSacocheCeinturRTO_197th_XX(Customs,Apollyon);
        BackpackSacocheCeinturRTO_197th_XX(Customs,TIger);

 //Basic units additions
    #include "CfgVehicles.hpp"
};