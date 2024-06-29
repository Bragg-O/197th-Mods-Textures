	class ls_explosive_breach;
	class ls_explosive_demoPack;
	class ls_explosive_detpack;
	class 197th_Breach_Explosive: ls_explosive_breach {
		scope=2;
		scopeCurator=2;
		author = "[CIM] Bragg";
		editorCategory = "CIM_Weapon";
		editorSubcategory = "CIM_Explosive";
		displayName="[197th] Breaching Charge";
		mapSize=0.31;
		editorPreview="\197th_Regs\Weapons\_EditorPreviews\breach_ca.jpg";
		model="ls_weapons\explosives\breach\ls_explosives_breach_defused";
		ammo="197th_Breach_Ammo";
		icon="iconExplosiveGP";
	};

	class 197th_DemoPack_Explosive: ls_explosive_demoPack {
		scope=2;
		scopeCurator=2;
		author = "[CIM] Bragg";
		editorCategory = "CIM_Weapon";
		editorSubcategory = "CIM_Explosive";
		displayName="[197th] Seismic Pack";
		mapSize=0.31;
		editorPreview="\197th_Regs\Weapons\_EditorPreviews\demoPack_ca.jpg";
		model="ls_weapons\explosives\demo\ls_explosives_demoPack_defused";
		ammo="197th_DemoPack_Ammo";
		icon="iconExplosiveGP";
	};

	class 197th_DetPack_Explosive: ls_explosive_detpack {
		scope=2;
		scopeCurator=2;
		author = "[CIM] Bragg";
		editorCategory = "CIM_Weapon";
		editorSubcategory = "CIM_Explosive";
		displayName="[197th] Detonation Pack";
		mapSize=0.31;
		editorPreview="\197th_Regs\Weapons\_EditorPreviews\detPack_ca.jpg";
		model="ls_weapons\explosives\detPack\ls_explosives_detpack";
		ammo="197th_DetPack_Ammo";
		icon="iconExplosiveGP";
	};