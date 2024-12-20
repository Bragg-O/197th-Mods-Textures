class CIM_Dialog_Rank
{
	idd = -1;
	movingEnable = false;

	class ControlsBackground
	{
		class background
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.29375;
			y = safeZoneY + safeZoneH * 0.225;
			w = safeZoneW * 0.4125;
			h = safeZoneH * 0.55;
			style = 0;
			text = "";
			colorBackground[] = {0.1, 0.1, 0.1, 0.7};
			colorText[] = {0.3843, 0.1922, 0.5176, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Title
		{
			type = 0;
			idc = 0;
			x = 0;
			y = 0;
			w = 1;
			h = 0.04;
			style = 2;
			text = "Atribution de rankission";
			colorBackground[] = {0.0902, 0.1804, 0.1412, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Title1
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * 0.31458334;
			y = safeZoneY + safeZoneH * 0.25277778;
			w = safeZoneW * 0.16510417;
			h = safeZoneH * 0.02222223;
			style = 2;
			text = "Liste des joueurs";
			colorBackground[] = {0.0902, 0.1804, 0.1412, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class Title2
		{
			type = 0;
			idc = 0;
			x = 0.55;
			y = 0.05;
			w = 0.4;
			h = 0.04;
			style = 2;
			text = "Liste des rankissions";
			colorBackground[] = {0.0902, 0.1804, 0.1412, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
	class Controls
	{
		class PlayerList
		{
			type = 5;
			idc = 3000;
			x = safeZoneX + safeZoneW * 0.31458334;
			y = safeZoneY + safeZoneH * 0.27962963;
			w = safeZoneW * 0.16510417;
			h = safeZoneH * 0.46296297;
			style = 16;
			colorBackground[] = {0.102, 0.102, 0.102, 1};
			colorDisabled[] = {0.2, 0.2, 0.2, 1};
			colorSelect[] = {0.4, 0.6, 0.4, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect", 0.09, 1.0};
			class ListScrollBar
			{
				color[] = {1, 1, 1, 1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};
		class RankList
		{
			type = 5;
			idc = 3100;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.27962963;
			w = safeZoneW * 0.16510417;
			h = safeZoneH * 0.4212963;
			style = 16;
			colorBackground[] = {0.102, 0.102, 0.102, 1};
			colorDisabled[] = {0.2, 0.2, 0.2, 1};
			colorSelect[] = {0.4, 0.6, 0.4, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect", 0.09, 1.0};
			class ListScrollBar
			{
				color[] = {1, 1, 1, 1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
			};
		};
		class AddRank
		{
			type = 1;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.52083334;
			y = safeZoneY + safeZoneH * 0.71296297;
			w = safeZoneW * 0.16510417;
			h = safeZoneH * 0.02222223;
			style = 0 + 2;
			text = "Attribuer le grade";
			borderSize = 0;
			colorBackground[] = {0.302, 0.502, 0.302, 1};
			colorBackgroundActive[] = {0.302, 0.502, 0.302, 1};
			colorBackgroundDisabled[] = {0.2, 0.2, 0.2, 1};
			colorBorder[] = {0, 0, 0, 0};
			colorDisabled[] = {0.2, 0.2, 0.2, 1};
			colorFocused[] = {0.2, 0.2, 0.2, 1};
			colorShadow[] = {0, 0, 0, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1.0};
			onButtonClick = "[] spawn DIALOG_fnc_rankUpdate;";
			shadow = 0;
		};
		class Exit
		{
			type = 1;
			idc = -1;
			x = 0.970;
			y = 0;
			w = 0.030;
			h = 0.040;
			style = 0 + 2;
			text = "X";
			borderSize = 0;
			colorBackground[] = {0.1137, 0.098, 0.7529, 0};
			colorBackgroundActive[] = {1, 0, 0, 1};
			colorBackgroundDisabled[] = {0.2, 0.2, 0.2, 1};
			colorBorder[] = {0, 0, 0, 0};
			colorDisabled[] = {0.2, 0.2, 0.2, 1};
			colorFocused[] = {0.2, 0.2, 0.2, 1};
			colorShadow[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter", 0.09, 1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape", 0.09, 1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush", 0.09, 1.0};
			onbuttonclick = "closeDialog 0;";
			shadow = 0;
		};
	};
};
