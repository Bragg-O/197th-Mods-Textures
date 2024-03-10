class ls_gar_heavy_backpack;
class ls_gar_rocket_backpack;
class ls_gar_mediumRadio_backpack;
class ls_gar_heavyMedic_backpack;
class SWLB_clone_bag;
class SWLB_clone_RTO_mini_backpack;
class SWLB_CEE_Recon_RTO_Backpack;
class SWLB_clone_arc_backpack;

class 197th_Backpack : ls_gar_heavy_backpack {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Backpack Basic";
	editorPreview = "";
	editorCategory = "197th_Equipment";
	scope = 0;
	scopearsenal = 0;
	scopecurator = 0;
	model = "ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
	maximumload = 400;
	hiddenselections[] = {"backpack", "cover", "pouches", "tube"};
};

class 197th_Backpack_Rocket : ls_gar_rocket_backpack {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Backpack Rocket Basic";
	editorPreview = "";
	editorCategory = "197th_Equipment";
	scope = 0;
	scopearsenal = 0;
	scopecurator = 0;
	model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_rocket_backpack.p3d";
	maximumload = 300;
	hiddenselections[] = {"backpack", "holder", "rocket", "light", "pouches"};
	hiddenSelectionsMaterials[] = {"", "", "", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",""};
};

class 197th_Backpack_Radio : ls_gar_mediumRadio_backpack {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Backpack Radio Basic";
	editorPreview = "";
	editorCategory = "197th_Equipment";
	scope = 0;
	scopearsenal = 0;
	scopecurator = 0;
	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 15000;
	tf_subtype = "digital_lr";
	model = "ls_equipment_bluefor\backpack\gar\mediumBackpack\ls_gar_mediumRadio_backpack.p3d";
	maximumload = 250;
	hiddenselections[] = {"backpack", "radio", "screen", "pouches"};
	hiddenSelectionsMaterials[] = {"", "", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",""};
};

class 197th_Backpack_Medecin : ls_gar_heavyMedic_backpack {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Backpack Medecin Basic";
	editorPreview = "";
	editorCategory = "197th_Equipment";
	scope = 0;
	scopearsenal = 0;
	scopecurator = 0;
	model = "ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavyMedic_backpack.p3d";
	maximumload = 400;
	hiddenselections[] = {"backpack", "cover", "pouches", "medic1", "medic2"};
	hiddenSelectionsMaterials[] = {"", "", "", "\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",""};
};

class 197th_Backpack_Bag : SWLB_clone_bag {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Sacoche Basic";
	editorPreview = "";
	editorCategory = "197th_Equipment";
	scope = 0;
	scopearsenal = 0;
	scopecurator = 0;
	model = "\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
	maximumload = 200;
	hiddenSelections[] = {"camo1", "camo2"};
};

class 197th_Backpack_ARC : SWLB_clone_arc_backpack {
	author = "197th Compagnie Chimaera";
	displayName = "[197th] Backpack ARC Basic";
	editorPreview = "";
	faction = "197th_Equipment";
	editorCategory = "197th_Equipment";
	scope = 0;
	scopearsenal = 0;
	scopecurator = 0;
	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 15000;
	tf_subtype = "digital_lr";
	model = "\SWLB_equipment\backpacks\SWLB_clone_arc_backpack.p3d";
	maximumload = 500;
	hiddenSelections[] = {"camo1"};
};