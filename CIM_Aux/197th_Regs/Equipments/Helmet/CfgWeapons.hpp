#define HITPOINTS_PROTECTION_INFO   \
	class HitpointsProtectionInfo   \
	{                               \
		class Head                  \
		{                           \
			hitpointName = HitHead; \
			armor = 8;              \
			passThrough = 0.2;      \
		};                          \
		class Face                  \
		{                           \
			hitpointName = HitFace; \
			armor = 8;              \
			passThrough = 0.2;      \
		};                          \
	};

class HeadgearItem;
class ls_gar_phase2_helmet;
class 197th_Helmet : ls_gar_phase2_helmet
{
	author = "[CIM] Bragg";
	displayName = "[197th] helmet Base";
	scope = 0;
	scopearsenal = 0;
	model = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
	hiddenSelections[] = {"camo1", "visor"};
	subItems[] = {};
	grad_slingHelmet_allow = true;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
		allowedSlots[] = {801, 901, 701, 605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo1", "visor"};
		HITPOINTS_PROTECTION_INFO;
	};
};

class ls_gar_phase2Pilot_helmet;
class 197th_HelmetPilot : ls_gar_phase2Pilot_helmet
{
	author = "[CIM] Bragg";
	displayName = "[197th] helmet Pilot Base";
	scope = 0;
	scopearsenal = 0;
	model = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
	hiddenSelections[] = {"camo1", "visor"};
	subItems[] = {"Integrated_NVG_TI_0_F"};
	grad_slingHelmet_allow = true;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
		allowedSlots[] = {801, 901, 701, 605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo1", "visor"};
		HITPOINTS_PROTECTION_INFO;
	};
};

class ls_gar_phase1Arf_helmet;
class 197th_HelmetArf : ls_gar_phase1Arf_helmet
{
	author = "[CIM] Bragg";
	displayName = "[197th] helmet ARF Base";
	scope = 0;
	scopearsenal = 0;
	hiddenSelections[] = {"camo1", "camo2", "visor"};
	model = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
	subItems[] = {"Integrated_NVG_TI_1_F"};
	grad_slingHelmet_allow = true;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
		allowedSlots[] = {801, 901, 701, 605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo1", "camo2", "visor"};
		HITPOINTS_PROTECTION_INFO;
	};
};

class ls_gar_barc_helmet;
class 197th_HelmetBarc : ls_gar_barc_helmet
{
	author = "[CIM] Bragg";
	displayName = "[197th] helmet BARC Base";
	scope = 0;
	scopearsenal = 0;
	hiddenSelections[] = {"camo1", "visor"};
	model = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
	subItems[] = {};
	grad_slingHelmet_allow = true;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\ls_armor_bluefor\helmet\gar\barc\ls_gar_barc_helmet.p3d";
		allowedSlots[] = {801, 901, 701, 605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo1", "visor"};
		HITPOINTS_PROTECTION_INFO;
	};
};