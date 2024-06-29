class 3AS_Barc;
class 3AS_BarcSideCar;

class 197th_BARC: 3AS_Barc
{
	displayName="[197th] BARC";
	author = "[CIM] Bragg";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_ARF";
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
		"197th_Regs\Vehicules\BARC\Data\barc_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\BARC\Data\barc_co.paa"
			};
		};
	};
	textureList[] =
	{
		"197th", 1
	};
};

class 197th_BARCSideCar: 3AS_BarcSideCar
{
	displayName="[197th] BARC (SideCar)";
	author = "[CIM] Bragg";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_ARF";
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
		"197th_Regs\Vehicules\BARC\Data\barc_co.paa",
		"197th_Regs\Vehicules\BARC\Data\gunner_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\BARC\Data\barc_co.paa",
				"197th_Regs\Vehicules\BARC\Data\gunner_co.paa"
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