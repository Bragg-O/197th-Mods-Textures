class 442_acclamator_4;
class 442_acclamator_5;
class 442_quasar;
class UserTexture_1x2_F;

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