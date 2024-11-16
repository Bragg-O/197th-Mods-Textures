params ["_player", "_uid"];

[_player, _uid] spawn {
	params ["_player", "_uid"];

	if (isNull _player) exitWith {};

	[_uid, (_player getUnitTrait "engineer")] call DB_fnc_UpdateActualIng;

	[_uid, (_player getUnitTrait "medic")] call DB_fnc_UpdateActualMedic;

	[_uid, (format["%1-%2-%3", (systemTimeUTC select 0), (systemTimeUTC select 1), (systemTimeUTC select 2)])] call DB_fnc_UpdateLastView;

	[_uid, (getUnitLoadout _player)] call DB_fnc_UpdateLoadout;

	[_uid, (name _player)] call DB_fnc_UpdateName;

	private _haveLocker = false;
	{
		_lockerID = configName _x;
		private _lockerPlayerUID = getText (configFile >> "CIM_SkyLocker" >> _lockerID >> "playerUID");
		if (_lockerPlayerUID == _uid) then {
			_haveLocker = true;
			[_uid, _lockerID] call DB_fnc_UpdateLockerId;
		};
	} forEach ("true" configClasses (configFile >> "CIM_SkyLocker"));

	if (!_haveLocker) then {
		[_uid, 0] call DB_fnc_UpdateLockerId;
	};

	uiSleep 0.1;

	_lockerid = [_uid] call DB_fnc_ExtractLockerId;
	_player setVariable ["CIM_LockerID", _lockerid, true];

	_PresetLocker = [_uid] call DB_fnc_ExtractPresetLocker;
	_player setVariable ["CIM_PresetLocker", _PresetLocker, true];

	_ranklevel = [_uid] call DB_fnc_ExtractRankLevel;
	_player setVariable ["CIM_RankLevel", _ranklevel, true];

	_mediclevel = [_uid] call DB_fnc_ExtractMedicLevel;
	_player setVariable ["CIM_MedicLevel", _mediclevel, true];

	_inglevel = [_uid] call DB_fnc_ExtractIngLevel;
	_player setVariable ["CIM_IngLevel", _inglevel, true];

	_crewlevel = [_uid] call DB_fnc_ExtractCrewmanLevel;
	_player setVariable ["CIM_CrewLevel", _crewlevel, true];

	_pilotlevel = [_uid] call DB_fnc_ExtractPilotLevel;
	_player setVariable ["CIM_PilotLevel", _pilotlevel, true];

	_donatorlevel = [_uid] call DB_fnc_ExtractDonatorLevel;
	_player setVariable ["CIM_DonatorLevel", _donatorlevel, true];

	_adminlevel = [_uid] call DB_fnc_ExtractAdminLevel;
	_player setVariable ["CIM_AdminLevel", _adminlevel, true];

	_money = [_uid] call DB_fnc_ExtractMoney;
	_player setVariable ["CIM_Money", _money, true];

	_zeus = [_uid] call DB_fnc_ExtractZeusLevel;
	_player setVariable ["CIM_ZeusLevel", _zeus, true];

	_SabaccActualBonus = [_uid] call SABACC_fnc_extractActualBonus;
	_player setVariable ["SABACC_SabaccBonus1", _SabaccActualBonus select 0, true];
	_player setVariable ["SABACC_SabaccBonus2", _SabaccActualBonus select 1, true];

	_SabaccJeton = [_uid] call SABACC_fnc_extractJeton;
	_player setVariable ["SABACC_Jeton", _SabaccJeton, true];

	uiSleep 5;

	[] call DB_fnc_GetAllPlayersInfo;

	diag_log format ["extDB3 %1 - %2 synced.", _uid, (name _player)];
};