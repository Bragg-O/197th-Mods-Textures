#define HITPOINTS_PROTECTION_INFO        \
	class HitpointsProtectionInfo        \
	{                                    \
		class Chest                      \
		{                                \
			hitpointName = HitChest;     \
			armor = 12;                  \
			passThrough = 0.1;           \
		};                               \
		class Diaphragm                  \
		{                                \
			hitpointName = HitDiaphragm; \
			armor = 12;                  \
			passThrough = 0.1;           \
		};                               \
		class Abdomen                    \
		{                                \
			hitpointName = HitAbdomen;   \
			armor = 12;                  \
			passThrough = 0.1;           \
		};                               \
		class Body                       \
		{                                \
			hitpointName = HitBody;      \
			armor = 12;                  \
			passThrough = 0.1;           \
		};                               \
		class Legs                       \
		{                                \
			hitpointName = HitLegs;      \
			armor = 8;                   \
			passThrough = 0.3;           \
		};                               \
		class Arms                       \
		{                                \
			hitpointName = HitArms;      \
			armor = 8;                   \
			passThrough = 0.3;           \
		};                               \
		class Neck                       \
		{                                \
			hitpointName = HitNeck;      \
			armor = 8;                   \
			passThrough = 0.5;           \
		};                               \
	}

class VestItem;
class SWLB_clone_officer_armor;	   // Capitaine
class SWLB_clone_kama_armor;	   // Lieutenant Kama
class SWLB_clone_lieutenant_armor; // Lieutenant Pauldron
class SWLB_clone_recon_nco_armor;  // Sergent
class SWLB_clone_arc_armor;		   // ARC
class SWLB_clone_basic_armor;
class SWLB_CEE_ARF_Vest;
class SWLB_CEE_Engineer_Vest_NCO;
class SWLB_CEE_Engineer_Vest;
class SWLB_clone_assault_armor;
class SWLB_clone_cfr_armor;
class SWLB_clone_grenadier_armor;
class SWLB_clone_medic_armor;
class SWLB_clone_recon_armor;
class SWLB_clone_specialist_armor;
class SWLB_CEE_Hazard_Vest;
class SWLB_CEE_Force_Recon_NCO;

class 197th_Vest_Officer : SWLB_clone_officer_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Officier Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
	hiddenSelections[] = {"camo1"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Hazard : SWLB_CEE_Hazard_Vest
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Hazard Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_kama : SWLB_clone_kama_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste (Kama) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
	hiddenSelections[] = {"camo1", "rank"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_kama_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "rank"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Lieutenant2 : SWLB_CEE_Force_Recon_NCO
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Lieutenant (Kama + Epaulette) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
	hiddenSelections[] = {"camo1", "camo2", "camo3"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Lieutenant : SWLB_clone_lieutenant_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Lieutenant (Pauldron) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
	hiddenSelections[] = {"camo1"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Sergent : SWLB_clone_recon_nco_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Sergent Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
	hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_ARC : SWLB_clone_arc_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste ARC Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_CloneMedic : SWLB_clone_medic_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (Medecin) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
	hiddenSelections[] = {"camo1"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone0 : SWLB_clone_basic_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
		containerClass = "Supply210";
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone1 : SWLB_CEE_ARF_Vest
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (1) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
	hiddenSelections[] = {"camo1", "camo2", "camo3"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone2 : SWLB_CEE_Engineer_Vest_NCO
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (2) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
	hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4", "camo5", "camo6"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest_NCO.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"ammo", "camo1", "camo2", "camo3", "camo4", "camo5", "camo6"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone3 : SWLB_CEE_Engineer_Vest
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (3) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone4 : SWLB_clone_assault_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (4) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_assault_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone5 : SWLB_clone_cfr_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (5) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_cfr_armor.p3d";
	hiddenSelections[] = {"camo1"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_cfr_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone6 : SWLB_clone_grenadier_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (6) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone7 : SWLB_clone_recon_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (7) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
	hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2", "holster", "pauldron"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};

class 197th_Vest_Clone8 : SWLB_clone_specialist_armor
{
	author = "[CIM] Bragg";
	displayName = "[197th] Veste Clone (8) Base";
	scope = 0;
	scopearsenal = 0;
	model = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo : VestItem
	{
		uniformModel = "\SWLB_clones\SWLB_clone_specialist_armor.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1", "camo2"};
		mass = 80;
		HITPOINTS_PROTECTION_INFO;
	};
};