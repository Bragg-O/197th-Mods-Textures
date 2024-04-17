#define Loadout_197th_XX(type) \
	class 197th_Loadout_##type## : 197th_Base_Loadout { \
		displayName = [197th] ##type## (Loadout); \
        scope = 2; \
        class EventHandlers { \
            class InitLoadout197th { \
                init = [(_this select 0),'##type##_197th'] spawn CIM_fnc_initLoadouts; \
            }; \
        }; \
	}


#define Variants_197th_XX(type,name) \
    class ##type## { \
        displayName = ##name##; \
    }