["InitDummy", ["Altis", [11781.3, 15570.5, 0.802696], 132.361, 0.37, [-0.331413, 0], 0, 5.19029, 1158, 1, 1, 0.998956, -0.0688711, 1.144]] call BIS_fnc_camera;

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
playMusic "SW_Epic_Eclipse_Trailer_Music";
addMusicEventHandler ["MusicStop", {
	0 fadeMusic 1;
	playMusic "SW_Epic_Eclipse_Trailer_Music"
}];