class Man;
class CAManBase: Man {
    class ACE_SelfActions {
        class ACE_Equipment {
            class PutInEarplugs {
                displayName = "Enclencher les filtres audio";
                condition = "NreEarplugsActive == 0";
                exceptions[] = {};
                statement = "[_player] execVM '197th_Script\Exec\Earplugs.sqf'";
                icon = "197th_Script\Data\waves.paa";
			};
            class PutOutEarplugs {
                displayName = "Desactiver les filtres audio";
                condition = "NreEarplugsActive == 1";
                exceptions[] = {};
                statement = "[_player] execVM '197th_Script\Exec\Earplugs.sqf'";
                icon = "197th_Script\Data\waves.paa";
			};
		};
	};
};