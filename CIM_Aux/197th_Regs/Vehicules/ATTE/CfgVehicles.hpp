class 3AS_ATTE_base;

class 197th_ATTE: 3AS_ATTE_base
{
	displayName="[197th] ATTE";
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
		"197th_Regs\Vehicules\ATTE\Data\Shell_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
		"3as\3as_atte\data\textures\3as_atte_armor_co.paa"

	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\ATTE\Data\Shell_co.paa",
				"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
				"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
				"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
				"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
				"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
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