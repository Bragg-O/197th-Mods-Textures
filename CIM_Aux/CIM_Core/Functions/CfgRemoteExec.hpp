#define F(NAME, TARGET)          \
    class NAME                   \
    {                            \
        allowedTargets = TARGET; \
    };

#define JIP(NAME, TARGET)        \
    class NAME                   \
    {                            \
        allowedTargets = TARGET; \
        jip = 1;                 \
    };

#define ANYONE 0
#define CLIENT 1
#define SERVER 2

class CfgRemoteExec
{
    class Functions
    {
        mode = 2;
        jip = 1;

        /* Client only functions */

        /* Server only functions */
        F(DB_fnc_server_initialization, SERVER)
        F(DB_fnc_asyncCall, SERVER)
        F(DB_fnc_initPlayer, SERVER)
        F(DB_fnc_syncPlayer, SERVER)
        F(DB_fnc_ExtractActualIng, SERVER)
        F(DB_fnc_ExtractActualMedic, SERVER)
        F(DB_fnc_ExtractAdminLevel, SERVER)
        F(DB_fnc_ExtractArtiste, SERVER)
        F(DB_fnc_ExtractCrewmanLevel, SERVER)
        F(DB_fnc_ExtractDonatorLevel, SERVER)
        F(DB_fnc_ExtractFormateur, SERVER)
        F(DB_fnc_ExtractIngLevel, SERVER)
        F(DB_fnc_ExtractLastView, SERVER)
        F(DB_fnc_ExtractLoadout, SERVER)
        F(DB_fnc_ExtractMedicLevel, SERVER)
        F(DB_fnc_ExtractMoney, SERVER)
        F(DB_fnc_ExtractName, SERVER)
        F(DB_fnc_ExtractPilotLevel, SERVER)
        F(DB_fnc_ExtractRankLevel, SERVER)
        F(DB_fnc_ExtractZeus, SERVER)
        F(DB_fnc_UpdateActualIng, SERVER)
        F(DB_fnc_UpdateActualMedic, SERVER)
        F(DB_fnc_UpdateAdminLevel, SERVER)
        F(DB_fnc_UpdateArtiste, SERVER)
        F(DB_fnc_UpdateCrewmanLevel, SERVER)
        F(DB_fnc_UpdateDonatorLevel, SERVER)
        F(DB_fnc_UpdateFormateur, SERVER)
        F(DB_fnc_UpdateIngLevel, SERVER)
        F(DB_fnc_UpdateLastView, SERVER)
        F(DB_fnc_UpdateLoadout, SERVER)
        F(DB_fnc_UpdateMedicLevel, SERVER)
        F(DB_fnc_UpdateMoney, SERVER)
        F(DB_fnc_UpdateName, SERVER)
        F(DB_fnc_UpdatePilotLevel, SERVER)
        F(DB_fnc_UpdateRankLevel, SERVER)
        F(DB_fnc_UpdateZeus, SERVER)
        F(DB_fnc_CreateNewPlayer, SERVER)
        F(DB_fnc_PlayerCountForUid, SERVER)

        /* Functions for everyone */
        F(DB_fnc_initMySQL, ANYONE)
    };
};