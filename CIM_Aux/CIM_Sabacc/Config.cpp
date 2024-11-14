#include "\CIM_Core\Macros.hpp"

class CfgPatches
{
    class CIM_Sabacc
    {
        name = "CIM Sabacc";
        author = "[CIM] Bragg";
        url = "http://www.197th.fr";
        requiredAddons[] = {"CIM_Core"};
        units[] = {};
        weapons[] = {};
    };
};

#include "Functions\CfgFunctions.hpp"

#include "Functions\CfgRemoteExec.hpp"

class CfgVehicles
{
    class house_F;
    class 197th_SabaccChips : house_F
    {
        author = "[CIM] Bragg";
        displayName = "[197th] Sabacc Chips";
        editorPreview = "";
        scope = 2;
        scopecurator = 2;
        armor = 100;
        armorStructural = 100;
        editorCategory = "CIM_Objects";
        editorSubcategory = "CIM_Sabacc";
        model = "CIM_Sabacc\SabaccChips.p3d";
    };

    class 3AS_HoloTable_Octagon_Green_Prop;
    class 197th_SabacchTable : 3AS_HoloTable_Octagon_Green_Prop
    {
        author = "[CIM] Bragg";
        displayName = "[197th] Holotable Sabacc";
        editorPreview = "";
        scope = 2;
        armor = 100;
        armorStructural = 100;
        editorCategory = "CIM_Objects";
        editorSubcategory = "CIM_Sabacc";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"\cim_sabacc\data\table_co.paa"};
        hiddenSelectionsMaterials[] = {"3AS\3AS_Props\Terminals\data\holotable_octagon\green\holotable_octagon_green_emiss.rvmat"};
    };

    class ls_cis_oomSecurity_standard;
    class 197th_Croupier : ls_cis_oomSecurity_standard
    {
        author = "[CIM] Bragg";
        editorPreview = "";
        displayName = "[197th] OOM-Croupier";
        uniformClass = "197th_Croupier_uniform";
        faction = "197th";
        side = 1;
        scope = 2;
        scopecurator = 2;
        editorSubcategory = "CIM_Sabacc";
        hiddenSelectionsTextures[] = {
            "\cim_sabacc\data\Croupier\camo1_co.paa",
            "\cim_sabacc\data\Croupier\camo2_co.paa"};
        backpack = "";
        weapons[] = {"Throw", "Put"};
        magazines[] = {};
        items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
        linkedItems[] = {"ls_cis_b1_helmet", "ItemMap", "ItemCompass", "ItemWatch"};
    };
};

class CfgWeapons
{
    class ls_cis_oomSecurity_uniform;
    class ItemInfo;
    class 197th_Croupier_uniform : ls_cis_oomSecurity_uniform
    {
        scope = 1;
        scopeArsenal = 1;
        author = "[CIM] Bragg";
        displayName = "[197th] OOM-Croupier Chassis";
        picture = "\CIM_Sabacc\Data\_ui\Sabacc_ca.paa";
        hiddenSelectionsTextures[] = {
            "\cim_sabacc\data\Croupier\camo1_co.paa",
            "\cim_sabacc\data\Croupier\camo2_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "-";
            uniformClass = "197th_Croupier";
            containerClass = "Supply150";
            mass = 40;
        };
    };
};