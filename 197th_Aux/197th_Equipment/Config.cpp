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
        weapons[] = { //All for arsenal
        //CfgPatches_XX(model,type,name) -> 197th_##model##_##type##_##name##
            CfgPatches_XX(Uniform,Regs,Cadet),
            CfgPatches_XX(Uniform,Regs,Trooper),
            CfgPatches_XX(Uniform,Regs,Medecin),
            CfgPatches_XX(Uniform,Regs,Sergent),
            CfgPatches_XX(Uniform,Regs,Lieutenant),
            CfgPatches_XX(Uniform,Regs,Capitain),
            CfgPatches_XX(Helmet,Regs,Cadet),
            CfgPatches_XX(Helmet,Regs,Trooper),
            CfgPatches_XX(HelmetPilot,Regs,Pilot),
            CfgPatches_XX(HelmetARF,Regs,ARF),
            CfgPatches_XX(Vest,Regs,Officier),
            CfgPatches_XX(Vest,Regs,Kama),
            CfgPatches_XX(Vest,Regs,Pauldron),
            CfgPatches_XX(Vest,Regs,Sergent),
            CfgPatches_XX(Vest,Regs,ARC),
            CfgPatches_XX(Vest,Regs,Holster),
            CfgPatches_XX(Vest,Regs,Medical),
            CfgPatches_XX(Vest,Regs,0),
            CfgPatches_XX(Vest,Regs,1),
            CfgPatches_XX(Vest,Regs,2),
            CfgPatches_XX(Vest,Regs,3),
            CfgPatches_XX(Vest,Regs,4),
            CfgPatches_XX(Vest,Regs,5),
            CfgPatches_XX(Vest,Regs,6),
            CfgPatches_XX(Vest,Regs,7),
            CfgPatches_XX(Vest,Regs,8),
            CfgPatches_XX(NVG,Regs,Trooper),
            CfgPatches_XX(NVG,Regs,Specialist),
            CfgPatches_XX(NVG,Regs,Rangefinder),
            CfgPatches_XX(NVG,Regs,Visor),
            CfgPatches_XX(NVG,Regs,VisorProtection),
            CfgPatches_XX(NVG,Regs,MedicalScanner),
            CfgPatches_XX(NVG,Regs,Headlamp)
        };
        units[] = { //All for curator
        //CfgPatches_XX(model,type,name) -> 197th_##model##_##type##_##name##
            CfgPatches_XX(Unit,Regs,Cadet),
            CfgPatches_XX(Unit,Regs,Trooper),
            CfgPatches_XX(Unit,Regs,Medecin),
            CfgPatches_XX(Unit,Regs,Sergent),
            CfgPatches_XX(Unit,Regs,Lieutenant),
            CfgPatches_XX(Unit,Regs,Capitain),
            CfgPatches_XX(Unit,Regs,Pilote),
            CfgPatches_XX(Unit,Regs,ARF),
            CfgPatches_XX(Unit,Regs,ARC),
            CfgPatches_XX(Headgear,Regs,Cadet),
            CfgPatches_XX(Headgear,Regs,Trooper),
            CfgPatches_XX(HeadgearPilot,Regs,Pilot),
            CfgPatches_XX(HeadgearARF,Regs,ARF),
            CfgPatches_XX(Backpack,Regs,Trooper),
            CfgPatches_XX(Backpack,Regs,Sapeur),
            CfgPatches_XX(Backpack,Regs,Rocket),
            CfgPatches_XX(Backpack,Regs,Radio),
            CfgPatches_XX(Backpack,Regs,Medecin),
            CfgPatches_XX(Backpack,Regs,Ceinture),
            CfgPatches_XX(Backpack,Regs,Jambe),
            CfgPatches_XX(Backpack,Regs,Complete),
            CfgPatches_XX(Backpack,Regs,ARC)
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

//Helmets
    #include "Helmet\CfgWeapons.hpp"
    //Helmet_197th_XX(type,name) -> 197th_Helmet_##type##_##name##
        Helmet_197th_XX(Regs,Cadet);
        Helmet_197th_XX(Regs,Trooper);
        HelmetVisorLight_197th_XX(Customs,Bragg);
    //HelmetPilot_197th_XX(type,name) -> 197th_HelmetPilot_##type##_##name##
        HelmetPilot_197th_XX(Regs,Pilot);
    //HelmetARF_197th_XX(type,name) -> 197th_HelmetARF_##type##_##name##
        HelmetARF_197th_XX(Regs,ARF);

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
    //NVG_Rangefinder_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_Rangefinder_197th_XX(Regs,Rangefinder);
    //NVG_Visor_197th_XX(type,name) -> 197th_NVG_##type##_##name##
        NVG_Visor_197th_XX(Customs,Bragg);
    //NVG_VisorProtection_197th_XX(type,name) -> 197th_NVG_##type##_##name##

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
        UnitCC_197th_XX(Customs,Bragg,197th_Backpack_Customs_Bragg,"197th_Helmet_Customs_Bragg","197th_Vest_Customs_Bragg","197th_NVG_Customs_Bragg","","");

//Helmets
    #include "Helmet\CfgVehicles.hpp"
    //HeadgearItem_197th_XX(type,name) -> 197th_Headgear_##type##_##name##
        HeadgearItem_197th_XX(Regs,Cadet);
        HeadgearItem_197th_XX(Regs,Trooper);
        HeadgearItem_197th_XX(Customs,Bragg);
    //HeadgearItemPilot_197th_XX(type,name) -> 197th_HeadgearPilot_##type##_##name##
        HeadgearItemPilot_197th_XX(Regs,Pilot);
    //HeadgearItemARF_197th_XX(type,name) -> 197th_HeadgearARF_##type##_##name##
        HeadgearItemARF_197th_XX(Regs,ARF);

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
        BackpackSacocheCeinturRTO_197th_XX(Customs,Bragg);
};