if !(isDedicated) exitWith {
	diag_log "CIM - need to be on Serveur!";
};

if !(isServer) exitWith {
	diag_log "CIM - need to be on Serveur!";
};

getDayOfWeek = {
	private _time = systemTime;
	private _year = _time select 0;
	private _month = _time select 1;
	private _day = _time select 2;

	private _dayOfWeek = (_day + floor(2.6 * ((_month + 9) % 12 + 1) - 0.2) + _year + floor(_year / 4) - floor(_year / 100) + floor(_year / 400)) mod 7;

	_dayOfWeek
};

_dayOfWeek = call getDayOfWeek;

[_dayOfWeek] spawn {
	params ["_dayOfWeek"];
	while { _dayOfWeek == 6 } do {
		systemTime params ["_year", "_month", "_day", "_hour", "_minute", "_second", "_millisecond"];

		if (_hour == 22 && _minute == 30) exitWith {
			{
				private _money = _x getVariable ["CIM_Money", 0];

				private _donatorLevel = _x getVariable ["CIM_DonatorLevel", 0];

				private _payment = 15;

				switch (_donatorLevel) do {
					case 1: {
						_payment = 1.34 * _payment;
					};
					case 2: {
						_payment = 1.67 * _payment;
					};
					case 3: {
						_payment = 2 * _payment;
					};
					default {
						_payment = 1 * _payment;
					};
				};

				_money = ceil (_money + _payment);

				[getPlayerUID _x, _money] remoteExec ["DB_fnc_UpdateMoney", 2];
			} forEach allPlayers;

			diag_log "CIM - AutoPayment - Payment done";

			"Vos soldes ont été crédités." remoteExec ["systemChat"];
		};

		uiSleep 45;
	};
};