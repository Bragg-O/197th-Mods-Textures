#define CfgPatches_XX(model,type,name) 197th_##model##_##type##_##name##


#define Uniform_197th_XX(type,name) \
    class 197th_Uniform_##type##_##name## : 197th_Uniform { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] Uniform ##name##; \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\uniform_##type##.paa; \
		class ItemInfo : UniformItem { \
			uniformModel = -; \
			uniformtype = neopren; \
			uniformClass = 197th_Unit_##type##_##name##; \
			containerClass = Supply70; \
			mass = 80; \
		}; \
    }


#define Unit_197th_XX(type,name,sac,helmet,vest,accessories1,accessories2,accessories3) \
	class 197th_Unit_##type##_##name## : 197th_Unit { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] ##name##; \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Unit; \
		uniformClass = 197th_Uniform_##type##_##name##; \
		backpack = ##sac##; \
		linkedItems[] += {##helmet##,##vest##,##accessories1##,##accessories2##,##accessories3##}; \
		respawnlinkedItems[] += {##helmet##,##vest##,##accessories1##,##accessories2##,##accessories3##}; \
        hiddenSelectionsTextures[] = { \
			197th_Equipment\Uniform\Data\##type##\##name##\camo1_co.paa, \
			197th_Equipment\Uniform\Data\##type##\##name##\camo2_co.paa, \
			197th_Equipment\Uniform\Data\undersuit_co.paa \
		}; \
	}


#define UnitCC_197th_XX(type,name,sac,helmet,vest,accessories1,accessories2,accessories3) \
	class 197th_Unit_##type##_##name## : 197th_Unit_Commander { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] ##name##; \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Unit; \
		uniformClass = 197th_Uniform_##type##_##name##; \
		backpack = ##sac##; \
		linkedItems[] += {##helmet##,##vest##,##accessories1##,##accessories2##,##accessories3##}; \
		respawnlinkedItems[] += {##helmet##,##vest##,##accessories1##,##accessories2##,##accessories3##}; \
        hiddenSelectionsTextures[] = { \
			197th_Equipment\Uniform\Data\##type##\##name##\camo1_co.paa, \
			197th_Equipment\Uniform\Data\##type##\##name##\camo2_co.paa, \
			197th_Equipment\Uniform\Data\undersuit_co.paa \
		}; \
	}


#define Helmet_197th_XX(type,name) \
    class 197th_Helmet_##type##_##name## : 197th_Helmet { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] Helmet (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\helmet_##type##.paa; \
        hiddenSelectionsTextures[] = { \
			197th_Equipment\helmet\Data\##type##\##name##\camo_co.paa, \
			197th_Equipment\helmet\Data\##type##\##name##\visor_co.paa, \
		}; \
    }


#define HelmetVisorLight_197th_XX(type,name) \
    class 197th_Helmet_##type##_##name## : 197th_Helmet { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] Helmet (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\helmet_##type##.paa; \
        hiddenSelectionsTextures[] = { \
			197th_Equipment\helmet\Data\##type##\##name##\camo_co.paa, \
			197th_Equipment\helmet\Data\##type##\##name##\visor_co.paa, \
		}; \
		hiddenSelectionsMaterials[] = { \
			, \
			\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat \
		}; \
    }


#define HeadgearItem_197th_XX(type,id) \
    class 197th_Headgear_##type##_##id## : 197th_Headgear { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Helmet (##id##); \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Helmet; \
		class TransportItems { \
			class XX_197th_Helmet_##type##_##id## { \
				name = 197th_Helmet_##type##_##id##; \
				count = 1; \
			}; \
		}; \
	}


#define HelmetPilot_197th_XX(type,name) \
    class 197th_HelmetPilot_##type##_##name## : 197th_HelmetPilot { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] Pilot Helmet (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\helmet_pilot_##type##.paa; \
        hiddenSelectionsTextures[] = { \
			197th_Equipment\helmet\Data\##type##\##name##\camo_co.paa, \
			197th_Equipment\helmet\Data\##type##\##name##\visor_co.paa, \
		}; \
    }


#define HeadgearItemPilot_197th_XX(type,id) \
    class 197th_HeadgearPilot_##type##_##id## : 197th_Headgear { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Pilot Helmet (##id##); \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Helmet; \
		class TransportItems { \
			class XX_197th_HelmetPilot_##type##_##id## { \
				name = 197th_HelmetPilot_##type##_##id##; \
				count = 1; \
			}; \
		}; \
	}


#define HelmetARF_197th_XX(type,name) \
    class 197th_HelmetARF_##type##_##name## : 197th_HelmetArf { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] ARF Helmet (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\helmet_arf_##type##.paa; \
        hiddenSelectionsTextures[] = { \
			197th_Equipment\helmet\Data\##type##\##name##\camo_co.paa, \
			, \
			197th_Equipment\helmet\Data\##type##\##name##\visor_co.paa, \
		}; \
    }


#define HeadgearItemARF_197th_XX(type,id) \
    class 197th_HeadgearARF_##type##_##id## : 197th_Headgear { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] ARF Helmet (##id##); \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Helmet; \
		class TransportItems { \
			class XX_197th_HelmetARF_##type##_##id## { \
				name = 197th_HelmetARF_##type##_##id##; \
				count = 1; \
			}; \
		}; \
	}


#define Backpack_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Backpack (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			197th_Equipment\Backpack\Data\cover_co.paa, \
			197th_Equipment\Backpack\Data\pouches_co.paa, \
			197th_Equipment\Backpack\Data\tube_co.paa \
		}; \
	}


#define BackpackRocket_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Rocket { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Backpack (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			197th_Equipment\Backpack\Data\holder_co.paa, \
			197th_Equipment\Backpack\Data\rocket_co.paa, \
			197th_Equipment\Backpack\Data\light_co.paa, \
			197th_Equipment\Backpack\Data\pouches_co.paa \
		}; \
	}


#define BackpackRadio_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Radio { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Backpack (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			197th_Equipment\Backpack\Data\radio_co.paa, \
			197th_Equipment\Backpack\Data\screen_co.paa, \
			197th_Equipment\Backpack\Data\pouches_co.paa \
		}; \
	}


#define BackpackMedecin_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Medecin { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Backpack (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			197th_Equipment\Backpack\Data\cover_co.paa, \
			197th_Equipment\Backpack\Data\pouches_co.paa, \
			197th_Equipment\Backpack\Data\medic_co.paa, \
			197th_Equipment\Backpack\Data\medic_co.paa \
		}; \
	}


#define BackpackSacocheCeinture_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Bag { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Sacoche (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_bag_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			 \
		}; \
	}


#define BackpackSacocheCeinturRTO_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Bag_RTO { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Sacoche (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_bag_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			\
		}; \
	}


#define BackpackSacocheJambe_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Bag { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Sacoche (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_bag_##type##.paa; \
		hiddenselectionstextures[] = { \
			, \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa \
		}; \
	}


#define BackpackSacoche_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_Bag { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Sacoche (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_bag_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa, \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa \
		}; \
	}


#define BackpackARC_197th_XX(type,name) \
    class 197th_Backpack_##type##_##name## : 197th_Backpack_ARC { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Backpack (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		scopecurator = 2; \
		editorSubcategory = 197th_##type##_Backpack; \
		picture = \197th_Equipment\_ui\backpack_arc_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Backpack\Data\##type##\##name##\backpack_co.paa \
		}; \
	}


#define VestOfficer_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Officer { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_pauldron_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Officer_Accessories_co.paa \
		}; \
	}


#define VestKama_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Lieutenant1 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_kama_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Officer_Accessories_co.paa, \
			 \
		}; \
	}


#define VestPauldron_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Lieutenant2 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_pauldron_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Officer_Accessories_co.paa \
		}; \
	}


#define VestSergent_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Sergent { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_nco_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define VestARC_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_ARC { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_arc_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\ARC_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Officer_Accessories_co.paa \
		}; \
	}


#define VestHolster_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Sergent { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			, \
			, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			 \
		}; \
	}


#define VestMedical_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_CloneMedic { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define Vest0_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone0 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
	}


#define Vest1_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone1 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Light_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Officer_Accessories_co.paa \
		}; \
	}


#define Vest2_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone2 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Light_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Officer_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\ARC_Accessories_co.paa \
		}; \
	}

#define Vest3_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone3 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Light_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define Vest4_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone4 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Light_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define Vest5_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone5 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define Vest6_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone6 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Light_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define Vest7_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone7 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa, \
			, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define Vest8_197th_XX(type,name) \
    class 197th_Vest_##type##_##name## : 197th_Vest_Clone8 { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\vest_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\Vest\Data\##type##\##name##\Light_Accessories_co.paa, \
			197th_Equipment\Vest\Data\##type##\##name##\Heavy_Accessories_co.paa \
		}; \
	}


#define NVG_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] NVG (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa, \
			 \
		}; \
	}


#define NVG_NCO_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] NVG (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa, \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa \
		}; \
	}


#define NVG_Rangefinder_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG_Rangefinder { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] NVG (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_rangefinder_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa \
		}; \
	}


#define NVG_Visor_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG_Visor { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] NVG (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_visor_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa, \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa, \
			 \
		}; \
	}


#define NVG_VisorProtection_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG_Visor { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] NVG (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_visor_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa, \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa, \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa \
		}; \
	}


#define NVG_Scanner_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG_Scanner { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] NVG (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_medicscanner_##type##.paa; \
		hiddenselectionstextures[] = { \
			197th_Equipment\NVG\Data\##type##\##name##\glow_co.paa, \
			197th_Equipment\NVG\Data\##type##\##name##\nvg_co.paa \
		}; \
	}


#define NVG_Headlamp_197th_XX(type,name) \
    class 197th_NVG_##type##_##name## : 197th_NVG_Headlamp { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] FlashLight; \
		scope = 2; \
		scopearsenal = 2; \
		picture = \197th_Equipment\_ui\nvg_flashlight_##type##.paa; \
	}