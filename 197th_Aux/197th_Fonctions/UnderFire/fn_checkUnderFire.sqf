/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator. Se script vérifie en permanence la présence d'objets "BulletBase" à proximité du joueur. Si des objets sont trouvés à moins de 50 mètres, la caméra du joueur est basculée en mode "INTERNAL".
	    
	    Website: [www.197th.fr]
*/
params ["_unit"];

waitUntil {
	isPlayer _unit
};

while { isPlayer _unit } do {
	while { player distance (player findNearestEnemy player) < 5000 } do {
		if ((count (nearestObjects [player, ["BulletBase"], 100]) > 0) && (vehicle player == player)) then {
			_handle = [player] spawn CIM_fnc_onUnderFire;
			waitUntil {
				scriptDone _handle
			};
		};
		hintSilent "";
		sleep 0.05;
	};
	sleep 60;
};