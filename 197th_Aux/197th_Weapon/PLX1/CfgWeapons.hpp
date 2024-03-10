class ls_weapon_aa_plx1;

class 197th_PLX1_Regs: ls_weapon_aa_plx1 {
	baseWeapon = "197th_PLX1_Regs";
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_PLX1_Regs_fried";
	JLTS_repairTime = 30;
	ace_overpressure_angle=45;
	ace_overpressure_damage=0.69999999;
	ace_overpresssure_priority=1;
	ace_overpressure_range=10;
	ace_reloadlaunchers_enabled=1;
	scope = 2;
	author = "197th Compagnie Chimaera";
	displayName = "[197th] PLX-1";
	descriptionShort = "Portable AA missile launcher";
	picture = "\197th_Weapon\_ui\PLX1.paa";
	magazines[] = {"197th_AA_mag"};
	model = "\MRC\JLTS\weapons\PLX1\PLX1.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\PLX1\anims\PLX1_handanim.rtm"};
	hiddenSelections[] = {"camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {
		"\197th_Weapon\PLX1\Data\PLX1_body_co.paa",
		"\197th_Weapon\PLX1\Data\PLX1_tube_co.paa",
		"\197th_Weapon\PLX1\Data\PLX1_mag_co.paa"
	};
};

class 197th_PLX1_Regs_fried: 197th_PLX1_Regs {
	baseWeapon = "197th_PLX1_Regs_fried";
	displayName = "[197th] PLX-1";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	scope = 1;
	picture = "\197th_Weapon\_ui\PLX1_fried.paa";
	muzzles[] = {"this"};
	magazines[] = {};
	JLTS_isFried = 1;
};