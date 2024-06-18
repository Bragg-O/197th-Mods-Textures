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
        class Bobcat {
            file = "197th_Functions\Bobcat";
            class initBobcat {};
        };
        class Communication {
            file = "197th_Functions\Communication";
            class initCommunication {};
            class onCommunication {};
        };
        class DialogBox {
            file = "197th_Functions\DialogBox";
            class initDialog1 {};
            class loadDialog1 {};
        };
        class EarPlugs {
            file = "197th_Functions\EarPlugs";
            class checkEarPlugs {};
            class initEarPlugs {
                postInit = 1;
            };
            class switchEarPlugs {};
        };
        class Fortify {
            file = "197th_Functions\Fortify";
            class canFortify {};
        };
        class Garage {
            file = "197th_Functions\Garage";
            class createVehForkliftAnimation {};
            class createVehHangarAnimation {};
            class deleteVehHangarAnimation {};
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
        class LoadVeh {
            file = "197th_Functions\LoadVeh";
            class onLoadLAATC {};
            class onUnloadLAATC {};
        };
        class Reorientation {
            file = "197th_Functions\Reorientation";
            class onReorientation {};
        };
        class RestrictedArsenal {
            file = "197th_Functions\RestrictedArsenal";
            class initRestrictedArsenal {};
            class initRestrictedArsenalSkyLocker {};
            class initBlockArsenal {};
        };
        class SkyLocker {
            file = "197th_Functions\SkyLocker";
            class initSkyLocker {};
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
};

#include "DialogBox\Dialog.hpp"