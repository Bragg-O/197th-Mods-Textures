class Man;
class CAManBase: Man {
    class ACE_SelfActions {
        class PutInEarplugs {
            displayName = "Enclencher les filtres audio";
            condition = "soundVolume == 1";
            exceptions[] = {};
            statement = "[_player] spawn CIM_fnc_EarplugsSwitch;";
            icon = "197th_Fonctions\Earplugs\waves_ca.paa";
	    };
        class PutOutEarplugs {
            displayName = "Desactiver les filtres audio";
            condition = "soundVolume < 1";
            exceptions[] = {};
            statement = "[_player] spawn CIM_fnc_EarplugsSwitch;";
            icon = "197th_Fonctions\Earplugs\unwaves_ca.paa";
		};
	};
};