	class 3AS_optic_holo_DC15S;
	class InventoryOpticsItem_Base_F;
    class optic_lrps;
    class acc_pointer_IR;
    class acc_flashlight;
	class bipod_01_F_blk;
	class JLTS_riot_shield_item;
	class JLTS_riot_shield_attachment;
	class 3AS_Optic_Scope_WestarM5;

	class 197th_riot_shield_item: JLTS_riot_shield_item
	{
		JLTS_shieldAttachment = "197th_riot_shield_attachment";

		displayName = "[197th] GAR riot shield";
		author = "197th Compagnie Chimaera";
		scope = 2;

		model = "\MRC\JLTS\weapons\Shield\shield_501.p3d";

		picture = "\197th_Weapon\_ui\shield.paa";
	};

	class 197th_riot_shield_attachment: JLTS_riot_shield_attachment
	{
		JLTS_shieldItem = "197th_riot_shield_item";

		scope = 1;
		author = "197th Compagnie Chimaera";
		model = "\MRC\JLTS\weapons\Shield\shield_501.p3d";

		picture = "\197th_Weapon\_ui\shield.paa";
	};

	class 197th_Accessoires_Bipods: bipod_01_F_blk {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Bipods";
		picture = "\197th_Weapon\_ui\Bipods.paa";
	};
	class 197th_Accessoires_HoloScope: 3AS_optic_holo_DC15S {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Holo Scope";
		picture = "\197th_Weapon\_ui\Scope.paa";
	};

	class 197th_Accessoires_Laser: acc_pointer_IR {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Laser";
		picture = "\197th_Weapon\_ui\Pointer.paa";
	};

	class 197th_Accessoires_Flashlight: acc_flashlight {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Flash light";
		picture = "\197th_Weapon\_ui\Pointer.paa";
	};

	class 197th_Accessoires_LRPS_Scope: optic_lrps
	{
		displayName="[197th] DC-15X Scope";
		picture = "\197th_Weapon\_ui\DC15X_scope.paa";
		descriptionShort = "$STR_JLTS_descs_DC15X_scope";
		model = "\MRC\JLTS\weapons\DC15X\DC15X_scope.p3d";
		author = "197th Compagnie Chimaera";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\DC15X\data\DC15X_scope_co.paa"};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 16;
			opticType = 2;
			weaponInfoType = "RscWeaponRangeZeroingFOV";
			optics = 1;
			modelOptics = "\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					opticsDisplayName = "WFOV";
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.01;
					opticsZoomMax = 0.042;
					opticsZoomInit = 0.042;
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 300;
					distanceZoomMax = 2400;
					discretefov[] = {0.042,0.01};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\A3\Weapons_F\acc\reticle_lrps_F","\A3\Weapons_F\acc\reticle_lrps_z_F"};
					visionMode[] = {"Normal","NVG","TI"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
	};

	class 197th_Accessoire_LR_Scope: 3AS_Optic_Scope_WestarM5
	{
		displayName="[197th] DC-15A Scope";
		author = "197th Compagnie Chimaera";
		picture = "\197th_Weapon\_ui\DC15X_scope.paa";
		scope = 1;
	};