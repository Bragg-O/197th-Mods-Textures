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

};