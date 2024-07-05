#define Uniform_197th_XX(type, name)                          \
	class 197th_Uniform_##type##_##name : 197th_Uniform       \
	{                                                         \
		author = [CIM] Bragg;                                 \
		displayName = [197th] Uniform name;                   \
		scope = 2;                                            \
		scopearsenal = 2;                                     \
		picture = \197th_##type##\Equipments\_ui\uniform.paa; \
		class ItemInfo : UniformItem                          \
		{                                                     \
			uniformModel = -;                                 \
			uniformtype = neopren;                            \
			uniformClass = 197th_Unit_##type##_##name;        \
			containerClass = Supply70;                        \
			mass = 80;                                        \
		};                                                    \
	}

#define Unit_197th_XX(type, name, sac, helmet, vest, accessories1, accessories2, accessories3)                \
	class 197th_Unit_##type##_##name : 197th_Unit                                                             \
	{                                                                                                         \
		author = [CIM] Bragg;                                                                                 \
		displayName = [197th] name;                                                                           \
		scope = 2;                                                                                            \
		scopecurator = 2;                                                                                     \
		editorSubcategory = CIM_##type##_Unit;                                                                \
		uniformClass = 197th_Uniform_##type##_##name;                                                         \
		backpack = ##sac;                                                                                     \
		linkedItems[] += {##helmet##, ##vest##, ##accessories1##, ##accessories2##, ##accessories3##};        \
		respawnlinkedItems[] += {##helmet##, ##vest##, ##accessories1##, ##accessories2##, ##accessories3##}; \
		hiddenSelectionsTextures[] = {                                                                        \
			197th_##type##\Equipments\Uniform\Data\##name##\camo1_co.paa,                                     \
			197th_##type##\Equipments\Uniform\Data\##name##\camo2_co.paa,                                     \
			197th_Regs\Equipments\Uniform\Data\undersuit_co.paa};                                             \
	}

#define UnitCC_197th_XX(type, name, sac, helmet, vest, accessories1, accessories2, accessories3)              \
	class 197th_Unit_##type##_##name : 197th_Unit_Commander                                                   \
	{                                                                                                         \
		author = [CIM] Bragg;                                                                                 \
		displayName = [197th] name;                                                                           \
		scope = 2;                                                                                            \
		scopecurator = 2;                                                                                     \
		editorSubcategory = CIM_##type##_Unit;                                                                \
		uniformClass = 197th_Uniform_##type##_##name;                                                         \
		backpack = ##sac;                                                                                     \
		linkedItems[] += {##helmet##, ##vest##, ##accessories1##, ##accessories2##, ##accessories3##};        \
		respawnlinkedItems[] += {##helmet##, ##vest##, ##accessories1##, ##accessories2##, ##accessories3##}; \
		hiddenSelectionsTextures[] = {                                                                        \
			197th_##type##\Equipments\Uniform\Data\##name##\camo1_co.paa,                                     \
			197th_##type##\Equipments\Uniform\Data\##name##\camo2_co.paa,                                     \
			197th_Regs\Equipments\Uniform\Data\undersuit_co.paa};                                             \
	}

#define Helmet_197th_XX(type, name)                                                \
	class 197th_Helmet_##type##_##name : 197th_Helmet                              \
	{                                                                              \
		author = [CIM] Bragg;                                                      \
		displayName = [197th] Helmet(##name##);                                    \
		scope = 2;                                                                 \
		scopearsenal = 2;                                                          \
		picture = \197th_##type##\Equipments\_ui\helmet.paa;                       \
		hiddenSelectionsTextures[] = {                                             \
			197th_##type##\Equipments\helmet\Data\helmetP2\##name##\camo_co.paa,   \
			197th_##type##\Equipments\helmet\Data\helmetP2\##name##\visor_co.paa}; \
	}

#define HelmetVisorLight_197th_XX(type, name)                                      \
	class 197th_Helmet_##type##_##name : 197th_Helmet                              \
	{                                                                              \
		author = [CIM] Bragg;                                                      \
		displayName = [197th] Helmet(##name##);                                    \
		scope = 2;                                                                 \
		scopearsenal = 2;                                                          \
		picture = \197th_##type##\Equipments\_ui\helmet.paa;                       \
		hiddenSelectionsTextures[] = {                                             \
			197th_##type##\Equipments\helmet\Data\helmetP2\##name##\camo_co.paa,   \
			197th_##type##\Equipments\helmet\Data\helmetP2\##name##\visor_co.paa}; \
		hiddenSelectionsMaterials[] = {                                            \
			, 															  \
			\a3\characters_f_bootcamp\common\vrarmoremmisive.rvmat};                       \
	}

#define HeadgearItem_197th_XX(type, id)                 \
	class 197th_Headgear_##type##_##id : 197th_Headgear \
	{                                                   \
		author = [CIM] Bragg;                           \
		displayName = [197th] Helmet(##id##);           \
		scope = 2;                                      \
		scopecurator = 2;                               \
		editorSubcategory = CIM_##type##_Helmet;        \
		class TransportItems                            \
		{                                               \
			class XX_197th_Helmet_##type##_##id         \
			{                                           \
				name = 197th_Helmet_##type##_##id;      \
				count = 1;                              \
			};                                          \
		};                                              \
	}

#define HelmetPilot_197th_XX(type, name)                                              \
	class 197th_HelmetPilot_##type##_##name : 197th_HelmetPilot                       \
	{                                                                                 \
		author = [CIM] Bragg;                                                         \
		displayName = [197th] Pilot Helmet(##name##);                                 \
		scope = 2;                                                                    \
		scopearsenal = 2;                                                             \
		picture = \197th_##type##\Equipments\_ui\helmet_pilot.paa;                    \
		hiddenSelectionsTextures[] = {                                                \
			197th_##type##\Equipments\helmet\Data\helmetPilot\##name##\camo_co.paa,   \
			197th_##type##\Equipments\helmet\Data\helmetPilot\##name##\visor_co.paa}; \
	}

#define HeadgearItemPilot_197th_XX(type, id)                 \
	class 197th_HeadgearPilot_##type##_##id : 197th_Headgear \
	{                                                        \
		author = [CIM] Bragg;                                \
		displayName = [197th] Pilot Helmet(##id##);          \
		scope = 2;                                           \
		scopecurator = 2;                                    \
		editorSubcategory = CIM_##type##_Helmet;             \
		class TransportItems                                 \
		{                                                    \
			class XX_197th_HelmetPilot_##type##_##id         \
			{                                                \
				name = 197th_HelmetPilot_##type##_##id;      \
				count = 1;                                   \
			};                                               \
		};                                                   \
	}

#define HelmetARF_197th_XX(type, name)                                              \
	class 197th_HelmetARF_##type##_##name : 197th_HelmetArf                         \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] ARF Helmet(##name##);                                 \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\helmet_arf.paa;                    \
		hiddenSelectionsTextures[] = {                                              \
			197th_##type##\Equipments\helmet\Data\helmetARF\##name##\camo_co.paa,   \
			,                                                                       \
			197th_##type##\Equipments\helmet\Data\helmetARF\##name##\visor_co.paa}; \
	}

#define HeadgearItemARF_197th_XX(type, id)                 \
	class 197th_HeadgearARF_##type##_##id : 197th_Headgear \
	{                                                      \
		author = [CIM] Bragg;                              \
		displayName = [197th] ARF Helmet(##id##);          \
		scope = 2;                                         \
		scopecurator = 2;                                  \
		editorSubcategory = CIM_##type##_Helmet;           \
		class TransportItems                               \
		{                                                  \
			class XX_197th_HelmetARF_##type##_##id         \
			{                                              \
				name = 197th_HelmetARF_##type##_##id;      \
				count = 1;                                 \
			};                                             \
		};                                                 \
	}

#define HelmetBARC_197th_XX(type, name)                                              \
	class 197th_HelmetBarc_##type##_##name : 197th_HelmetBarc                        \
	{                                                                                \
		author = [CIM] Bragg;                                                        \
		displayName = [197th] BARC Helmet(##name##);                                 \
		scope = 2;                                                                   \
		scopearsenal = 2;                                                            \
		picture = \197th_##type##\Equipments\_ui\helmet_barc.paa;                    \
		hiddenSelectionsTextures[] = {                                               \
			197th_##type##\Equipments\helmet\Data\helmetBarc\##name##\camo_co.paa,   \
			197th_##type##\Equipments\helmet\Data\helmetBarc\##name##\visor_co.paa}; \
	}

#define HelmetBARCVisorLight_197th_XX(type, name)                                    \
	class 197th_HelmetBarc_##type##_##name : 197th_HelmetBarc                        \
	{                                                                                \
		author = [CIM] Bragg;                                                        \
		displayName = [197th] BARC Helmet(##name##);                                 \
		scope = 2;                                                                   \
		scopearsenal = 2;                                                            \
		picture = \197th_##type##\Equipments\_ui\helmet_barc.paa;                    \
		hiddenSelectionsTextures[] = {                                               \
			197th_##type##\Equipments\helmet\Data\helmetBarc\##name##\camo_co.paa,   \
			197th_##type##\Equipments\helmet\Data\helmetBarc\##name##\visor_co.paa}; \
		hiddenSelectionsMaterials[] = {                                              \
			, \
			\a3\characters_f_bootcamp\common\vrarmoremmisive.rvmat};                         \
	}

#define HeadgearItemBARC_197th_XX(type, id)                 \
	class 197th_HeadgearBarc_##type##_##id : 197th_Headgear \
	{                                                       \
		author = [CIM] Bragg;                               \
		displayName = [197th] BARC Helmet(##id##);          \
		scope = 2;                                          \
		scopecurator = 2;                                   \
		editorSubcategory = CIM_##type##_Helmet;            \
		class TransportItems                                \
		{                                                   \
			class XX_197th_HelmetBarc_##type##_##id         \
			{                                               \
				name = 197th_HelmetBarc_##type##_##id;      \
				count = 1;                                  \
			};                                              \
		};                                                  \
	}

#define Backpack_197th_XX(type, name)                                         \
	class 197th_Backpack_##type##_##name : 197th_Backpack                     \
	{                                                                         \
		author = [CIM] Bragg;                                                 \
		displayName = [197th] Backpack(##name##);                             \
		scope = 2;                                                            \
		scopearsenal = 2;                                                     \
		scopecurator = 2;                                                     \
		editorSubcategory = CIM_##type##_Backpack;                            \
		picture = \197th_##type##\Equipments\_ui\backpack.paa;                \
		hiddenselectionstextures[] = {                                        \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa, \
			197th_Regs\Equipments\Backpack\Data\cover_co.paa,                 \
			197th_Regs\Equipments\Backpack\Data\pouches_co.paa,               \
			197th_Regs\Equipments\Backpack\Data\tube_co.paa};                 \
	}

#define BackpackRocket_197th_XX(type, name)                                   \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Rocket              \
	{                                                                         \
		author = [CIM] Bragg;                                                 \
		displayName = [197th] Backpack(##name##);                             \
		scope = 2;                                                            \
		scopearsenal = 2;                                                     \
		scopecurator = 2;                                                     \
		editorSubcategory = CIM_##type##_Backpack;                            \
		picture = \197th_##type##\Equipments\_ui\backpack.paa;                \
		hiddenselectionstextures[] = {                                        \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa, \
			197th_Regs\Equipments\Backpack\Data\holder_co.paa,                \
			197th_Regs\Equipments\Backpack\Data\rocket_co.paa,                \
			197th_Regs\Equipments\Backpack\Data\light_co.paa,                 \
			197th_Regs\Equipments\Backpack\Data\pouches_co.paa};              \
	}

#define BackpackRadio_197th_XX(type, name)                                    \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Radio               \
	{                                                                         \
		author = [CIM] Bragg;                                                 \
		displayName = [197th] Backpack(##name##);                             \
		scope = 2;                                                            \
		scopearsenal = 2;                                                     \
		scopecurator = 2;                                                     \
		editorSubcategory = CIM_##type##_Backpack;                            \
		picture = \197th_##type##\Equipments\_ui\backpack.paa;                \
		hiddenselectionstextures[] = {                                        \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa, \
			197th_Regs\Equipments\Backpack\Data\radio_co.paa,                 \
			197th_Regs\Equipments\Backpack\Data\screen_co.paa,                \
			197th_Regs\Equipments\Backpack\Data\pouches_co.paa};              \
	}

#define BackpackMedecin_197th_XX(type, name)                                  \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Medecin             \
	{                                                                         \
		author = [CIM] Bragg;                                                 \
		displayName = [197th] Backpack(##name##);                             \
		scope = 2;                                                            \
		scopearsenal = 2;                                                     \
		scopecurator = 2;                                                     \
		editorSubcategory = CIM_##type##_Backpack;                            \
		picture = \197th_##type##\Equipments\_ui\backpack.paa;                \
		hiddenselectionstextures[] = {                                        \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa, \
			197th_Regs\Equipments\Backpack\Data\cover_co.paa,                 \
			197th_Regs\Equipments\Backpack\Data\pouches_co.paa,               \
			197th_Regs\Equipments\Backpack\Data\medic_co.paa,                 \
			197th_Regs\Equipments\Backpack\Data\medic_co.paa};                \
	}

#define BackpackSacocheCeinture_197th_XX(type, name)                          \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Bag                 \
	{                                                                         \
		author = [CIM] Bragg;                                                 \
		displayName = [197th] Sacoche(##name##);                              \
		scope = 2;                                                            \
		scopearsenal = 2;                                                     \
		scopecurator = 2;                                                     \
		editorSubcategory = CIM_##type##_Backpack;                            \
		picture = \197th_##type##\Equipments\_ui\backpack_bag.paa;            \
		hiddenselectionstextures[] = {                                        \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa, \
                                                                              \
		};                                                                    \
	}

#define BackpackSacocheCeinturRTO_197th_XX(type, name)                        \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Bag_RTO             \
	{                                                                         \
		author = [CIM] Bragg;                                                 \
		displayName = [197th] Sacoche(##name##);                              \
		scope = 2;                                                            \
		scopearsenal = 2;                                                     \
		scopecurator = 2;                                                     \
		editorSubcategory = CIM_##type##_Backpack;                            \
		picture = \197th_##type##\Equipments\_ui\backpack_bag.paa;            \
		hiddenselectionstextures[] = {                                        \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa, \
                                                                              \
		};                                                                    \
	}

#define BackpackSacocheJambe_197th_XX(type, name)                              \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Bag                  \
	{                                                                          \
		author = [CIM] Bragg;                                                  \
		displayName = [197th] Sacoche(##name##);                               \
		scope = 2;                                                             \
		scopearsenal = 2;                                                      \
		scopecurator = 2;                                                      \
		editorSubcategory = CIM_##type##_Backpack;                             \
		picture = \197th_##type##\Equipments\_ui\backpack_bag.paa;             \
		hiddenselectionstextures[] = {                                         \
			,                                                                  \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa}; \
	}

#define BackpackSacoche_197th_XX(type, name)                                   \
	class 197th_Backpack_##type##_##name : 197th_Backpack_Bag                  \
	{                                                                          \
		author = [CIM] Bragg;                                                  \
		displayName = [197th] Sacoche(##name##);                               \
		scope = 2;                                                             \
		scopearsenal = 2;                                                      \
		scopecurator = 2;                                                      \
		editorSubcategory = CIM_##type##_Backpack;                             \
		picture = \197th_##type##\Equipments\_ui\backpack_bag.paa;             \
		hiddenselectionstextures[] = {                                         \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa,  \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa}; \
	}

#define BackpackARC_197th_XX(type, name)                                       \
	class 197th_Backpack_##type##_##name : 197th_Backpack_ARC                  \
	{                                                                          \
		author = [CIM] Bragg;                                                  \
		displayName = [197th] Backpack(##name##);                              \
		scope = 2;                                                             \
		scopearsenal = 2;                                                      \
		scopecurator = 2;                                                      \
		editorSubcategory = CIM_##type##_Backpack;                             \
		picture = \197th_##type##\Equipments\_ui\backpack_arc.paa;             \
		hiddenselectionstextures[] = {                                         \
			197th_##type##\Equipments\Backpack\Data\##name##\backpack_co.paa}; \
	}

#define VestOfficer_197th_XX(type, name)                                              \
	class 197th_Vest_##type##_##name : 197th_Vest_Officer                             \
	{                                                                                 \
		author = [CIM] Bragg;                                                         \
		displayName = [197th] Vest(##name##);                                         \
		scope = 2;                                                                    \
		scopearsenal = 2;                                                             \
		picture = \197th_##type##\Equipments\_ui\vest_pauldron.paa;                   \
		hiddenselectionstextures[] = {                                                \
			197th_##type##\Equipments\Vest\Data\##name##\Officer_Accessories_co.paa}; \
	}

#define VestKama_197th_XX(type, name)                                                \
	class 197th_Vest_##type##_##name : 197th_Vest_kama                               \
	{                                                                                \
		author = [CIM] Bragg;                                                        \
		displayName = [197th] Vest(##name##);                                        \
		scope = 2;                                                                   \
		scopearsenal = 2;                                                            \
		picture = \197th_##type##\Equipments\_ui\vest_kama.paa;                      \
		hiddenselectionstextures[] = {                                               \
			197th_##type##\Equipments\Vest\Data\##name##\Officer_Accessories_co.paa, \
                                                                                     \
		};                                                                           \
	}

#define VestPauldron_197th_XX(type, name)                                             \
	class 197th_Vest_##type##_##name : 197th_Vest_Lieutenant                          \
	{                                                                                 \
		author = [CIM] Bragg;                                                         \
		displayName = [197th] Vest(##name##);                                         \
		scope = 2;                                                                    \
		scopearsenal = 2;                                                             \
		picture = \197th_##type##\Equipments\_ui\vest_pauldron.paa;                   \
		hiddenselectionstextures[] = {                                                \
			197th_##type##\Equipments\Vest\Data\##name##\Officer_Accessories_co.paa}; \
	}

#define VestSergent_197th_XX(type, name)                                            \
	class 197th_Vest_##type##_##name : 197th_Vest_Sergent                           \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest_nco.paa;                      \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,  \
			,                                                                       \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,  \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define VestARC_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_ARC                                 \
	{                                                                                 \
		author = [CIM] Bragg;                                                         \
		displayName = [197th] Vest(##name##);                                         \
		scope = 2;                                                                    \
		scopearsenal = 2;                                                             \
		picture = \197th_##type##\Equipments\_ui\vest_arc.paa;                        \
		hiddenselectionstextures[] = {                                                \
			197th_##type##\Equipments\Vest\Data\##name##\ARC_Accessories_co.paa,      \
			197th_##type##\Equipments\Vest\Data\##name##\Officer_Accessories_co.paa}; \
	}

#define VestHolster_197th_XX(type, name)                                           \
	class 197th_Vest_##type##_##name : 197th_Vest_Sergent                          \
	{                                                                              \
		author = [CIM] Bragg;                                                      \
		displayName = [197th] Vest(##name##);                                      \
		scope = 2;                                                                 \
		scopearsenal = 2;                                                          \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                         \
		hiddenselectionstextures[] = {                                             \
			,                                                                      \
			,                                                                      \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa, \
                                                                                   \
		};                                                                         \
	}

#define VestMedical_197th_XX(type, name)                                            \
	class 197th_Vest_##type##_##name : 197th_Vest_CloneMedic                        \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define Vest0_197th_XX(type, name)                         \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone0   \
	{                                                      \
		author = [CIM] Bragg;                              \
		displayName = [197th] Vest(##name##);              \
		scope = 2;                                         \
		scopearsenal = 2;                                  \
		picture = \197th_##type##\Equipments\_ui\vest.paa; \
	}

#define Vest1_197th_XX(type, name)                                                    \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone1                              \
	{                                                                                 \
		author = [CIM] Bragg;                                                         \
		displayName = [197th] Vest(##name##);                                         \
		scope = 2;                                                                    \
		scopearsenal = 2;                                                             \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                            \
		hiddenselectionstextures[] = {                                                \
			197th_##type##\Equipments\Vest\Data\##name##\Light_Accessories_co.paa,    \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,    \
			197th_##type##\Equipments\Vest\Data\##name##\Officer_Accessories_co.paa}; \
	}

#define Vest2_197th_XX(type, name)                                                   \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone2                             \
	{                                                                                \
		author = [CIM] Bragg;                                                        \
		displayName = [197th] Vest(##name##);                                        \
		scope = 2;                                                                   \
		scopearsenal = 2;                                                            \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                           \
		hiddenselectionstextures[] = {                                               \
			,                                                                        \
			197th_##type##\Equipments\Vest\Data\##name##\Light_Accessories_co.paa,   \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,   \
			197th_##type##\Equipments\Vest\Data\##name##\Officer_Accessories_co.paa, \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,   \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,   \
			197th_##type##\Equipments\Vest\Data\##name##\ARC_Accessories_co.paa};    \
	}

#define Vest3_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone3                            \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Light_Accessories_co.paa,  \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define Vest4_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone4                            \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Light_Accessories_co.paa,  \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define Vest5_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone5                            \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define Vest6_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone6                            \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Light_Accessories_co.paa,  \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define Vest7_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone7                            \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa,  \
			,                                                                       \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define Vest8_197th_XX(type, name)                                                  \
	class 197th_Vest_##type##_##name : 197th_Vest_Clone8                            \
	{                                                                               \
		author = [CIM] Bragg;                                                       \
		displayName = [197th] Vest(##name##);                                       \
		scope = 2;                                                                  \
		scopearsenal = 2;                                                           \
		picture = \197th_##type##\Equipments\_ui\vest.paa;                          \
		hiddenselectionstextures[] = {                                              \
			197th_##type##\Equipments\Vest\Data\##name##\Light_Accessories_co.paa,  \
			197th_##type##\Equipments\Vest\Data\##name##\Heavy_Accessories_co.paa}; \
	}

#define NVG_197th_XX(type, name)                                    \
	class 197th_NVG_##type##_##name : 197th_NVG                     \
	{                                                               \
		author = [CIM] Bragg;                                       \
		displayName = [197th] NVG(##name##);                        \
		scope = 2;                                                  \
		scopearsenal = 2;                                           \
		picture = \197th_##type##\Equipments\_ui\nvg.paa;           \
		hiddenselectionstextures[] = {                              \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa, \
                                                                    \
		};                                                          \
	}

#define NVG_NCO_197th_XX(type, name)                                 \
	class 197th_NVG_##type##_##name : 197th_NVG                      \
	{                                                                \
		author = [CIM] Bragg;                                        \
		displayName = [197th] NVG(##name##);                         \
		scope = 2;                                                   \
		scopearsenal = 2;                                            \
		picture = \197th_##type##\Equipments\_ui\nvg.paa;            \
		hiddenselectionstextures[] = {                               \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa,  \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa}; \
	}

#define NVG_SPC_197th_XX(type, name)                                \
	class 197th_NVG_##type##_##name : 197th_NVG_SPC                 \
	{                                                               \
		author = [CIM] Bragg;                                       \
		displayName = [197th] NVG(##name##);                        \
		scope = 2;                                                  \
		scopearsenal = 2;                                           \
		picture = \197th_##type##\Equipments\_ui\nvg.paa;           \
		hiddenselectionstextures[] = {                              \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa, \
                                                                    \
		};                                                          \
	}

#define NVG_Rangefinder_197th_XX(type, name)                          \
	class 197th_NVG_##type##_##name : 197th_NVG_Rangefinder           \
	{                                                                 \
		author = [CIM] Bragg;                                         \
		displayName = [197th] NVG(##name##);                          \
		scope = 2;                                                    \
		scopearsenal = 2;                                             \
		picture = \197th_##type##\Equipments\_ui\nvg_rangefinder.paa; \
		hiddenselectionstextures[] = {                                \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa};  \
	}

#define NVG_Visor_197th_XX(type, name)                              \
	class 197th_NVG_##type##_##name : 197th_NVG_Visor               \
	{                                                               \
		author = [CIM] Bragg;                                       \
		displayName = [197th] NVG(##name##);                        \
		scope = 2;                                                  \
		scopearsenal = 2;                                           \
		picture = \197th_##type##\Equipments\_ui\nvg_visor.paa;     \
		hiddenselectionstextures[] = {                              \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa, \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa, \
                                                                    \
		};                                                          \
	}

#define NVG_VisorProtection_197th_XX(type, name)                     \
	class 197th_NVG_##type##_##name : 197th_NVG_Visor                \
	{                                                                \
		author = [CIM] Bragg;                                        \
		displayName = [197th] NVG(##name##);                         \
		scope = 2;                                                   \
		scopearsenal = 2;                                            \
		picture = \197th_##type##\Equipments\_ui\nvg_visor.paa;      \
		hiddenselectionstextures[] = {                               \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa,  \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa,  \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa}; \
	}

#define NVG_Scanner_197th_XX(type, name)                               \
	class 197th_NVG_##type##_##name : 197th_NVG_Scanner                \
	{                                                                  \
		author = [CIM] Bragg;                                          \
		displayName = [197th] NVG(##name##);                           \
		scope = 2;                                                     \
		scopearsenal = 2;                                              \
		picture = \197th_##type##\Equipments\_ui\nvg_medicscanner.paa; \
		hiddenselectionstextures[] = {                                 \
			197th_##type##\Equipments\NVG\Data\##name##\nvg_co.paa,    \
			197th_##type##\Equipments\NVG\Data\##name##\glow_co.paa};  \
	}

#define NVG_Headlamp_197th_XX(type, name)                            \
	class 197th_NVG_##type##_##name : 197th_NVG_Headlamp             \
	{                                                                \
		author = [CIM] Bragg;                                        \
		displayName = [197th] FlashLight;                            \
		scope = 2;                                                   \
		scopearsenal = 2;                                            \
		picture = \197th_##type##\Equipments\_ui\nvg_flashlight.paa; \
	}