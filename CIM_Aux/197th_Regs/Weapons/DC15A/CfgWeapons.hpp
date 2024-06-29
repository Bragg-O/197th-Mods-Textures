class JLTS_DC15A_plastic;
class 197th_DC15A_Regs: JLTS_DC15A_plastic {
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_DC15A_Regs_fried";
	JLTS_repairTime = 30;
	scope = 2;
	scopearsenal = 2;
	author = "[CIM] Bragg";
	displayName = "[197th] DC-15A";
	picture = "\197th_Regs\Weapons\_ui\DC15A.paa";
	magazines[] = {"197th_DC15A_mag","197th_DC15_mag"};
	model = "\MRC\JLTS\weapons\DC15A\DC15A_plastic.p3d";
	hiddenSelectionsTextures[] = {
		"\197th_Regs\Weapons\DC15A\Data\DC15A_co.paa"
	};
	modes[] = {"Single","FullAuto"};
	fireLightDiffuse[] = {0,0,1};
	drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
	muzzles[] = {"this","Stun"};
	class Stun: JLTS_stun_muzzle{};
	class Single: Mode_SemiAuto
	{
		displayName = "Single shot";
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
		dispersion = 0.00073;
		minRange = 2;
		minRangeProbab = 0.5;
		midRange = 250;
		midRangeProbab = 0.7;
		maxRange = 450;
		maxRangeProbab = 0.3;
	};
	class FullAuto: Mode_FullAuto
	{
		displayName = "Full auto";
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
		reloadTime = 0.175;
		recoil = "recoil_auto_mx";
		recoilProne = "recoil_auto_prone_mx";
		dispersion = 0.00073;
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
			linkProxy = "-";
			displayName = $STR_A3_CowsSlot0;
			compatibleItems[] = {
				"197th_Accessoire_LR_Scope"
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

class 197th_DC15A_Regs_fried: 197th_DC15A_Regs {
	baseWeapon = "197th_DC15A_Regs_fried";
	JLTS_isFried = 1;
	displayName = "[197th] DC-15A";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Regs\Weapons\_ui\DC15A_fried.paa";
	scope = 1;
	scopearsenal = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	class Stun: Stun
	{
		displayName = "$STR_JLTS_names_StunModeFried";
		magazines[] = {};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
	};
};

class 197th_DC15A_ugl_Regs: 197th_DC15A_Regs {
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_DC15A_ugl_Regs_fried";
	JLTS_repairTime = 30;
	scope = 2;
	scopearsenal = 2;
	author = "[CIM] Bragg";
	displayName = "[197th] DC-15A (UGL)";
	picture = "\197th_Regs\Weapons\_ui\DC15A_LG.paa";
	magazines[] = {"197th_DC15A_mag","197th_DC15_mag"};
	model = "\MRC\JLTS\weapons\DC15A\DC15A_ugl_plastic.p3d";
	hiddenSelections[] = {"camo1","camo2","illum"};
	hiddenSelectionsTextures[] = {
		"\197th_Regs\Weapons\DC15A\Data\DC15A_co.paa",
		"\197th_Regs\Weapons\DC15A\Data\DC15A_ugl_co.paa"
	};
	hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	muzzles[] = {"this","EGLM"};	
	class EGLM: UGL_F
	{
		displayName = "$STR_JLTS_names_GL";
		descriptionShort = "$STR_JLTS_names_UGL";
		useModelOptics = 0;
		useExternalOptic = 0;
		cameraDir = "OP_look";
		discreteDistance[] = {100,200,300,400};
		discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
		discreteDistanceInitIndex = 0;
	};
	irLaserPos = "";
	irLaserEnd = "";
	irDistance = 0;
};

class 197th_DC15A_ugl_Regs_fried: 197th_DC15A_ugl_Regs {
	baseWeapon = "197th_DC15A_ugl_Regs_fried";
	JLTS_isFried = 1;
	displayName = "[197th] DC-15A (UGL)";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Regs\Weapons\_ui\DC15A_LG_fried.paa";
	scope = 1;
	scopearsenal = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
};