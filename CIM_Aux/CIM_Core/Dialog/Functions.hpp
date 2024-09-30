class Dialog_Communication
{
    file = "CIM_Core\Dialog\Communication";
    F(initDialog1)
    F(loadDialog1)
};

class Dialog_ATM_Add
{
    file = "CIM_Core\Dialog\ATM_Add";
    F(initDialog2)
    F(loadDialog2)
};

class Dialog_ATM_Sou
{
    file = "CIM_Core\Dialog\ATM_Sou";
    F(initDialog3)
    F(loadDialog3)
};

class Dialog_Perm
{
    file = "CIM_Core\Dialog\Perm";
	F_PostInit(fn_initPermModifier)
	F(permUpdate)
	F(loadAdmin)
	F(loadCrewman)
	F(loadDonator)
	F(loadMedecin)
	F(loadPilote)
	F(loadSapeur)
	F(loadZeus)
};