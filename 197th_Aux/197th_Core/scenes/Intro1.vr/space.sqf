	_base = getPos g1;

while {true} do {

			_xg1 = 10;
			_yg1 = 50;
			_zg1 = 100;

switch selectRandom [0,1,2,3] do {
	case 0 : {
			for [{ _i = 0 }, { _i < 1500 }, { _i = _i + 1 }] do { 
				g1 setPos [(getPos g1 select 0) + 0.01, getPos g1 select 1, getPos g1 select 2];
				
				_xg1base = _xg1;
				_zg1base = _zg1;

				_xg1 = _xg1base + 1;
				_zg1 = _zg1base + 1;

				if ((g1 inArea gonk_0) && (random 1 > 0.85)) then {
					playSound3D [getMissionPath "gonk_1.ogg", g1, true, getPosASL g1, 0.5];
				};

				if ((g1 inArea gonk_1) && (random 1 > 0.85)) then {
					playSound3D [getMissionPath "gonk_1.ogg", g1, true, getPosASL g1, 0.5];
				};

				if ((g1 inArea gonk_2) && (random 1 > 0.85)) then {
					playSound3D [getMissionPath "gonk_1.ogg", g1, true, getPosASL g1, 0.5];
				};

				[g1, [_xg1,_yg1,_zg1]] call BIS_fnc_setObjectRotation;

				sleep 0.01;
			};
			g1 setPos _base;
	};
	case 1 : {
			for [{ _i = 0 }, { _i < 1500 }, { _i = _i + 1 }] do { 
				g2 setPos [(getPos g2 select 0) + 0.01, getPos g2 select 1, getPos g2 select 2];

				_xg1base = _xg1;
				_zg1base = _zg1;

				_xg1 = _xg1base + 1;
				_zg1 = _zg1base + 1;

				[g2, [_xg1,_yg1,_zg1]] call BIS_fnc_setObjectRotation;

				sleep 0.01;
			};
			g2 setPos _base;
	};
	case 2 : {
			for [{ _i = 0 }, { _i < 1500 }, { _i = _i + 1 }] do { 
				g3 setPos [(getPos g3 select 0) + 0.01, getPos g3 select 1, getPos g3 select 2];
				
				_xg1base = _xg1;
				_zg1base = _zg1;

				_xg1 = _xg1base + 1;
				_zg1 = _zg1base + 1;

				[g3, [_xg1,_yg1,_zg1]] call BIS_fnc_setObjectRotation;

				sleep 0.01;
			};
			g3 setPos _base;
	};
	case 3 : {
			for [{ _i = 0 }, { _i < 1500 }, { _i = _i + 1 }] do { 
				g4 setPos [(getPos g4 select 0) + 0.01, getPos g4 select 1, getPos g4 select 2];
				
				_xg1base = _xg1;
				_zg1base = _zg1;

				_xg1 = _xg1base + 1;
				_zg1 = _zg1base + 1;

				[g4, [_xg1,_yg1,_zg1]] call BIS_fnc_setObjectRotation;

				if ((g4 inArea gonk_0) && (random 1 > 0.9)) then {
					playSound3D [getMissionPath "b1_1.ogg", g1, true, getPosASL g1, 0.5];
				};

				if ((g4 inArea gonk_1) && (random 1 > 0.9)) then {
					playSound3D [getMissionPath "b1_1.ogg", g1, true, getPosASL g1, 0.5];
				};

				if ((g4 inArea gonk_2) && (random 1 > 0.9)) then {
					playSound3D [getMissionPath "b1_1.ogg", g1, true, getPosASL g1, 0.5];
				};

				sleep 0.01;
			};
			g4 setPos _base;
			};
		};
	};