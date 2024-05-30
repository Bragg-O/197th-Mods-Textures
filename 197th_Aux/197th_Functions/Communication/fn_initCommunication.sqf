/*
	Author: Bragg
	
	Description:
	This code snippet defines a function that adds an action to an object in a game.
	
	Parameter(s):
	0: Object
	
	Example:
	[(_this select 0)] call CIM_fnc_initCommunication;
*/

params ["_object"];

private _listmsg = [
	    // ["Nom de l'interactions", "text du message"]
	["Officiers, sur le pont!", "Tous les officiers doivent se rendre sur le pont, immédiatement!"],
	["Rassemblement général!", "Tout le personnel disponible doit se rendre dans la salle de briefing principale, maintenant!"],
	["Alarme de sécurité", "Intrusion détectée! Tous les agents de sécurité doivent se rendre à leur poste, en vitesse!"],
	["Évacuation d'urgence", "Ceci est une alerte d'évacuation d'urgence! Tous les membres de l'équipage doivent se diriger vers les capsules de sauvetage, sans délai!"],
	["Recherche et sauvetage", "Opération de recherche et de sauvetage en cours! Toutes les équipes de secours doivent se préparer à partir en mission, sans attendre!"],
	["Situation critique", "Situation critique détectée! Tous les membres du personnel médical doivent se rendre à l'infirmerie, tout de suite!"],
	["Blocage de la route", "La route principale est bloquée! Toutes les unités de génie doivent se rendre sur place pour dégager la voie, rapidement!"],
	["Assistance aérienne", "Demande d'assistance aérienne! Tous les pilotes disponibles doivent se préparer à décoller pour une mission de soutien, à l'instant!"],
	["Préparation au combat", "Préparez-vous au combat! Tous les soldats doivent se munir de leur équipement et se rendre sur la ligne de front, sans délai!"],
	["Mission de reconnaissance", "Mission de reconnaissance en cours! Toutes les équipes de reconnaissance doivent se préparer à partir en mission, immédiatement!"],
	["Réapprovisionnement nécessaire", "Réapprovisionnement nécessaire en munitions et en fournitures médicales! Tous les chefs d'équipe doivent signaler leurs besoins, sans perdre de temps!"],
	["Situation d'urgence médicale", "Situation d'urgence médicale détectée! Tous les médecins et les infirmiers doivent se rendre à l'infirmerie pour fournir une assistance médicale, sans délai!"],
	["Opération d'extraction", "Opération d'extraction en cours! Toutes les équipes d'extraction doivent se préparer à récupérer les VIP et à les ramener en sécurité, rapidement!"],
	["Alerte météo", "Alerte météo! Une tempête approche, tous les membres de l'équipage doivent se préparer à des conditions météorologiques extrêmes, immédiatement!"],
	["Confirmation de la cible", "Confirmation de la cible! Tous les tireurs d'élite doivent se positionner et être prêts à engager les cibles désignées, sans attendre!"],
	["Blessé en cours", "Blessé en cours! Tous les membres du personnel médical doivent se rendre sur place pour fournir une assistance médicale immédiate, rapidement!"],
	["Sécurité du périmètre", "Sécurité du périmètre requise! Toutes les unités de sécurité doivent se déployer pour sécuriser la zone, maintenant!"],
	["Renforts en route", "Renforts en route! Toutes les unités doivent maintenir leur position et attendre l'arrivée des renforts, sans tarder!"],
	["Exécution de la mission", "Exécution de la mission en cours! Toutes les unités doivent suivre les ordres et accomplir leurs objectifs assignés, rapidement!"],
	["Repérage ennemi", "Repérage ennemi! Toutes les unités doivent rester en alerte et se préparer à engager l'ennemi, sans délai!"],
	["Feu ami", "Feu ami détecté! Toutes les unités doivent vérifier leurs cibles avant d'ouvrir le feu pour éviter les pertes accidentelles, immédiatement!"],
	["Évacuation médicale", "Évacuation médicale en cours! Toutes les équipes médicales doivent se préparer à transporter les blessés vers la zone d'évacuation, sans tarder!"],
	["Mise en quarantaine", "Mise en quarantaine en cours! Toutes les unités doivent rester à l'écart de la zone affectée et suivre les protocoles de sécurité, immédiatement!"],
	["Déploiement de drones", "Déploiement de drones autorisé! Toutes les équipes de drone doivent lancer leurs drones et fournir une surveillance aérienne, maintenant!"],
	["Dégagement de zone", "Dégagement de zone en cours! Toutes les unités doivent sécuriser la zone et éliminer toute menace présente, immédiatement!"],
	["Intervention tactique", "Intervention tactique en cours! Toutes les équipes d'intervention rapide doivent se préparer à intervenir selon les besoins, rapidement!"],
	["Protection du convoi", "Protection du convoi en cours! Toutes les unités doivent former un cordon de sécurité autour du convoi et se préparer à repousser toute attaque, immédiatement!"],
	["Soutien aérien rapproché", "Demande de soutien aérien rapproché! Tous les pilotes de support aérien doivent se préparer à fournir un appui feu à proximité des troupes au sol, sans délai!"],
	["Neutralisation de la menace", "Neutralisation de la menace en cours! Toutes les unités doivent se coordonner pour éliminer les cibles hostiles et sécuriser la zone, rapidement!"],
	["Établissement de périmètre", "Établissement de périmètre en cours! Toutes les unités doivent se déployer et sécuriser la zone désignée comme périmètre, sans tarder!"],
	["Protocole de sécurité", "Activation du protocole de sécurité! Toutes les unités doivent suivre les procédures de sécurité et se préparer à une éventuelle attaque ennemie, immédiatement!"],
	["Identification des civils", "Identification des civils en cours! Toutes les unités doivent veiller à ne pas engager les civils et à les aider en cas de besoin, sans délai!"]
];

_object addAction [ "<t color='#ffffff' size='1'> Envoyer un message : Personnaliser</t>", {
	["HoloCom. - Envoyer un message"] call CIM_fnc_LoadDialog1;
}, nil, 1.5, true, true, "", "true", 5, false, "", ""];

{
	[_x select 0, _x select 1] params ["_namelist", "_textlist"];
	_object addAction [ format["<t color='#ffffff' size='1'> Envoyer le message : %1</t", _namelist], {
		params ["_target", "_caller", "_actionId", "_arguments"];
		[_arguments] call CIM_fnc_onCommunication;
	}, _textlist, 1.5, true, true, "", "true", 5, false, "", ""];
} forEach _listmsg;