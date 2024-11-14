params ["_player"];

_eh = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	_key = _this select 1;
	_keys = actionKeys "PersonView";
	if (_key in _keys) then {
		true;
	};
}];

if ((cameraView == "External")) then {
	_player switchCamera "Internal";
};

waitUntil {
	uiSleep 5;
	!(_player getVariable ["SABACC_PlaySabacc", false])
};

_ehr = (findDisplay 46) displayRemoveEventHandler ["keyDown", _eh];