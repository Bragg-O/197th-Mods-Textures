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

	[_locker, true] call CIM_fnc_initRestrictedArsenal;
};