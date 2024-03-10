while {true} do {
	for [{ _i = 0 }, { _i < selectrandom [1,4,8,10] }, { _i = _i + 1 }] do { 
		b_1 hideObjectGlobal false;
		r_1 hideObjectGlobal true;
		sleep random 0.1;
		b_1 hideObjectGlobal true;
		r_1 hideObjectGlobal false;
	};
sleep 10;
};