_this spawn {
	CIM_combatTime = 60;

	_eh = (findDisplay 46) displayAddEventHandler ["KeyDown", {
		_key = _this select 1;
		_keys = actionKeys "PersonView";
		if (_key in _keys) then {
			true;
		};
	}];

	[] spawn {
		while { (CIM_combatTime > 0) } do {
			if ((cameraView == "External") && ((vehicle player) == player)) then {
				player switchCamera "Internal";
			};
			if ((vehicle player) != player) exitwith {
				CIM_combatTime = 0;
			};
			sleep 0.2;
			CIM_combatTime = CIM_combatTime - 0.2;
		};
	};

	waitUntil {
		(CIM_combatTime <= 0)
	};
	_ehr = (findDisplay 46) displayRemoveEventHandler ["keyDown", _eh];
};