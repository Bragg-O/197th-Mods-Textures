class 3AS_ISP;
class 3AS_ISP_Transport;

class 197th_ISP: 3AS_ISP
{
	displayName="[197th] ISP";
	author = "[CIM] Bragg";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_Trooper";
	side=1;
	forceInGarage = 2;
	cargoCanEject = 1;
	ace_cargo_space = 20;
	ace_cargo_hasCargo = 1;
	faction = "197th";
	
	editorSubcategory = "CIM_Terrestre";
	editorPreview="";
	hiddenselectionstextures[]=
	{
		"197th_Regs\Vehicules\ISP\Data\isp_co.paa",
		"197th_Regs\Vehicules\ISP\Data\isp_screens_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\ISP\Data\isp_co.paa",
				"197th_Regs\Vehicules\ISP\Data\isp_screens_co.paa"
			};
		};
	};
	textureList[] =
	{
		"197th", 1
	};
    class TransportItems {};
    class TransportWeapons {};
    class TransportMagazines {};   
    class TransportBackpacks {};
};

class 197th_ISP_Transport: 3AS_ISP_Transport
{
	displayName="[197th] ISP (Transport)";
	author = "[CIM] Bragg";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_Trooper";
	side=1;
	forceInGarage = 2;
	cargoCanEject = 1;
	ace_cargo_space = 20;
	ace_cargo_hasCargo = 1;
	faction = "197th";
	
	editorSubcategory = "CIM_Terrestre";
	editorPreview="";
	hiddenselectionstextures[]=
	{
		"197th_Regs\Vehicules\ISP\Data\isp_co.paa",
		"197th_Regs\Vehicules\ISP\Data\isp_screens_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\ISP\Data\isp_co.paa",
				"197th_Regs\Vehicules\ISP\Data\isp_screens_co.paa"
			};
		};
	};
	textureList[] =
	{
		"197th", 1
	};
	animationList[]=
	{
		"HideTurrets",
		1
	};
    class TransportItems {};
    class TransportWeapons {};
    class TransportMagazines {};   
    class TransportBackpacks {};
};