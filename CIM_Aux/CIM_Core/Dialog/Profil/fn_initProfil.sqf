if !(isServer) exitWith {};
[] spawn {
	while { true } do {
		_levels = [
			["Cadet", "\CIM_Core\Dialog\Profil\data\cadet_ca.paa"], // 0
			["Trooper", "\CIM_Core\Dialog\Profil\data\trooper_ca.paa"], // 1
			["Vétéran", "\CIM_Core\Dialog\Profil\data\vet_ca.paa"], // 2
			["Caporal", "\CIM_Core\Dialog\Profil\data\caporal_ca.paa"], // 3
			["Sergent", "\CIM_Core\Dialog\Profil\data\sergent_ca.paa"], // 4
			["2nd Lieutenant", "\CIM_Core\Dialog\Profil\data\2ndlieutenant_ca.paa"], // 5
			["1st Lieutenant", "\CIM_Core\Dialog\Profil\data\1stlieutenant_ca.paa"], // 6
			["Capitaine", "\CIM_Core\Dialog\Profil\data\capitaine_ca.paa"]// 7
		];

		{
			_profil = _x getVariable ["profil", 0];
			_profilicon = (_levels select _profil) select 1;
			_action = _x addAction [format ["<img image='%1'/> %2", _profilicon, name _x], {
				params ["_target", "_caller", "_actionId", "_arguments"];
				[_arguments] spawn DIALOG_fnc_loadprofil;
			}, _x, 1.5, false, false, "", '_target != _this'];
			_x setVariable ["CIM_ProfilAction", _action];
		} forEach allPlayers;

		uiSleep 59;

		{
			_x removeAction (_x getVariable ["CIM_ProfilAction", -1]);
		} forEach allPlayers;

		uiSleep 1;
	};
}