params ["_player", "_uid"];

[_uid, (_player getUnitTrait "engineer")] call DB_fnc_UpdateActualIng;

[_uid, (_player getUnitTrait "medic")] call DB_fnc_UpdateActualMedic;

[_uid, (format["%1-%2-%3", (systemTimeUTC select 0), (systemTimeUTC select 1), (systemTimeUTC select 2)])] call DB_fnc_UpdateLastView;

[_uid, (getUnitLoadout _player)] call DB_fnc_UpdateLoadout;

[_uid, (name _player)] call DB_fnc_UpdateName;

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

_formateur = [_uid] call DB_fnc_ExtractFormateur;
_player setVariable ["CIM_Formateur", _formateur, true];

_zeus = [_uid] call DB_fnc_ExtractZeus;
_player setVariable ["CIM_Zeus", _zeus, true];

uiSleep 5;

remoteExec ["DB_fnc_GetAllPlayersInfo", 2];

diag_log format ["extDB3 %1 - %2 synced.", _uid, (name _player)];