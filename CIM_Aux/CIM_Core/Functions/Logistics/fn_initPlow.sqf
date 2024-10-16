params ["_target"];

_target addAction [
	"<t color=""#00FF00""> Down Plow </t>", {
		params ["_target", "_caller", "_ID", "_args"];
		_target animateSource ["MovePlow", 1];
		_target setCruiseControl [5, false];
	}, [], -2, false, true, "", "(driver _target) isEqualTo _this && _target animationSourcePhase 'MovePlow' isEqualTo 0", 5
];
_target addAction [
	"<t color=""#FF0000""> Up Plow </t>", {
		params ["_target", "_caller", "_ID", "_args"];
		_target animateSource ["MovePlow", 0];
		_target setCruiseControl [0, false];
	}, [], -2, false, true, "", "(driver _target) isEqualTo _this && _target animationSourcePhase 'MovePlow' isEqualTo 1", 5
];

_target addEventHandler ["explosion", {
	params ["_target", "_damage"];
	if (_target animationSourcePhase 'MovePlow' isEqualTo 1 && (_target getHitPointDamage "hitengine")<0.9) then {
		private _oldDamage = (damage _target)-_damage;
		private _newDamage = _oldDamage+(_damage)*0.1;
		{
			_target setHitPointDamage [_x, _newDamage];
			nil
			} count [
				"hitengine", "hitrtrack", "hitltrack", "#light_l", "#light_l_flare", "#light_r", "#light_r_flare"
			];
			nil
		};
	}];

_target addEventHandler ["EpeContactStart", {
	params ["_target", "_object", "_selection1", "_selection2", "_force"];
	if (_target animationSourcePhase 'MovePlow' isEqualTo 1) then {
		private _craterTypes = ["craterlong_small", "craterlong", "crater", "ace_envelope_small", "ace_envelope_big", "grad_envelope_short", "grad_envelope_vehicle"];
		private _factor = 20;
		if (toLower (typeOf _object) in _craterTypes) then {
			_object setPos [getPos _object select 0, getPos _object select 1, (getPos _object select 2) - (1/_factor)];
			if (getPos _object select 2 < - 0.5) then {
				deleteVehicle _object;
			};
		};
	};
}];