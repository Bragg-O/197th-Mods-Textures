class launch_RPG32_F;

class 197th_RPS6_Regs: launch_RPG32_F {
	baseWeapon = "197th_RPS6_Regs";
	JLTS_hasElectronics = 1;
	JLTS_hasEMPProtection = 0;
	JLTS_friedItem = "197th_RPS6_Regs_fried";
	JLTS_repairTime = 30;
	scope = 2;
	author = "197th Compagnie Chimaera";
	displayName = "[197th] RPS-6";
	descriptionShort = "Portable missile launcher";
	picture = "\197th_Weapon\_ui\RPS6.paa";
	magazines[] = {"197th_AT_mag","197th_HE_mag"};
	magazineWell[] = {};
	model = "\MRC\JLTS\weapons\RPS6\RPS6.p3d";
	handAnim[] = {"OFP2_ManSkeleton","\MRC\JLTS\weapons\RPS6\anims\RPS6_handanim.rtm"};
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {
		"\197th_Weapon\RPS6\Data\rps6_co.paa"
	};
};

class 197th_RPS6_Regs_fried: 197th_RPS6_Regs {
	baseWeapon = "197th_RPS6_Regs_fried";
	displayName = "[197th] RPS-6";
	descriptionShort = "Les circuits de l'arme sont<br/>grilles par une explosion ionique ou EMP<br/>Vous pouvez essayer de la reparer si vous avez une trousse de reparation d'arme";
	scope = 1;
	picture = "\197th_Weapon\_ui\RPS6_fried.paa";
	muzzles[] = {"this"};
	magazines[] = {};
	JLTS_isFried = 1;
};