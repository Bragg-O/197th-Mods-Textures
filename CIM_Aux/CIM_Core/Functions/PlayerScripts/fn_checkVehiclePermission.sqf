[] spawn {
	waitUntil {
		// to prevent MP / JIP issues
		sleep 5;
		!isNull player
	};

	while { true } do {
		uiSleep 0.5;
		waitUntil {
			sleep 10;
			vehicle player != player;
		};

		Internal_fnc_UpdateVariable = {
			private _RoleArray = assignedVehicleRole player;

			switch (_RoleArray select 0) do {
				case "driver": {
					player setVariable ["CIM_Can3rdPerson", true, true];
					player setVariable ["CIM_vehRole", "driver", true];
				};
				case "turret": {
					player setVariable ["CIM_Can3rdPerson", false, true];
					player setVariable ["CIM_vehRole", "turret", true];
				};
				case "cargo": {
					player setVariable ["CIM_Can3rdPerson", false, true];
					player setVariable ["CIM_vehRole", "cargo", true];
				};
				default {
					player setVariable ["CIM_Can3rdPerson", true, true];
					player setVariable ["CIM_vehRole", "cargo", true];
				};
			};

			if (vehicle player isKindOf "air") then {
				player setVariable ["CIM_vehType", "air", true];
			} else {
				player setVariable ["CIM_vehType", "ground", true];
			};
		};

		[] spawn {
			[] call Internal_fnc_UpdateVariable;

			if (!(player getVariable "CIM_Can3rdPerson")) then {
				while { (!(player getVariable "CIM_Can3rdPerson")) } do {
					[] call Internal_fnc_UpdateVariable;
					if ((vehicle player) == player) exitWith {
						player setVariable ["CIM_Can3rdPerson", true, true];
					};
					if ((cameraView == "External")) then {
						player switchCamera "Internal";
					};
					uiSleep 0.2;
				};
			};
		};

		[] spawn {
			[] call Internal_fnc_UpdateVariable;
			_pilotlevel = player getVariable "CIM_PilotLevel";
			_crewlevel = player getVariable "CIM_CrewLevel";
			_vehType = player getVariable "CIM_vehType";
			_vehRole = player getVariable "CIM_vehRole";

			switch (_vehRole) do {
				case "driver": {
					switch (_vehType) do {
						case "ground": {
							if (!(_crewlevel > 0)) then {
								player moveInCargo vehicle player;
								hint "Tu n'es pas autorisé à cette place dans ce véhicule";
								if !((assignedVehicleRole player) select 0 == "cargo") then {
									player action ["getOut", vehicle player];
								};
							};
						};
						case "air": {
							if (!(_pilotlevel > 1)) then {
								player moveInCargo vehicle player;
								hint "Tu n'es pas autorisé à cette place dans ce véhicule";
								if !((assignedVehicleRole player) select 0 == "cargo") then {
									player action ["getOut", vehicle player];
								};
							};
						};
					};
				};
				case "turret": {
					switch (_vehType) do {
						case "ground": {
							if (!(_crewlevel > 0)) then {
								player moveInCargo vehicle player;
								hint "Tu n'es pas autorisé à cette place dans ce véhicule";
								if !((assignedVehicleRole player) select 0 == "cargo") then {
									player action ["getOut", vehicle player];
								};
							};
						};
						case "air": {
							if (!(_pilotlevel > 0)) then {
								player moveInCargo vehicle player;
								hint "Tu n'es pas autorisé à cette place dans ce véhicule";
								if !((assignedVehicleRole player) select 0 == "cargo") then {
									player action ["getOut", vehicle player];
								};
							};
						};
					};
				};
				case "cargo": {};
			};
		};
	};
};