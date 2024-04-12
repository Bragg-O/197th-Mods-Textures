/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/
author = "197th Compagnie Chimaera"; //Mission Author 
loadScreen = "\197th_Core\Data\LoadScreen.paa"; //LoadScreen
class Header {
	gameType =  Zeus;	// Game type
	minPlayers =  1;	// minimum number of players the mission supports
	maxPlayers = 32;	// maximum number of players the mission supports
};
class CfgWorlds
{
	class Any // or specific world name
	{
		author = "197th Development Team";
		description = "197th Compagnie Chimaera";
		pictureMap = "\197th_Core\Data\LoadMap.jpg";
		pictureShot = "\197th_Core\Data\LoadScreen.paa";
		loadingTexts[] = { "197th Compagnie Chimaera", "La Compagnie Chimaera vous accueille en son sein", "Préparez vous pour une expérience RolePlay unique et immersive" };
	};
};
respawn = 3; //Respawn type
respawnTemplatesWest[] = { "MenuPosition" };
respawnTemplatesEast[] = { "MenuPosition"};
respawnTemplatesGuer[] = { "MenuPosition"};
respawnTemplatesCiv[] = { "MenuPosition" };
respawnTemplatesVirtual[] = {}; // Virtual players, used mainly in Curator (Zeus) missions
respawnOnStart = 0; //Respawn on start
enableDebugConsole[] = {"76561198113173701", "76561198169985342", "76561198203156987"}; // admins and players with their UID in this list have access
enableItemsDropping = 1; // 0: disabled - 1: enabled. Default: ?
enableTeamSwitch = 0; // 0: disabled - 1: enabled. Default: 1
aiKills = 0; // 0: disabled - 1: enabled. Default: 0
briefing = 0; // 0: disabled - 1: enabled. Default: 1
disabledAI = 1; // 0: disabled - 1: enabled. Default: 0
joinUnassigned = 1; // 0: disabled - 1: enabled. Default: 1
showCompass = 1; // 0: disabled - 1: enabled. Default: 1
showGPS = 1; // 0: disabled - 1: enabled. Default: 1
showGroupIndicator = 0; // 0: disabled - 1: enabled. Default: 0
showMap = 1; // 0: disabled - 1: enabled. Default: 1
showSquadRadar = 0; // 0: disabled - 1: enabled. Default: 0
showUAVFeed = 1; // 0: disabled - 1: enabled. Default: 1
allowProfileGlasses = 0; // 0: disabled - 1: enabled. Default: 1 
corpseLimit = 15; // Default: 15
corpseRemovalMinTime = 60; // seconds. Default: 10
corpseRemovalMaxTime = 120; // seconds. Default: 3600
wreckLimit = 5; // seconds. Default: 15
wreckRemovalMinTime = 360; // seconds. Default: 10
wreckRemovalMaxTime = 500; // seconds. Default: 36000 (10 hours)
minPlayerDistance = 0; // meters. Default: 0
saving = 0; // 0: disabled - 1: enabled. Default: 1
allowFunctionsLog = 1; // 0: disabled - 1: enabled. Default: ?
allowFunctionsRecompile = 0; // 0: disabled - 1: enabled. Default: 0
zeusCompositionScriptLevel = 2;	// 0: all scripts are forbidden
								// 1: only attributes are allowed (including custom attributes added by mods)
								// 2: all scripts are allowed including init scripts
								// Default: 1