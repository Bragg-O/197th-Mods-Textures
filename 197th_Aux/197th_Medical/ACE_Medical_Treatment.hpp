class ACE_Medical_Treatment {
	class Bandaging {
		class PackingBandage;
		class 197th_Medical_PackingBandage : PackingBandage {};
		class ElasticBandage;
		class 197th_Medical_ElasticBandage : ElasticBandage {};
		class QuikClot;
		class 197th_Medical_QuikClot : QuikClot {};
	};
    class Medication {
		class 197th_Medical_epinephrine {
            painReduce = 0;
            hrIncreaseLow[] = {10, 20};
            hrIncreaseNormal[] = {10, 50};
            hrIncreaseHigh[] = {10, 40};
            timeInSystem = 120;
            timeTillMaxEffect = 10;
            maxDose = 10;
            incompatibleMedication[] = {};
		};

		class 197th_Medical_adenosine {
            painReduce = 0;
            hrIncreaseLow[] = {-7, -10};
            hrIncreaseNormal[] = {-15, -30};
            hrIncreaseHigh[] = {-15, -35};
            timeInSystem = 120;
            timeTillMaxEffect = 15;
            maxDose = 6;
            incompatibleMedication[] = {};
		};

		class 197th_Medical_morphine {
            painReduce = 0.8;
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 1800;
            timeTillMaxEffect = 30;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -10;
		};

		class 197th_Medical_painkillers {
            painReduce = 0.1;
            timeInSystem = 600;
            timeTillMaxEffect = 60;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 5;
		};
	};
	class IV {
		class BloodIV;
		class 197th_Medical_bloodIV : BloodIV {};
		class BloodIV_250;
		class 197th_Medical_bloodIV_250 : BloodIV_250 {};
		class BloodIV_500;
		class 197th_Medical_bloodIV_500 : BloodIV_500 {};
		class SalineIV;
		class 197th_Medical_salineIV : SalineIV {};
		class SalineIV_250;
		class 197th_Medical_salineIV_250 : SalineIV_250 {};
		class SalineIV_500;
		class 197th_Medical_salineIV_500 : SalineIV_500 {};
		class PlasmaIV;
		class 197th_Medical_plasmaIV : PlasmaIV {};
		class PlasmaIV_250;
		class 197th_Medical_plasmaIV_250 : PlasmaIV_250 {};
		class PlasmaIV_500;
		class 197th_Medical_plasmaIV_500 : PlasmaIV_500 {};
	};
};