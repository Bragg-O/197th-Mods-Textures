class HeadgearItem;
class ls_mandalorian_traditional_helmet;
class HT_HelmetTraditional : ls_mandalorian_traditional_helmet {
	author = "197th Compagnie Chimaera";
	displayName = "[HT] Traditional Helmet BASE";
	scope = 0;
	scopearsenal = 0;
	model = "\ls_armor_greenfor\helmet\mandalorian\traditional\ls_mandalorian_traditional_helmet.p3d";
	hiddenSelections[] = {"camo1", "visor", "neckTex"};
	subItems[] = {};
	hiddenSelectionsMaterials[] = {
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		""
	};
	class ItemInfo : HeadgearItem {
		mass = 10;
		uniformModel = "\ls_armor_greenfor\helmet\mandalorian\traditional\ls_mandalorian_traditional_helmet.p3d";
		allowedSlots[] = {801, 901, 701, 605};
		modelSides[] = {6};
		hiddenSelections[] = {"camo1", "visor", "neckTex"};
		class HitpointsProtectionInfo {
			class Head {
				hitpointName = "HitHead";
				armor = 8;
				passThrough = 0.2;
			};
			class Face {
				hitpointName = "HitFace";
				armor = 8;
				passThrough = 0.2;
			};
		};
	};
};