    class ls_flag_republic;
    class ls_flag_imp_vertical;
    class ls_flag_imp_horizontal;

    class 197th_Flag : ls_flag_republic {
        displayName= "[197th] Flag";
        editorCategory = "CIM_Objects";
        editorSubcategory = "CIM_Flag";
        scope = 2;
        scopecurator = 2;
        author = "[CIM] Bragg";
        editorPreview = "";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'CIM_Objects\Flag\Data\Horizontal_co.paa'";
        };
    };

    class 197th_FlagVertical : ls_flag_republic {
        scope = 0;
        scopecurator = 0;
        author = "[CIM] Bragg";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture 'CIM_Objects\flag\Data\Vertical_co.paa'";
        };
    };

    class 197th_Banner : 197th_FlagVertical {
        displayName= "[197th] Banner";
        editorCategory = "CIM_Objects";
        editorSubcategory = "CIM_Flag";
        scope = 2;
        scopecurator = 2;
        author = "[CIM] Bragg";
        model = "LS_statics_props\flags\ls_static_flagStandard";
        editorPreview = "";
    };

    class 197th_Flag_Horizontal : ls_flag_imp_horizontal {
        displayName= "[197th] Flag (Horizontal)";
        editorCategory = "CIM_Objects";
        editorSubcategory = "CIM_Flag";
        scope = 2;
        scopecurator = 2;
        author = "[CIM] Bragg";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            "CIM_Objects\Flag\Data\Horizontal_co.paa"
        };
    };

    class 197th_Flag_Vertical : ls_flag_imp_vertical {
        displayName= "[197th] Flag (Vertical)";
        editorCategory = "CIM_Objects";
        editorSubcategory = "CIM_Flag";
        scope = 2;
        scopecurator = 2;
        author = "[CIM] Bragg";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            "CIM_Objects\Flag\Data\Vertical_co.paa"
        };
    };