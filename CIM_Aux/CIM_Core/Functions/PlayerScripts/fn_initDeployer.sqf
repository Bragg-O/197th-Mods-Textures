params ["_object"];
_object addAction ["Demande de redéploiement", {
	params ["_target", "_caller", "_actionId", "_arguments"];

	private _deployer = [];

	{
		if (_x getVariable ["CIM_Deployer", false] == true) then {
			_deployer pushBack _x;
		};
	} forEach allPlayers;

	_taskID = format["%1-%2", name player, random 1000];

	[
		_deployer,
		_taskID,
		[format ["%1, demande un redéploiement", (name player)], format ["Redéploiement (%1)", (name player)], format ["Redéploiement (%1)", (name player)]],
		(getPos _target),
		"AUTOASSIGNED"
	] call BIS_fnc_taskCreate;

	[_taskID, "rescue"] call BIS_fnc_taskSetType;

	[_target, _taskID] spawn {
		params ["_target", "_taskID"];
		waitUntil {
			uiSleep 1;
			(player distance (getPos _target)) > 500;
		};
		[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;
	};
}, nil, 1.5, false, false, "", 'true'];

_object addAction ["Devenir Redéployeur", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_caller setVariable ["CIM_deployer", true, true];
}, nil, 1.5, false, false, "", '_this getVariable ["CIM_Deployer", false] == false'];

_object addAction ["Quitter le rôle de Redéployeur", {
	params ["_target", "_caller", "_actionId", "_arguments"];
	_caller setVariable ["CIM_deployer", false, true];
}, nil, 1.5, false, false, "", '_this getVariable ["CIM_Deployer", false] == true'];