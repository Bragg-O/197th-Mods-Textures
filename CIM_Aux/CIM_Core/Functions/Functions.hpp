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
            F(initBlockArsenal)
            F(initCommunication)
            F(initLoadout)
            F(initRestrictedArsenal)
            F(initSkyLocker)
            F(initUnitTraitEngineer)
            F(initUnitTraitMedic)
            F(onCommunication)
            F(onUnderFire)
            F(switchEarPlugs)
            F_PostInit(initEarPlugs)
        };

        class Dialog_Communication
        {
            file = "CIM_Core\Dialog\Communication";
            F(initDialog1)
            F(loadDialog1)
        };
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
            F(ExtractIngLevel)
            F(ExtractLastView)
            F(ExtractLoadout)
            F(ExtractMedicLevel)
            F(ExtractMoney)
            F(ExtractName)
            F(ExtractPilotLevel)
            F(ExtractDonatorLevel)
            F(ExtractAdminLevel)
            F(ExtractCrewmanLevel)
            F(ExtractFormateur)
        };
        class MySQL_Update
        {
            file = "CIM_Core\Functions\MySQL\fn_Update";
            F(UpdateActualIng)
            F(UpdateActualMedic)
            F(UpdateIngLevel)
            F(UpdateLastView)
            F(UpdateLoadout)
            F(UpdateMedicLevel)
            F(UpdateMoney)
            F(UpdateName)
            F(UpdatePilotLevel)
            F(UpdateDonatorLevel)
            F(UpdateAdminLevel)
            F(UpdateCrewmanLevel)
            F(UpdateFormateur)
        };
        class MySQL_Other
        {
            file = "CIM_Core\Functions\MySQL\fn_Other";
            F(CreateNewPlayer)
            F(PlayerCountForUid)
        };
    };
};