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
    class CIM_197th_Functions
    {
        tag = "CIM";

        class EventHandler
        {
            file = "CIM_Core\Functions\EventHandler";
            F_PostInit(setupEH)
        };

        class AddonScanner
        {
            file = "CIM_Core\Functions\AddonScanner";
            F(initScanner)
            F(onScannerClient)
            F(onScannerServer)
        };

        class Logistics
        {
            file = "CIM_Core\Functions\Logistics";
            F(canFortify)
            F(initGarage)
            F(initPlow)
            F(onLoadLAATC)
            F(onUnLoadLAATC)
            F(initAllVehicleService)
        };

        class Medical
        {
            file = "CIM_Core\Functions\Medical";
            F(checkBactaGrenade)
            F(initHealTerminal)
            F(onBactaGrenade)
            F(onReorientation)
            F(onUseHealTerminal)
        };

        class PlayerScripts
        {
            file = "CIM_Core\Functions\PlayerScripts";
            F(addLoadout)
            F(checkEarPlugs)
            F(initATM)
            F(initBlockArsenal)
            F(initCommunication)
            F(initLoadout)
            F(initRestrictedArsenal)
            F(initSkyLocker)
            F(initUnitTraitEngineer)
            F(initUnitTraitMedic)
            F(initUnitTraitPilot)
            F(onCommunication)
            F(onUnderFire)
            F(switchEarPlugs)
            F(DoNotDisplayForCurators)
            F_PostInit(initEarPlugs)
        };

        #include "..\Dialog\Functions.hpp"
    };

    class MySQL_Database
    {
        tag = "DB";
        class MySQL
        {
            file = "CIM_Core\Functions\MySQL";
            F(asyncCall)
            F(initMySQL)
            F(server_initialization)
            F(initPlayer)
            F(syncPlayer)
            F_PostInit(initSyncPlayer)
        };
        class MySQL_Extract
        {
            file = "CIM_Core\Functions\MySQL\fn_Extract";
            F(ExtractActualIng)
            F(ExtractActualMedic)
            F(ExtractAdminLevel)
            F(ExtractCrewmanLevel)
            F(ExtractDonatorLevel)
            F(ExtractIngLevel)
            F(ExtractLastView)
            F(ExtractLoadout)
            F(ExtractMedicLevel)
            F(ExtractMoney)
            F(ExtractName)
            F(ExtractPilotLevel)
            F(ExtractZeusLevel)
            F(ExtractRankLevel)
        };
        class MySQL_Update
        {
            file = "CIM_Core\Functions\MySQL\fn_Update";
            F(UpdateActualIng)
            F(UpdateActualMedic)
            F(UpdateAdminLevel)
            F(UpdateCrewmanLevel)
            F(UpdateDonatorLevel)
            F(UpdateIngLevel)
            F(UpdateLastView)
            F(UpdateLoadout)
            F(UpdateMedicLevel)
            F(UpdateMoney)
            F(UpdateName)
            F(UpdatePilotLevel)
            F(UpdateZeusLevel)
            F(UpdateRankLevel)
        };
        class MySQL_Other
        {
            file = "CIM_Core\Functions\MySQL\fn_Other";
            F(CreateNewPlayer)
            F(PlayerCountForUid)
            F(GetAllPlayersInfo)
        };
    };
};