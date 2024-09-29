params [
	["_DoNotDisplayForCurators", []]
];

while { true } do {
	ace_maxWeightCarry = 3500;
	ace_maxWeightDrag = 5000;

	_removedMortar = "197th_Mortar" allObjects 1;
	_DoNotDisplayForCurators pushBack _removedMortar;

	{
		_x addCuratorEditableObjects [allPlayers, true];
		_x removeCuratorEditableObjects [_DoNotDisplayForCurators, true];
	} forEach allCurators;

	sleep 10;
};