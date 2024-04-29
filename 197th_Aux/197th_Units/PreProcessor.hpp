#define Categories_197th_XX(type,name) \
    class 197th_Categories_##type## { \
        displayName = [197th] ##name##; \
    }


#define Faction_197th_XX(type,name) \
    class 197th_Faction_##type## { \
        displayName = [197th] ##name##; \
    }


#define CfgPatches_XX(Faction,EditorSubcategory,UniqueName) 197th_##Faction##_##EditorSubcategory##_##UniqueName##


#define BlueFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName) \
    class 197th_##Faction##_##EditorSubcategory##_##UniqueName## : 197th_Units { \
		author=197th Compagnie Chimaera; \
        displayName=##DisplayName##; \
        scope=2; \
        scopecurator=2; \
        side=1; \
		editorSubcategory=197th_Categories_##EditorSubcategory##; \
	    faction=197th_Faction_##Faction##; \
	}


#define Civilian_XX(Faction,EditorSubcategory,UniqueName,DisplayName) \
    class 197th_##Faction##_##EditorSubcategory##_##UniqueName## : 197th_Units { \
		author=197th Compagnie Chimaera; \
        displayName=##DisplayName##; \
        scope=2; \
        scopecurator=2; \
        side=3; \
		editorSubcategory=197th_Categories_##EditorSubcategory##; \
	    faction=197th_Faction_##Faction##; \
	}


#define Independent_XX(Faction,EditorSubcategory,UniqueName,DisplayName) \
    class 197th_##Faction##_##EditorSubcategory##_##UniqueName## : 197th_Units { \
        author=197th Compagnie Chimaera; \
        displayName=##DisplayName##; \
        scope=2; \
        scopecurator=2; \
        side=2; \
        editorSubcategory=197th_Categories_##EditorSubcategory##; \
        faction=197th_Faction_##Faction##; \
    }


#define OpFor_XX(Faction,EditorSubcategory,UniqueName,DisplayName) \
    class 197th_##Faction##_##EditorSubcategory##_##UniqueName## : 197th_Units { \
        author=197th Compagnie Chimaera; \
        displayName=##DisplayName##; \
        scope=2; \
        scopecurator=2; \
        side=0; \
        editorSubcategory=197th_Categories_##EditorSubcategory##; \
        faction=197th_Faction_##Faction##; \
    }