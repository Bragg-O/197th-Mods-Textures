#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }


class 442_box4;
class 197th_Supply_Empty: 442_box4 {
    displayName="[197th] Supply (Empty)";
    editorCategory = "197th_Object";
    editorSubcategory = "197th_Supply";
    scope = 2;
    scopecurator = 2;
    author = "197th Compagnie Chimaera";
    maximumLoad = 7000;
    editorPreview = "197th_Object\_EditorPreviews\empty_ca.jpg";
    // Dragging
    ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
    ace_dragging_dragPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1.5, 0])
    ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
    ace_dragging_ignoreWeight = 1; // Ignore weight limitation for dragging (0-no, 1-yes)
    // Carrying
    ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
    ace_dragging_carryPosition[] = {0, 1.2, 0};  // Offset of the model from the body while dragging (same as attachTo) (default: [0, 1, 1])
    ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo) (default: 0)
    ace_dragging_ignoreWeightCarry = 1; // Ignore weight limitation for carrying (0-no, 1-yes)
    // Cargo
    ace_cargo_size = 2;  // Cargo space the object takes
    ace_cargo_canLoad = 1;  // Enables the object to be loaded (1-yes, 0-no)
    ace_cargo_noRename = 0;  // Blocks renaming object (1-blocked, 0-allowed)
    ace_cargo_blockUnloadCarry = 0; // Blocks object from being automatically picked up by player on unload

    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\empty_co.paa"};
        
    class TransportItems {};
        
    class TransportWeapons {};
        
    class TransportMagazines {};
        
    class TransportBackpacks {};
};

class 197th_Supply_Ammo : 197th_Supply_Empty {
    displayName="[197th] Supply (Ammo)";
    author = "197th Compagnie Chimaera";
    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\ammo_co.paa"};
    editorPreview = "197th_Object\_EditorPreviews\ammo_ca.jpg";

    class TransportMagazines {
		MAG_XX(197th_Z6_mag,20);
		MAG_XX(197th_DC17SA_mag,50);
		MAG_XX(197th_DC15X_mag,20);
		MAG_XX(197th_DC15A_mag,50);
		MAG_XX(197th_DC15S_mag,50);
		MAG_XX(197th_DC15_mag,50);
		MAG_XX(1Rnd_HE_Grenade_shell,20);
        MAG_XX(UGL_FlareWhite_F,20);
        MAG_XX(3AS_ThermalDetonator,20);
        MAG_XX(3AS_SmokeWhite,50);
	};
};

class 197th_Supply_Medical : 197th_Supply_Empty {
    displayName="[197th] Supply (Medical)";
    author = "197th Compagnie Chimaera";
    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\medical_co.paa"};
    editorPreview = "197th_Object\_EditorPreviews\medical_ca.jpg";

    class TransportItems {
        ITEM_XX(197th_Medical_epinephrine,15);
        ITEM_XX(197th_Medical_morphine,15);
        ITEM_XX(197th_Medical_painkillers,20);
        ITEM_XX(197th_Medical_packingBandage,200);
        ITEM_XX(197th_Medical_elasticBandage,200);
        ITEM_XX(197th_Medical_quikclot,200);
        ITEM_XX(197th_Medical_splint,50);
        ITEM_XX(ace_tourniquet,50);
        ITEM_XX(197th_Medical_salineIV,50);
        ITEM_XX(197th_Medical_bloodIV,50);
        ITEM_XX(197th_Medical_bloodIV_500,50);
        ITEM_XX(197th_BactaGrenade_Mag,10);
    };
};

class 197th_Supply_Explosive : 197th_Supply_Empty {
    displayName="[197th] Supply (Explosive)";
    author = "197th Compagnie Chimaera";
    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\explosive_co.paa"};
    editorPreview = "197th_Object\_EditorPreviews\explosive_ca.jpg";

    class TransportItems {
        ITEM_XX(197th_Breach_Mag,10);
        ITEM_XX(197th_DemoPack_Mag,5);
        ITEM_XX(197th_DetPack_Mag,20);
        ITEM_XX(APERSMineDispenser_Mag,10);
    };
};

class 197th_Supply_Weapon : 197th_Supply_Empty {
    displayName="[197th] Supply (Weapon)";
    author = "197th Compagnie Chimaera";
    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\weapon_co.paa"};
    editorPreview = "197th_Object\_EditorPreviews\weapon_ca.jpg";

    class TransportWeapons {
        WEAP_XX(197th_DC15X_Regs,2);
        WEAP_XX(197th_DC15A_Regs,10);
        WEAP_XX(197th_DC15S_Regs,10);
        WEAP_XX(197th_DC17SA_Regs,20);
        WEAP_XX(197th_Z6_Regs,3);
    };
};

class 197th_Supply_NVG : 197th_Supply_Empty {
    displayName="[197th] Supply (NVG)";
    author = "197th Compagnie Chimaera";
    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\nvg_co.paa"};
    editorPreview = "197th_Object\_EditorPreviews\nvg_ca.jpg";

    class TransportItems {
        ITEM_XX(197th_NVG,20);
    };
};

class 197th_Supply_ATAA : 197th_Supply_Empty {
    displayName="[197th] Supply (AT/AA)";
    author = "197th Compagnie Chimaera";
    hiddenSelectionsTextures[] = {"197th_Object\Supply\Data\ataa_co.paa"};
    editorPreview = "197th_Object\_EditorPreviews\ataa_ca.jpg";

    class TransportWeapons {
        WEAP_XX(197th_PLX1_Regs,3);
        WEAP_XX(197th_RPS6_Regs,2);
    };
    class TransportMagazines {
        MAG_XX(197th_AT_mag,30);
        MAG_XX(197th_HE_mag,20);
        MAG_XX(197th_AA_mag,10);
    };
};