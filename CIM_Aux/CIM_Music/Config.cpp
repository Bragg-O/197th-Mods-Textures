#include "\CIM_Core\Macros.hpp"

class CfgPatches
{
	class CIM_Music
	{
		name = "CIM - Music";
		author = "[CIM] Bragg";
		url = "http://www.197th.fr";
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMusicClasses
{
	Categories_XX(SW_Epic,Star Wars (Epic));
	Categories_XX(SW_Calme,Star Wars (Calme));
	Categories_XX(SW_Sad,Star Wars (Sad));
	Categories_XX(SW_Hope,Star Wars (Hope));
	Categories_XX(SW_Dark,Star Wars (Darkness));
	Categories_XX(SW_Victory,Star Wars (Victory));
	Categories_XX(SW_Special,Star Wars (Special));
	Categories_XX(SW_Wait,Star Wars (Wait));
	Categories_XX(Halo,Halo);
	Categories_XX(40K,Warhammer 40k);
	Categories_XX(2077,Cyberpunk 2077);
	Categories_XX(R6,Rainbow Six);
	Categories_XX(Interstellar,Interstellar);
	Categories_XX(Transformers,Transformers);
};

class CfgMusic
{
#include "CfgMusic.hpp"
};