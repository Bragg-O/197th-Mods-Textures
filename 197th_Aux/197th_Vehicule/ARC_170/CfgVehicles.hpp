class 3AS_ARC_170_Base;

class 197th_ARC170: 3AS_ARC_170_Base
{
	displayName="[197th] ARC-170";
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
		"197th_Vehicule\ARC_170\Data\Main_Frame_co.paa",
		"197th_Vehicule\ARC_170\Data\Wings_Engines_co.paa",
		"197th_Vehicule\ARC_170\Data\Guns_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\ARC_170\Data\Main_Frame_co.paa",
				"197th_Vehicule\ARC_170\Data\Wings_Engines_co.paa",
				"197th_Vehicule\ARC_170\Data\Guns_co.paa"
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