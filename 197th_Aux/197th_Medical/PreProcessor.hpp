#define MedicalItem_197th_XX(name,type) \
    class 197th_Medical_##type## : ACE_##type## { \
		author = 197th Compagnie Chimaera; \
        displayName = [197th] ##name##; \
		picture = \197th_Medical\_ui\##type##_ca.paa; \
		ACE_isMedicalItem = 1; \
	}