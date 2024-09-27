params [
	["_DoNotDisplayForCurators", [], ["ARRAY"]]
];

while { true } do {
	ace_maxWeightCarry = 3500;
	ace_maxWeightDrag = 5000;


	{
		_x addCuratorEditableObjects [allPlayers, true];
		_x removeCuratorEditableObjects [_DoNotDisplayForCurators, true];
	} forEach allCurators;

	sleep 10;
};