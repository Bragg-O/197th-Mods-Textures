class CfgWeapons {
	class ACE_splint;
	class ACE_surgicalKit;
	class ACE_personalAidKit;
	MedicalItem_197th_XX(Attelle,splint,"Stabilise un membre fracture.");
	MedicalItem_197th_XX(Bacto-spray,surgicalKit,"Referme les plaies.<br/>Chance de reussite : 99%");
	MedicalItem_197th_XX(Medikit,personalAidKit,"Traitement avance pouvant etre utilise dans un lieu medical.");

	class ACE_epinephrine;
	class ACE_adenosine;
	class ACE_morphine;
	MedicalItem_197th_XX(Injecteur (Epinephrine),epinephrine,"Dose d'epinephrine.<br/>Frequence cardiaque : + + + +<br/>Dose Letal : 10");
	MedicalItem_197th_XX(Injecteur (Adenosine),adenosine,"Dose d'adenosine.<br/>Frequence cardiaque : - -<br/>Dose Letal : 6");
	MedicalItem_197th_XX(Injecteur (Morphine),morphine,"Dose de morphine.<br/>Frequence cardiaque : - - -<br/>Douleur : - - -<br/>Viscosite : - -<br/>Dose Letal : 4");

	class ACE_packingBandage;
	class ACE_elasticBandage;
	class ACE_quikclot;
	MedicalItem_197th_XX(Bandage (Compressive),packingBandage,"Utilise pour panser les plaies moyennes et importantes.<br/>Freine le saignement de la plaies.");
	MedicalItem_197th_XX(Bandage (Extensible),elasticBandage,"Utilise pour panser tous types de plaies.<br/>Arrete le saignement de la plaie.");
	MedicalItem_197th_XX(Bandage (Hemostatique),quikclot,"Utilise pour panser les plaies les plus grosses.<br/>Freine le saignement de la plaie.<br/>Utile pour le Traitement des brulures.");

	class ACE_bloodIV;
	class ACE_bloodIV_250;
	class ACE_bloodIV_500;
	MedicalItem_197th_XX(IV (Sang 1000ml),bloodIV,"Transfusion IV pouvant etre utilisee dans tous les cas de perte de sang.<br/>Debit IV : +");
	MedicalItem_197th_XX(IV (Sang 250ml),bloodIV_250,"Transfusion IV pouvant etre utilisee dans tous les cas de perte de sang.<br/>Debit IV : +");
	MedicalItem_197th_XX(IV (Sang 500ml),bloodIV_500,"Transfusion IV pouvant etre utilisee dans tous les cas de perte de sang.<br/>Debit IV : +");

	class ACE_salineIV;
	class ACE_salineIV_250;
	class ACE_salineIV_500;
	MedicalItem_197th_XX(IV (Saline 1000ml),salineIV,"Transfusion IV pouvant etre utilisee pour compenser les pertes de sang faibles a moderees.<br/>Debit IV : + + +");
	MedicalItem_197th_XX(IV (Saline 250ml),salineIV_250,"Transfusion IV pouvant etre utilisee pour compenser les pertes de sang faibles a moderees.<br/>Debit IV : + + +");
	MedicalItem_197th_XX(IV (Saline 500ml),salineIV_500,"Transfusion IV pouvant etre utilisee pour compenser les pertes de sang faibles a moderees.<br/>Debit IV : + + +");
	
	class ACE_plasmaIV;
	class ACE_plasmaIV_250;
	class ACE_plasmaIV_500;
	MedicalItem_197th_XX(IV (Plasma 1000ml),plasmaIV,"Transfusion IV pouvant etre utilisee des qu'il y a un minimum de sang.<br/>Debit IV : + +");
	MedicalItem_197th_XX(IV (Plasma 250ml),plasmaIV_250,"Transfusion IV pouvant etre utilisee des qu'il y a un minimum de sang.<br/>Debit IV : + +");
	MedicalItem_197th_XX(IV (Plasma 500ml),plasmaIV_500,"Transfusion IV pouvant etre utilisee des qu'il y a un minimum de sang.<br/>Debit IV : + +");
};