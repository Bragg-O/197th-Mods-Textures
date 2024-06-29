#define MedicalItem_197th_XX(name,type,desc) \
    class 197th_Medical_##type## : ACE_##type## { \
		author = [CIM] Bragg;\
        displayName = [197th] ##name##; \
		descriptionShort = ##desc##; \
		picture = \197th_regs\Medical\_ui\##type##_ca.paa; \
		ACE_isMedicalItem = 1; \
	}