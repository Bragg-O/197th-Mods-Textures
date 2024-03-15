/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
	
	null = [this, SpawnPadVarName] execVM "197th_Script\Exec\SpawnGarage.sqf";
*/

params ["_Terminal"];

/* --- Cfg list Vehicules --- */
	_CarVehicules = [
		"197th_BARC", 
		"197th_BARCSideCar", 
		"197th_Bison_APC", 
		"197th_Bison_IFV", 
		"197th_Bison_MGS", 
		"197th_ITT", 
		"197th_ITT_Transport", 
		"197th_ITT_Medical", 
		"197th_ITT_Logistic", 
		"197th_RTT", 
		"197th_Saber", 
		"197th_Saber_Super", 
		"197th_Saber_GL", 
		"197th_Saber_Recon", 
		"197th_M12A1_LRV", 
		"197th_M12_APC", 
		"197th_M914_RV", 
		"197th_M12G1_LRV", 
		"197th_M12R_AA", 
		"197th_M813_TT", 
		"197th_M12_LRV", 
		"197th_M12_FAV"
	];
	
	_BoxVehicules = [
		"197th_Supply_Empty", 
		"197th_Supply_Ammo", 
		"197th_Supply_Medical", 
		"197th_Supply_Explosive", 
		"197th_Supply_Weapon", 
		"197th_Supply_NVG", 
		"197th_Supply_ATAA"
	];
	
	_AirVehicules = [
		"197th_ARC170", 
		"197th_LAATC", 
		"197th_LAATI_Mk1", 
		"197th_LAATI_Mk2", 
		"197th_LAATI_Mk1Lights", 
		"197th_LAATI_Mk2Lights", 
		"197th_VWing", 
		"197th_YWing", 
		"197th_Z95"
	];
/* --- END Cfg list Vehicules --- */
	
/* --- SCRIPT --- */
	_ListVehicule = [];
	
	switch (typeOf (_this select 0)) do {
		case "197th_Terminal_Car" : {
			_ListVehicule = _CarVehicules;
		};
		case "197th_Terminal_Supply" : {
			_ListVehicule = _BoxVehicules;
		};
		case "197th_Terminal_Air" : {
			_ListVehicule = _AirVehicules;
		};
	};
	
	_pos = getPosATL (_this select 1);
	_dir = getDir (_this select 1);
	
	_trg = createTrigger ["EmptyDetector", _pos];
	_trg setPosATL _pos;
	_trg setTriggerArea [10, 10, _dir, true, 10];
	
	{
		_VehiculeName = getText(configfile >> "CfgVehicles" >> _x >> "displayName");
		if ("197th" in _VehiculeName) then {
			_VehiculeName = _VehiculeName select [7];
			_VehiculeName = format ["<t size='1.2' color='#27AE60'>[197th]</t><t size='1.2'>%1</t>", _VehiculeName];
		} else {
			_VehiculeName = format ["<t size='1.2'>%1</t>", _VehiculeName];
		};
		_Terminal addAction [
			format ["%1", _VehiculeName], 
			{
				_deleteveh = [];
				_deletevehText = format["<t size='1.2'>Empty</t><br/>"];
				{
					_deletevehclass = typeOf _x;
					        _deletevehname = getText(configfile >> "CfgVehicles" >> _deletevehclass >> "displayName");
					if ("197th" in _deletevehname) then {
						_deletevehname = _deletevehname select [7];
						_deletevehname = format ["<t size='1.2' color='#27AE60'>[197th]</t><t size='1.2'>%1</t>", _deletevehname];
					} else {
						_deletevehname = format ["<t size='1.2'>%1</t>", _deletevehname];
					};
					        _deleteveh pushBack _deletevehname;
					deleteVehicle _x;
				} forEach (vehicles inAreaArray (_this select 3 select 3));
				{
					_deletevehText = "";
					    _deletevehText = _deletevehText + format["<t size='1.2'>%1</t><br/>", _x];
				} forEach _deleteveh;
				hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1", _deletevehText];
				sleep 1;
				_veh = (_this select 3 select 0) createVehicle (_this select 3 select 1);
				_veh setDir (_this select 3 select 2);
				_veh setPosATL (_this select 3 select 1);
				hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1<br/><br/><t size='1.5' color='#F1C40F'>Spawn Vehicle</t><br/>%2", _deletevehText, (_this select 3 select 4)];
			}, 
			[_x, _pos, _dir, _trg, _VehiculeName]
		];
	} forEach _ListVehicule;
	
	_Terminal addAction [
		"<t size='1.2' color='#FF0000'>Delete Vehicles</t>", 
		{
			_deleteveh = [];
			_deletevehText = format["<t size='1.2'>Empty</t><br/>"];
			{
				_deletevehclass = typeOf _x;
				        _deletevehname = getText(configfile >> "CfgVehicles" >> _deletevehclass >> "displayName");
				if ("197th" in _deletevehname) then {
					_deletevehname = _deletevehname select [7];
					_deletevehname = format ["<t size='1.2' color='#27AE60'>[197th]</t><t size='1.2'>%1</t>", _deletevehname];
				} else {
					_deletevehname = format ["<t size='1.2'>%1</t>", _deletevehname];
				};
				        _deleteveh pushBack _deletevehname;
				deleteVehicle _x;
			} forEach (vehicles inAreaArray (_this select 3 select 3));
			{
				_deletevehText = "";
				    _deletevehText = _deletevehText + format["<t size='1.2'>%1</t><br/>", _x];
			} forEach _deleteveh;
			hint parseText format ["<t size='1.5' color='#F1C40F'>Delete Vehicle</t><br/>%1", _deletevehText];
		}, 
		[_x, _pos, _dir, _trg]
	];