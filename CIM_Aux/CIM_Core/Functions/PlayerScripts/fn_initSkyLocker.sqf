params ["_locker"];

if (isClass (configFile >> "CIM_SkyLocker" >> str _locker)) then {
	private _lockerOwner = getText (configFile >> "CIM_SkyLocker" >> str _locker >> "owner");
	private _lockerPlayerUID = getText (configFile >> "CIM_SkyLocker" >> str _locker >> "playerUID");
	private _lockerTextures = getArray (configFile >> "CIM_SkyLocker" >> str _locker >> "textures");

	private _textureselect = 0;
	{
		_locker setObjectTextureGlobal [_textureselect, _x];
		_textureselect = _textureselect + 1;
	} forEach _lockerTextures;

	_locker addAction ["Ouvir le panneau de gestion des presets", {
		[] spawn DIALOG_fnc_loadGestPreset;
	}, nil, 1.5, false, false, "", 'player getVariable ["CIM_LockerID", 0] == str _target'];

	_locker addAction [ format ["<t color='#ff0000' size='1'> %1 : Occupé </t>", (str _locker)], {}, nil, 1.5, true, true, "", "true", 5, false, "", ""];
	_locker addAction [ format ["<t color='#ffffff' size='1'> %1 </t>", _lockerOwner], {}, nil, 1.5, true, true, "", "true", 5, false, "", ""];
} else {
	_locker addAction [ format ["<t color='#00ff00' size='1'> %1 : Libre </t>", (str _locker)], {}, nil, 1.5, true, true, "", "true", 5, false, "", ""];
};