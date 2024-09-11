class 442_acclamator_4;
class 442_acclamator_5;
class 442_quasar;

class CIM_Orion: 442_acclamator_4 {
	displayName = "[CIM] Orion";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship";
	scope = 2;
	scopecurator = 2;
	author = "[CIM] Bragg";
	editorPreview = '';
    class EventHandlers {
		class CIM_Init {
			init = "(_this select 0) setFeatureType 2;"
		};
    };
};

class CIM_Orion_landed: 442_acclamator_5 {
	displayName = "[CIM] Orion (landed)";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship";
	scope = 2;
	scopecurator = 2;
	author = "[CIM] Bragg";
	editorPreview = '';
    class EventHandlers {
		class CIM_Init {
			init = "(_this select 0) setFeatureType 2;"
		};
    };
};

class CIM_Pegasus: 442_quasar {
	displayName = "[CIM] Pegasus";
	editorCategory = "CIM_Objects";
	editorSubcategory = "CIM_Ship";
	scope = 2;
	scopecurator = 2;
	author = "[CIM] Bragg";
	editorPreview = '';
    class EventHandlers {
		class CIM_Init {
			init = "(_this select 0) setFeatureType 2;(_this select 0) setObjectTextureGlobal [4, ''];(_this select 0) setObjectTextureGlobal [5, ''];(_this select 0) setObjectTextureGlobal [6, ''];(_this select 0) setObjectTextureGlobal [7, ''];(_this select 0) setObjectTextureGlobal [8, ''];(_this select 0) setObjectTextureGlobal [9, ''];(_this select 0) setObjectTextureGlobal [10, ''];"
		};
    };
};