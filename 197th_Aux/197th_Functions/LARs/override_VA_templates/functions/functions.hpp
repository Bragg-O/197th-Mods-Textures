class LARs_overrideVATemplates
{
	tag = "LARs";
	class Inventory
	{
		file = "197th_Script\Exec\LARs\override_VA_templates\functions";
		class initOverride { postInit = 1; };
		class loadInventory_whiteList {};
		class overrideVAButtonDown {};
		class overrideVATemplateOK {};
		class applyLBColors {};
		class showRestrictedItems {};
		class addVAKeyEvents {};
	};
};