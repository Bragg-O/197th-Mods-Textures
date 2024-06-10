/*
	Author: Bragg for 197th Compagnie Chimaera

	Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.

	Website: [www.197th.fr]
*/

class CfgPatches
{
	class 197th_Music
	{
		name = "197th Music";
		author = "Bragg for 197th Compagnie Chimaera";
		url = "http://www.197th.fr";
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

#include "PreProcessor.hpp"

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
	Categories_XX(Halo_Epic,Halo (Epic));
	Categories_XX(Halo_Calme,Halo (Calme));
	Categories_XX(40K_Epic,40K (Epic));
	Categories_XX(40K_Calme,40K (Calme));
	Categories_XX(2077_Epic,Cyberpunk 2077 (Epic));
	Categories_XX(2077_Calme,Cyberpunk 2077 (Calme));
	Categories_XX(R6_Calme,Rainbow Six (Calme));
	Categories_XX(R6_Epic,Rainbow Six (Epic));
	Categories_XX(Interstellar_Calm,Interstellar (Calm));
	Categories_XX(Interstellar_Epic,Interstellar (Epic));
	Categories_XX(Transformers_Calm,Transformers (Calm));
	Categories_XX(Transformers_Epic,Transformers (Epic));
};

class CfgMusic
{
#include "data\CfgMusic.hpp"
};