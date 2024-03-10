/*
	    Author: NemesisRE modified by Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator. Se script vérifie en permanence la présence d'objets "BulletBase" à proximité du joueur. Si des objets sont trouvés à moins de 50 mètres, la caméra du joueur est basculée en mode "INTERNAL".
	    
	    Website: [www.197th.fr]
*/

waitUntil {!isNull player}; //to prevent MP / JIP issues

NreEarplugsPath = "197th_Script\Init\";

if (isNil "NreEarplugsActive") then {
	NreEarplugsActive = 0;
	1 fadeSound 1;
	_id = player addAction [("<t color=""#00FF00"">" + "Mettre les bouchons d'oreille" +"</t>"),NreEarplugsPath+"Earplugs.sqf","",5,false,true,"",""];
	player setVariable ["NreEarplugsAction", _id];
	// Handle respawn
	player addEventHandler ["Respawn", {
		NreEarplugsActive = 0;
		1 fadeSound 1;
		_id = (_this select 1) getVariable "NreEarplugsAction";
		(_this select 1) removeAction _id;
		_id = (_this select 0) addAction [("<t color=""#00FF00"">" + "Mettre les bouchons d'oreille" +"</t>"),NreEarplugsPath+"Earplugs.sqf","",5,false,true,"",""];
		(_this select 0) setVariable ["NreEarplugsAction", _id];
	}];
	breakto "firstInitFinished";
};

if ( NreEarplugsActive == 1 ) then {
	NreEarplugsActive = 0;
	1 fadeSound 1;
	hint format	[ "Vous avez retire les bouchons d'oreilles !" ];
	_id = player getVariable "NreEarplugsAction";
	player removeAction _id;
	_id = player addAction [("<t color=""#00FF00"">" + "Mettre les bouchons d'oreille"  +"</t>"),NreEarplugsPath+"Earplugs.sqf","",5,false,true,"",""];
	player setVariable ["NreEarplugsAction", _id];
} else {
	NreEarplugsActive = 1;
	1 fadeSound 0.4;
	hint format	[ "Vous avez mis les bouchons d'oreille" ];
	_id = player getVariable "NreEarplugsAction";
	player removeAction _id;
	_id = player addAction [("<t color=""#FF0000"">" + "Retirer les bouchons d'oreilles" +"</t>"),NreEarplugsPath+"Earplugs.sqf","",5,false,true,"",""];
	player setVariable ["NreEarplugsAction", _id];
};

scopename "firstInitFinished";