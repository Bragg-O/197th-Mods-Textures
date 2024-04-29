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
            file = "197th_Functions\AddonsScanner";
            class initAddonsScanner {};
        };
		class BactaGrenade {
            file = "197th_Functions\BactaGrenade";
            class checkBactaGrenade {};
			class setupEH {
				postInit=1;
			};
			class onBactaGrenade {};
		};
        class EarPlugs {
            file = "197th_Functions\EarPlugs";
            class checkEarPlugs {};
            class initEarPlugs {
                postInit = 1;
            };
            class switchEarPlugs {};
        };
        class Garage {
            file = "197th_Functions\Garage";
            class initGarage {};
        };
        class HealTerminal {
            file = "197th_Functions\HealTerminal";
            class initHealTerminal {};
            class useHealTerminal {};
        };
        class Loadout {
            file = "197th_Functions\Loadout";
            class addLoadout {};
            class initLoadout {};
        };
        class LoadUnitsEquipment {
            file = "197th_Functions\LoadUnitsEquipment";
            class loadUnitsEquipment {};
        };
        class Reorientation {
            file = "197th_Functions\Reorientation";
            class onReorientation {};
        };
        class RestrictedArsenal {
            file = "197th_Functions\RestrictedArsenal";
            class initRestrictedArsenal {};
        };
        class UnderFire {
            file = "197th_Functions\UnderFire";
            class initUnderFire {
                postInit = 1;
            };
            class onUnderFire {};
        };
        class UnitTrait {
            file = "197th_Functions\UnitTrait";
            class initUnitTraitEngineer {};
            class initUnitTraitMedic {};
        };
        class VehicleService {
            file = "197th_Functions\VehicleService";
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
            file = "197th_Functions\LARs\override_VA_templates\functions";
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