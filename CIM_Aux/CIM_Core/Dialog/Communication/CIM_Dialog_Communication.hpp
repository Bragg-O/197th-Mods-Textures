class CIM_Dialog_Communication
{
	idd = -1;
	movingEnable = false;

	class ControlsBackground
	{
		class Control3457992
		{
			type = 0;
			idc = 0;
			x = 0;
			y = 0;
			w = 1;
			h = 1;
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
			text = "Communication prioritaire";
			colorBackground[] = {0.0902, 0.1804, 0.1412, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
	class Controls
	{
		class Transmettre
		{
			type = 1;
			idc = 4001;
			x = 0.03;
			y = 0.92000002;
			w = 0.93;
			h = 0.04;
			style = 0 + 2;
			text = "Transmettre";
			borderSize = 0;
			colorBackground[] = {0.302, 0.502, 0.302, 1};
			colorBackgroundActive[] = {0.2, 0.4, 0.2, 1};
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
			onbuttonclick = "[] spawn DIALOG_fnc_sendCommunication;";
			shadow = 0;
		};
		class Exit
		{
			type = 1;
			idc = -1;
			x = 0.97;
			y = 0;
			w = 0.03;
			h = 0.04;
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
		class CustomMsg
		{
			type = 2;
			idc = 4100;
			x = 0.03;
			y = 0.84000001;
			w = 0.94000001;
			h = 0.04;
			style = 0;
			text = "";
			autocomplete = "";
			colorBackground[] = {0.102, 0.102, 0.102, 1};
			colorDisabled[] = {0.2, 0.2, 0.2, 1};
			colorSelection[] = {1, 0, 0, 1};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class ListMsg
		{
			type = 5;
			idc = 4000;
			x = 0.03;
			y = 0.07;
			w = 0.94000001;
			h = 0.73000002;
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
			onLBSelChanged = "[] spawn DIALOG_fnc_updateCommunication;";
		};
	};
};
