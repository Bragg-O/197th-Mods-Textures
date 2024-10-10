private _chairList = ["3AS_chair_sr", "3AS_chair_s", "3AS_chair_t"];

_missionObjects = allMissionObjects "";
for "_i" from 0 to count _missionObjects -1 do {
	private _chair = _missionObjects select _i;
	if (typeOf _chair in _chairList) then {
		[_chair] call ace_sitting_fnc_addSitActions;
	};
};