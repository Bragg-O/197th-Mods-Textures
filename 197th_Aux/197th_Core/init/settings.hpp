/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

respawn = 3; //Respawn type
respawnTemplatesWest[] = { "MenuPosition" };
respawnTemplatesEast[] = { "MenuPosition"};
respawnTemplatesGuer[] = { "MenuPosition"};
respawnTemplatesCiv[] = { "MenuPosition" };
respawnTemplatesVirtual[] = {}; // Virtual players, used mainly in Curator (Zeus) missions
respawnOnStart = 0; //Respawn on start
enableDebugConsole[] = { // admins and players with their UID in this list have access
	"76561198113173701", //Bragg
	"76561198169985342", //Hermes
	"76561198203156987"  //Apollyon
};
disableChannels[] = {{0, false, true},{1, false, true},{2, false, true},{3, false, true},{4, true, true},{5, false, true},{6, true, true}};
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
allowFunctionsRecompile = 1; // 0: disabled - 1: enabled. Default: 0
zeusCompositionScriptLevel = 2;	// 0: all scripts are forbidden
								// 1: only attributes are allowed (including custom attributes added by mods)
								// 2: all scripts are allowed including init scripts
								// Default: 1
								
class Header {
	gameType = Zeus; // Game type
	minPlayers = 1;	// minimum number of players the mission supports
	maxPlayers = 64; // maximum number of players the mission supports
};

class CfgWorlds {
	class Any {
		author = "197th Development Team";
		description = "197th Compagnie Chimaera";
		pictureMap = "\197th_Core\Init\Data\loadmap.paa";
		pictureShot = "\197th_Core\Init\Data\loadscreen.paa";
		loadingTexts[] = { "197th Compagnie Chimaera", "La Compagnie Chimaera vous accueille en son sein", "Préparez vous pour une expérience RolePlay unique et immersive" };
	};
};

CIM_RestrictedArsenal_AllClassWith = "197th"; // classes that are allowed to use this arsenal;