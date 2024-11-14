#define F(NAME) \
	class NAME  \
	{           \
	};

#define F_PostInit(NAME) \
	class NAME           \
	{                    \
		postInit = 1     \
	};

class CfgFunctions
{
	class CIM_Sabacc_Functions
	{
		tag = "SABACC";
		class Game
		{
			file = "CIM_Sabacc\Functions\Game";
			F(3rdPersonBlocker)
			F(BonusSelector)
			F(addChips)
			F(calculatePlayerScore)
			F(calculateWinner)
			F(changeJeton)
			F(discardCard)
			F(displayPlayerNumber)
			F(getCardName)
			F(getChips)
			F(getLastCardDiscard)
			F(getNewCard)
			F(getNotEliminatePlayer)
			F(getPlayerCard)
			F(initBonus)
			F(initBonusSelector)
			F(initCard)
			F(initChips)
			F(initNewGame)
			F(initTable)
			F(launchDice)
			F(pickCard)
			F(pickCardDiscard)
			F(removeChips)
			F(revealCards)
			F(revealDice)
			F(setCard)
			F(setChips)
			F(startNewGame)
			F(updateDisplay)
			F(useBonus)
		};
		class MySQL
		{
			file = "CIM_Sabacc\Functions\MySQL";
			F(CreateNewPlayer)
			F(PlayerCountForUid)
			F(extractActualBonus)
			F(extractBonus)
			F(extractJeton)
			F(extractStat)
			F(updateBonus)
			F(updateJeton)
			F(updatePlayer)
			F(updateStat)
		};
	};
};