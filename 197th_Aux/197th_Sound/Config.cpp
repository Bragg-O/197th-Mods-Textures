/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Sound {
        name = "197th Sound";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};

class CfgSounds
{
	sounds[] = {};

	class BactaTimer
	{
		name = "[197th] Bacta Timer";						    // display name
		sound[] = { "197th_Sound\Data\Bacta.ogg", 3, 1, 30 };	// file, volume, pitch, maxDistance
	};

	class BactaExplo
	{
		name = "[197th] Bacta Explo";
		sound[] = { "197th_Sound\Data\BactaExplo.ogg", 3, 1, 30 };
	};

    class forklift_1
    {
        name = "[197th] forklift 1";
        sound[] = { "197th_Sound\Data\forklift_1.ogg", 10, 0.8, 100 };
    };

    class forklift_2
    {
        name = "[197th] forklift 2";
        sound[] = { "197th_Sound\Data\forklift_2.ogg", 10, 0.8, 100 };
    };

    class forklift_3
    {
        name = "[197th] forklift 3";
        sound[] = { "197th_Sound\Data\forklift_3.ogg", 10, 0.8, 100 };
    };
    class BIG_door1_open
	{
		sound[] = { "\SWLB_core\sounds\door_open.wss", 15, 1, 150 };
		name = "BIG_door1_open";
	};
	class BIG_door1_close
	{
		sound[] = { "\SWLB_core\sounds\door_close.wss", 15, 1, 150 };
		name = "BIG_door1_close";
	};
};