#define PlayerBonus1(var) (var getVariable ["SABACC_SabaccBonus1", 13])
#define PlayerBonus2(var) (var getVariable ["SABACC_SabaccBonus2", 9])

#define Player_Computer(var) (var getVariable "SabaccComputer")

#define Player_Table(var) (var getVariable "SabaccTable")

#define PlayerNumber(var) (var getVariable "PlayerNumber")

#define getPlayer(var) (_SabaccTable getVariable format ["ComputerPrincipalPlayer%1", var]) getVariable ["player", objNull]

#define Computer_Player1 (_SabaccTable getVariable "ComputerPrincipalPlayer1")
#define Computer_Player2 (_SabaccTable getVariable "ComputerPrincipalPlayer2")
#define Computer_Player3 (_SabaccTable getVariable "ComputerPrincipalPlayer3")
#define Computer_Player4 (_SabaccTable getVariable "ComputerPrincipalPlayer4")

#define IndexDiscard (_SabaccTable getVariable "indexDiscard")
#define IndexDiscard_Add_1 (_SabaccTable setVariable ["indexDiscard", ((_SabaccTable getVariable "indexDiscard")+1), true])
#define SetIndexDiscard(Index) (_SabaccTable setVariable ["indexDiscard", Index, true])

#define SabaccCards (_SabaccTable getVariable "Cards")
#define SetSabaccCards(CardsList) (_SabaccTable setVariable ["Cards", CardsList, true])

#define Player1 ((_SabaccTable getVariable "ComputerPrincipalPlayer1") getVariable ["player", objNull])
#define Player2 ((_SabaccTable getVariable "ComputerPrincipalPlayer2") getVariable ["player", objNull])
#define Player3 ((_SabaccTable getVariable "ComputerPrincipalPlayer3") getVariable ["player", objNull])
#define Player4 ((_SabaccTable getVariable "ComputerPrincipalPlayer4") getVariable ["player", objNull])

#define AllPlayer [((_SabaccTable getVariable "ComputerPrincipalPlayer1") getVariable ["player", objNull]), ((_SabaccTable getVariable "ComputerPrincipalPlayer2") getVariable ["player", objNull]), ((_SabaccTable getVariable "ComputerPrincipalPlayer3") getVariable ["player", objNull]), ((_SabaccTable getVariable "ComputerPrincipalPlayer4") getVariable ["player", objNull])]

#define ChipsReserve(PlayerNumber) \
switch (PlayerNumber) do { \
	case 1: { \
		_Chips = (_SabaccTable getVariable ["ChipsReservePlayer1", []]); \
	}; \
	case 2: { \
		_Chips = (_SabaccTable getVariable ["ChipsReservePlayer2", []]); \
	}; \
	case 3: { \
		_Chips = (_SabaccTable getVariable ["ChipsReservePlayer3", []]); \
	}; \
	case 4: { \
		_Chips = (_SabaccTable getVariable ["ChipsReservePlayer4", []]); \
	}; \
}

#define ChipsMise(PlayerNumber) \
switch (PlayerNumber) do { \
	case 1: { \
		_Chips = (_SabaccTable getVariable ["ChipsMisePlayer1", []]); \
	}; \
	case 2: { \
		_Chips = (_SabaccTable getVariable ["ChipsMisePlayer2", []]); \
	}; \
	case 3: { \
		_Chips = (_SabaccTable getVariable ["ChipsMisePlayer3", []]); \
	}; \
	case 4: { \
		_Chips = (_SabaccTable getVariable ["ChipsMisePlayer4", []]); \
	}; \
}


#define SetTexture_Bonus(PlayerNumber, Texture) \
switch (PlayerNumber) do { \
	case 1: { \
		(_SabaccTable getVariable "ComputerBottom1Player1") setObjectTextureGlobal [3, Texture]; \
		(_SabaccTable getVariable "ComputerBottom2Player1") setObjectTextureGlobal [3, Texture]; \
	}; \
	case 2: { \
		(_SabaccTable getVariable "ComputerBottom1Player2") setObjectTextureGlobal [3, Texture]; \
		(_SabaccTable getVariable "ComputerBottom2Player2") setObjectTextureGlobal [3, Texture]; \
	}; \
	case 3: { \
		(_SabaccTable getVariable "ComputerBottom1Player3") setObjectTextureGlobal [3, Texture]; \
		(_SabaccTable getVariable "ComputerBottom2Player3") setObjectTextureGlobal [3, Texture]; \
	}; \
	case 4: { \
		(_SabaccTable getVariable "ComputerBottom1Player4") setObjectTextureGlobal [3, Texture]; \
		(_SabaccTable getVariable "ComputerBottom2Player4") setObjectTextureGlobal [3, Texture]; \
	}; \
}


#define SetTexture_Card(PlayerNumber, Texture) \
switch (PlayerNumber) do { \
	case 1: { \
		(_SabaccTable getVariable "ComputerBottom1Player1") setObjectTextureGlobal [2, Texture]; \
	}; \
	case 2: { \
		(_SabaccTable getVariable "ComputerBottom1Player2") setObjectTextureGlobal [2, Texture]; \
	}; \
	case 3: { \
		(_SabaccTable getVariable "ComputerBottom1Player3") setObjectTextureGlobal [2, Texture]; \
	}; \
	case 4: { \
		(_SabaccTable getVariable "ComputerBottom1Player4") setObjectTextureGlobal [2, Texture]; \
	}; \
}


#define SetTexture_HideCard(PlayerNumber, Texture) \
switch (PlayerNumber) do { \
	case 1: { \
		(_SabaccTable getVariable "ComputerBottom2Player1") setObjectTextureGlobal [2, Texture]; \
	}; \
	case 2: { \
		(_SabaccTable getVariable "ComputerBottom2Player2") setObjectTextureGlobal [2, Texture]; \
	}; \
	case 3: { \
		(_SabaccTable getVariable "ComputerBottom2Player3") setObjectTextureGlobal [2, Texture]; \
	}; \
	case 4: { \
		(_SabaccTable getVariable "ComputerBottom2Player4") setObjectTextureGlobal [2, Texture]; \
	}; \
}


#define SetTexture_PlayerNumber(PlayerNumber, Texture) \
switch (PlayerNumber) do { \
	case 1: { \
		(_SabaccTable getVariable "ComputerBottom2Player1") setObjectTextureGlobal [1, Texture]; \
	}; \
	case 2: { \
		(_SabaccTable getVariable "ComputerBottom2Player2") setObjectTextureGlobal [1, Texture]; \
	}; \
	case 3: { \
		(_SabaccTable getVariable "ComputerBottom2Player3") setObjectTextureGlobal [1, Texture]; \
	}; \
	case 4: { \
		(_SabaccTable getVariable "ComputerBottom2Player4") setObjectTextureGlobal [1, Texture]; \
	}; \
}


#define SetTexture_Computer(Texture) \
(_SabaccTable getVariable "ComputerPrincipalPlayer1") setObjectTextureGlobal [0, Texture]; \
(_SabaccTable getVariable "ComputerPrincipalPlayer2") setObjectTextureGlobal [0, Texture]; \
(_SabaccTable getVariable "ComputerPrincipalPlayer3") setObjectTextureGlobal [0, Texture]; \
(_SabaccTable getVariable "ComputerPrincipalPlayer4") setObjectTextureGlobal [0, Texture]


#define SetTexture_CurrentPlayer(Texture) \
(_SabaccTable getVariable "ComputerBottom1Player1") setObjectTextureGlobal [1, Texture]; \
(_SabaccTable getVariable "ComputerBottom1Player2") setObjectTextureGlobal [1, Texture]; \
(_SabaccTable getVariable "ComputerBottom1Player3") setObjectTextureGlobal [1, Texture]; \
(_SabaccTable getVariable "ComputerBottom1Player4") setObjectTextureGlobal [1, Texture]


#define BaseCards \
[ \
	[ \
		["1", 0], \
		["1", 0], \
		["1", 0], \
		["2", 0], \
		["2", 0], \
		["2", 0], \
		["3", 0], \
		["3", 0], \
		["3", 0], \
		["4", 0], \
		["4", 0], \
		["4", 0], \
		["5", 0], \
		["5", 0], \
		["5", 0], \
		["6", 0], \
		["6", 0], \
		["6", 0], \
		["I", 0], \
		["I", 0], \
		["I", 0], \
		["S", 0], \
		["S", 0] \
	], \
	[ \
		["1", 0], \
		["1", 0], \
		["1", 0], \
		["2", 0], \
		["2", 0], \
		["2", 0], \
		["3", 0], \
		["3", 0], \
		["3", 0], \
		["4", 0], \
		["4", 0], \
		["4", 0], \
		["5", 0], \
		["5", 0], \
		["5", 0], \
		["6", 0], \
		["6", 0], \
		["6", 0], \
		["I", 0], \
		["I", 0], \
		["I", 0], \
		["S", 0], \
		["S", 0] \
	] \
]

#define BonusList \
[ \
	"Empty", \
	"Remboursement supplémentaire", \
	"Audit", \
	"Grosse arnaque", \
	"Transaction directe", \
	"Réduction", \
	"Embargo", \
	"Epuisement", \
	"Exhaustion", \
	"Tirage gratuit", \
	"Immunité", \
	"Raid", \
	"Régulation", \
	"Remboursement", \
	"Réévaluation", \
	"Droit spécial", \
	"Fraude comptable" \
]