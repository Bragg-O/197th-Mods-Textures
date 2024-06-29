	class JLTS_Z6_mag;
	class 197th_Z6_mag: JLTS_Z6_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] Energy Cell (Z-6)";
		displayNameShort = "Cellule d'energie";
		descriptionShort = "Cellule d'energie<br/>Munitions : 300<br/>Utilisee dans : Z-6";
		picture = "\197th_Regs\Weapons\_ui\Z6_mag.paa";

		count = 300;

		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
	};
	class RPG32_F;
	class RPG32_HE_F;
	class 197th_AT_mag: RPG32_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] RPS-6 AT Rocket";
		displayNameShort = "Rocket AT";
		descriptionShort = "Rocket AT<br/>Munitions : 1<br/>Utilisee dans : RPS-6";
		picture = "\197th_Regs\Weapons\_ui\AT_mag.paa";

		model="\ls_weapons\tertiary\rps6\ls_magazine_rps6";
		modelSpecialIsProxy=1;
		modelSpecial="\ls_weapons\tertiary\rps6\ls_magazine_rps6";

		count = 1;

		mass = 30;
	};

	class 197th_HE_mag: RPG32_HE_F {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] RPS-6 HE Rocket";
		displayNameShort = "Rocket HE";
		descriptionShort = "Rocket HE<br/>Munitions : 1<br/>Utilisee dans : RPS-6";
		picture = "\197th_Regs\Weapons\_ui\AT_mag.paa";

		model="\ls_weapons\tertiary\rps6\ls_magazine_rps6";
		modelSpecialIsProxy=1;
		modelSpecial="\ls_weapons\tertiary\rps6\ls_magazine_rps6";

		count = 1;

		mass = 30;
	};
	class ls_mag_aa_plx;
	class 197th_AA_mag: ls_mag_aa_plx {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] PLX-1 AA Rocket";
		displayNameShort = "Rocket AA";
		descriptionShort = "Rocket AA<br/>Munitions : 3<br/>Utilisee dans : PLX-1";
		picture = "\197th_Regs\Weapons\_ui\AA_mag.paa";

		model = "\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";

		mass = 90;
	};
	class 5Rnd_127x108_APDS_Mag;
	class 197th_DC17SA_mag: 5Rnd_127x108_APDS_Mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] Energy Cell (DC-17SA)";
		displayNameShort = "Cellule d'energie";
		descriptionShort = "Cellule d'energie<br/>Munitions : 20<br/>Utilisee dans : DC-17SA";
		picture = "\197th_Regs\Weapons\_ui\DC17SA_mag.paa";

		count = 20;

		model = "\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;

		ammo = "JLTS_bullet_pistol_blue";

		tracersEvery = 1;
	};
	class 197th_DC15X_mag: 5Rnd_127x108_APDS_Mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] Energy Cell (DC-15X)";
		displayNameShort = "Cellule d'energie";
		descriptionShort = "Cellule d'energie<br/>Munitions : 10<br/>Utilisee dans : DC-15X";
		picture = "\197th_Regs\Weapons\_ui\DC15_mag.paa";

		count = 10;

		model = "\MRC\JLTS\weapons\DC15x\DC15x_mag.p3d";
		modelSpecial = "";
		modelSpecialIsProxy = 0;

		ammo = "JLTS_bullet_sniper_blue";

		tracersEvery = 1;
	};
	class 10Rnd_762x54_Mag;
	class 197th_DC15A_mag: 10Rnd_762x54_Mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] Energy Cell (DC-15A)";
		displayNameShort = "Cellule d'energie";
		descriptionShort = "Cellule d'energie<br/>Munitions : 60<br/>Utilisee dans : DC-15A";
		picture = "\197th_Regs\Weapons\_ui\DC15_mag.paa";

		count = 60;

		modelSpecial = "";
		modelSpecialIsProxy = 0;
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";

		ammo = "JLTS_bullet_rifle_blue";
		tracersEvery = 1;
	};
	class JLTS_DC15S_mag;
	class 197th_DC15S_mag: JLTS_DC15S_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] Energy Cell (DC-15S)";
		displayNameShort = "Cellule d'energie";
		descriptionShort = "Cellule d'energie<br/>Munitions : 90<br/>Utilisee dans : DC-15S";
		picture = "\197th_Regs\Weapons\_ui\DC15_mag.paa";

		count = 90;

		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
	};
	class 197th_DC15_mag: JLTS_DC15S_mag {
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;

		scope = 2;

		author = "[CIM] Bragg";
		displayName = "[197th] Energy Cell (DC-15)";
		displayNameShort = "Cellule d'energie";
		descriptionShort = "Cellule d'energie (Compact)<br/>Munitions : 60<br/>Utilisee dans : DC-15S / DC-15";
		picture = "\197th_Regs\Weapons\_ui\DC15_mag.paa";

		count = 90;

		model = "\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
	};