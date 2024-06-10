/*
	Author: Bragg for 197th Compagnie Chimaera

	Description: Please do not [Copy,Modify,Plagiarize] the following content without prior authorization from its creator.

	Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches
{
	class 197th_Core
	{
		name = "197th Core";
		author = "Bragg for 197th Compagnie Chimaera";
		url = "http://www.197th.fr";
		requiredAddons[] = {"197th_Equipment","197th_Vehicule","197th_Music","197th_Weapon","A3_Functions_F","A3_Data_F_Enoch_Loadorder","OPTRE_FC_Loadorder","OPTRE_Loadorder"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFactionClasses
{
	Categories_197th_XX(197th);
	Categories_197th_XX(Units);
	Categories_197th_XX(Vehicle);
	Categories_197th_XX(WorldEdit);
};

class CfgEditorCategories
{
	Categories_197th_XX(Equipment);
	Categories_197th_XX(Object);
	Categories_197th_XX(Vehicle);
	Categories_197th_XX(Weapon);
	Categories_197th_XX(WorldEdit);
};

class CfgEditorSubcategories
{
	AdvancedCategories_197th_XX(Customs,Backpack);
	AdvancedCategories_197th_XX(Customs,Helmet);
	AdvancedCategories_197th_XX(Customs,Uniform);
	AdvancedCategories_197th_XX(Customs,Weapon);
	AdvancedCategories_197th_XX(Customs,Unit);
	AdvancedCategories_197th_XX(Regs,Backpack);
	AdvancedCategories_197th_XX(Regs,Helmet);
	AdvancedCategories_197th_XX(Regs,Uniform);
	AdvancedCategories_197th_XX(Regs,Weapon);
	AdvancedCategories_197th_XX(Regs,Unit);
	Categories_197th_XX(Number);
	Categories_197th_XX(Loadout);
	Categories_197th_XX(Explosive);
	Categories_197th_XX(Terminal);
	Categories_197th_XX(Arsenal);
	Categories_197th_XX(Flag);
	Categories_197th_XX(Supply);
	Categories_197th_XX(Aerien);
	Categories_197th_XX(Terrestre);
};

class CfgMissions
{
	class Cutscenes
	{
		class spaceMenuSceneVR
		{
			directory = "197th_core\scenes\Intro1.VR";
		};
		class spaceMenuSceneAltis
		{
			directory = "197th_core\scenes\Intro1.Altis";
		};
		class spaceMenuSceneArcadia
		{
			directory = "197th_core\scenes\Intro1.OPTRE_Arcadia";
		};
	};
};

class CfgWorlds
{
	class CAWorld;
	class Altis : CAWorld
	{
		cutscenes[] = {"spaceMenuSceneAltis"};
	};
	class VR : CAWorld
	{
		cutscenes[] = {"spaceMenuSceneVR"};
	};
	class OPTRE_Arcadia : CAWorld
	{
		cutscenes[] = {"spaceMenuSceneArcadia"};
	};
	initWorld = "Altis";
	demoWorld = "Altis";
};

class RscStandardDisplay;
class RscActiveText;
class RscButton;
class RscPicture;
class RscShortcutButton;
class RscDisplayMain : RscStandardDisplay
{
	idd = 0;
	idc = 1;
	enableDisplay = 1;
	text = "";
	class RscActiveText;
	class RscActivePicture : RscActiveText
	{
		style = 48;
		color[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
	};
	delete Spotlight;
	class controls
	{
		class Logo : RscShortcutButton
		{
			access = 0;
			color[] = {0.9,0.9,0.9,0.8};
			colorActive[] = {1,1,1,0.8};
			colorDisabled[] = {1,1,1,0.25};
			default = 0;
			deletable = 0;
			fade = 0;
			font = "RobotoCondensed";
			h = "1 * 	5 * 	(pixelH * pixelGrid * 2)";
			idc = -1;
			shadow = 0;
			sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
			soundClick[] = {"",0.1,1};
			soundEnter[] = {"",0.1,1};
			soundEscape[] = {"",0.1,1};
			soundPush[] = {"",0.1,1};
			style = 48;
			text = "\197th_Core\data\logo197.paa"
			tooltipColorBox[] = {1,1,1,1};
			tooltipColorShade[] = {0,0,0,0.65};
			tooltipColorText[] = {1,1,1,1};
			type = 11;
			url = "";
			w = "2 * 	5 * 	(pixelW * pixelGrid * 2)";
			x = "0.5 - 	5 * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + (3 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2)";
		};
		class LogoApex : Logo
		{
		};
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete BackgroundSpotlightRight;
		delete BackgroundSpotlightLeft;
		delete BackgroundSpotlight;
		delete SpotlightNext;
		delete SpotlightPrev;
		class ConnectServer : RscButton
		{
			type = 1;
			idc = -1;
			x = "safeZoneX + safeZoneW * 0.4";
			y = "safeZoneY + safeZoneH * 0.25";
			w = "safeZoneW * 0.2";
			h = "safeZoneH * 0.04";
			style = "0+2";
			text = "Serveur Principal";
			borderSize = 0;
			colorBackground[] = {0.066699997,0.1804,0.14120001,1};
			colorBackgroundActive[] = {0.066699997,0.1804,0.14120001,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorText[] = {0.78039998,0.65490001,0.28240001,1};
			font = "PuristaBold";
			offsetPressedX = 0.0099999998;
			offsetPressedY = 0.0099999998;
			offsetX = 0.0099999998;
			offsetY = 0.0099999998;
			sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3)";
			soundClick[] =
				{
					"\A3\ui_f\data\sound\RscButton\soundClick",
					0.090000004,
					1};
			soundEnter[] =
				{
					"\A3\ui_f\data\sound\RscButton\soundEnter",
					0.090000004,
					1};
			soundEscape[] =
				{
					"\A3\ui_f\data\sound\RscButton\soundEscape",
					0.090000004,
					1};
			soundPush[] =
				{
					"\A3\ui_f\data\sound\RscButton\soundPush",
					0.090000004,
					1};
			onButtonClick = "connectToServer ['5.135.141.171',2302,'197thCompChimaeraByBraggHermesApo']";
		};
		class ConnectServer1 : ConnectServer
		{
			y = "safeZoneY + safeZoneH * 0.32";
			text = "Serveur de Formation";
			onButtonClick = "connectToServer ['5.135.141.171',2322,'197thCompChimaeraByBraggHermesApo']";
		};
	};
};