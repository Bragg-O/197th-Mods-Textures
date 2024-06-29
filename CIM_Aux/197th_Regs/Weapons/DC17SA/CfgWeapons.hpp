class JLTS_DC17SA;

class 197th_DC17SA_Regs: JLTS_DC17SA {
	baseWeapon = "197th_DC17SA_Regs";
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_DC17SA_Regs_fried";
	JLTS_repairTime = 30;
	JLTS_canHaveShield = 0;
	scope = 2;
	author = "[CIM] Bragg";
	displayName = "[197th] DC-17SA";
	picture = "\197th_Regs\Weapons\_ui\DC17SA.paa";
	magazines[] = {"197th_DC17SA_mag","JLTS_EMP_mag"};
	model = "\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
	hiddenSelectionsTextures[] = {
		"\197th_Regs\Weapons\DC17SA\Data\DC17SA_co.paa"
	};
	modes[] = {"Single"};
	fireLightDiffuse[] = {0,0,1};
	drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
	muzzles[] = {"this","Stun"};
	class Stun: JLTS_stun_muzzle
	{
		reloadAction = "GestureReloadPistol";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1,1,10};
	};
	class Single: Mode_SemiAuto
	{
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "";
			closure1[] = {};
			closure2[] = {};
			soundClosure[] = {};
		};
		class StandardSound: BaseSoundModeType
		{
			weaponSoundEffect = "";
			begin1[] = {"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",3,0.9,1800};
			soundBegin[] = {"begin1",1};
		};
		recoil = "recoil_pistol_light";
		recoilProne = "recoil_prone_pistol_light";
		reloadTime = 0.12;
		dispersion = 0.0029;
		minRange = 5;
		minRangeProbab = 0.3;
		midRange = 25;
		midRangeProbab = 0.6;
		maxRange = 50;
		maxRangeProbab = 0.1;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 25;
	};
	class WeaponSlotsInfo
	{
		class PointerSlot: PointerSlot
		{
			linkProxy = "-";
			compatibleItems[] = {
				"197th_Accessoires_Laser",
				"197th_Accessoires_Flashlight"
			};
		};
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[] = {};
			iconPosition[] = {0.24,0.35};
			iconScale = 0.2;
		};
		class CowsSlot : CowsSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			displayName = $STR_A3_CowsSlot0;
			compatibleItems[] = {
				"197th_Accessoires_HoloScope"
			};
		}; 
	};
};
class 197th_DC17SA_Regs_fried: 197th_DC17SA_Regs {
	baseWeapon = "197th_DC17SA_Regs_fried";
	JLTS_isFried = 1;
	displayName = "[197th] DC-17SA";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Regs\Weapons\_ui\DC17SA_fried.paa";
	scope = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	class Stun: Stun
	{
		displayName = "Stun mode (fried)";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};
class 197th_DC17SA_Regs_scoped: 197th_DC17SA_Regs	{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsPointer
		{
			slot = "PointerSlot";
			item = "197th_Accessoires_HoloScope";
		};
	};
};