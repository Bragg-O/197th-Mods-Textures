class CfgFunctions {
	class CIM {
		class AddonsVerification {
			file="197th_Fonctions\AddonsVerification";
			class checkAddonsLoaded {};
		}
		class BactaGrenade {
			file="197th_Fonctions\BactaGrenade";
			class setupEH {
				postInit=1;
			};
			class onBactaGrenade {};
		};
		class Earplugs {
			file="197th_Fonctions\Earplugs";
			class Earplugs {
				postInit=1;
			};
			class EarplugsSwitch {};
		}
		class Loadouts {
			file="197th_Fonctions\Loadouts";
			class addLoadout197th {};
		}
		class LoadUnitsEquipment {
			file="197th_Fonctions\LoadUnitsEquipment";
			class LoadUnitsEquipment {};
		};
		class MedicalTerminal {
			file="197th_Fonctions\MedicalTerminal";
			class addMedicalTerminal {};
			class useMedicalTerminal {};
		};
		class UnderFire {
			file="197th_Fonctions\UnderFire";
			class checkUnderFire {};
			class onUnderFire {};
		};
	};
};