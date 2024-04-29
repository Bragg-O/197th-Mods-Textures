class ACE_Medical_Treatment_Actions {
	class Splint;
    class 197th_Medical_splint : Splint {
        items[] = {"197th_Medical_splint"};
        displayName = "Poser une attelle";
        displayNameProgress = "Application de l'attelle...";
    };
	class SurgicalKit;
	class 197th_Medical_surgicalKit : SurgicalKit {
		items[] = {"197th_Medical_surgicalKit"};
		displayName = "Utiliser le bacto-spray";
		sounds[] = {{"197th_Medical\Data\sounds\Spray.ogg",1,1,50}};
		displayNameProgress = "Application du Bacto-Spray...";
	};
	class PersonalAidKit;
	class 197th_Medical_personalAidKit : PersonalAidKit {
		items[] = {"197th_Medical_personalAidKit"};
		displayName = "Utiliser le medikit";
		displayNameProgress = "Application du medikit...";
	};
	
	class Epinephrine;
	class 197th_Medical_epinephrine : Epinephrine {
		items[] = {"197th_Medical_epinephrine"};
		displayName = "Utiliser l'injecteur d'epinephrine";
		sounds[] = {{"197th_Medical\Data\sounds\Inject.ogg",1,1,50}};
		displayNameProgress = "Injection de l'epinephrine...";
	};
	class Adenosine;
	class 197th_Medical_adenosine : Adenosine {
		items[] = {"197th_Medical_adenosine"};
		displayName = "Utiliser l'injecteur d'adenosine";
		sounds[] = {{"197th_Medical\Data\sounds\Inject.ogg",1,1,50}};
		displayNameProgress = "Injection de l'adenosine...";
	};
	class Morphine;
	class 197th_Medical_morphine : Morphine {
		items[] = {"197th_Medical_morphine"};
		displayName = "Utiliser l'injecteur de morphine";
		sounds[] = {{"197th_Medical\Data\sounds\Inject.ogg",1,1,50}};
		displayNameProgress = "Injection de la morphine...";
	};
	class Painkillers;
	class 197th_Medical_painkillers : Painkillers {
		items[] = {"197th_Medical_painkillers"};
		displayName = "Prendre 1 Nebulex";
		sounds[] = {{"197th_Medical\Data\sounds\Pills.ogg",1,1,50}};
		displayNameProgress = "Prise de 1 Nebulex...";
	};

	class BasicBandage;
	class 197th_Medical_packingBandage : BasicBandage {
		items[] = {"197th_Medical_packingBandage"};
		displayName = "Utiliser le bandage compressif";
		sounds[] = {{"197th_Medical\Data\sounds\Bandage.ogg",1,1,50}};
		displayNameProgress = "Application du bandage compressif...";
	};
	class 197th_Medical_elasticBandage : BasicBandage {
		items[] = {"197th_Medical_elasticBandage"};
		displayName = "Utiliser le bandage extensible";
		sounds[] = {{"197th_Medical\Data\sounds\Bandage.ogg",1,1,50}};
		displayNameProgress = "Application du bandage extensible...";
	};
	class 197th_Medical_quikclot : BasicBandage {
		items[] = {"197th_Medical_quikclot"};
		displayName = "Utiliser le bandage hemostatique";
		sounds[] = {{"197th_Medical\Data\sounds\Bandage.ogg",1,1,50}};
		displayNameProgress = "Application du bandage hemostatique...";
	};

	class BloodIV;
	class 197th_Medical_bloodIV : BloodIV {
		items[] = {"197th_Medical_bloodIV"};
		displayName = "Utiliser l'IV de sang 1000ml";
		sounds[] = {{"197th_Medical\Data\sounds\Transfusion.ogg",1,1,50}};
		displayNameProgress = "Application de l'IV de sang...";
	};
	class 197th_Medical_bloodIV_250 : 197th_Medical_bloodIV {
		items[] = {"197th_Medical_bloodIV_250"};
		displayName = "Utiliser l'IV de sang 250ml";
	};
	class 197th_Medical_bloodIV_500 : 197th_Medical_bloodIV {
		items[] = {"197th_Medical_bloodIV_500"};
		displayName = "Utiliser l'IV de sang 500ml";
	};

	class SalineIV;
	class 197th_Medical_salineIV : SalineIV {
		items[] = {"197th_Medical_salineIV"};
		displayName = "Utiliser l'IV de saline 1000ml";
		sounds[] = {{"197th_Medical\Data\sounds\Transfusion.ogg",1,1,50}};
		displayNameProgress = "Application de l'IV de saline...";
	};
	class 197th_Medical_salineIV_250 : 197th_Medical_salineIV {
		items[] = {"197th_Medical_salineIV_250"};
		displayName = "Utiliser l'IV de saline 250ml";
	};
	class 197th_Medical_salineIV_500 : 197th_Medical_salineIV {
		items[] = {"197th_Medical_salineIV_500"};
		displayName = "Utiliser l'IV de saline 500ml";
	};

	class PlasmaIV;
	class 197th_Medical_plasmaIV : PlasmaIV {
		items[] = {"197th_Medical_plasmaIV"};
		displayName = "Utiliser l'IV de plasma 1000ml";
		sounds[] = {{"197th_Medical\Data\sounds\Transfusion.ogg",1,1,50}};
		displayNameProgress = "Application de l'IV de plasma...";
	};
	class 197th_Medical_plasmaIV_250 : 197th_Medical_plasmaIV {
		items[] = {"197th_Medical_plasmaIV_250"};
		displayName = "Utiliser l'IV de plasma 250ml";
	};
	class 197th_Medical_plasmaIV_500 : 197th_Medical_plasmaIV {
		items[] = {"197th_Medical_plasmaIV_500"};
		displayName = "Utiliser l'IV de plasma 500ml";
	};

    class 197th_Medical_Reorientation: 197th_Medical_morphine {
        displayName = "Stimuler le patient";
        displayNameProgress = "Stimulation...";
        allowedSelections[] = {"Head"};
        allowSelfTreatment = 0;
        items[] = {};
        condition = "!([_patient] call ace_common_fnc_isAwake)";
        litter[] = {};
        callbackSuccess = "CIM_fnc_onReorientation";
        animationMedic = "AinvPknlMstpSnonWnonDnon_medicUp4";
        animationMedicProne = "AinvPknlMstpSnonWnonDnon_medicUp4";
        sounds[] = {{"197th_Medical\Data\sounds\Snap.ogg",1,1,50}};
    };
};