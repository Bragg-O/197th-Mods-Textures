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
        F(SABACC_fnc_CreateNewPlayer, SERVER)
        F(SABACC_fnc_PlayerCountForUid, SERVER)
        F(SABACC_fnc_extractActualBonus, SERVER)
        F(SABACC_fnc_extractBonus, SERVER)
        F(SABACC_fnc_extractJeton, SERVER)
        F(SABACC_fnc_extractStat, SERVER)
        F(SABACC_fnc_updateBonus, SERVER)
        F(SABACC_fnc_updateJeton, SERVER)
        F(SABACC_fnc_updatePlayer, SERVER)
        F(SABACC_fnc_updateStat, SERVER)

        /* Functions for everyone */
    };
};