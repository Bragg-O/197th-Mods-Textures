class 3AS_Republic_Mortar_Bag;
class 3AS_Republic_Mortar;
class assembleInfo;
class Turrets;
class MainTurret;

class 197th_Mortar_Bag : 3AS_Republic_Mortar_Bag
{
	author = "[CIM] Bragg";
	scope = 2;
	scopeCurator = 2;
	editorCategory = "CIM_Weapon";
	editorSubcategory = "CIM_Regs_Backpack";
	displayName = "[197th] Mortar Bag";

	hiddenSelectionsTextures[] =
		{
			"\197th_Regs\Weapons\Mortar\Data\base_co.paa",
			"\197th_Regs\Weapons\Mortar\Data\tube_co.paa"};

	mass = 450;
	class assembleInfo: assembleInfo
	{
		base[] = {""};
		displayName = "Build Mortar";
		assembleTo = "197th_Mortar";
	};
};

class 197th_Mortar : 3AS_Republic_Mortar
{
	faction = "197th";
	author = "[CIM] Bragg";
	scope = 2;
	scopeCurator = 2;
	side=1;
	forceInGarage = 2;
	editorSubcategory = "CIM_Turret";
	displayName = "[197th] Mortar";
	crew = "197th_Unit_Regs_Trooper";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			initelev = 0;
			maxelev = 40;
			minelev = -15;
			initturn = 0;
			maxturn = 360;
			minturn = -360;
			weapons[] = {"3AS_mortar_82mm"};
			magazines[] = {
				"3AS_8Rnd_82mm_Mo_shells",
				"3AS_8Rnd_82mm_Mo_Flare_white",
				"3AS_8Rnd_82mm_Mo_Flare_white",
				"3AS_8Rnd_82mm_Mo_Flare_Red",
				"3AS_8Rnd_82mm_Mo_Smoke_white",
				"3AS_8Rnd_82mm_Mo_Smoke_white"};
			elevationMode = 3;
			gunnerforceoptics = 1;
		};
	};

	class assembleInfo: assembleInfo
	{
		dissasembleTo[] = {"197th_Mortar_Bag"};
	};

	hiddenSelectionsTextures[] = {
		"\197th_Regs\Weapons\Mortar\Data\base_co.paa",
		"\197th_Regs\Weapons\Mortar\Data\tube_co.paa"};

	class TextureSources
	{
		class 197th
		{
			displayName = "197th";
			author = "[CIM] Bragg";
			textures[] = {
				"\197th_Regs\Weapons\Mortar\Data\base_co.paa",
				"\197th_Regs\Weapons\Mortar\Data\tube_co.paa"};
			factions[] = {"197th"};
		};
	};
};
