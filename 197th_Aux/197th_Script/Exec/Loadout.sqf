/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_unitbox"];

[_unitbox, "GUARD", "FULL"] call BIS_fnc_ambientAnim;
_unitbox disableAI "all";
_unitbox enableSimulation true;
_unitbox enableDynamicSimulation false;
_unitbox allowDamage false;

if (typeOf _unitbox == "197th_Loadout_AA") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\AA\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\AA\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> AA <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\AA\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_ARC") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\ARC\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\ARC\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> ARC <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\ARC\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\ARC\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> ARC <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\ARC\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_ARF") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\ARF\DC15X\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\ARF\DC15X_RADIO\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> ARF / Radioman <t color='#ABB2B9'>[DC-15X]</t>", "<img size='2' image='\197th_Script\Data\Loadout\ARF_RADIO\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\ARF\DC15X\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> ARF <t color='#ABB2B9'>[DC-15X]</t>", "<img size='2' image='\197th_Script\Data\Loadout\ARF\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_AT") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\AT\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\AT\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> AT <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\AT\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Fantassin") then {
	[_unitbox] execVM "197th_Script\Data\Loadout\Fantassin\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Cadet\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Cadet <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Cadet\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Cadet\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Cadet <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Cadet\logo.paa'/>"];

	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Fantassin\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Fantassin <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Fantassin\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Fantassin\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Fantassin <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Fantassin\logo.paa'/>"];

	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Leader\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Leader <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Leader\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Leader\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Leader <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Leader\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Grenadier") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Grenadier\DC15A\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Grenadier\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Grenadier <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Grenadier\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Heavy") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Heavy\Z6\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Heavy\Z6\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Heavy <t color='#ABB2B9'>[Rotary Z-6]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Heavy\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Medecin") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Medecin\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Infirmier\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Infirmier <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Infirmier\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Infirmier\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Infirmier <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Infirmier\logo.paa'/>"];

	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Medecin\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Médecin <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Medecin\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Medecin\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Médecin <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Medecin\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Pilote") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Pilote\DC17SA\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Pilote\DC17SA\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Pilote <t color='#ABB2B9'>[DC-17SA]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Pilote\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Radioman") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Radioman\DC15A\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Radioman\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Radioman <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Radioman\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Sapeur") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Sapeur\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Sapeur\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Sapeur <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Sapeur\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Sapeur\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Sapeur <t color='#ABB2B9'>[DC-15A]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Sapeur\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Shield") then {

	[_unitbox] execVM "197th_Script\Data\Loadout\Shield\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Shield\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#27AE60'>[197th]</t> Shield <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Shield\logo.paa'/>"];
};