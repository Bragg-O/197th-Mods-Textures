while {true} do {

sleep random 10;

playSound3D [getMissionPath selectRandom ["mse6_1.ogg","mse6_2.ogg","mse6_3.ogg"], m1, true, getPosASL m1, 2];

private _rotationm1 = random 180;

for [{
	_i = 0
}, {
	_i < 15
}, {
	_i = _i + _rotationm1
}] do {
sleep 0.0008;
m1 setDir ((getDir m1) + 0.5);
};

for [{
	_i = 0
}, {
	_i < 30
}, {
	_i = _i + _rotationm1
}] do {
sleep 0.0008;
m1 setDir ((getDir m1) - 0.5);
};

};