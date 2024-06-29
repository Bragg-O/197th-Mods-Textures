class CIM_CfgLoadouts
{
	class ARC_197th
	{
		Prefix = "[197th]";
		PrefixColor = "#27AE60";
		displayName = "ARC";
		LoadoutPath = "\197th_Regs\Loadout\Data\ARC";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15S,DC-15S);
			Variants_197th_XX(DC15A,DC-15A);
		};
	};
	class AA_197th : ARC_197th
	{
		displayName = "Anti-Air";
		LoadoutPath = "\197th_Regs\Loadout\Data\AA";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15S,DC-15S);
		};
	};
	class ARF_197th : ARC_197th
	{
		displayName = "ARF";
		LoadoutPath = "\197th_Regs\Loadout\Data\ARF";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15X,DC-15X);
			Variants_197th_XX(DC15X_RADIO,DC-15X / Radioman);
		};
	};
	class AT_197th : ARC_197th
	{
		displayName = "Anti-Tank";
		LoadoutPath = "\197th_Regs\Loadout\Data\AT";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15S,DC-15S);
		};
	};
	class Fantassin_197th : ARC_197th
	{
		displayName = "Fantassin";
		LoadoutPath = "\197th_Regs\Loadout\Data\Fantassin";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15A_Cadet,DC-15A / Cadet);
			Variants_197th_XX(DC15S_Cadet,DC-15S / Cadet);
			Variants_197th_XX(DC15A_Leader,DC-15A / Leader);
			Variants_197th_XX(DC15S_Leader,DC-15S / Leader);
			Variants_197th_XX(DC15A_Trooper,DC-15A / Trooper);
			Variants_197th_XX(DC15S_Trooper,DC-15S / Trooper);
		};
	};
	class Grenadier_197th : ARC_197th
	{
		displayName = "Grenadier";
		LoadoutPath = "\197th_Regs\Loadout\Data\Grenadier";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15A,DC-15A);
		};
	};
	class Heavy_197th : ARC_197th
	{
		displayName = "Heavy";
		LoadoutPath = "\197th_Regs\Loadout\Data\Heavy";
		class CIM_CfgVariants
		{
			Variants_197th_XX(Z6,Z-6);
		};
	};
	class Medic_197th : ARC_197th
	{
		displayName = "Medic";
		LoadoutPath = "\197th_Regs\Loadout\Data\Medic";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15S_Infirmier,DC-15S / Infirmier);
			Variants_197th_XX(DC15A_Infirmier,DC-15A / Infirmier);
			Variants_197th_XX(DC15S_Medecin,DC-15S / Medecin);
			Variants_197th_XX(DC15A_Medecin,DC-15A / Medecin);
		};
	};
	class Pilote_197th : ARC_197th
	{
		displayName = "Pilote";
		LoadoutPath = "\197th_Regs\Loadout\Data\Pilote";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC17SA,DC-17SA);
		};
	};
	class Radioman_197th : ARC_197th
	{
		displayName = "Radioman";
		LoadoutPath = "\197th_Regs\Loadout\Data\Radioman";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15A,DC-15A);
		};
	};
	class Sapeur_197th : ARC_197th
	{
		displayName = "Sapeur";
		LoadoutPath = "\197th_Regs\Loadout\Data\Sapeur";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15S,DC-15S);
			Variants_197th_XX(DC15A,DC-15A);
		};
	};
	class Shield_197th : ARC_197th
	{
		displayName = "Shield";
		LoadoutPath = "\197th_Regs\Loadout\Data\Shield";
		class CIM_CfgVariants
		{
			Variants_197th_XX(DC15S,DC-15S);
		};
	};
};