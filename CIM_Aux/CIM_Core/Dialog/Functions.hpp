class Communication
{
    file = "CIM_Core\Dialog\Communication";
    F(initCommunication)
    F(loadCommunication)
    F(sendCommunication)
    F(updateCommunication)
};

class ATM
{
    file = "CIM_Core\Dialog\ATM";
    F(addMoney)
    F(initATM)
    F(loadATM)
    F(removeMoney)
    F(updateATM)
};

class Perm
{
    file = "CIM_Core\Dialog\Perm";
    F(initPermModifier)
    F(loadPermMenuAdmin)
    F(loadPermMenuCrewman)
    F(loadPermMenuDonator)
    F(loadPermMenuMedecin)
    F(loadPermMenuPilote)
    F(loadPermMenuSapeur)
    F(loadPermMenuZeus)
    F(permUpdate)
};

class Rank
{
    file = "CIM_Core\Dialog\Rank";
    F(initRankModifier)
    F(loadRankMenu)
    F(rankUpdate)
};

class Profil
{
    file = "CIM_Core\Dialog\Profil";
    F(loadProfil)
    F_PostInit(initProfil)
};

class Locker
{
    file = "CIM_Core\Dialog\Locker";
    F(equipmentDetail)
    F(GestPreset)
    F(initGestPreset)
    F(loadGestPreset)
    F(updateGestPreset)
};

class Shield
{
    file = "CIM_Core\Dialog\Shield";
    F(openShield)
    F_PostInit(initShield)
};