	class ls_ammo_breachCharge_explosive;
	class ls_ammo_demoCharge_explosive;
	class ls_ammo_detPack_explosive;
	class 197th_Breach_Ammo: ls_ammo_breachCharge_explosive {
		ace_explosives_magazine="197th_Breach_Mag";
		hit=10000;
		indirectHit=10000;
		indirectHitRange=5;
		model="ls_weapons\explosives\breach\ls_explosives_breach";
		mineModelDisabled="ls_weapons\explosives\breach\ls_explosives_breach_defused";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			1000
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\Mines\electron_activate_mine_1",
			1.4125376,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		defaultMagazine="197th_Breach_Mag";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCraterSmall";
		whistleDist=32;
		mineInconspicuousness=5;
		mineTrigger="RemoteTrigger";
	};

	class 197th_DemoPack_Ammo: ls_ammo_demoCharge_explosive {
		ace_explosives_magazine="197th_DemoPack_Mag";
		hit=100000;
		indirectHit=100000;
		indirectHitRange=100;
		model="ls_weapons\explosives\demo\ls_explosives_demoPack";
		mineModelDisabled="ls_weapons\explosives\demo\ls_explosives_demopack_defused";
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\Mines\electron_activate_mine_1",
			1.4125376,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		SoundSetExplosion[]=
		{
			"197th_seismic_charge_SoundSet"
		};
		defaultMagazine="197th_DemoPack_Mag";
		ExplosionEffects="HeavyBombExplosion";
		CraterEffects="HeavyBombCrater";
		lightColor[] = {0, 0, 1, 1};
		tracerColor[] = {0, 0, 1, 1};
		tracerColorR[] = {0, 0, 1, 1};
		whistleDist=150;
		mineInconspicuousness=150;
		mineTrigger="RemoteTrigger";
	};

	class 197th_DetPack_Ammo: ls_ammo_detPack_explosive {
		ace_explosives_magazine="197th_DetPack_Mag";
		hit=2000;
		indirectHit=2000;
		indirectHitRange=10;
		model="ls_weapons\explosives\detPack\ls_explosives_detpack_armed";
		mineModelDisabled="ls_weapons\explosives\detPack\ls_explosives_detpack";
		soundHit[]=
		{
			"A3\Sounds_F\arsenal\explosives\bombs\Explosive_Charge",
			3.1622777,
			1,
			500
		};
		soundActivation[]=
		{
			"A3\Sounds_F\weapons\Mines\electron_activate_mine_1",
			1.4125376,
			1,
			20
		};
		soundDeactivation[]=
		{
			"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",
			1.4125376,
			1,
			20
		};
		defaultMagazine="197th_DetPack_Mag";
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		whistleDist=32;
		mineInconspicuousness=5;
		mineTrigger="RemoteTrigger";
	};