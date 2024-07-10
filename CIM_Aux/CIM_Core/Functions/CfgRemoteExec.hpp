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
        F(DB_fnc_extractPlayer, SERVER)
        F(DB_fnc_newPlayer, SERVER)
        F(DB_fnc_updatePlayer, SERVER)

        /* Functions for everyone */
        F(DB_fnc_initMySQL, ANYONE)
        F(CIM_fnc_onCommunication, ANYONE)
    };
};