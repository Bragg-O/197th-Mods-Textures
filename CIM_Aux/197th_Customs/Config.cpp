#include "\197th_Regs\Equipments\Macros.hpp"

#include "\CIM_Core\Macros.hpp"

#include "SkyLocker\Macros.hpp"

class CfgPatches
{
	class 197th_Customs
	{
		name = "197th Customs";
		author = "[CIM] Bragg";
		url = "http://www.197th.fr";
		requiredAddons[] = {"CIM_Core", "197th_Regs"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 197th_Unit;
	class 197th_Unit_Commander;
	class 197th_Headgear;
	class 197th_Backpack;
	class 197th_Backpack_Rocket;
	class 197th_Backpack_Radio;
	class 197th_Backpack_Medecin;
	class 197th_Backpack_Bag;
	class 197th_Backpack_Bag_RTO;
	class 197th_Backpack_ARC;
	// Units
	// Unit_197th_XX(type,name,sac,"helmet","vest","accessories1","accessories2","accessories3") -> 197th_Unit_##type##_##name##
	Unit_197th_XX(Customs,Cahir,,"197th_Helmet_Customs_Cahir","197th_Vest_Customs_Cahir","","","");
	Unit_197th_XX(Customs,Elektro,,"197th_Helmet_Customs_Elektro","197th_Vest_Regs_Sergent","","","");
	Unit_197th_XX(Customs,Hermes,197th_Backpack_Customs_Hermes,"197th_HelmetBARC_Customs_Hermes","197th_Vest_Customs_Hermes","197th_NVG_Regs_Rangefinder","","");
	Unit_197th_XX(Customs,Pink,,"197th_Helmet_Customs_Pink","197th_Vest_Regs_0","","","");
	Unit_197th_XX(Customs,Tesler,,"197th_Helmet_Customs_Tesler","197th_Vest_Regs_0","","","");
	Unit_197th_XX(Customs,Vanguard,,"197th_Helmet_Customs_Vanguard","197th_Vest_Regs_Sergent","","","");
	Unit_197th_XX(Customs,Volk,197th_Backpack_Regs_ARC,"197th_Helmet_Customs_Volk","197th_Vest_Regs_ARC","197th_NVG_Regs_Rangefinder","","");
	// UnitCC_197th_XX(type,name,sac,"helmet","vest","accessories1","accessories2","accessories3") -> 197th_Unit_##type##_##name##
	UnitCC_197th_XX(Customs,Apollyon,197th_Backpack_Customs_Apollyon,"197th_Helmet_Customs_Apollyon","197th_Vest_Customs_Apollyon","197th_NVG_Customs_Apollyon","","");
	UnitCC_197th_XX(Customs,Bragg,197th_Backpack_Customs_Bragg,"197th_Helmet_Customs_Bragg","197th_Vest_Customs_Bragg","197th_NVG_Customs_Bragg","","");
	UnitCC_197th_XX(Customs,Tiger,197th_Backpack_Customs_Tiger,"197th_Helmet_Customs_Tiger","197th_Vest_Regs_Kama","197th_NVG_Regs_Rangefinder","","");

	// Helmets
	// HeadgearItem_197th_XX(type,name) -> 197th_Headgear_##type##_##name##
	HeadgearItem_197th_XX(Customs,Algo);
	HeadgearItem_197th_XX(Customs,Apollyon);
	HeadgearItem_197th_XX(Customs,Azurre);
	HeadgearItem_197th_XX(Customs,Bragg);
	HeadgearItem_197th_XX(Customs,Cahir);
	HeadgearItem_197th_XX(Customs,Damos);
	HeadgearItem_197th_XX(Customs,Doc);
	HeadgearItem_197th_XX(Customs,Elektro);
	HeadgearItem_197th_XX(Customs,Grim);
	HeadgearItem_197th_XX(Customs,Ironteck);
	HeadgearItem_197th_XX(Customs,Launcher);
	HeadgearItem_197th_XX(Customs,Pink);
	HeadgearItem_197th_XX(Customs,Pushup);
	HeadgearItem_197th_XX(Customs,Resko);
	HeadgearItem_197th_XX(Customs,SixDeux);
	HeadgearItem_197th_XX(Customs,Tesler);
	HeadgearItem_197th_XX(Customs,Tiger);
	HeadgearItem_197th_XX(Customs,Vanguard);
	HeadgearItem_197th_XX(Customs,Volk);
	// HeadgearItemPilot_197th_XX(type,name) -> 197th_HeadgearPilot_##type##_##name##

	// HeadgearItemARF_197th_XX(type,name) -> 197th_HeadgearARF_##type##_##name##
	HeadgearItemARF_197th_XX(Customs,Exo);
	// HeadgearItemBARC_197th_XX(type,name) -> 197th_HeadgearBARC_##type##_##name##
	HeadgearItemBARC_197th_XX(Customs,Hermes);

	// Backpack
	// Backpack_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackRocket_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackRadio_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackMedecin_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackSacocheCeinture_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackSacocheJambe_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackSacoche_197th_XX(type,name) -> 197th_Backpack_##type##_##name##

	// BackpackARC_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
	BackpackARC_197th_XX(Customs,Hermes);
	// BackpackSacocheCeinturRTO_197th_XX(type,name) -> 197th_Backpack_##type##_##name##
	BackpackSacocheCeinturRTO_197th_XX(Customs,Apollyon);
	BackpackSacocheCeinturRTO_197th_XX(Customs,Bragg);
	BackpackSacocheCeinturRTO_197th_XX(Customs,TIger);
};

class CfgWeapons
{
	class UniformItem;
	class 197th_Uniform;
	class 197th_Helmet;
	class 197th_HelmetPilot;
	class 197th_HelmetArf;
	class 197th_HelmetBarc;
	class 197th_Vest_Officer;
	class 197th_Vest_kama;
	class 197th_Vest_Hazard;
	class 197th_Vest_Lieutenant;
	class 197th_Vest_Sergent;
	class 197th_Vest_ARC;
	class 197th_Vest_CloneMedic;
	class 197th_Vest_Clone0;
	class 197th_Vest_Clone1;
	class 197th_Vest_Clone2;
	class 197th_Vest_Clone3;
	class 197th_Vest_Clone4;
	class 197th_Vest_Clone5;
	class 197th_Vest_Clone6;
	class 197th_Vest_Clone7;
	class 197th_Vest_Clone8;
	class 197th_Vest_Lieutenant2;
	class 197th_NVG;
	class 197th_NVG_SPC;
	class 197th_NVG_Rangefinder;
	class 197th_NVG_Visor;
	class 197th_NVG_Scanner;

	// Uniforms
	// Uniform_197th_XX(type,name) -> 197th_Uniform_##type##_##name##
	Uniform_197th_XX(Customs,Apollyon);
	Uniform_197th_XX(Customs,Bragg);
	Uniform_197th_XX(Customs,Cahir);
	Uniform_197th_XX(Customs,Elektro);
	Uniform_197th_XX(Customs,Hermes);
	Uniform_197th_XX(Customs,Pink);
	Uniform_197th_XX(Customs,Tesler);
	Uniform_197th_XX(Customs,Tiger);
	Uniform_197th_XX(Customs,Vanguard);
	Uniform_197th_XX(Customs,Volk);
	// Helmets
	// Helmet_197th_XX(type,name) -> 197th_Helmet_##type##_##name##
	Helmet_197th_XX(Customs,Algo);
	Helmet_197th_XX(Customs,Apollyon);
	Helmet_197th_XX(Customs,Azurre);
	Helmet_197th_XX(Customs,Cahir);
	Helmet_197th_XX(Customs,Damos);
	Helmet_197th_XX(Customs,Doc);
	Helmet_197th_XX(Customs,Elektro);
	Helmet_197th_XX(Customs,Grim);
	Helmet_197th_XX(Customs,Ironteck);
	Helmet_197th_XX(Customs,Launcher);
	Helmet_197th_XX(Customs,Pink);
	Helmet_197th_XX(Customs,Pushup);
	Helmet_197th_XX(Customs,Resko);
	Helmet_197th_XX(Customs,SixDeux);
	Helmet_197th_XX(Customs,Tesler);
	Helmet_197th_XX(Customs,Tiger);
	Helmet_197th_XX(Customs,Vanguard);
	Helmet_197th_XX(Customs,Volk);
	// HelmetVisorLight_197th_XX(type,name) -> 197th_Helmet_##type##_##name##
	HelmetVisorLight_197th_XX(Customs,Bragg);
	// HelmetPilot_197th_XX(type,name) -> 197th_HelmetPilot_##type##_##name##

	// HelmetARF_197th_XX(type,name) -> 197th_HelmetARF_##type##_##name##
	HelmetARF_197th_XX(Customs,Exo);
	// HelmetBARC_197th_XX(type,name) -> 197th_HelmetBARC_##type##_##name##

	// HelmetBARCVisorLight_197th_XX(type,name) -> 197th_HelmetBARC_##type##_##name##
	HelmetBARCVisorLight_197th_XX(Customs,Hermes);

	// Vest
	// VestOfficer_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	//VestHazard_197th_XX(type,name) -> 197th_Vest_##type##_##name##
	VestHazard_197th_XX(Customs,Tiger);

	// VestKama_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// VestLieutenant2_197th_XX(type,name) -> 197th_Vest_##type##_##name##
	// VestPauldron_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// VestSergent_197th_XX(type,name) -> 197th_Vest_##type##_##name##
	VestSergent_197th_XX(Customs,Bragg);
	VestSergent_197th_XX(Customs,Cahir);
	// VestARC_197th_XX(type,name) -> 197th_Vest_##type##_##name##
	VestARC_197th_XX(Customs,Hermes);
	// VestHolster_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// VestMedical_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest0_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest1_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest2_197th_XX(type,name) -> 197th_Vest_##type##_##name##
	Vest2_197th_XX(Customs,Apollyon);
	// Vest3_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest4_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest5_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest6_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest7_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// Vest8_197th_XX(type,name) -> 197th_Vest_##type##_##name##

	// NVG
	// NVG_197th_XX(type,name) -> 197th_NVG_##type##_##name##

	// NVG_NCO_197th_XX(type,name) -> 197th_NVG_##type##_##name##

	// NVG_SPC_197th_XX(type,name) -> 197th_NVG_##type##_##name##

	// NVG_Rangefinder_197th_XX(type,name) -> 197th_NVG_##type##_##name##

	// NVG_Visor_197th_XX(type,name) -> 197th_NVG_##type##_##name##
	NVG_Visor_197th_XX(Customs,Bragg);
	// NVG_VisorProtection_197th_XX(type,name) -> 197th_NVG_##type##_##name##
	NVG_VisorProtection_197th_XX(Customs,Apollyon);
	// NVG_Scanner_197th_XX(type,name) -> 197th_NVG_##type##_##name##
};

class CIM_SkyLocker
{
	// Skylocker_197th(id,name,"steamid") -> Skylocker_##id##
	Skylocker_197th(137,Bragg,"76561198113173701");
	Skylocker_197th(138,Apollyon,"76561198203156987");
	Skylocker_197th(139,Hermes,"76561198169985342");
	Skylocker_197th(140,Tiger,"76561198210171331");
	Skylocker_197th(141,Vanguard,"76561198102465334");
	Skylocker_197th(142,Elektro,"76561198058787077");
};