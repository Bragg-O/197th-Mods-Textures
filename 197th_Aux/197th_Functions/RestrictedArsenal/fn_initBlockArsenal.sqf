while { true } do {
	waitUntil {
		uiSleep 1;
		!isnull (uinamespace getvariable ['RscDisplayArsenal', displayNull])
	};
	private _havelocker = false;
	{
		if (isClass (configFile >> "CIM_SkyLocker" >> str _x)) then {
			private _lockerPlayerUID = getText (configFile >> "CIM_SkyLocker" >> str _x >> "playerUID");
			if (getPlayerUID player == _lockerPlayerUID) exitWith {
				_havelocker = true
			};
		};
	} forEach (player nearObjects ["k_personal_locker", 5]);

	if (_havelocker) then {
		{
			_ctrl = (( uinamespace getvariable "RSCDisplayArsenal" ) displayCtrl _x);
			_ctrl ctrlEnable true;
		} forEach [44146, 44147, 44150, 44148, 44149, 44346];
	} else {
		if ((side player == civilian) or ((getPlayerUID player) in (getMissionConfigValue ["enableDebugConsole", []]))) then {
			{
				_ctrl = (( uinamespace getvariable "RSCDisplayArsenal" ) displayCtrl _x);
				_ctrl ctrlEnable true;
			} forEach [44146, 44147, 44150, 44148, 44149, 44346];
		} else {
			{
				_ctrl = (( uinamespace getvariable "RSCDisplayArsenal" ) displayCtrl _x);
				_ctrl ctrlEnable false;
				_ctrl ctrlSetTooltip "";
			} forEach [44146, 44147, 44150, 44148, 44149, 44346];
		};
	};
};