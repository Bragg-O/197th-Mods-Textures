params ["_card", "_color"];
private _texte = "";
private _textecolor = "";
if (_color == 0) then {
	_textecolor = "de Sable (SAND)";
} else {
	_textecolor = "de Sang (BLOOD)";
};
switch (_card) do {
	case "I": {
		_texte = format ["%1 %2", "Imposteur", _textecolor];
	};
	case "S": {
		_texte = format ["%1 %2", "Sylop", _textecolor];
	};
	default {
		_texte = format ["%1 %2", _card, _textecolor];
	};
};

_texte