class 197th_AA_Loadout : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] AA (Loadout)";
	scope = 2;
	side = 3;
	editorSubcategory = "CIM_Loadout";
	faction = "197th";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'AA_197th' ] call CIM_fnc_initLoadout;
		};
	};
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {"SWLW_beltGrenade_mag"};
	items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
	linkedItems[] = {"197th_Vest_Regs_0", "197th_Helmet_Regs_Trooper", "ItemMap", "ItemCompass", "ItemWatch", "JLTS_clone_comlink"};
};

class 197th_ARC_Loadout : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] ARC (Loadout)";
	scope = 2;
	side = 3;
	editorSubcategory = "CIM_Loadout";
	faction = "197th";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'ARC_197th' ] call CIM_fnc_initLoadout;
		};
	};
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {"SWLW_beltGrenade_mag"};
	items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
	linkedItems[] = {"197th_Vest_Regs_ARC", "197th_Helmet_Regs_Trooper", "ItemMap", "ItemCompass", "ItemWatch", "JLTS_clone_comlink"};
};

class 197th_Medic_Loadout : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] Medic (Loadout)";
	scope = 2;
	side = 3;
	editorSubcategory = "CIM_Loadout";
	faction = "197th";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Medic_197th' ] call CIM_fnc_initLoadout;
		};
	};
	uniformClass = "197th_Uniform_Regs_Medecin";
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {"SWLW_beltGrenade_mag"};
	items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
	linkedItems[] = {"197th_Vest_Regs_Medical", "197th_Helmet_Regs_Trooper", "ItemMap", "ItemCompass", "ItemWatch", "JLTS_clone_comlink"};
};

class 197th_ARF_Loadout : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] ARF (Loadout)";
	scope = 2;
	side = 3;
	editorSubcategory = "CIM_Loadout";
	faction = "197th";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'ARF_197th' ] call CIM_fnc_initLoadout;
		};
	};
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {"SWLW_beltGrenade_mag"};
	items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
	linkedItems[] = {"197th_Vest_Regs_0", "197th_HelmetARF_Regs_ARF", "ItemMap", "ItemCompass", "ItemWatch", "JLTS_clone_comlink"};
};

class 197th_Pilote_Loadout : 197th_Unit
{
	author = "[CIM] Bragg";
	displayName = "[197th] Pilote (Loadout)";
	scope = 2;
	side = 3;
	editorSubcategory = "CIM_Loadout";
	faction = "197th";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Pilote_197th' ] call CIM_fnc_initLoadout;
		};
	};
	uniformClass = "197th_Uniform_Regs_Trooper";
	backpack = "";
	weapons[] = {"Throw", "Put"};
	magazines[] = {"SWLW_beltGrenade_mag"};
	items[] = {"FirstAidKit", "FirstAidKit", "FirstAidKit"};
	linkedItems[] = {"197th_Vest_Regs_0", "197th_HelmetPilot_Regs_Pilot", "ItemMap", "ItemCompass", "ItemWatch", "JLTS_clone_comlink"};
};

class 197th_AT_Loadout : 197th_AA_Loadout
{
	author = "[CIM] Bragg";
	displayName = "[197th] AT (Loadout)";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'AT_197th' ] call CIM_fnc_initLoadout;
		};
	};
};

class 197th_Fantassin_Loadout : 197th_AA_Loadout
{
	author = "[CIM] Bragg";
	displayName = "[197th] Fantassin (Loadout)";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Fantassin_197th' ] call CIM_fnc_initLoadout;
		};
	};
};

class 197th_Heavy_Loadout : 197th_AA_Loadout
{
	author = "[CIM] Bragg";
	displayName = "[197th] Heavy (Loadout)";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Heavy_197th' ] call CIM_fnc_initLoadout;
		};
	};
};

class 197th_Radioman_Loadout : 197th_AA_Loadout
{
	author = "[CIM] Bragg";
	displayName = "[197th] Radioman (Loadout)";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Radioman_197th' ] call CIM_fnc_initLoadout;
		};
	};
};

class 197th_Mortier_Loadout : 197th_AA_Loadout
{
	author = "[CIM] Bragg";
	displayName = "[197th] Mortier (Loadout)";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Mortier_197th' ] call CIM_fnc_initLoadout;
		};
	};
};

class 197th_Sapeur_Loadout : 197th_AA_Loadout
{
	author = "[CIM] Bragg";
	displayName = "[197th] Sapeur (Loadout)";
	class EventHandlers
	{
		class InitLoadout197th
		{
			init = [ (_this select 0), 'Sapeur_197th' ] call CIM_fnc_initLoadout;
		};
	};
};