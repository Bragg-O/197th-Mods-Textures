/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Medical {
        name = "197th Medical";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[] = {"ace_medical_treatment"};
        units[] = {};
        weapons[] = {};
    };
};

class CfgWeapons {
	MedicalItem_197th_XX(Attelle,splint);
	MedicalItem_197th_XX(Garrot,tourniquet);
	MedicalItem_197th_XX(Bacto-spray,surgicalKit);
	MedicalItem_197th_XX(Medikit,personalAidKit);

	MedicalItem_197th_XX(Injecteur (Epinephrine),epinephrine);
	MedicalItem_197th_XX(Injecteur (Adenosine),adenosine);
	MedicalItem_197th_XX(Injecteur (Morphine),morphine);

	MedicalItem_197th_XX(Bandage (Compressive),packingBandage);
	MedicalItem_197th_XX(Bandage (Extensible),elasticBandage);
	MedicalItem_197th_XX(Bandage (Hemostatique),quikclot);

	MedicalItem_197th_XX(IV (Sang 1000ml),bloodIV);
	MedicalItem_197th_XX(IV (Sang 250ml),bloodIV_250);
	MedicalItem_197th_XX(IV (Sang 500ml),bloodIV_500);

	MedicalItem_197th_XX(IV (Saline 1000ml),salineIV);
	MedicalItem_197th_XX(IV (Saline 250ml),salineIV_250);
	MedicalItem_197th_XX(IV (Saline 500ml),salineIV_500);
	
	MedicalItem_197th_XX(IV (Plasma 1000ml),plasmaIV);
	MedicalItem_197th_XX(IV (Plasma 250ml),plasmaIV_250);
	MedicalItem_197th_XX(IV (Plasma 500ml),plasmaIV_500);
};