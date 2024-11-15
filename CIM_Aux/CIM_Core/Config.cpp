#include "Macros.hpp"

class CfgPatches
{
	class CIM_Core
	{
		name = "CIM - Core";
		author = "[CIM] Bragg";
		url = "http://www.197th.fr";
		requiredAddons[] = {"A3_Functions_F", "A3_Data_F_Enoch_Loadorder", "OPTRE_FC_Loadorder", "OPTRE_Loadorder"};
		units[] = {};
		weapons[] = {};
        Version = "6.1.1";
	};
};

#include "Config\Cfg3DEN.hpp"

#include "Dialog\MasterDialog.hpp"

#include "MainMenu\MainMenu.hpp"

#include "Functions\Functions.hpp"

#include "Functions\CfgRemoteExec.hpp"