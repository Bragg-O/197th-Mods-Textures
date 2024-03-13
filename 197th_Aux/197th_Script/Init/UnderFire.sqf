/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator. Se script vérifie en permanence la présence d'objets "BulletBase" à proximité du joueur. Si des objets sont trouvés à moins de 50 mètres, la caméra du joueur est basculée en mode "INTERNAL".
	    
	    Website: [www.197th.fr]
*/

while {hasInterface} do {
    if (player distance (player findNearestEnemy player) < 5000) then {
        if ((count (nearestObjects [player, ["BulletBase"], 50]) > 0) && (vehicle player == player)) then {
            for [{ _i = 0 }, { _i < 120 }, { _i = _i + 1 }] do {
                if (vehicle player != player) then {_i = 120;};
                if (player in cameraOn && cameraView == "External") then {
                    hint parseText format["<img size='2' image='\197th_Script\Data\waves.paa'/><br/>Communication entrante de %1<br/><t color='#FB0000' size='1.5'> Reste concentré soldat !</t>",name (leader group player)];
                    player switchCamera "INTERNAL";
                };
                sleep 0.5;
            };
            hintSilent "";
        };
        sleep 0.05;
    };
    sleep 30;
};