class 3AS_PX10_REP_F;

class 197th_PX10: 3AS_PX10_REP_F
{
	displayName="[197th] PX-10";
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
		"197th_Vehicule\PX_10\Data\Hull_co.paa",
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
		"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
		"197th_Vehicule\PX_10\Data\Fuel_co.paa",
		"197th_Vehicule\PX_10\Data\Crane_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\PX_10\Data\Hull_co.paa",
				"3as\3as_rebel_armor\px10_cav\textures\px10cavintback_co.paa",
				"3as\3as_rebel_armor\px10_cav\textures\px10cavintfront_co.paa",
				"197th_Vehicule\PX_10\Data\Fuel_co.paa",
				"197th_Vehicule\PX_10\Data\Crane_co.paa"
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

class 197th_PX10_Repair: 197th_PX10
{
	animationList[]=
	{
		"HideAttachmentDozer",
		0,
		"HideAttachmentFuel",
		0,
		"HideAttachmentPlate",
		1,
		"HideAttachmentRepair",
		0
	};
	displayName="[197th] PX-10 (Reparation)";
	author="197th Compagnie Chimaera";
	scope=2;
	scopeCurator=2;
	ace_repair_canRepair=1;
	ace_rearm_defaultSupply=1200;
	ace_refuel_fuelCargo=3000;
};

class 197th_PX10_Armored: 197th_PX10
{
	animationList[]=
	{
		"HideAttachmentDozer",
		1,
		"HideAttachmentFuel",
		1,
		"HideAttachmentPlate",
		0,
		"HideAttachmentRepair",
		1
	};
	displayName="[197th] PX-10 (Up-Armor)";
	author="197th Compagnie Chimaera";
	scope=2;
	scopeCurator=2;
	ace_repair_canRepair=0;
	ace_rearm_defaultSupply=0;
	ace_refuel_fuelCargo=0;
};