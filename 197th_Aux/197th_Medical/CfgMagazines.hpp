class CfgMagazines {
    class ACE_painkillers;
	MedicalItem_197th_XX(Boite de Nebulex,painkillers,"Boite de 10 antidouleurs.<br/>Douleur : -<br/>Viscosite : +<br/>Dose Letal : 6");

	class SmokeShell;
	class 197th_BactaGrenade_Mag: SmokeShell {
		author="197th Compagnie Chimaera";
		mass=5;
		scope=2;
		value=1;
		displayName="[197th] Bacta Grenade";
		type=256;
		ammo="197th_BactaGrenade_Ammo";
		count=1;
		initSpeed=25;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		sound[]=
		{
			"",
			0.00031622799,
			1
		};
		descriptionShort="Soigne a l'aide de la bacta dans un rayon de 5 m.";
		picture="\197th_Medical\_ui\BactaGrenade_ca.paa";
		displayNameShort="Bacta Grenade";
	};
};