class 3AS_RTT_Wheeled;

class 197th_RTT: 3AS_RTT_Wheeled
{
	displayName="[197th] RTT";
	author="197th Compagnie Chimaera";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_Trooper";
	side=1;
	forceInGarage = 2;
	cargoCanEject = 1;
	ace_cargo_space = 20;
	ace_cargo_hasCargo = 1;
	faction="197th_Vehicle";
	editorCategory = "197th_Vehicle";
	editorSubcategory = "197th_Terrestre";
	editorPreview="";
	hiddenselectionstextures[]=
	{
		"197th_Vehicule\RTT\Data\exterior_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\RTT\Data\exterior_co.paa"
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