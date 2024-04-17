/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Loadout {
        name = "197th Loadout";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = {
            "197th_Loadout_AA",
            "197th_Loadout_ARC",
            "197th_Loadout_ARF",
            "197th_Loadout_AT",
            "197th_Loadout_Fantassin",
            "197th_Loadout_Grenadier",
            "197th_Loadout_Heavy",
            "197th_Loadout_Medecin",
            "197th_Loadout_Pilote",
            "197th_Loadout_Radioman",
            "197th_Loadout_Sapeur",
            "197th_Loadout_Shield"
        };
    };
};

class CfgVehicles {
    class 197th_Unit;
    class 197th_Base_Loadout : 197th_Unit {
        author = "197th Compagnie Chimaera";
        displayName = "[197th] Base (Loadout)";
        scope = 0;
        scopecurator = 0;
	    side = 3;
        editorSubcategory = "197th_Loadout";
        faction = "197th_WorldEdit";
    };
    Loadout_197th_XX(AA);
    Loadout_197th_XX(ARC);
    Loadout_197th_XX(ARF);
    Loadout_197th_XX(AT);
    Loadout_197th_XX(Fantassin);
    Loadout_197th_XX(Grenadier);
    Loadout_197th_XX(Heavy);
    Loadout_197th_XX(Medecin);
    Loadout_197th_XX(Pilote);
    Loadout_197th_XX(Radioman);
    Loadout_197th_XX(Sapeur);
    Loadout_197th_XX(Shield);
};

class CIM_CfgLoadouts {
	class ARC_197th {
		Prefix = "[197th]";
        PrefixColor = "#27AE60";
        displayName = "ARC";
        LoadoutPath = "\197th_Loadout\Data\ARC";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S,DC-15S);
            Variants_197th_XX(DC15A,DC-15A);
        };
	};
    class AA_197th : ARC_197th {
        displayName = "Anti-Air";
        LoadoutPath = "\197th_Loadout\Data\AA";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S,DC-15S);
        };
    };
    class ARF_197th : ARC_197th {
        displayName = "ARF";
        LoadoutPath = "\197th_Loadout\Data\ARF";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15X,DC-15X);
            Variants_197th_XX(DC15X_RADIO,DC-15X / Radioman);
        };
    };
    class AT_197th : ARC_197th {
        displayName = "Anti-Tank";
        LoadoutPath = "\197th_Loadout\Data\AT";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S,DC-15S);
        };
    };
    class Fantassin_197th : ARC_197th {
        displayName = "Fantassin";
        LoadoutPath = "\197th_Loadout\Data\Fantassin";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15A_Cadet,DC-15A / Cadet);
            Variants_197th_XX(DC15S_Cadet,DC-15S / Cadet);
            Variants_197th_XX(DC15A_Leader,DC-15A / Leader);
            Variants_197th_XX(DC15S_Leader,DC-15S / Leader);
            Variants_197th_XX(DC15A_Trooper,DC-15A / Trooper);
            Variants_197th_XX(DC15S_Trooper,DC-15S / Trooper);
        };
    };
    class Grenadier_197th : ARC_197th {
        displayName = "Grenadier";
        LoadoutPath = "\197th_Loadout\Data\Grenadier";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15A,DC-15A);
        };
    };
    class Heavy_197th : ARC_197th {
        displayName = "Heavy";
        LoadoutPath = "\197th_Loadout\Data\Heavy";
        class CIM_CfgVariants {
            Variants_197th_XX(Z6,Z-6);
        };
    };
    class Medic_197th : ARC_197th {
        displayName = "Medic";
        LoadoutPath = "\197th_Loadout\Data\Medic";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S_Infirmier,DC-15S / Infirmier);
            Variants_197th_XX(DC15A_Infirmier,DC-15A / Infirmier);
            Variants_197th_XX(DC15S_Medecin,DC-15S / Medecin);
            Variants_197th_XX(DC15A_Medecin,DC-15A / Medecin);
        };
    };
    class Pilote_197th : ARC_197th {
        displayName = "Pilote";
        LoadoutPath = "\197th_Loadout\Data\Pilote";
        class CIM_CfgVariants {
            Variants_197th_XX(DC17SA,DC-17SA);
        };
    };
    class Radioman_197th : ARC_197th {
        displayName = "Radioman";
        LoadoutPath = "\197th_Loadout\Data\Radioman";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S,DC-15S);
            Variants_197th_XX(DC15A,DC-15A);
        };
    };
    class Sapeur_197th : ARC_197th {
        displayName = "Sapeur";
        LoadoutPath = "\197th_Loadout\Data\Sapeur";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S,DC-15S);
            Variants_197th_XX(DC15A,DC-15A);
        };
    };
    class Shield_197th : ARC_197th {
        displayName = "Shield";
        LoadoutPath = "\197th_Loadout\Data\Shield";
        class CIM_CfgVariants {
            Variants_197th_XX(DC15S,DC-15S);
        };
    };
};