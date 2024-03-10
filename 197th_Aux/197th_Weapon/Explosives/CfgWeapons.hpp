	class Default;
	class PutMuzzle;
	class Put: Default
	{
		class PutMuzzle;
		muzzles[]+=
		{
			"197th_explosive_breach_muzzle",
			"197th_explosive_demoPack_muzzle",
			"197th_explosive_detPack_muzzle"
		};
		class 197th_explosive_breach_muzzle: PutMuzzle
		{
			displayName="[197th] Breaching Charge";
			autoreload=0;
			enableAttack=1;
			showToPlayer=0;
			magazines[]=
			{
				"197th_Breach_mag"
			};
		};
		class 197th_explosive_demoPack_muzzle: PutMuzzle
		{
			displayName="[197th] Seismic Pack";
			autoreload=0;
			enableAttack=1;
			showToPlayer=0;
			magazines[]=
			{
				"197th_DemoPack_mag"
			};
		};
		class 197th_explosive_detPack_muzzle: PutMuzzle
		{
			displayName="[197th] Detonation Pack";
			autoreload=0;
			enableAttack=1;
			showToPlayer=0;
			magazines[]=
			{
				"197th_DetPack_mag"
			};
		};
	};