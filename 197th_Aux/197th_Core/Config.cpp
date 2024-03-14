/*
    Author: Bragg for 197th Compagnie Chimaera

    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
    
    Website: [www.197th.fr]
*/

#include "PreProcessor.hpp"

class CfgPatches {
    class 197th_Core {
        name = "197th Core";
        author = "Bragg for 197th Compagnie Chimaera";
        url = "http://www.197th.fr";
        requiredAddons[]={"197th_Equipment","197th_Vehicule","197th_Music","197th_Weapon","A3_Functions_F","A3_Data_F_Enoch_Loadorder", "OPTRE_FC_Loadorder", "OPTRE_Loadorder"};
        units[]={};
        weapons[]={};
    };
};

class CfgFactionClasses {
    Categories_197th_XX(197th);
    Categories_197th_XX(Units);
    Categories_197th_XX(Vehicle);
	Categories_197th_XX(WorldEdit);
};

class CfgEditorCategories {
    Categories_197th_XX(Equipment);
    Categories_197th_XX(Object);
    Categories_197th_XX(Vehicle);
    Categories_197th_XX(Weapon);
	Categories_197th_XX(WorldEdit);
};

class CfgEditorSubcategories {
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

class CfgMissions {
	class Cutscenes {
		class spaceMenuSceneVR {
			directory = "197th_core\scenes\Intro1.VR";
		};
		class spaceMenuSceneAltis {
			directory = "197th_core\scenes\Intro1.Altis";
		};
		class spaceMenuSceneArcadia {
			directory = "197th_core\scenes\Intro1.OPTRE_Arcadia";
		};
	};
};

class CfgWorlds {
	class CAWorld;	// External class reference
	class Altis : CAWorld {
		cutscenes[] = {"spaceMenuSceneAltis"};
	};
    class VR : CAWorld {
		cutscenes[] = {"spaceMenuSceneVR"};
	};
	class OPTRE_Arcadia : CAWorld {
		cutscenes[] = {"spaceMenuSceneArcadia"};
	}
	initWorld = "Altis";
	demoWorld = "Altis";
};

class RscStandardDisplay;
class RscActiveText;
class RscButton;
class RscPicture;

class RscDisplayMain : RscStandardDisplay {
		idd = 0;
		idc = 1;
		enableDisplay = 1;
		
		text =  "";

	class RscActiveText;

	class RscActivePicture : RscActiveText {
		style = 48;
		color[] = {
				1,1,1,1
		};
		colorActive[] = {
				1,1,1,1
		};
	};

	class Spotlight {};
	
	class controls {
		class Spotlight1 {};
		class Spotlight2 {};
		class Spotlight3 {};
		class BackgroundSpotlightRight {};
		class BackgroundSpotlightLeft {};
		class BackgroundSpotlight {};
		class B_Credits {};
	
		class ConnectServer : RscButton {
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.25;
			w = safeZoneW * 0.2;
			h = safeZoneH * 0.04;
			style = 0+2;
			text = "Serveur Principal";
			borderSize = 0;
			colorBackground[] = {0.0667, 0.1804, 0.1412, 1};
			colorBackgroundActive[] = {0.0667, 0.1804, 0.1412, 1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorText[] = {0.7804,0.6549,0.2824,1};
			font = "PuristaBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "connectToServer ['5.135.141.171', 2302, 'L3g10nT4rg0n528']";
		};

		class ConnectServer1 : RscButton {
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.4;
			y = safeZoneY + safeZoneH * 0.32;
			w = safeZoneW * 0.2;
			h = safeZoneH * 0.04;
			style = 0+2;
			text = "Serveur de Formation";
			borderSize = 0;
			colorBackground[] = {0.0667, 0.1804, 0.1412, 1};
			colorBackgroundActive[] = {0.0667, 0.1804, 0.1412, 1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorText[] = {0.7804,0.6549,0.2824,1};
			font = "PuristaBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.3);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "connectToServer ['5.135.141.171', 2322, 'L3g10nT4rg0n528']";
		};
	};
};