class CfgPatches
{
	class 197th_SkyLocker
	{
		name = "197th SkyLocker";
		author = "Bragg for 197th Compagnie Chimaera";
		url = "http://www.197th.fr";
		requiredAddons[] = {};
		weapons[] = {};
		units[] = {};
	};
};

class CIM_SkyLocker
{
	class SkyLocker_Base
	{
		owner = "";
		playerUID = "";
		textures[] = {
			"kobra\442_misc\personal_locker\data\body_co.paa",
			"kobra\442_misc\personal_locker\data\screen_co.paa",
			"kobra\442_misc\personal_locker\data\picture1_co.paa"};
	};

	class SkyLocker_144 : SkyLocker_Base
	{
		owner = "Bragg";
		playerUID = "76561198113173701";
	};

	class SkyLocker_128 : SkyLocker_Base
	{
		owner = "Apollyon";
		playerUID = "76561198203156987";
	};
};