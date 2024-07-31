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
            F(createVehForkliftAnimation)
            F(createVehHangarAnimation)
            F(deleteVehHangarAnimation)
            F(initGarage)
            F(initPlow)
            F(onLoadLAATC)
            F(onUnLoadLAATC)
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
    };

    class MySQL_Database
    {
        tag = "DB";
        class MySQL
        {
            file = "CIM_Core\Functions\MySQL";
            F(asyncCall)
            F(extractPlayer)
            F(initMySQL)
            F(newPlayer)
            F(server_initialization)
            F(updatePlayer)
            F(initPlayer)
            F(checkPlayerExists)
            F(syncPlayer)
            F_PostInit(initSyncPlayer)
        };
    };
};