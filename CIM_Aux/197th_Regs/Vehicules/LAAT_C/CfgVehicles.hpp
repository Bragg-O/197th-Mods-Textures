class 3AS_LAATC;

class 197th_LAATC: 3AS_LAATC
{
	displayName="[197th] LAAT/C";
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
		"197th_Regs\Vehicules\LAAT_C\Data\Hull_co.paa",
		"197th_Regs\Vehicules\LAAT_C\Data\Wings_co.paa",
		"197th_Regs\Vehicules\LAAT_C\Data\Top_co.paa",
		"197th_Regs\Vehicules\LAAT_C\Data\Detail_Front_co.paa"
	};
	class textureSources
	{
		class 197th
		{
			displayName = "197th Chimaera";
			author = "[CIM] Bragg";
			textures[] = {
				"197th_Regs\Vehicules\LAAT_C\Data\Hull_co.paa",
				"197th_Regs\Vehicules\LAAT_C\Data\Wings_co.paa",
				"197th_Regs\Vehicules\LAAT_C\Data\Top_co.paa",
				"197th_Regs\Vehicules\LAAT_C\Data\Detail_Front_co.paa"
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
	class UserActions
	{
		class afterburnerMk1_turn_on
		{
			showWindow=0;
			hideOnUse=0;
			priority=9;
			role=0;
			displayName="Activate Impulse";
			position="pilotview";
			radius=6;
			onlyforplayer=1;
			condition="(alive this) && (player == driver this) && (isEngineOn this)";
			statement="0 = this spawn tcw_fnc_afterburnerMK1_turn_on;";
		};
		class afterburnerMk1_turn_off
		{
			showWindow=0;
			hideOnUse=0;
			priority=9;
			role=0;
			displayName="Deactivate Impulse";
			position="pilotview";
			radius=6;
			onlyforplayer=1;
			condition="(alive this) && ((speed this) > 50) && (player == driver this)";
			statement="0 = this spawn tcw_fnc_afterburnerMK1_turn_off;";
		};
		class LoadCargo
		{
			userActionID=6;
			displayName="Charger des vehicules";
			displayNameDefault="Charger des vehicules";
			textToolTip="Charger des vehicules";
			position="pilotview";
			showWindow=0;
			radius=5;
			priority=1;
			onlyForPlayer=0;
			condition="((speed this < TAS_lcLoadSpeed) && (player == currentPilot vehicle player)) && (count(this getVariable [""TAS_Loaded"",[]]) == 0)";
			statement="0 = [this] spawn CIM_fnc_onLoadLAATC;";
		};
		class UnLoadCargo
		{
			userActionID=7;
			displayName="Decharger les vehicules";
			displayNameDefault="Decharger les vehicules";
			textToolTip="Decharger les vehicules";
			position="pilotview";
			showWindow=0;
			radius=15;
			priority=3;
			onlyForPlayer=0;
			condition="(count(this getVariable [""TAS_Loaded"",[]]) > 0)";
			statement="0 = [this] spawn CIM_fnc_onUnLoadLAATC;";
		};
	};
};