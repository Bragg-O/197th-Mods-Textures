if (isServer) then {
	call CIM_fnc_onScannerServer;
};

if (hasInterface) then {
	call CIM_fnc_onScannerClient;
};