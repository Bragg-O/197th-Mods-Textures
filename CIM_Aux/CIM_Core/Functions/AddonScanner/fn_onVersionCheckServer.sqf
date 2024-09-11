diag_log format ["[CIM | Addon Version] ----------- Init SERVER -----------"];

CIM_modVersionServer = getText (configFile >> "CfgPatches" >> "CIM_Version" >> "Version");

diag_log format ["[CIM | Addon Version] - Addon Version: %1", CIM_modVersionServer];

publicVariable "CIM_modVersionServer";

diag_log format ["[CIM | Addon Version] ----------- End SERVER -----------"];