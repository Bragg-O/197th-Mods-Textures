class CIM_Dialog3
{
    idd = -1;
    movingEnable = false;
    controlsBackground[] = {Background};
    objects[] = {};
    controls[] = {Title, PlayerCombo, EditBox, EscapeButton, SubmitButton};

    class Background : RscText
    {
        idc = -1;
        x = 0.25;
        y = 0.25;
        w = 0.5;
        h = 0.25;
        colorBackground[] = {0.1, 0.1, 0.1, 0.7};
    };

    class Title : RscText
    {
        idc = 3000;
        text = "";
        x = 0.25;
        y = 0.25;
        w = 0.5;
        h = 0.04;
        sizeEx = 0.05;
        style = 2;
        colorBackground[] = {0.0667, 0.1804, 0.1412, 1};
    };

    class PlayerCombo : RscCombo
    {
        idc = 3100;
        x = 0.275;
        y = 0.31;
        w = 0.45;
        h = 0.04;
    };

    class EditBox : RscEdit
    {
        idc = 3400;
        x = 0.275;
        y = 0.37;
        w = 0.45;
        h = 0.04;
        type = 2;
        style = 0x00 + 0x40;
        font = "PuristaMedium";
        sizeEx = 0.04;
        autocomplete = "";
        colorBackground[] = {0.2, 0.2, 0.2, 1};
        colorText[] = {1, 1, 1, 1};
        colorSelection[] = {0.5, 0.5, 0.5, 1};
        onKeyDown = "if !((_this select 1) in [48,49,50,51,52,53,54,55,56,57,8,13]) then {true} else {false};";
    };

    class EscapeButton : RscButton
    {
        idc = -1;
        text = "Annuler";
        action = "closeDialog 0;";
        x = 0.275;
        y = 0.43;
        w = 0.21;
        h = 0.04;
        type = 1;
        style = 0x02;
        font = "PuristaMedium";
        sizeEx = 0.04;
        borderSize = 0;
        offsetX = 0;
        offsetY = 0;
        offsetPressedX = 0.002;
        offsetPressedY = 0.002;
        shadow = 2;
        colorBackground[] = {0.5, 0.5, 0.5, 1};
        colorBackgroundActive[] = {0.0667, 0.1804, 0.1412, 1};
        colorText[] = {0, 0, 0, 1};
    };

    class SubmitButton : EscapeButton
    {
        idc = 3200;
        text = "Valider";
        action = "closeDialog 0; call CIM_fnc_initDialog3;";
        x = 0.515;
        y = 0.43;
        w = 0.21;
        h = 0.04;
    };
};
