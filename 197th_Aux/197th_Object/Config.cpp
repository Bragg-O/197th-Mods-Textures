/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Object {
        name = "197th Object";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_weapon","197th_Equipment"};
        weapons[] = {};
        units[] = { //All for curator
            "197th_SupplySlingload_Repair",
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
            "197th_ArsenalRestricted",
            "197th_Number_White_0",
            "197th_Number_White_1",
            "197th_Number_White_2",
            "197th_Number_White_3",
            "197th_Number_White_4",
            "197th_Number_White_5",
            "197th_Number_White_6",
            "197th_Number_White_7",
            "197th_Number_White_8",
            "197th_Number_White_9",
            "197th_Number_Black_0",
            "197th_Number_Black_1",
            "197th_Number_Black_2",
            "197th_Number_Black_3",
            "197th_Number_Black_4",
            "197th_Number_Black_5",
            "197th_Number_Black_6",
            "197th_Number_Black_7",
            "197th_Number_Black_8",
            "197th_Number_Black_9",
            "197th_Number_Green_0",
            "197th_Number_Green_1",
            "197th_Number_Green_2",
            "197th_Number_Green_3",
            "197th_Number_Green_4",
            "197th_Number_Green_5",
            "197th_Number_Green_6",
            "197th_Number_Green_7",
            "197th_Number_Green_8",
            "197th_Number_Green_9",
            "197th_Number_Red_0",
            "197th_Number_Red_1",
            "197th_Number_Red_2",
            "197th_Number_Red_3",
            "197th_Number_Red_4",
            "197th_Number_Red_5",
            "197th_Number_Red_6",
            "197th_Number_Red_7",
            "197th_Number_Red_8",
            "197th_Number_Red_9",
            "197th_Number_Blue_0",
            "197th_Number_Blue_1",
            "197th_Number_Blue_2",
            "197th_Number_Blue_3",
            "197th_Number_Blue_4",
            "197th_Number_Blue_5",
            "197th_Number_Blue_6",
            "197th_Number_Blue_7",
            "197th_Number_Blue_8",
            "197th_Number_Blue_9"
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

//Arsenal
    #include "Arsenal\CfgVehicles.hpp"

//Number
    #include "Number\CfgVehicles.hpp"
    //Number_XX(Color,Num) -> 197th_Number_##Color##_##Num##
        Number_XX(White,0);
        Number_XX(White,1);
        Number_XX(White,2);
        Number_XX(White,3);
        Number_XX(White,4);
        Number_XX(White,5);
        Number_XX(White,6);
        Number_XX(White,7);
        Number_XX(White,8);
        Number_XX(White,9);
        Number_XX(Black,0);
        Number_XX(Black,1);
        Number_XX(Black,2);
        Number_XX(Black,3);
        Number_XX(Black,4);
        Number_XX(Black,5);
        Number_XX(Black,6);
        Number_XX(Black,7);
        Number_XX(Black,8);
        Number_XX(Black,9);
        Number_XX(Green,0);
        Number_XX(Green,1);
        Number_XX(Green,2);
        Number_XX(Green,3);
        Number_XX(Green,4);
        Number_XX(Green,5);
        Number_XX(Green,6);
        Number_XX(Green,7);
        Number_XX(Green,8);
        Number_XX(Green,9);
        Number_XX(Red,0);
        Number_XX(Red,1);
        Number_XX(Red,2);
        Number_XX(Red,3);
        Number_XX(Red,4);
        Number_XX(Red,5);
        Number_XX(Red,6);
        Number_XX(Red,7);
        Number_XX(Red,8);
        Number_XX(Red,9);
        Number_XX(Blue,0);
        Number_XX(Blue,1);
        Number_XX(Blue,2);
        Number_XX(Blue,3);
        Number_XX(Blue,4);
        Number_XX(Blue,5);
        Number_XX(Blue,6);
        Number_XX(Blue,7);
        Number_XX(Blue,8);
        Number_XX(Blue,9);
};