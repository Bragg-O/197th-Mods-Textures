params [
	"_SabaccTable",
	"_Player1Screen",
	"_Player2Screen",
	"_Player3Screen",
	"_Player4Screen",
	["_gameprice", 10]
];

_Player1Screen params [
	"_ComputerPrincipalPlayer1",
	"_ComputerBottom1Player1",
	"_ComputerBottom2Player1",
	"_ChipsReservePlayer1",
	"_ChipsMisePlayer1"
];

_Player2Screen params [
	"_ComputerPrincipalPlayer2",
	"_ComputerBottom1Player2",
	"_ComputerBottom2Player2",
	"_ChipsReservePlayer2",
	"_ChipsMisePlayer2"
];

_Player3Screen params [
	"_ComputerPrincipalPlayer3",
	"_ComputerBottom1Player3",
	"_ComputerBottom2Player3",
	"_ChipsReservePlayer3",
	"_ChipsMisePlayer3"
];

_Player4Screen params [
	"_ComputerPrincipalPlayer4",
	"_ComputerBottom1Player4",
	"_ComputerBottom2Player4",
	"_ChipsReservePlayer4",
	"_ChipsMisePlayer4"
];

_SabaccTable setVariable ["ComputerPrincipalPlayer1", _ComputerPrincipalPlayer1, true];
_SabaccTable setVariable ["ComputerBottom1Player1", _ComputerBottom1Player1, true];
_SabaccTable setVariable ["ComputerBottom2Player1", _ComputerBottom2Player1, true];
_SabaccTable setVariable ["ChipsReservePlayer1", _ChipsReservePlayer1, true];
_SabaccTable setVariable ["ChipsMisePlayer1", _ChipsMisePlayer1, true];

_SabaccTable setVariable ["ComputerPrincipalPlayer2", _ComputerPrincipalPlayer2, true];
_SabaccTable setVariable ["ComputerBottom1Player2", _ComputerBottom1Player2, true];
_SabaccTable setVariable ["ComputerBottom2Player2", _ComputerBottom2Player2, true];
_SabaccTable setVariable ["ChipsReservePlayer2", _ChipsReservePlayer2, true];
_SabaccTable setVariable ["ChipsMisePlayer2", _ChipsMisePlayer2, true];

_SabaccTable setVariable ["ComputerPrincipalPlayer3", _ComputerPrincipalPlayer3, true];
_SabaccTable setVariable ["ComputerBottom1Player3", _ComputerBottom1Player3, true];
_SabaccTable setVariable ["ComputerBottom2Player3", _ComputerBottom2Player3, true];
_SabaccTable setVariable ["ChipsReservePlayer3", _ChipsReservePlayer3, true];
_SabaccTable setVariable ["ChipsMisePlayer3", _ChipsMisePlayer3, true];

_SabaccTable setVariable ["ComputerPrincipalPlayer4", _ComputerPrincipalPlayer4, true];
_SabaccTable setVariable ["ComputerBottom1Player4", _ComputerBottom1Player4, true];
_SabaccTable setVariable ["ComputerBottom2Player4", _ComputerBottom2Player4, true];
_SabaccTable setVariable ["ChipsReservePlayer4", _ChipsReservePlayer4, true];
_SabaccTable setVariable ["ChipsMisePlayer4", _ChipsMisePlayer4, true];

[_SabaccTable, _gameprice] spawn SABACC_fnc_initNewGame;