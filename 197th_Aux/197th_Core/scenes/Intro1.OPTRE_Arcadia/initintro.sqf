["InitDummy", [worldName,(getPosWorld cam_pos),(getDir cam_pos),0.75,[-9.9163,0],2.35474,30.6255,0,0,1,1,0,1]] call BIS_fnc_camera;

setAperture 100;

setviewdistance 200;

sleep 1;

"colorCorrections" ppEffectAdjust [1,1,0,[0,0,0,0],[0,0,0,0.24],[1,1,1,0],[0.7,0.7,0,0,-0.1,0.4,0.8]]; 
"colorCorrections" ppEffectEnable TRUE; 
"colorCorrections" ppEffectCommit 0;

execVM "mse6.sqf";

execVM "space.sqf";

execVM "hallway1.sqf";
execVM "hallway2.sqf";
execVM "hallway3.sqf";

sleep 1;

setAperture -1;

// Play music
0 fadeMusic 1;
playMusic "theclonewars"; // Play main menu theme
addMusicEventHandler ["MusicStop", {0 fadeMusic 1; playMusic "theclonewars"}]; // Repeat the music