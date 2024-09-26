class 442_acclamator_4;
class 442_acclamator_5;
class 442_quasar;
class UserTexture_1x2_F;
class UserTexture_1x1_F;

class CIM_Orion : 442_acclamator_4
{
	displayName = "[CIM] Orion";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship";
	scope = 2;
	author = "[CIM] Bragg";
	editorPreview = '';
	class EventHandlers
	{
		class CIM_Init
		{
			init = "(_this select 0) setFeatureType 2;"
		};
	};
};

class CIM_Orion_landed : 442_acclamator_5
{
	displayName = "[CIM] Orion (landed)";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship";
	scope = 2;
	author = "[CIM] Bragg";
	editorPreview = '';
	class EventHandlers
	{
		class CIM_Init
		{
			init = "(_this select 0) setFeatureType 2;"
		};
	};
};

class CIM_Pegasus : 442_quasar
{
	displayName = "[CIM] Pegasus";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship";
	scope = 2;
	author = "[CIM] Bragg";
	editorPreview = '';
	class EventHandlers
	{
		class CIM_Init
		{
			init = "(_this select 0) setFeatureType 2;(_this select 0) setObjectTextureGlobal [4, ''];(_this select 0) setObjectTextureGlobal [5, ''];(_this select 0) setObjectTextureGlobal [6, ''];(_this select 0) setObjectTextureGlobal [7, ''];(_this select 0) setObjectTextureGlobal [8, ''];(_this select 0) setObjectTextureGlobal [9, ''];(_this select 0) setObjectTextureGlobal [10, ''];"
		};
	};
};

class CIM_Orion_0 : UserTexture_1x2_F
{
	displayName = "[CIM] Orion (Etage 0)";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship_Signs";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_0.paa"};
	hiddenSelectionsMaterials[] = {
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	editorPreview = "";
	class SimpleObject
	{
		eden = 1;
	};
};

class CIM_Orion_1 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 1)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_1.paa"};
};

class CIM_Orion_2 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 2)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_2.paa"};
};

class CIM_Orion_3 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 3)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_3.paa"};
};

class CIM_Orion_4 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 4)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_4.paa"};
};

class CIM_Orion_5 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 5)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_5"};
};

class CIM_Orion_6 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 6)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_6"};
};

class CIM_Orion_7 : CIM_Orion_0
{
	displayName = "[CIM] Orion (Etage 7)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Orion_7"};
};

class CIM_Pegasus_0 : CIM_Orion_0
{
	displayName = "[CIM] Pegasus (Etage 0)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Pegasus_0.paa"};
};

class CIM_Pegasus_1 : CIM_Pegasus_0
{
	displayName = "[CIM] Pegasus (Etage 1)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Pegasus_1.paa"};
};

class CIM_Pegasus_2 : CIM_Pegasus_0
{
	displayName = "[CIM] Pegasus (Etage 2)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Pegasus_2.paa"};
};

class CIM_Pegasus_3 : CIM_Pegasus_0
{
	displayName = "[CIM] Pegasus (Etage 3)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Pegasus_3.paa"};
};


class CIM_Board_Turbolift : UserTexture_1x1_F
{
	displayName = "[CIM] Board (Turboolift)";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship_Signs";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Turbolift.paa"};
	hiddenSelectionsMaterials[] = {
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
	editorPreview = "";
	class SimpleObject
	{
		eden = 1;
	};
};

class CIM_Board_Armurerie : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Armurerie)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Armurerie.paa"};
};

class CIM_Board_Briefing_officier : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Briefing officier)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Briefing_officier.paa"};
};

class CIM_Board_Briefing_Peloton_Alpha : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Briefing Peloton Alpha)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Briefing_Peloton_Alpha.paa"};
};

class CIM_Board_Briefing_Peloton_DELTA : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Briefing Peloton DELTA)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Briefing_Peloton_DELTA.paa"};
};

class CIM_Board_Bureau_1er_lieutenant : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau 1er lieutenant)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_1er_lieutenant.paa"};
};

class CIM_Board_Bureau_2nd_Lieutenant : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau 2nd lieutenant)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_2nd_Lieutenant.paa"};
};

class CIM_Board_Bureau_capitaine : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau capitaine)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_capitaine.paa"};
};

class CIM_Board_Bureau_Formateur : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau Formateur)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_Formateur.paa"};
};

class CIM_Board_Bureau_Gerant_Formation : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau Gerant Formation)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_Gerant_Formation.paa"};
};

class CIM_Board_Bureau_medecin : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau medecin)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_medecin.paa"};
};

class CIM_Board_Bureau_Sapeur : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Bureau Sapeur)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Bureau_Sapeur.paa"};
};

class CIM_Board_Cantina : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Cantina)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Cantina.paa"};
};

class CIM_Board_Ceremonie : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Ceremonie)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Ceremonie.paa"};
};

class CIM_Board_Dortoir_officier : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Dortoir officier)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Dortoir_officier.paa"};
};

class CIM_Board_Dortoir : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Dortoir)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Dortoir.paa"};
};

class CIM_Board_Groupe_COMFOR : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Groupe COMFOR)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Groupe_COMFOR.paa"};
};

class CIM_Board_Handar_Secondaire : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Handar secondaire)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Handar_Secondaire.paa"};
};

class CIM_Board_Hangar_Principal : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Hangar principal)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Hangar_Principal.paa"};
};

class CIM_Board_medbay : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Medbay)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_medbay.paa"};
};

class CIM_Board_Prison : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Prison)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Prison.paa"};
};

class CIM_Board_Reunion : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Reunion)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Reunion.paa"};
};

class CIM_Board_Salle_unite_Epsilon : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Salle unite Epsilon)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Salle_unite_Epsilon.paa"};
};

class CIM_Board_Salle_unite_omega : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Salle unite omega)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Salle_unite_omega.paa"};
};

class CIM_Board_Stockage_explosif : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Stockage explosif)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Stockage_explosif.paa"};
};

class CIM_Board_Stockage_medicale : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Stockage medicale)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Stockage_medicale.paa"};
};

class CIM_Board_Stockage_Munition : CIM_Board_Turbolift
{
	displayName = "[CIM] Board (Stockage Munition)";
	scope = 2;
	author = "[CIM] Bragg";
	hiddenSelectionsTextures[] = {
		"CIM_Objects\Ship\Data\Board_Stockage_Munition.paa"};
};