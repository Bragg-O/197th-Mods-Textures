params ["_player", ["_cost", 0]];

(missionNamespace getVariable ["ace_fortify_fortifyAllowed", true]) &&
{
	[_player, "ACE_Fortify"] call BIS_fnc_hasItem
} && {
	private _budget = [side group _player] call ace_fortify_fnc_getBudget;
	((_budget == -1) || {
		_budget >= _cost
	})
} && {
	private _inArea = ace_fortify_locations isEqualTo [];
	{
		if (_player inArea _x) exitWith {
			_inArea = true
		};
	} forEach ace_fortify_locations;
	_inArea
} && {
	private _vehInArea = false;
	private _vehallowfortify = [
		"3as_Jug",
		"197th_ITT_Logistic",
		"197th_PX10_Repair",
		"197th_RTT",
		"3AS_Rho_Crate_REP_Transport",
		"3AS_Rho_REP_F",
		"3AS_Nu_REP_F",
		"197th_SupplySlingload_Cargo"
	];
	{
		if ((typeOf _x) in _vehallowfortify) exitWith {
			_vehInArea = true;
		};
	} forEach (position _player nearObjects 100);
	_vehInArea
}