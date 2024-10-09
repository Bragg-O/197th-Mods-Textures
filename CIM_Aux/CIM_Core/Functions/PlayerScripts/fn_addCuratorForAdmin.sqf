params ["_player"];

if !(isServer) exitWith {};

waitUntil {
	// to prevent MP / JIP issues
	sleep 5;
	!isNull _player
};

if (_player getVariable ["CIM_ZeusLevel", 0] < 2) exitWith {};

_curator = (createGroup sideLogic) createUnit ["ModuleCurator_F", [0, 0, 0], [], 0, "NONE"];
_player assignCurator _curator;