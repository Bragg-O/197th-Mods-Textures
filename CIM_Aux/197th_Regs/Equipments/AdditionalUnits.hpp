// Basic units Additions
class 197th_Unit_Regs_Pilote : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] Pilote";
	scope = 2;
	scopecurator = 2;
	editorSubcategory = "CIM_Regs_Unit";
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "197th_Backpack_Regs_Ceinture";
	linkedItems[] += {"197th_HelmetPilot_Regs_Pilot", "197th_Vest_Regs_0"};
	respawnlinkedItems[] += {"197th_HelmetPilot_Regs_Pilot", "197th_Vest_Regs_0"};
};

class 197th_Unit_Regs_ARF : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] ARF";
	scope = 2;
	scopecurator = 2;
	editorSubcategory = "CIM_Regs_Unit";
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "197th_Backpack_Regs_Complete";
	linkedItems[] += {"197th_HelmetARF_Regs_Arf", "197th_Vest_Regs_0"};
	respawnlinkedItems[] += {"197th_HelmetARF_Regs_Arf", "197th_Vest_Regs_0"};
};

class 197th_Unit_Regs_ARF_TP : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] ARF (TP)";
	scope = 2;
	scopecurator = 2;
	editorSubcategory = "CIM_Regs_Unit";
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "197th_Backpack_Regs_Complete";
	linkedItems[] += {"197th_HelmetARF_Regs_Arf", "197th_Vest_Regs_0"};
	respawnlinkedItems[] += {"197th_HelmetARF_Regs_Arf", "197th_Vest_Regs_0"};
	weapons[] = {"197th_DC15X_Regs_scoped", "Throw"};
	respawnWeapons[] = {"197th_DC15X_Regs_scoped", "Throw"};
	magazines[] = {"197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "SWLW_beltGrenade_mag"};
	respawnMagazines[] = {"197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "SWLW_beltGrenade_mag"};
};

class 197th_Unit_Regs_ARC : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] ARC";
	scope = 2;
	scopecurator = 2;
	editorSubcategory = "CIM_Regs_Unit";
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "197th_Backpack_Regs_ARC";
	linkedItems[] += {"197th_Helmet_Regs_Trooper", "197th_Vest_Regs_ARC", "197th_NVG_Regs_Rangefinder"};
	respawnlinkedItems[] += {"197th_Helmet_Regs_Trooper", "197th_Vest_Regs_ARC", "197th_NVG_Regs_Rangefinder"};
};

class 197th_Unit_Regs_AT : 197th_Unit_Regs_Trooper
{
	author = "[CIM] Bragg";
	displayName = "[197th] AT";
	scope = 2;
	scopecurator = 2;
	editorSubcategory = "CIM_Regs_Unit";
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "197th_Backpack_Regs_Trooper";
	weapons[] += {"197th_RPS6_Regs"};
	respawnWeapons[] += {"197th_RPS6_Regs"};
	magazines[] += {"197th_AT_mag", "197th_AT_mag", "197th_AT_mag", "197th_AT_mag", "197th_AT_mag", "197th_AT_mag"};
	respawnMagazines[] += {"197th_AT_mag", "197th_AT_mag", "197th_AT_mag", "197th_AT_mag", "197th_AT_mag", "197th_AT_mag"};
};

class 197th_Unit_Regs_AA : 197th_Unit_Regs_Trooper
{
	author = "[CIM] Bragg";
	displayName = "[197th] AA";
	scope = 2;
	scopecurator = 2;
	editorSubcategory = "CIM_Regs_Unit";
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "197th_Backpack_Regs_Trooper";
	weapons[] += {"197th_PLX1_Regs"};
	respawnWeapons[] += {"197th_PLX1_Regs"};
	magazines[] += {"197th_AA_mag", "197th_AA_mag", "197th_AA_mag", "197th_AA_mag"};
	respawnMagazines[] += {"197th_AA_mag", "197th_AA_mag", "197th_AA_mag", "197th_AA_mag"};
};