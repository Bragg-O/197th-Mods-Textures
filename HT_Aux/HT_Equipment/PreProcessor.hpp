#define CfgPatches_XX(model,type,name) HT_##model##_##type##_##name##


#define Uniform_HT_XX(type,name) \
    class HT_Uniform_##type##_##name## : HT_Uniform { \
		author = 197th Compagnie Chimaera; \
        displayName = [HT] Uniform ##name##; \
		scope = 2; \
		scopearsenal = 2; \
		picture = \HT_Equipment\_ui\uniform_ca.paa; \
		class ItemInfo : UniformItem { \
			uniformModel = -; \
			uniformtype = neopren; \
			uniformClass = HT_Unit_##type##_##name##; \
			containerClass = Supply70; \
			mass = 80; \
		}; \
    }


#define Unit_HT_XX(type,name,uniform,helmet,vest) \
	class HT_Unit_##type##_##name## : HT_Unit { \
		author = 197th Compagnie Chimaera; \
		displayName = [HT] ##name##; \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = HT_##type##_Unit; \
		uniformClass = ##uniform##; \
		linkedItems[] += {##helmet##,##vest##}; \
		respawnlinkedItems[] += {##helmet##,##vest##}; \
	}


#define HelmetTraditional_HT_XX(type,name) \
    class HT_Helmet_##type##_##name## : HT_HelmetTraditional { \
		author = 197th Compagnie Chimaera; \
        displayName = [HT] Helmet (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \HT_Equipment\_ui\helmet_ca.paa; \
        hiddenSelectionsTextures[] = { \
			HT_Equipment\Helmet\Data\##type##\##name##\helmet_co.paa, \
			HT_Equipment\Helmet\Data\##type##\##name##\visor_co.paa, \
			HT_Equipment\Helmet\Data\##type##\##name##\neck_co.paa \
		}; \
    }


#define HeadgearItem_HT_XX(type,id) \
    class HT_Headgear_##type##_##id## : HT_Headgear { \
		author = 197th Compagnie Chimaera; \
		displayName = [HT] Helmet (##id##); \
		scope = 2; \
		scopecurator = 2; \
		editorSubcategory = HT_##type##_Helmet; \
		class TransportItems { \
			class XX_HT_Helmet_##type##_##id## { \
				name = HT_Helmet_##type##_##id##; \
				count = 1; \
			}; \
		}; \
	}


#define VestTraditional_HT_XX(type,name) \
    class HT_Vest_##type##_##name## : HT_VestTraditional { \
		author = 197th Compagnie Chimaera; \
		displayName = [HT] Vest (##name##); \
		scope = 2; \
		scopearsenal = 2; \
		picture = \HT_Equipment\_ui\vest_ca.paa; \
		hiddenselectionstextures[] = { \
			HT_Equipment\Vest\Data\##type##\##name##\vest_co.paa \
		}; \
	}