class CfgFactionClasses
{
	Categories_XX(197th,197th);
};

class CfgEditorCategories
{
	Categories_XX(CIM_Objects,Objects);
	Categories_XX(CIM_Weapon,Weapon);
	Categories_XX(CIM_Script,Script);
};

class CfgEditorSubcategories
{
	CategoriesDouble_XX(CIM_Customs_Backpack,Customs,Backpack);
	CategoriesDouble_XX(CIM_Customs_Helmet,Customs,Helmet);
	CategoriesDouble_XX(CIM_Customs_Weapon,Customs,Weapon);
	CategoriesDouble_XX(CIM_Customs_Unit,Customs,Unit);
	CategoriesDouble_XX(CIM_Regs_Backpack,Regs,Backpack);
	CategoriesDouble_XX(CIM_Regs_Helmet,Regs,Helmet);
	CategoriesDouble_XX(CIM_Regs_Weapon,Regs,Weapon);
	CategoriesDouble_XX(CIM_Regs_Unit,Regs,Unit);
	Categories_XX(CIM_Number,Number);
	Categories_XX(CIM_Loadout,Loadout);
	Categories_XX(CIM_Explosive,Explosive);
	Categories_XX(CIM_Terminal,Terminal);
	Categories_XX(CIM_Arsenal,Arsenal);
	Categories_XX(CIM_Flag,Flag);
	Categories_XX(CIM_Supply,Supply);
	Categories_XX(CIM_Aerien,Aerien);
	Categories_XX(CIM_Terrestre,Terrestre);
};

class Cfg3DEN
{
	class Compositions
	{
		class AcclamatorOrion
		{
			path = "\CIM_Core\Config\compositions\AcclamatorOrion";	// pbo path to a folder containing header.sqe/composition.sqe files
			side = 8;											 	// 0 opfor,1 blufor,2 indfor,3 civ,8 Empty/Props
			editorCategory = "CIM_Script";						  	// link to CfgEditorCategories
			editorSubcategory = "CIM_Aerien";					   	// link to CfgEditorSubcategories
			displayName = "Acclamator (Orion) - v1.0";				// Display composition name
			icon = "\CIM_Core\Missions\Data\logo.paa";				// left side icon in groups list
			useSideColorOnIcon = 1;					   				// 1 == icon is always colored in faction color
		};
	};
};