	class ls_mag_breach_remoteCharge;
	class ls_mag_demo_remoteCharge;
	class ls_mag_detPack_remoteCharge;
	class 197th_Breach_Mag: ls_mag_breach_remoteCharge {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Breaching Charge";
		useAction=1;
		picture="\197th_Weapon\_ui\breach_mag_ca.paa";
		model="ls_weapons\explosives\breach\ls_explosives_breach";
		ammo="197th_Breach_Ammo";
		descriptionShort="Wall breaching explosive";
		allowedSlots[]={901,701};
		mass=50;
		class Library
		{
			libTextDesc="";
		};
	};
	class 197th_DemoPack_Mag: ls_mag_demo_remoteCharge {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Seismic Pack";
		useAction=1;
		picture="\197th_Weapon\_ui\demoPack_mag_ca.paa";
		model="ls_weapons\explosives\demo\ls_explosives_demoPack";
		ammo="197th_DemoPack_Ammo";
		descriptionShort="Titanic demolition explosive";
		allowedSlots[]={901,701};
		mass=75;
		class Library
		{
			libTextDesc="";
		};
	};

	class 197th_DetPack_Mag: ls_mag_detPack_remoteCharge {
		scope=2;
		author = "197th Compagnie Chimaera";
		displayName="[197th] Detonation Pack";
		useAction=1;
		picture="\197th_Weapon\_ui\detPack_mag_ca.paa";
		model="ls_weapons\explosives\detPack\ls_explosives_detpack";
		ammo="197th_DetPack_Ammo";
		descriptionShort="Heavy demolition explosive";
		allowedSlots[]={901,701};
		mass=25;
		class Library
		{
			libTextDesc="";
		};
	};