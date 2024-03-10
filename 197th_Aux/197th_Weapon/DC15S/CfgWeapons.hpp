class JLTS_DC15S;
class Rifle_Base_F;
class arifle_MX_Base_F: Rifle_Base_F
{
	class GunParticles;
	class GunClouds;
	class WeaponSlotsInfo;
};
class UGL_F;
class JLTS_stun_muzzle;

class 197th_DC15S_Regs: JLTS_DC15S {
	baseWeapon = "197th_DC15S_Regs";
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_DC15S_Regs_fried";
	JLTS_repairTime = 30;
	JLTS_canHaveShield = 1;
	JLTS_shieldedWeapon = "197th_DC15S_Regs_shield";
	scope = 2;
	author = "197th Compagnie Chimaera";
	displayName = "[197th] DC-15S";
	picture = "\197th_Weapon\_ui\DC15S.paa";
	magazines[] = {"197th_DC15S_mag","197th_DC15_mag"};
	model = "\MRC\JLTS\weapons\DC15S\DC15S.p3d";
	hiddenSelectionsTextures[] = {
		"\197th_Weapon\DC15S\Data\DC15S_co.paa"
	};
	modes[] = {"Single","FullAuto"};
	fireLightDiffuse[] = {0,0,1};
	drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
	muzzles[] = {"this","Stun"};
	class Stun: JLTS_stun_muzzle{};
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
			begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
			soundBegin[] = {"begin1",1};
		};
		reloadTime = 0.096;
		recoil = "recoil_single_mx";
		recoilProne = "recoil_single_prone_mx";
		dispersion = 0.00087;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.3;
	};
	class FullAuto: Mode_FullAuto
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
			begin1[] = {"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",1,1,1800};
			soundBegin[] = {"begin1",1};
		};
		reloadTime = 0.096;
		dispersion = 0.00087;
		recoil = "recoil_auto_mx";
		recoilProne = "recoil_auto_prone_mx";
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 15;
		midRangeProbab = 0.7;
		maxRange = 30;
		maxRangeProbab = 0.1;
		aiRateOfFire = 1e-06;
	};
	class WeaponSlotsInfo
	{
		class CowsSlot : CowsSlot
		{
			linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
			displayName = $STR_A3_CowsSlot0;
			compatibleItems[] = {
				"197th_Accessoires_HoloScope"
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
	};
};

class 197th_DC15S_Regs_fried: 197th_DC15S_Regs {
	baseWeapon = "197th_DC15S_Regs_fried";
	JLTS_isFried = 1;
	JLTS_shieldedWeapon = "197th_DC15S_Regs_shield_fried";
	displayName = "[197th] DC-15S";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Weapon\_ui\DC15S_fried.paa";
	scope = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	class Stun: Stun
	{
		displayName = "$STR_JLTS_names_StunModeFried";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};

class 197th_DC15S_Regs_shield: 197th_DC15S_Regs
	{
	displayName = "[197th] DC-15S (Shield)";
	baseWeapon = "197th_DC15S_Regs_shield";
	scope = 1;
	JLTS_isShielded = 1;
	JLTS_baseWeapon = "197th_DC15S_Regs";
	JLTS_friedItem = "197th_DC15S_Regs_shield_fried";
	model = "\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"\197th_Weapon\DC15S\Data\DC15S_co.paa","\MRC\JLTS\weapons\Shield\data\shield_co.paa"};
	handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"};
	reloadAction = "GestureReload";
	inertia = 0.8;
	recoil = "recoil_pdw";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 110;
		class UnderBarrelSlot: UnderBarrelSlot
		{
			compatibleItems[] = {"197th_riot_shield_attachment"};
		};
	};
};

class 197th_DC15S_Regs_shield_fried: 197th_DC15S_Regs_shield {
	baseWeapon = "197th_DC15S_Regs_shield_fried";
	JLTS_isFried = 1;
	JLTS_baseWeapon = "197th_DC15S_Regs_fried";
	displayName = "[197th] DC-15S (Shield)";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Weapon\_ui\DC15S_fried.paa";
	scope = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	class Stun: Stun
	{
		displayName = "$STR_JLTS_names_StunModeFried";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};

class 197th_DC15S_Regs_scoped: 197th_DC15S_Regs	{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "197th_Accessoires_HoloScope";
		};
	};
};