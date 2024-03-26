#define HitpointsProtectionInfo_197th_XX \
	class HitpointsProtectionInfo {  \
		class Chest	{ \
			hitpointName = HitChest; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Diaphragm	{ \
			hitpointName = HitDiaphragm; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Abdomen { \
			hitpointName = HitAbdomen; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Body { \
			hitpointName = HitBody; \
			armor = 12; \
			passThrough	= 0.1; \
		}; \
		class Legs { \
			hitpointName = HitLegs; \
			armor = 8; \
			passThrough	= 0.3; \
		}; \
		class Arms { \
			hitpointName = HitArms; \
			armor = 8; \
			passThrough	= 0.3; \
		}; \
		class Neck { \
			hitpointName = HitNeck; \
			armor = 8; \
			passThrough	= 0.5; \
		}; \
	}


class VestItem;
class ls_mandalorian_traditional_vest;

class HT_VestTraditional : ls_mandalorian_traditional_vest {
	author = "197th Compagnie Chimaera";
	displayName = "[HT] Veste Traditional Base";
	scope = 0;
	scopearsenal = 0;
	model = "\ls_armor_greenfor\vest\mandalorian\original\ls_mandalorian_original_vest.p3d";
	hiddenSelections[] = {"camo1"};
	class ItemInfo : VestItem {
		uniformModel = "\ls_armor_greenfor\vest\mandalorian\original\ls_mandalorian_original_vest.p3d";
		containerClass = "Supply210";
		hiddenSelections[] = {"camo1"};
		mass = 80;
		HitpointsProtectionInfo_197th_XX;
	};
};