class OPTRE_M12A1_LRV;
class OPTRE_M12_FAV_APC;
class OPTRE_M914_RV;
class OPTRE_M12G1_LRV;
class OPTRE_M12R_AA;
class OPTRE_M813_TT;
class OPTRE_M12_LRV;
class OPTRE_M12_FAV;

class 197th_M12A1_LRV: OPTRE_M12A1_LRV
{
	displayName="[197th] Warthog (M12A1-LRV)";
	author = "[CIM] Bragg";
	scope=2;
	scopeCurator=2;
	crew="197th_Unit_Regs_Trooper";
	side=1;
	faction = "197th";
	
	editorSubcategory = "CIM_Terrestre";
	editorPreview="";
	hiddenselectionstextures[]=
	{
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
		"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
		""
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
				"\OPTRE_Vehicles\warthog\data\turrets\m39_turret_co.paa",
				""
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

class 197th_M12_APC: OPTRE_M12_FAV_APC
{
	displayName="[197th] Warthog (M12-APC)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\hog_apc_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
		"",
		""
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"optre_vehicles\warthog\data\snow\m12hogmaav_extunder_snow_co.paa",
				"optre_vehicles\warthog\data\snow\transp_lopo_snow_co.paa",
				"optre_vehicles\warthog\data\snow\hog_apc_snow_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
				"",
				""
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

class 197th_M914_RV: OPTRE_M914_RV
{
	displayName="[197th] Warthog (M914-RV)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
		"\optre_vehicles\warthog\data\net_ca.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
				"\optre_vehicles\warthog\data\net_ca.paa"
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
	ace_repair_canRepair = 1;
};

class 197th_M12G1_LRV: OPTRE_M12G1_LRV
{
	displayName="[197th] Warthog (M12G1-LRV)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\m68_turret_night_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa"
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

class 197th_M12R_AA: OPTRE_M12R_AA
{
	displayName="[197th] Warthog (M12R-AA)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\m79_turret_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa"
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

class 197th_M813_TT: OPTRE_M813_TT
{
	displayName="[197th] Warthog (M813-TT)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
		"",
		""
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\transp_lopo_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
				"",
				""
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

class 197th_M12_LRV: OPTRE_M12_LRV
{
	displayName="[197th] Warthog (M12-LRV)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
		"",
		"optre_vehicles\warthog\data\turrets\sight_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\m12_turret_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa",
				"",
				"optre_vehicles\warthog\data\turrets\sight_co.paa"
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

class 197th_M12_FAV: OPTRE_M12_FAV
{
	displayName="[197th] Warthog (M12-FAV)";
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
		"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
		"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
		"",
		"197th_Regs\Vehicules\Warthog\Data\interior_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\Warthog\Data\extupper_co.paa",
				"\OPTRE_Vehicles\Warthog\data\night\M12HogMaav_extunder_night_co.paa",
				"",
				"197th_Regs\Vehicules\Warthog\Data\interior_co.paa"
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
