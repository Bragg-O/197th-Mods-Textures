/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

class CfgPatches {
    class 197th_Functions {
        name = "197th Functions";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {};
        weapons[] = {};
        units[] = {};
    };
};
class CfgFunctions {
    class CIM_197th_Functions {
        tag = "CIM";
        class AddonsScanner {
            class initAddonsScanner {};
        };
		class BactaGrenade {
			class setupEH {
				postInit=1;
			};
			class onBactaGrenade {};
		};
        class EarPlugs {
            class checkEarPlugs {};
            class initEarPlugs {
                postInit = 1;
            };
            class switchEarPlugs {};
        };
        class Garage {
            class initGarage {};
        };
        class HealTerminal {
            class initHealTerminal {};
            class useHealTerminal {};
        };
        class Loadout {
            class addLoadout {};
            class initLoadout {};
        };
        class RestrictedArsenal {
            class initRestrictedArsenal {};
        };
        class UnderFire {
            class initUnderFire {
                postInit = 1;
            };
            class onUnderFire {};
        };
        class UnitTrait {
            class initUnitTraitEngineer {};
            class initUnitTraitMedic {};
        }
        class VehicleService {
            class initAllVehicleService {};
            class initVehicleServiceReFuel {};
            class initVehicleServiceRepair {};
            class initVehicleServiceReArm {};
            class initVehicleServiceChangePylon {};
            class onVehicleServiceReFuel {};
            class onVehicleServiceRepair {};
            class onVehicleServiceReArm {};
            class onVehicleServiceChangePylon {};
        };
    };
    class LARs_overrideVATemplates {
        tag = "LARs";
        class Inventory {
            file = "197th_Aux\197th_Functions\LARs\override_VA_templates\functions";
            class initOverride {
                postInit = 1;
            };
            class loadInventory_whiteList {};
            class overrideVAButtonDown {};
            class overrideVATemplateOK {};
            class applyLBColors {};
            class showRestrictedItems {};
            class addVAKeyEvents {};
        };
    };
};