["InitDummy", ["Altis", [8156.27, 14855.8, 0.690178], 80.2483, 0.32, [-3.55106, 0], 0, 110.061, 583.261, 0.300693, 1, 1.00417, -0.00104398, 0.997912]] call BIS_fnc_camera;

showChat false;
enableEnvironment false;
showCinemaBorder false;
showHUD false;
setAperture -1;
setViewDistance 300;

"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0, 0, 0, 0.24], [1, 1, 1, 0], [0.7, 0.7, 0, 0, -0.1, 0.4, 0.8]];
"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectCommit 0;

cutText ["", "BLACK OUT"];
cutText ["", "BLACK IN", 5];

// Play music
0 fadeMusic 1;
playMusic "SW_Sad_Burying_The_Dead_It_s_Over_Now_EPIC_CINEMATIC_VERSION";
addMusicEventHandler ["MusicStop", {
	0 fadeMusic 1;
	playMusic "SW_Sad_Burying_The_Dead_It_s_Over_Now_EPIC_CINEMATIC_VERSION"
}];