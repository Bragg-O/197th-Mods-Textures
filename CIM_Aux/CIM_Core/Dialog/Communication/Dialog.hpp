class CIM_Dialog1
{
    idd = -1;
    movingEnable = false;
    controlsBackground[] = {Background};
    objects[] = {};
    controls[] = {Title, EditBox, EscapeButton, SubmitButton};

    class Frame : RscText
    {
        idc = -1;
        x = 0.2;
        y = 0.2;
        w = 0.6;
        h = 0.4;
        colorBackground[] = {0.0667, 0.1804, 0.1412, 1};
    };

    class Background : RscText
    {
        idc = -1;
        x = 0.25;                                 // Position X ajustée pour centrer
        y = 0.35;                                 // Position Y ajustée
        w = 0.5;                                  // Largeur ajustée pour être plus longue
        h = 0.2;                                  // Hauteur ajustée pour être plus courte
        colorBackground[] = {0.1, 0.1, 0.1, 0.7}; // Fond principal semi-transparent
    };

    class Title : RscText
    {
        idc = 1000; // ID du titre pour mise à jour dynamique
        text = "";  // Sera mis à jour dynamiquement
        x = 0.25;   // Position X ajustée pour centrer
        y = 0.31;   // Position Y ajustée
        w = 0.5;    // Largeur ajustée pour être plus longue
        h = 0.04;
        sizeEx = 0.05;
        style = 2;                                       // Centré
        colorBackground[] = {0.0667, 0.1804, 0.1412, 1}; // Bande de titre gris foncé
    };

    class EditBox : RscEdit
    {
        idc = 1400;
        x = 0.275; // Position X ajustée pour centrer
        y = 0.4;   // Position Y ajustée
        w = 0.45;  // Largeur ajustée pour être plus longue
        h = 0.04;
        type = 2;
        style = 0x00 + 0x40; // Centré
        font = "PuristaMedium";
        sizeEx = 0.04;
        autocomplete = "";
        colorBackground[] = {0.2, 0.2, 0.2, 1}; // Fond sombre
        colorText[] = {1, 1, 1, 1};
        colorSelection[] = {0.5, 0.5, 0.5, 1}; // Couleur de sélection gris clair
    };

    class EscapeButton : RscButton
    {
        idc = -1;
        text = "Annuler";
        action = "closeDialog 0;";
        x = 0.275; // Position X ajustée pour centrer
        y = 0.5;   // Position Y ajustée
        w = 0.21;  // Largeur ajustée pour correspondre à l'interface étendue
        h = 0.04;
        type = 1;
        style = 0x02; // Texte centré
        font = "PuristaMedium";
        sizeEx = 0.04;
        borderSize = 0; // Pas de bordure
        offsetX = 0;
        offsetY = 0;
        offsetPressedX = 0.002;
        offsetPressedY = 0.002;
        shadow = 2;
        colorBackground[] = {0.5, 0.5, 0.5, 1};                // Fond gris
        colorBackgroundActive[] = {0.0667, 0.1804, 0.1412, 1}; // Fond gris clair lorsqu'activé
        colorText[] = {0, 0, 0, 1};                            // Texte noir
    };

    class SubmitButton : EscapeButton
    {
        idc = 1200;
        text = "Valider";
        action = "closeDialog 0; call CIM_fnc_initDialog1;";
        x = 0.515; // Position X ajustée pour centrer
        y = 0.5;   // Position Y ajustée
        w = 0.21;  // Largeur ajustée pour correspondre à l'interface étendue
        h = 0.04;
    };
};