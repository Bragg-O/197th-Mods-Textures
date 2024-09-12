diag_log format ["[CIM | Addon Version] ----------- Init %1 -----------", profileName];

CIM_modVersionClient = getText (configFile >> "CfgPatches" >> "CIM_Core" >> "Version");

diag_log format ["[CIM | Addon Version] - Addon Version: %1", CIM_modVersionClient];

if (CIM_modVersionClient != CIM_modVersionServer) then {
	diag_log format ["[CIM | Addon Version] ERROR - La version de votre mod (%1) ne correspond pas à celle du serveur (%2).", CIM_modVersionClient, CIM_modVersionServer];
    failMission "AddonVersionMismatchDetected";
} else {
	diag_log format ["[CIM | Addon Version] OK - La version de votre mod correspond à celle du serveur."];
};

diag_log format ["[CIM | Addon Version] ----------- End %1 -----------", profileName];