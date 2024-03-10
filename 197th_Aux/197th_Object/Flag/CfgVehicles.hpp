    class ls_flag_republic;
    class ls_flag_imp_vertical;
    class ls_flag_imp_horizontal;

    class 197th_Flag : ls_flag_republic {
        displayName="[197th] Flag";
        editorCategory = "197th_Object";
        editorSubcategory = "197th_Flag";
        scope = 2;
        scopecurator = 2;
        author = "197th Compagnie Chimaera";
        editorPreview = "";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '197th_Object\Flag\Data\Horizontal_co.paa'";
        };
    };

    class 197th_FlagVertical : ls_flag_republic {
        scope = 0;
        scopecurator = 0;
        author = "197th Compagnie Chimaera";
        class EventHandlers {
            init = "(_this select 0) setFlagTexture '197th_Object\flag\Data\Vertical_co.paa'";
        };
    };

    class 197th_Banner : 197th_FlagVertical {
        displayName="[197th] Banner";
        editorCategory = "197th_Object";
        editorSubcategory = "197th_Flag";
        scope = 2;
        scopecurator = 2;
        author = "197th Compagnie Chimaera";
        model = "LS_statics_props\flags\ls_static_flagStandard";
        editorPreview = "";
    };

    class 197th_Flag_Horizontal : ls_flag_imp_horizontal {
        displayName="[197th] Flag (Horizontal)";
        editorCategory = "197th_Object";
        editorSubcategory = "197th_Flag";
        scope = 2;
        scopecurator = 2;
        author = "197th Compagnie Chimaera";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            "197th_Object\Flag\Data\Horizontal_co.paa"
        };
    };

    class 197th_Flag_Vertical : ls_flag_imp_vertical {
        displayName="[197th] Flag (Vertical)";
        editorCategory = "197th_Object";
        editorSubcategory = "197th_Flag";
        scope = 2;
        scopecurator = 2;
        author = "197th Compagnie Chimaera";
        editorPreview = "";
        hiddenSelectionsTextures[] = {
            "197th_Object\Flag\Data\Vertical_co.paa"
        };
    };