class JLTS_Z6;
class 197th_Z6_Regs: JLTS_Z6 {
	baseWeapon = "197th_Z6_Regs";
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_Z6_Regs_fried";
	JLTS_repairTime = 30;
	scope = 2;
	author = "[CIM] Bragg";
	displayName = "[197th] Z-6";
	picture = "\197th_Regs\Weapons\_ui\Z6.paa";
	magazines[] = {"197th_Z6_mag"};
	model = "\MRC\JLTS\weapons\Z6\Z6.p3d";
	hiddenSelectionsTextures[] = {
		"\197th_Regs\Weapons\Z6\Data\Z6_1_co.paa",
		"\197th_Regs\Weapons\Z6\Data\Z6_2_co.paa"
	};
	fireLightDiffuse[] = {0,0,1};
	drySound[] = {"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",5,1,10};
	modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
	class manual: Mode_FullAuto
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
			begin1[] = {"SWLW_clones\machineguns\z6\sounds\Z6_1.wss",1,1,500};
			soundBegin[] = {"begin1",1};
		};
		reloadTime = 0.075;
		dispersion = 0.00102;
		soundContinuous = 0;
		soundBurst = 0;
		minRange = 0;
		minRangeProbab = 0.3;
		midRange = 5;
		midRangeProbab = 0.7;
		maxRange = 10;
		maxRangeProbab = 0.04;
		showToPlayer = 1;
	};
	class close: manual
	{
		burst = 10;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		minRange = 10;
		minRangeProbab = 0.05;
		midRange = 20;
		midRangeProbab = 0.7;
		maxRange = 50;
		maxRangeProbab = 0.04;
		showToPlayer = 0;
	};
	class short: close
	{
		burst = 8;
		aiRateOfFire = 2;
		aiRateOfFireDistance = 300;
		minRange = 50;
		minRangeProbab = 0.05;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.04;
	};
	class medium: close
	{
		burst = 7;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 600;
		minRange = 200;
		minRangeProbab = 0.05;
		midRange = 300;
		midRangeProbab = 0.7;
		maxRange = 500;
		maxRangeProbab = 0.1;
	};
	class far_optic1: medium
	{
		requiredOpticType = 1;
		showToPlayer = 0;
		burst = 3;
		aiRateOfFire = 10;
		aiRateOfFireDistance = 1000;
		minRange = 300;
		minRangeProbab = 0.05;
		midRange = 500;
		midRangeProbab = 0.4;
		maxRange = 650;
		maxRangeProbab = 0.01;
	};
	class far_optic2: far_optic1
	{
		burst = 3;
		requiredOpticType = 2;
		minRange = 400;
		minRangeProbab = 0.05;
		midRange = 750;
		midRangeProbab = 0.7;
		maxRange = 900;
		maxRangeProbab = 0.01;
		aiRateOfFire = 10;
		aiRateOfFireDistance = 900;
	};
	aiDispersionCoefY = 24;
	aiDispersionCoefX = 21;
	class WeaponSlotsInfo
	{
		class PointerSlot: PointerSlot
		{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {
				"197th_Accessoires_Laser",
				"197th_Accessoires_Flashlight"
			};
		};
	};
};
class 197th_Z6_Regs_fried: 197th_Z6_Regs {
	baseWeapon = "197th_Z6_Regs_fried";
	JLTS_isFried = 1;
	displayName = "[197th] Z-6";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	picture = "\197th_Regs\Weapons\_ui\Z6_fried.paa";
	scope = 1;
	magazines[] = {};
	drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",0.562341,1,10};
};