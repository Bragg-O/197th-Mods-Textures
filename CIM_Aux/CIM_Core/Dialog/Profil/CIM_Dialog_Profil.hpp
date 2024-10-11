class CIM_Dialog_Profil
{
	idd = -1;
	movingEnable = false;
	enableSimulation = true;

	class ControlsBackground
	{
		class background
		{
			type = 0;
			idc = 0;
			x = safeZoneX + safeZoneW * -0.00625;
			y = safeZoneY + safeZoneH * 0.025;
			w = safeZoneW * 0.3125;
			h = safeZoneH * 0.55;
			style = 48;
			text = "\CIM_Core\Dialog\Profil\data\profil_ca.paa";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
	class Controls
	{
		class name
		{
			type = 0;
			idc = 2000;
			x = -0.6060606;
			y = -0.18181818;
			w = safeZoneW * 0.33333334;
			h = safeZoneH * 0.06090913;
			style = 0;
			text = "N/A";
			colorBackground[] = {0.498, 0.5098, 0.6392, 0};
			colorText[] = {1, 1, 1, 1};
			font = "TahomaB";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
		class rank
		{
			type = 0;
			idc = 2100;
			x = -0.6060606;
			y = -0.09090909;
			w = safeZoneW * 0.10090912;
			h = safeZoneH * 0.12636364;
			style = 48;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};
};
