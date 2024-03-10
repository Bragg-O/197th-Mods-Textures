class 3AS_BTLB_Bomber;

class 197th_YWing: 3AS_BTLB_Bomber
{
	displayName="[197th] BTL-Y Wing";
	author="197th Compagnie Chimaera";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_Pilote";
	side=1;
	forceInGarage = 2;
	cargoCanEject = 1;
	ace_cargo_space = 20;
	ace_cargo_hasCargo = 1;
	faction="197th_Vehicle";
	editorCategory = "197th_Vehicle";
	editorSubcategory = "197th_Aerien";
	editorPreview="";
	hiddenselectionstextures[]=
	{
		"197th_Vehicule\Y_Wing\Data\hull_co.paa",
		"3as\3AS_btlb\data\detail_co.paa",
		"3as\3AS_btlb\data\interior_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\Y_Wing\Data\hull_co.paa",
				"3as\3AS_btlb\data\detail_co.paa",
				"3as\3AS_btlb\data\interior_co.paa"
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