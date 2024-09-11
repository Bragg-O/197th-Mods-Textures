if (isServer) then {
	call CIM_fnc_onScannerServer;
	call CIM_fnc_onVersionCheckServer;
};

if (hasInterface) then {
	call CIM_fnc_onScannerClient;
	call CIM_fnc_onVersionCheckClient;
};