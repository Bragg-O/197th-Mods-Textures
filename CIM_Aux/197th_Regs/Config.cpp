#include "Equipments\Macros.hpp"

#include "Medical\Macros.hpp"

#include "Loadout\Macros.hpp"

#include "\CIM_Core\Macros.hpp"

class CfgPatches
{
	class 197th_Regs
	{
		name = "197th Regs";
		author = "[CIM] Bragg";
		url = "http://www.197th.fr";
		requiredAddons[] = {"CIM_Core", "ace_medical_treatment", "ace_fortify"};
		units[] = {
			"197th_ARC170",
			"197th_ATTE",
			"197th_BARC",
			"197th_BARCSideCar",
			"197th_ITT",
			"197th_ITT_Logistic",
			"197th_ITT_Medical",
			"197th_ITT_Transport",
			"197th_LAATC",
			"197th_LAATI_Mk1",
			"197th_LAATI_Mk1Lights",
			"197th_LAATI_Mk2",
			"197th_LAATI_Mk2Lights",
			"197th_PX10",
			"197th_PX10_Armored",
			"197th_PX10_Repair",
			"197th_ISP",
			"197th_ISP_Transport",
			"197th_Saber",
			"197th_Saber_GL",
			"197th_Saber_Recon",
			"197th_Saber_Super",
			"197th_VWing",
			"197th_YWing",
			"197th_Z95",
			"197th_Mortar",

			// Unit
			"197th_Unit_Regs_AA",
			"197th_Unit_Regs_ARC",
			"197th_Unit_Regs_ARF",
			"197th_Unit_Regs_ARF_TP",
			"197th_Unit_Regs_AT",
			"197th_Unit_Regs_Cadet",
			"197th_Unit_Regs_Capitain",
			"197th_Unit_Regs_Lieutenant",
			"197th_Unit_Regs_Medecin",
			"197th_Unit_Regs_Pilote",
			"197th_Unit_Regs_Sergent",
			"197th_Unit_Regs_Trooper"};
		weapons[] = {};
	};
};

class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class ACE_Fortify;
class Rifle_Base_F;
class Weapon_Base_F;
class arifle_MX_Base_F : Rifle_Base_F
{
	class GunParticles;
	class GunClouds;
	class WeaponSlotsInfo;
};
class JLTS_stun_muzzle;
class optic_lrps;
class UGL_F;

class CfgVehicles
{
	// Equipments
#include "Equipments\CfgVehicles.hpp"

	// ARC_170
#include "Vehicules\ARC_170\CfgVehicles.hpp"

	// ATTE
#include "Vehicules\ATTE\CfgVehicles.hpp"

	// BARC
#include "Vehicules\BARC\CfgVehicles.hpp"

	// ITT
#include "Vehicules\ITT\CfgVehicles.hpp"

	// LAAT_C
#include "Vehicules\LAAT_C\CfgVehicles.hpp"

	// LAAT_I
#include "Vehicules\LAAT_I\CfgVehicles.hpp"

	// PX_10
#include "Vehicules\PX_10\CfgVehicles.hpp"

	// ISP
#include "Vehicules\ISP\CfgVehicles.hpp"

	// Saber
#include "Vehicules\Saber\CfgVehicles.hpp"

	// V_Wing
#include "Vehicules\V_Wing\CfgVehicles.hpp"

	// Y_Wing
#include "Vehicules\Y_Wing\CfgVehicles.hpp"

	// Z_95
#include "Vehicules\Z_95\CfgVehicles.hpp"

	// DC-15A
#include "Weapons\DC15A\CfgVehicles.hpp"

	// DC-15S
#include "Weapons\DC15S\CfgVehicles.hpp"

	// DC-15X
#include "Weapons\DC15X\CfgVehicles.hpp"

	// DC-17SA
#include "Weapons\DC17SA\CfgVehicles.hpp"

	// PLX-1
#include "Weapons\PLX1\CfgVehicles.hpp"

	// RPS-6
#include "Weapons\RPS6\CfgVehicles.hpp"

	// Z-6
#include "Weapons\Z6\CfgVehicles.hpp"

	// Explosives
#include "Weapons\Explosives\CfgVehicles.hpp"

	// Mortar
#include "Weapons\Mortar\CfgVehicles.hpp"

	// FortifyTools
#include "FortifyTools\CfgVehicles.hpp"

	// Loadout
#include "Loadout\CfgVehicles.hpp"
};

class CfgWeapons
{
	// Equipments
#include "Equipments\CfgWeapons.hpp"

	// Attachements
#include "Weapons\Attachements\CfgWeapons.hpp"

	// DC-15A
#include "Weapons\DC15A\CfgWeapons.hpp"

	// DC-15S
#include "Weapons\DC15S\CfgWeapons.hpp"

	// DC-15X
#include "Weapons\DC15X\CfgWeapons.hpp"

	// DC-17SA
#include "Weapons\DC17SA\CfgWeapons.hpp"

	// PLX-1
#include "Weapons\PLX1\CfgWeapons.hpp"

	// RPS-6
#include "Weapons\RPS6\CfgWeapons.hpp"

	// Z-6
#include "Weapons\Z6\CfgWeapons.hpp"

	// Explosives
#include "Weapons\Explosives\CfgWeapons.hpp"

	// Medical
#include "Medical\CfgWeapons.hpp"

	// FortifyTools
#include "FortifyTools\CfgWeapons.hpp"
};

class CfgCloudlets
{
#include "Weapons\Explosives\CfgCloudlets.hpp"
};

class CfgSoundSets
{
#include "Weapons\Explosives\CfgSoundSets.hpp"
};

class CfgSoundShaders
{
#include "Weapons\Explosives\CfgSoundShaders.hpp"
};

class CfgAmmo
{
	// Explosives
#include "Weapons\Explosives\CfgAmmo.hpp"

	// Medical
#include "Medical\CfgAmmo.hpp"
};

class CfgMagazines
{
	// Ammunitions
#include "Weapons\Ammunitions\CfgMagazines.hpp"

	// Explosives
#include "Weapons\Explosives\CfgMagazines.hpp"

	// Medical
#include "Medical\CfgMagazines.hpp"
};

#include "Weapons\BlastWaveEffect\Effect.hpp"

#include "Medical\ACE_Medical_Treatment_Actions.hpp"

#include "Medical\ACE_Medical_Treatment.hpp"

#include "Loadout\CIM_CfgLoadouts.hpp"