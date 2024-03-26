/*
    Author: Bragg for La Horde Taung

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class HT_Core {
        name = "HT Core";
        author = "Bragg for La Horde Taung";
        url = "http://www.197th.fr";
        requiredAddons[]={"A3_Functions_F","A3_Data_F_Enoch_Loadorder"};
        units[]={};
        weapons[]={};
    };
};

class CfgFactionClasses {
    Categories_HT_XX(Units);
};

class CfgEditorCategories {
    Categories_HT_XX(Units);
    Categories_HT_XX(Equipment);
};

class CfgEditorSubcategories {
    AdvancedCategories_HT_XX(Customs,Helmet);
    AdvancedCategories_HT_XX(Regs,Helmet);
    AdvancedCategories_HT_XX(Customs,Unit);
    AdvancedCategories_HT_XX(Regs,Unit);
};