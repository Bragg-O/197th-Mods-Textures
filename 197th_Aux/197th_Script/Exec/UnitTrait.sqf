/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_Terminal"];

_ClassNameTerminal = typeOf _Terminal;

switch (true) do {
	case (_ClassNameTerminal == "197th_Terminal_Medical") : {
		_Terminal addAction ["<t color='#58D68D' size='1.5'>Attribuer des autorisations médicales</t>", {
			player setVariable ["ace_medical_medicclass", 2, true];
			player setUnitTrait ["medic", true];
		}, nil, 1.5, false, false, "", 'Player getUnitTrait "Medic" == false'];
		_Terminal addAction ["<t color='#E74C3C' size='1.5'>Supprimer les autorisations médicales</t>", {
			player setVariable ["ace_medical_medicclass", 0, true];
			player setUnitTrait ["medic", false];
		}, nil, 1.5, false, false, "", 'Player getUnitTrait "medic" == true'];
	};
	case (_ClassNameTerminal == "197th_Terminal_Sapeur") : {
		_Terminal addAction ["<t color='#58D68D' size='1.5'>Attribuer des autorisations de sapeur</t>", {
			player setUnitTrait ["engineer", true];
			player setUnitTrait ["explosiveSpecialist", true];
		}, nil, 1.5, false, false, "", 'Player getUnitTrait "engineer" == false'];
		_Terminal addAction ["<t color='#E74C3C' size='1.5'>Supprimer les autorisations de sapeur</t>", {
			player setUnitTrait ["engineer", false];
			player setUnitTrait ["explosiveSpecialist", false];
		}, nil, 1.5, false, false, "", 'Player getUnitTrait "engineer" == true'];
	};
};