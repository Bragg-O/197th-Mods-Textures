#define Number_XX(Color, Num)                                             \
	class CIM_Number_##Color##_##Num : CIM_NumberBase                     \
	{                                                                     \
		author = "[CIM] Bragg";                                           \
		displayName = Num##(##Color##);                                   \
		scope = 2;                                                        \
		scopecurator = 2;                                                 \
		hiddenSelectionsTextures[] = {                                    \
			CIM_Objects\Number\Data\##Color##\##Num##_ca.paa};            \
		editorPreview = CIM_Objects\Number\Data\##Color##\##Num##_ca.paa; \
	};