params ["_object"];

private _listmsg = [
	// ["Nom de l'interactions", "text du message"]
	["Briefing Commandement", "SIGMA est convié sur le pont !"],

	["Briefing Officiers", "ALPHA et DELTA sont appelés en salle de briefing !"],

	["Briefing Général", "Que toutes les troupes se présentent immédiatement en salle de briefing général !"],

	["Alarme de sécurité", "Intrusion détectée ! Que tout le personne se tienne prêt à combattre !"],

	["Évacuation d'urgence", "ALERTE GENERALE ! Que tout le personnel embarqué se dirige vers les capsules de sauvetage immédiatement !"],

	["Situation critique - soins", "Situation critique détectée! Tous les membres du personnel médical doivent se rendre à l'infirmerie tout de suite!"],

	["Situation critique - réparation", "Situation critique détectée! Tous les membres du personnel technique doivent se rendre aux hangars tout de suite!"],

	["Assistance aérienne", "Demande d'assistance aérienne! Tous les pilotes disponibles doivent se préparer à décoller pour une mission de soutien, à l'instant!"],

	["Préparation au combat", "Préparez-vous au combat! Tous les soldats doivent se munir de leur équipement et se rendre sur la ligne de front, sans délai!"],

	["Mission de reconnaissance", "Mission de reconnaissance en cours ! Toutes les équipes de reconnaissance doivent se préparer à partir en mission, immédiatement!"],

	["Réapprovisionnement nécessaire", "Réapprovisionnement nécessaire en munitions et en fournitures médicales! Tous les chefs d'équipe doivent signaler leurs besoins, sans perdre de temps!"],

	["Alerte météo", "Alerte météo! Une tempête approche, tous les membres de l'équipage doivent se préparer à des conditions météorologiques extrêmes !"],

	["Mise en quarantaine", "Mise en quarantaine en cours! Toutes les unités doivent rester à l'écart de la zone affectée et suivre les protocoles de sécurité, immédiatement!"],

	["Déploiement de drones", "Déploiement de drones autorisé! Toutes les équipes accrédités doivent lancer leurs drones et fournir une surveillance aérienne, maintenant!"]
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