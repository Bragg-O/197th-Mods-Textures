fn_menulight = {
	params ["_red", "_white", "_lamp"];
	_lightred = "#lightpoint" createVehicleLocal (getPosATL _lamp);
	_lightred setLightBrightness 0.1;
	_lightred setLightAmbient [0.5, 0, 0];
	_lightred setLightColor [0.5, 0, 0];
	_lightred lightAttachObject [_lamp, [0, 0, 0]];
	while { true } do {
		for [{
			_i = 0
		}, {
			_i < selectRandom [1, 2, 3, 4]
		}, {
			_i = _i + 1
		}] do {
		_white hideObjectGlobal false;
		_red hideObjectGlobal true;
		_light = "#lightpoint" createVehicleLocal (getPosATL _lamp);
		_light setLightBrightness 0.1;
		_light setLightAmbient [0.5, 0.5, 0.5];
		_light setLightColor [0.5, 0.5, 0.5];
		_light lightAttachObject [_lamp, [0, 0, 0]];
		deleteVehicle _lightred;
		sleep 0.2;
		deleteVehicle _light;
		_lightred = "#lightpoint" createVehicleLocal (getPosATL _lamp);
		_lightred setLightBrightness 0.1;
		_lightred setLightAmbient [0.5, 0, 0];
		_lightred setLightColor [0.5, 0, 0];
		_lightred lightAttachObject [_lamp, [0, 0, 0]];
		_white hideObjectGlobal true;
		_red hideObjectGlobal false;
	};
	sleep random 10;
};
};

fn_r14 = {
	while { true } do {
		sleep random [2, 10, 20];
		_rotation = random [50, 100, 200];
		for "_i" from 0 to _rotation do {
			_m1dir = getDir m1 + 1;
			m1 setDir _m1dir;
			sleep (random [0.008, 0.01, 0.02]);
		};

		sleep 1;

		playSound3D [selectRandom ["\197th_Core\data\r14_1.ogg", "\197th_Core\data\r14_2.ogg", "\197th_Core\data\r14_3.ogg"], m1, true, getPosATL m1, 2];

		for "_j" from 1 to (random [2, 3, 4]) do {
			for "_k" from 0 to 10 do {
				_m1dir = getDir m1 + 2;
				m1 setDir _m1dir;
				sleep (random [0.008, 0.01, 0.02]);
			};
			for "_k" from 0 to 10 do {
				_m1dir = getDir m1 - 2;
				m1 setDir _m1dir;
				sleep (random [0.008, 0.01, 0.02]);
			};
		};

		sleep 1;

		for "_i" from 0 to _rotation do {
			_m1dir = getDir m1 - 1;
			m1 setDir _m1dir;
			sleep (random [0.008, 0.01, 0.02]);
		};
	};
};

fn_spaceanim = {
	_base = getPos g1;
	while { true } do {
		_xg1 = 10;
		_yg1 = 50;
		_zg1 = 100;

		switch selectRandom [0, 1, 2, 3] do {
			case 0 : {
				for "_i" from 0 to 1500 do {
					g1 setPos [(getPos g1 select 0) + 0.01, getPos g1 select 1, getPos g1 select 2];

					_xg1base = _xg1;
					_zg1base = _zg1;

					_xg1 = _xg1base + 1;
					_zg1 = _zg1base + 1;

					if ((g1 inArea gonk_0) && (random 1 > 0.85)) then {
						playSound3D [getMissionPath "\197th_Core\data\gonk_1.ogg", g1, true, getPosASL g1, 0.5];
					};

					if ((g1 inArea gonk_1) && (random 1 > 0.85)) then {
						playSound3D [getMissionPath "\197th_Core\data\gonk_1.ogg", g1, true, getPosASL g1, 0.5];
					};

					if ((g1 inArea gonk_2) && (random 1 > 0.85)) then {
						playSound3D [getMissionPath "\197th_Core\data\gonk_1.ogg", g1, true, getPosASL g1, 0.5];
					};

					[g1, [_xg1, _yg1, _zg1]] call BIS_fnc_setObjectRotation;

					sleep 0.01;
				};
				g1 setPos _base;
			};
			case 1 : {
				for "_i" from 0 to 1500 do {
					g2 setPos [(getPos g2 select 0) + 0.01, getPos g2 select 1, getPos g2 select 2];

					_xg1base = _xg1;
					_zg1base = _zg1;

					_xg1 = _xg1base + 1;
					_zg1 = _zg1base + 1;

					[g2, [_xg1, _yg1, _zg1]] call BIS_fnc_setObjectRotation;

					sleep 0.01;
				};
				g2 setPos _base;
			};
			case 2 : {
				for "_i" from 0 to 1500 do {
					g3 setPos [(getPos g3 select 0) + 0.01, getPos g3 select 1, getPos g3 select 2];

					_xg1base = _xg1;
					_zg1base = _zg1;

					_xg1 = _xg1base + 1;
					_zg1 = _zg1base + 1;

					[g3, [_xg1, _yg1, _zg1]] call BIS_fnc_setObjectRotation;

					sleep 0.01;
				};
				g3 setPos _base;
			};
			case 3 : {
				for "_i" from 0 to 1500 do {
					g4 setPos [(getPos g4 select 0) + 0.01, getPos g4 select 1, getPos g4 select 2];

					_xg1base = _xg1;
					_zg1base = _zg1;

					_xg1 = _xg1base + 1;
					_zg1 = _zg1base + 1;

					[g4, [_xg1, _yg1, _zg1]] call BIS_fnc_setObjectRotation;

					if ((g4 inArea gonk_0) && (random 1 > 0.9)) then {
						playSound3D [getMissionPath "\197th_Core\data\b1_1.ogg", g1, true, getPosASL g1, 0.5];
					};

					if ((g4 inArea gonk_1) && (random 1 > 0.9)) then {
						playSound3D [getMissionPath "\197th_Core\data\b1_1.ogg", g1, true, getPosASL g1, 0.5];
					};

					if ((g4 inArea gonk_2) && (random 1 > 0.9)) then {
						playSound3D [getMissionPath "\197th_Core\data\b1_1.ogg", g1, true, getPosASL g1, 0.5];
					};

					sleep 0.01;
				};
				g4 setPos _base;
			};
		};
	};
};

["InitDummy", [worldName, (getPosATL cam_pos), (getDir cam_pos), 0.75, [-9.9163, 0], 2.35474, 30.6255, 0, 0, 1, 1, 0, 1]] call BIS_fnc_camera;

showChat false;
enableEnvironment false;
showCinemaBorder false;
showHUD false;
setAperture -1;
setViewDistance 200;

"colorCorrections" ppEffectAdjust [1, 1, 0, [0, 0, 0, 0], [0, 0, 0, 0.24], [1, 1, 1, 0], [0.7, 0.7, 0, 0, -0.1, 0.4, 0.8]];
"colorCorrections" ppEffectEnable true;
"colorCorrections" ppEffectCommit 0;

[r_1, b_1, l_1] spawn fn_menulight;
[r_2, b_2, l_2] spawn fn_menulight;
[r_3, b_3, l_3] spawn fn_menulight;

[] spawn fn_r14;

[] spawn fn_spaceanim;

cutText ["", "BLACK OUT"];
cutText ["", "BLACK IN", 5];

0 fadeMusic 1;
playMusic "SW_Epic_Republic_Clone_Army_x_Droid_Army_March_EPIC_VERSION_Jedi_Temple_Order_66_Theme_Mix";
addMusicEventHandler ["MusicStop", {
	0 fadeMusic 1;
	playMusic "SW_Epic_Republic_Clone_Army_x_Droid_Army_March_EPIC_VERSION_Jedi_Temple_Order_66_Theme_Mix"
}];