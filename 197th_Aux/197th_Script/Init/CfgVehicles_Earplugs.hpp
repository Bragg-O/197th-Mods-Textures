class Man;
class CAManBase: Man {
    class EventHandlers {
        class 197thEarplugs {
            init = "_this execVM '197th_Script\init\Earplugs.sqf';";
        };
    };
    class ACE_SelfActions {
        class PutInEarplugs {
            displayName = "Enclencher les filtres audio";
            condition = "NreEarplugsActive == 0 or (soundVolume == 1)";
            exceptions[] = {};
            statement = "[_player] execVM '197th_Script\Exec\Earplugs.sqf'";
            icon = "197th_Script\Data\waves.paa";
	    };
        class PutOutEarplugs {
            displayName = "Desactiver les filtres audio";
            condition = "NreEarplugsActive == 1 or (soundVolume < 1)";
            exceptions[] = {};
            statement = "[_player] execVM '197th_Script\Exec\Earplugs.sqf'";
            icon = "197th_Script\Data\unwaves.paa";
		};
	};
};