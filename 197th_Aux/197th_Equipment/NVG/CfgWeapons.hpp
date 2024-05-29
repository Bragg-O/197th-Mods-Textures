class SWLB_clone_nvg;
class SWLB_clone_rangefinder;
class lsd_gar_p2Commander_nvg;
class lsd_gar_medicalScannerSPC_nvg;
class lsd_gar_p2SingleHeadlamp_nvg;
class 197th_NVG : SWLB_clone_nvg {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] NGV Base";
	scope = 0;
	scopearsenal = 0;
	modelOptics = "\lsd_equipment_bluefor\nvg\gar\visor\swlb_clone_nvg_optic_dummy.p3d";
	ace_nightvision_border="";
	model = "\SWLB_clones\SWLB_clone_nvg_on.p3d";
	visionMode[] = {"Normal", NVG};
	thermalMode[] = {};
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo {
		type = 616;
		uniformModel = "\SWLB_clones\SWLB_clone_nvg_on.p3d";
		modelOff = "\SWLB_clones\SWLB_clone_nvg_off.p3d";
		mass = 20;
		hiddenSelections[] = {"camo1", "camo2"};
	};
};
class 197th_NVG_SPC : SWLB_clone_nvg {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] NGV SPC Base";
	scope = 0;
	scopearsenal = 0;
	modelOptics = "\lsd_equipment_bluefor\nvg\gar\visor\swlb_clone_nvg_optic_dummy.p3d";
	ace_nightvision_border="";
	model = "\SWLB_clones\SWLB_clone_nvg_on.p3d";
	visionMode[] = {"Normal", NVG};
	thermalMode[] = {};
	hiddenSelections[] = {"camo1", "camo2"};
	class ItemInfo {
		type = 616;
		uniformModel = "\SWLB_clones\SWLB_clone_nvg_on.p3d";
		modelOff = "\SWLB_clones\SWLB_clone_nvg_on.p3d";
		mass = 20;
		hiddenSelections[] = {"camo1", "camo2"};
	};
};
class 197th_NVG_Rangefinder : SWLB_clone_rangefinder {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Rangefinder Base";
	scope = 0;
	scopearsenal = 0;
	modelOptics = "\lsd_equipment_bluefor\nvg\gar\visor\swlb_clone_nvg_optic_dummy.p3d";
	ace_nightvision_border="";
	model = "\SWLB_clones\SWLB_clone_rangefinder_on.p3d";
	visionMode[] = {"Normal", NVG};
	hiddenSelections[] = {"camo1"};
	class ItemInfo {
		type = 616;
		uniformModel = "\SWLB_clones\SWLB_clone_rangefinder_on.p3d";
		modelOff = "\SWLB_clones\SWLB_clone_rangefinder_off.p3d";
		mass = 20;
		hiddenSelections[] = {"camo1"};
	};
};
class 197th_NVG_Visor : lsd_gar_p2Commander_nvg {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Visor Base";
	scope = 0;
	scopearsenal = 0;
	modelOptics = "\lsd_equipment_bluefor\nvg\gar\visor\swlb_clone_nvg_optic_dummy.p3d";
	ace_nightvision_border="";
	model = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
	visionMode[] = {"Normal", NVG};
	hiddenSelections[] = {"camo1", "camo2", "camo3"};
	ls_lighting_hasLight=1;
	ls_lighting_offset[]={-0.175,-0.001,0.13500001};
	ls_lighting_attachedBone="head";
	ls_lighting_itemType="hmd";
	class ItemInfo {
		type = 616;
		uniformModel = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		modelOff = "\lsd_equipment_bluefor\nvg\gar\commander\lsd_gar_p2Commander_nvg";
		mass = 20;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
	};
};
class 197th_NVG_Scanner: lsd_gar_medicalScannerSPC_nvg {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Scanner Base";
	scope = 0;
	scopearsenal = 0;
	modelOptics = "\lsd_equipment_bluefor\nvg\gar\visor\swlb_clone_nvg_optic_dummy.p3d";
	ace_nightvision_border="";
	model="\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";
	visionMode[] = {"Normal", NVG};
	hiddenSelections[] = {"camo1", "glow"};
	hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	class ItemInfo {
		type = 616;
		uniformModel="\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";
		modelOff="\lsd_equipment_bluefor\accessories\gar\medicScanner\lsd_gar_medicalScanner_nvg_on";
		mass = 20;
		hiddenSelections[] = {"camo1", "glow"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	};
};
class 197th_NVG_Headlamp: lsd_gar_p2SingleHeadlamp_nvg {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Headlamp Base";
	scope = 0;
	scopearsenal = 0;
	modelOptics = "";
	ace_nightvision_border="";
	model="lsd_equipment_bluefor\accessories\gar\headlampSingle\lsd_gar_p2_lamp";
	visionMode[]={};
	thermalMode[]={};
	ls_lighting_hasLight=1;
	ls_lighting_offset[]={-0.175,-0.001,0.13500001};
	ls_lighting_attachedBone="head";
	ls_lighting_itemType="hmd";
	class ItemInfo {
		type = 616;
		uniformModel="lsd_equipment_bluefor\accessories\gar\headlampSingle\lsd_gar_p2_lamp";
		modelOff="lsd_equipment_bluefor\accessories\gar\headlampSingle\lsd_gar_p2_lamp";
		mass = 5;
	};
};