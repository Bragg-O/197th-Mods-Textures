class JLTS_DC15X;
class optic_lrps;
class 197th_DC15X_Regs: JLTS_DC15X {
	baseWeapon = "197th_DC15X_Regs";
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_DC15X_Regs_fried";
	JLTS_repairTime = 30;
	scope = 2;
	author = "197th Compagnie Chimaera";
	displayName = "[197th] DC-15X";
	picture = "\197th_Weapon\_ui\DC15X.paa";
	magazines[] = {"197th_DC15X_mag"};
	model = "\MRC\JLTS\weapons\DC15X\DC15X.p3d";
	hiddenSelectionsTextures[] = {
		"\197th_Weapon\DC15X\Data\DC15X_co.paa"
	};
	class WeaponSlotsInfo
	{
		class CowsSlot : CowsSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			displayName = $STR_A3_CowsSlot0;
			compatibleItems[] = {
				"197th_Accessoires_LRPS_Scope"
			};
		}; 
		class PointerSlot: PointerSlot
		{
			linkProxy = "-";
			compatibleItems[] = {
				"197th_Accessoires_Laser",
				"197th_Accessoires_Flashlight"
			};
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
			compatibleItems[] = {
				"197th_Accessoires_bipods"
			};
		};
	};
};

class 197th_DC15X_Regs_fried: 197th_DC15X_Regs {
	baseWeapon = "197th_DC15X_Regs_fried";
	JLTS_isFried = 1;
	displayName = "[197th] DC-15X";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Weapon\_ui\RPS6_fried.paa";
	scope = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
};

class 197th_DC15X_Regs_scoped: 197th_DC15X_Regs	{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "197th_Accessoires_LRPS_Scope";
		};
	};
};