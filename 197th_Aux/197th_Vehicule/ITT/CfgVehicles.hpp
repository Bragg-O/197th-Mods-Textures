class 3AS_ITT;
class 3AS_ITT_Medical;
class 3AS_ITT_Logistic;

class 197th_ITT: 3AS_ITT
{
	displayName="[197th] ITT";
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
		"197th_Vehicule\ITT\Data\Hull_co.paa",
		"3as\3as_itt\data\glass_co.paa",
		"3as\3as_itt\data\itt_int_back_co.paa",
		"3as\3as_itt\data\itt_door_co.paa",
		"3as\3as_itt\data\itt_int_front_co.paa",
		"3as\3as_itt\data\itt_emiss_co.paa",
		"3as\3as_itt\data\itt_turret_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\ITT\Data\Hull_co.paa",
				"3as\3as_itt\data\glass_co.paa",
				"3as\3as_itt\data\itt_int_back_co.paa",
				"3as\3as_itt\data\itt_door_co.paa",
				"3as\3as_itt\data\itt_int_front_co.paa",
				"3as\3as_itt\data\itt_emiss_co.paa",
				"3as\3as_itt\data\itt_turret_co.paa"
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

class 197th_ITT_Transport: 3AS_ITT_Medical
{
	displayName="[197th] ITT (Transport)";
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
		"197th_Vehicule\ITT\Data\Hull_co.paa",
		"3as\3as_itt\data\glass_co.paa",
		"3as\3as_itt\data\itt_int_back_co.paa",
		"3as\3as_itt\data\itt_door_co.paa",
		"3as\3as_itt\data\itt_int_front_co.paa",
		"3as\3as_itt\data\itt_emiss_co.paa",
		""
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\ITT\Data\Hull_co.paa",
				"3as\3as_itt\data\glass_co.paa",
				"3as\3as_itt\data\itt_int_back_co.paa",
				"3as\3as_itt\data\itt_door_co.paa",
				"3as\3as_itt\data\itt_int_front_co.paa",
				"3as\3as_itt\data\itt_emiss_co.paa",
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

class 197th_ITT_Medical: 3AS_ITT_Medical
{
	displayName="[197th] ITT (Medical)";
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
		"197th_Vehicule\ITT\Data\Hull_Medical_co.paa",
		"3as\3as_itt\data\glass_co.paa",
		"3as\3as_itt\data\itt_int_back_co.paa",
		"3as\3as_itt\data\itt_door_co.paa",
		"3as\3as_itt\data\itt_int_front_co.paa",
		"3as\3as_itt\data\itt_emiss_co.paa",
		""
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\ITT\Data\Hull_Medical_co.paa",
				"3as\3as_itt\data\glass_co.paa",
				"3as\3as_itt\data\itt_int_back_co.paa",
				"3as\3as_itt\data\itt_door_co.paa",
				"3as\3as_itt\data\itt_int_front_co.paa",
				"3as\3as_itt\data\itt_emiss_co.paa",
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
    class EventHandlers {
		init = "[_this select 0] setVariable ['ace_medical_isMedicalVehicle', true, true]";
	};
};

class 197th_ITT_Logistic: 3AS_ITT_Logistic
{
	displayName="[197th] ITT (Logistic)";
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
		"197th_Vehicule\ITT\Data\Hull_Logistic_co.paa",
		"3as\3as_itt\data\glass_co.paa",
		"3as\3as_itt\data\itt_int_back_co.paa",
		"3as\3as_itt\data\itt_door_co.paa",
		"3as\3as_itt\data\itt_int_front_co.paa",
		"3as\3as_itt\data\itt_emiss_co.paa",
		""
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "197th Compagnie Chimaera";
			textures[] = {
				"197th_Vehicule\ITT\Data\Hull_Logistic_co.paa",
				"3as\3as_itt\data\glass_co.paa",
				"3as\3as_itt\data\itt_int_back_co.paa",
				"3as\3as_itt\data\itt_door_co.paa",
				"3as\3as_itt\data\itt_int_front_co.paa",
				"3as\3as_itt\data\itt_emiss_co.paa",
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
    class EventHandlers {
		init = "[_this select 0] setVariable ['ace_isRepairFacility', true, true]";
	};
};