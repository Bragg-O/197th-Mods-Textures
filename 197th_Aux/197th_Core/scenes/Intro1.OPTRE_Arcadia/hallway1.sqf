_lightred = "#lightpoint" createVehicleLocal (getPosWorld l_1);
_lightred setLightBrightness 0.1;
_lightred setLightAmbient [0.5, 0, 0];
_lightred setLightColor [0.5, 0, 0];
_lightred lightAttachObject [l_1, [0,0,0]];

while {true} do {
	for [{ _i = 0 }, { _i < selectrandom [1,2,3,4] }, { _i = _i + 1 }] do { 
		b_1 hideObjectGlobal false;
		r_1 hideObjectGlobal true;
		_light = "#lightpoint" createVehicleLocal (getPosWorld l_1);
		_light setLightBrightness 0.1;
		_light setLightAmbient [0.5, 0.5, 0.5];
		_light setLightColor [0.5, 0.5, 0.5];
		_light lightAttachObject [l_1, [0,0,0]];
		deleteVehicle _lightred;
		sleep 0.2;
		deleteVehicle _light;
		_lightred = "#lightpoint" createVehicleLocal (getPosWorld l_1);
		_lightred setLightBrightness 0.1;
		_lightred setLightAmbient [0.5, 0, 0];
		_lightred setLightColor [0.5, 0, 0];
		_lightred lightAttachObject [l_1, [0,0,0]];
		b_1 hideObjectGlobal true;
		r_1 hideObjectGlobal false;
	};
sleep random 10;
};