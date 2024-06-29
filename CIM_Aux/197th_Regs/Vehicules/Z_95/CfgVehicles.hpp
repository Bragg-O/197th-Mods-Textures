class 3AS_Z95_Republic;

class 197th_Z95: 3AS_Z95_Republic
{
	displayName="[197th] Z-95";
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
		"197th_Regs\Vehicules\Z_95\Data\body_co.paa",
		"3AS\3AS_Z95\Data\cockpit_co.paa",
		"3AS\3AS_Z95\data\glass\glass_ca"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Z_95\Data\body_co.paa",
				"3AS\3AS_Z95\Data\cockpit_co.paa",
				"3AS\3AS_Z95\data\glass\glass_ca"
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