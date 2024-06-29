class 3as_Vwing_base;

class 197th_VWing: 3as_Vwing_base
{
	displayName="[197th] V-Wing";
	author = "[CIM] Bragg";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_Pilote";
	side=1;
	forceInGarage = 2;
	cargoCanEject = 1;
	ace_cargo_space = 20;
	ace_cargo_hasCargo = 1;
	faction = "197th";
	
	editorSubcategory = "CIM_Aerien";
	editorPreview="";
	hiddenselectionstextures[]=
	{
		"197th_Regs\Vehicules\V_Wing\Data\hull_co.paa",
		"3as\3AS_Vwing\data\vwing_int_co.paa",
		"#(argb,8,8,3)color(0,0,0,1.0,CA)"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\V_Wing\Data\hull_co.paa",
				"3as\3AS_Vwing\data\vwing_int_co.paa",
				"#(argb,8,8,3)color(0,0,0,1.0,CA)"
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