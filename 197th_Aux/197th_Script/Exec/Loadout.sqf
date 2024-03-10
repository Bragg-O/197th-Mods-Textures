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

if (typeOf _unitbox == "197th_Loadout_AA") then {};
if (typeOf _unitbox == "197th_Loadout_ARC") then {};
if (typeOf _unitbox == "197th_Loadout_ARF") then {};
if (typeOf _unitbox == "197th_Loadout_AT") then {};
if (typeOf _unitbox == "197th_Loadout_Fantassin") then {
	[_unitbox] execVM "197th_Script\Data\Loadout\Fantassin\DC15S\Loadout.sqf";
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Fantassin\DC15S\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#2ec169'>[197th]</t> Fantassin <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Fantassin\logo.paa'/>"];
	_actionId = _unitbox addAction [ "Loadout", {	[Player] execVM "197th_Script\Data\Loadout\Fantassin\DC15A\Loadout.sqf";}];
	_unitbox setUserActionText [_actionId, "<t color='#2ec169'>[197th]</t> Fantassin <t color='#ABB2B9'>[DC-15S]</t>", "<img size='2' image='\197th_Script\Data\Loadout\Fantassin\logo.paa'/>"];
};
if (typeOf _unitbox == "197th_Loadout_Grenadier") then {};
if (typeOf _unitbox == "197th_Loadout_Heavy") then {};
if (typeOf _unitbox == "197th_Loadout_Medecin") then {};
if (typeOf _unitbox == "197th_Loadout_Pilote") then {};
if (typeOf _unitbox == "197th_Loadout_Radioman") then {};
if (typeOf _unitbox == "197th_Loadout_Sapeur") then {};
if (typeOf _unitbox == "197th_Loadout_Shield") then {};