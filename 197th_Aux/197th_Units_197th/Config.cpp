/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Units_197th {
        name = "197th Units - 197th";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"197th_Equipment","197th_Vehicule"};
        weapons[] = {};
        units[] = {
            "197th_Unit_Regs_Pilote",
            "197th_Unit_Regs_ARF",
            "197th_Unit_Regs_ARF_TP",
            "197th_Unit_Regs_ARC",
            "197th_Unit_Regs_AT",
            "197th_Unit_Regs_AA"
        };
    };
};

class CfgVehicles {
    class 197th_Unit;
    class 197th_Unit_Regs_Trooper;

    class 197th_Unit_Regs_Pilote : 197th_Unit {
		author = "197th Compagnie Chimaera";
		displayName = "[197th] Pilote";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "197th_Regs_Unit";
		uniformClass = "197th_Uniform_Regs_Trooper";
		backpack = "197th_Backpack_Regs_Ceinture";
		linkedItems[] += {"197th_HelmetPilot_Regs_Pilot","197th_Vest_Regs_0"};
		respawnlinkedItems[] += {"197th_HelmetPilot_Regs_Pilot","197th_Vest_Regs_0"};
    };

    class 197th_Unit_Regs_ARF : 197th_Unit {
		author = "197th Compagnie Chimaera";
		displayName = "[197th] ARF";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "197th_Regs_Unit";
		uniformClass = "197th_Uniform_Regs_Trooper";
		backpack = "197th_Backpack_Regs_Complete";
		linkedItems[] += {"197th_HelmetARF_Regs_Arf","197th_Vest_Regs_0"};
		respawnlinkedItems[] += {"197th_HelmetARF_Regs_Arf","197th_Vest_Regs_0"};
    };

    class 197th_Unit_Regs_ARF_TP : 197th_Unit {
		author = "197th Compagnie Chimaera";
		displayName = "[197th] ARF (TP)";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "197th_Regs_Unit";
		uniformClass = "197th_Uniform_Regs_Trooper";
		backpack = "197th_Backpack_Regs_Complete";
		linkedItems[] += {"197th_HelmetARF_Regs_Arf","197th_Vest_Regs_0"};
		respawnlinkedItems[] += {"197th_HelmetARF_Regs_Arf","197th_Vest_Regs_0"};
        weapons[] = {"197th_DC15X_Regs_scoped", "Throw"};
        respawnWeapons[] = {"197th_DC15X_Regs_scoped", "Throw"};
        magazines[] = {"197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "SWLW_beltGrenade_mag"};
        respawnMagazines[] = {"197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC15X_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "197th_DC17SA_mag", "SWLW_beltGrenade_mag"};
    };

    class 197th_Unit_Regs_ARC : 197th_Unit {
		author = "197th Compagnie Chimaera";
		displayName = "[197th] ARC";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "197th_Regs_Unit";
		uniformClass = "197th_Uniform_Regs_Trooper";
		backpack = "197th_Backpack_Regs_ARC";
		linkedItems[] += {"197th_Helmet_Regs_Trooper","197th_Vest_Regs_ARC","197th_NVG_Regs_Rangefinder"};
		respawnlinkedItems[] += {"197th_Helmet_Regs_Trooper","197th_Vest_Regs_ARC","197th_NVG_Regs_Rangefinder"};
    };

    class 197th_Unit_Regs_AT : 197th_Unit_Regs_Trooper {
		author = "197th Compagnie Chimaera";
		displayName = "[197th] AT";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "197th_Regs_Unit";
		uniformClass = "197th_Uniform_Regs_Trooper";
		backpack = "197th_Backpack_Regs_Trooper";
        weapons[] += {"197th_RPS6_Regs"};
        respawnWeapons[] += {"197th_RPS6_Regs"};
        magazines[] += {"197th_AT_mag", "197th_AT_mag", "197th_AT_mag","197th_AT_mag", "197th_AT_mag", "197th_AT_mag"};
        respawnMagazines[] += {"197th_AT_mag", "197th_AT_mag", "197th_AT_mag","197th_AT_mag", "197th_AT_mag", "197th_AT_mag"};
    };

    class 197th_Unit_Regs_AA : 197th_Unit_Regs_Trooper {
		author = "197th Compagnie Chimaera";
		displayName = "[197th] AA";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "197th_Regs_Unit";
		uniformClass = "197th_Uniform_Regs_Trooper";
		backpack = "197th_Backpack_Regs_Trooper";
        weapons[] += {"197th_PLX1_Regs"};
        respawnWeapons[] += {"197th_PLX1_Regs"};
        magazines[] += {"197th_AA_mag", "197th_AA_mag", "197th_AA_mag","197th_AA_mag"};
        respawnMagazines[] += {"197th_AA_mag", "197th_AA_mag", "197th_AA_mag","197th_AA_mag"};
    };
};

class CfgGroups
{
	class West
	{
		name="$STR_A3_CfgGroups_West0";
		side=1;
		class 197th
		{
			name="[197th] Compagnie Chimaera";
			class Infantry
			{
				name="[197th] Infanterie";
				class 197th_InfTeam
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
                    name = "Equipe reco";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="CAPORAL";
						side=1;
						vehicle="197th_Unit_Regs_ARF";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_ARF_TP";
					};
				};
				class 197th_InfTeam
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    name = "Unite";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="197th_Unit_Regs_Sergent";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Medecin";
					};
				};
				class 197th_InfTeamAT
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    name = "Equipe anti-blindes";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="197th_Unit_Regs_Sergent";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
				};
				class 197th_InfTeamAA
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    name = "Equipe de defense aerienne";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="197th_Unit_Regs_Sergent";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AA";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AA";
					};
				};
				class 197th_InfAssault
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    name = "Escouade d'assaut";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
						rank="SERGEANT";
						side=1;
						vehicle="197th_Unit_Regs_Sergent";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Medecin";
					};
				};
				class 197th_InfSquad
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    name = "Escouade de fusiliers";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
                        rank = "LIEUTENANT";
						side=1;
						vehicle="197th_Unit_Regs_Lieutenant";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=1;
						vehicle="197th_Unit_Regs_Sergent";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Medecin";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Medecin";
					};
				};
			};
			class Mechanized
			{
				name="[197th] Infanterie mecanisee";
				class 197th_MechInfSquad
				{
					faction="197th";
                    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
                    name = "Escouade de fusiliers mecanisee";
					side=1;
					class Unit0
					{
						position[]={0,0,0};
                        rank = "LIEUTENANT";
						side=1;
						vehicle="197th_Bison_IFV";
					};
					class Unit1
					{
						position[]={5,-5,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit2
					{
						position[]={-5,-5,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_Trooper";
					};
					class Unit3
					{
						position[]={10,-10,0};
						rank="SERGEANT";
						side=1;
						vehicle="197th_Unit_Regs_Sergent";
					};
					class Unit4
					{
						position[]={-10,-10,0};
						rank="CORPORAL";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit5
					{
						position[]={15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_AT";
					};
					class Unit6
					{
						position[]={-15,-15,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Medecin";
					};
					class Unit7
					{
						position[]={20,-20,0};
						rank="PRIVATE";
						side=1;
						vehicle="197th_Unit_Regs_Medecin";
					};
				};
			};
        };
    };
};