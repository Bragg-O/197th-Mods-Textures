Player addEventHandler ["AnimChanged", {
	call CIM_fnc_checkBactaGrenade
}];
Player addEventHandler ["FiredMan", {
	call CIM_fnc_onUnderFire
}];
Player addEventHandler ["FiredNear", {
	call CIM_fnc_onUnderFire
}];
["ace_firedPlayer", CIM_fnc_onBactaGrenade] call CBA_fnc_addEventHandler;