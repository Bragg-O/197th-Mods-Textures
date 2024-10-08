params ["_object"];

[
	_object,
	"Demande de redéploiement",
	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
	"\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_connect_ca.paa",
	"_target distance _this < 5 && !(_this getVariable ['CIM_RequiredDeployment', false])",
	"true",
	{},
	{},
	{
		params ["_target", "_caller", "_actionId", "_arguments"];

		_caller setVariable ["CIM_RequiredDeployment", true, true];

		private _deployer = [];

		{
			if (_x getVariable ["CIM_PilotLevel", 0] >= 1) then {
				_deployer pushBackUnique _x;
			};
			if (_x getVariable ["CIM_ZeusLevel", 0] >= 1) then {
				_deployer pushBackUnique _x;
			};
			if (_x getVariable ["CIM_RankLevel", 0] >= 4) then {
				_deployer pushBackUnique _x;
			};
		} forEach allPlayers;

		_taskID = format["%1-%2", name _caller, random 1000];

		[
			_deployer,
			_taskID,
			[format ["%1, demande un redéploiement", (name _caller)], format ["Redéploiement (%1)", (name _caller)], format ["Redéploiement (%1)", (name _caller)]],
			(getPos _target),
			"AUTOASSIGNED"
		] call BIS_fnc_taskCreate;

		[_taskID, "rescue"] call BIS_fnc_taskSetType;

		[_target, _caller, _taskID] spawn {
			params ["_target", "_caller", "_taskID"];
			waitUntil {
				uiSleep 1;
				(_caller distance (getPos _target)) > 500;
			};
			[_taskID, "SUCCEEDED"] call BIS_fnc_taskSetState;

			_caller setVariable ["CIM_RequiredDeployment", false, true];

			uiSleep 20;

			[_taskID] call BIS_fnc_deleteTask;
		};

		hint "Ta demande de redéploiement a été envoyée";
	},
	{},
	[],
	2,
	1,
	false
] call BIS_fnc_holdActionAdd;