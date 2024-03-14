#define Number_XX(Color,Num) \
	class 197th_Number_##Color##_##Num## : 197th_NumberBase { \
		author = 197th Compagnie Chimaera; \
		displayName = [197th] ##Num## (##Color##); \
		scope = 2; \
		scopecurator = 2; \
		hiddenSelectionsTextures[] = { \
			197th_Object\Number\Data\##Color##\##Num##_ca.paa \
		}; \
		editorPreview = 197th_Object\Number\Data\##Color##\##Num##_ca.paa; \
	};