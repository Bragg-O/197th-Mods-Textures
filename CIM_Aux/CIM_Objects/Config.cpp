#include "\CIM_Core\Macros.hpp"

#include "Macros.hpp"

class CfgPatches
{
    class CIM_Objects
    {
        name = "197th Objects";
        author = "[CIM] Bragg";
        url = "http://www.197th.fr";
        requiredAddons[] = {"CIM_Core"};
        units[] = {
            "197th_Banner",
            "197th_Flag",
            "197th_Flag_Horizontal",
            "197th_Flag_Vertical",
            "197th_HeadgearARF_Regs_ARF",
            "197th_HeadgearBarc_Regs_BARC",
            "197th_Headgear_Regs_Cadet",
            "197th_Headgear_Regs_Trooper",
            "197th_HeadgearPilot_Regs_Pilot",
            "197th_SupplySlingload_Ammo",
            "197th_SupplySlingload_Cargo",
            "197th_SupplySlingload_Fuel",
            "197th_SupplySlingload_Repair",
            "197th_Supply_Ammo",
            "197th_Supply_ATAA",
            "197th_Supply_Empty",
            "197th_Supply_Explosive",
            "197th_Supply_Medical",
            "197th_Supply_NVG",
            "197th_Supply_Weapon",
            "197th_TerminalMedical",
            "197th_R14",
            "197th_Terminal"};
        weapons[] = {};
    };
};

class CfgVehicles
{
    // R14
#include "R14\CfgVehicles.hpp"

    // Flag
#include "Flag\CfgVehicles.hpp"

    // Supply
#include "Supply\CfgVehicles.hpp"

    // Terminal
#include "Terminal\CfgVehicles.hpp"

    // Arsenal
#include "Arsenal\CfgVehicles.hpp"

    // Number
#include "Number\CfgVehicles.hpp"
    // Number_XX(Color,Num) -> 197th_Number_##Color##_##Num##
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