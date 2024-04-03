	class ACE_splint;
	class ACE_tourniquet;
	class ACE_surgicalKit;
	class ACE_personalAidKit;

	class ACE_epinephrine;
	class ACE_adenosine;
	class ACE_morphine;

	class ACE_packingBandage;
	class ACE_elasticBandage;
	class ACE_quikclot;

	class ACE_bloodIV;
	class ACE_bloodIV_250;
	class ACE_bloodIV_500;

	class ACE_salineIV;
	class ACE_salineIV_250;
	class ACE_salineIV_500;

	class ACE_plasmaIV;
	class ACE_plasmaIV_250;
	class ACE_plasmaIV_500;


#define MedicalItem_197th_XX(name,type) \
    class ACE_##type## : ACE_##type## { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] ##name##; \
		picture = \197th_Medical\_ui\##type##_ca.paa; \
	}