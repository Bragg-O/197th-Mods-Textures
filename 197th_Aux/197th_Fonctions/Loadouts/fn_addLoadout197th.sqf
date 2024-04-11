/*
	    Author: Bragg for 197th Compagnie Chimaera
	
	    Description: Please do not [Copy, Modify, Plagiarize] the following content without prior authorization from its creator.
	    
	    Website: [www.197th.fr]
*/

params ["_unitbox"];

#include "Loadout197th.sqf"

_ActionName = "";
_ActionLogo = "";

_unitbox disableAI "PATH";
_unitbox enableSimulation true;
_unitbox enableDynamicSimulation false;
_unitbox allowDamage false;

{
	[_x select 0, _x select 1] params ["_unitboxclassname", "_LoadoutList"];

	if (typeOf _unitbox == _unitboxclassname) then {
		private _ClassnameSplit = (format["%1", _unitboxclassname]) splitString "_";
		[_ClassnameSplit select 2] params ["_LoadoutName"];

		private _LoadoutPath = "197th_Fonctions\Loadouts\";

		{
			[_x select 0, _x select 1] params ["_LoadoutFilePath", "_WeaponName"];

			_LoadoutTotalPath = _LoadoutPath + _LoadoutFilePath + "\Loadout.sqf";

			_LogoLoadoutTotalPath = _LoadoutPath + _LoadoutName + "\logo.paa";

			if (fileExists _LoadoutTotalPath) then {
				_actionId = _unitbox addAction ["Loadout", {
					[player] execVM (_this select 3);
				}, _LoadoutTotalPath, 1.5, true, true, "", "true", 5, false, "", ""];

				_ActionName = format ["<t size='1.5' color='#27AE60'>[197th]</t><t size='1.5'> %1 </t><t size='1.5' color='#ABB2B9'>[%2]</t>", _LoadoutName, _WeaponName];

				if (fileExists _LogoLoadoutTotalPath) then {
					_ActionLogo = format ["<img size='3' image='%1'/>", _LogoLoadoutTotalPath];
					
					_unitbox setUserActionText [_actionId, _ActionName, _ActionLogo];
				} else {
					systemChat format ["'%1' not found! (fn_addLoadout197th)", _LogoLoadoutTotalPath];

					_unitbox setUserActionText [_actionId, _ActionName];
				};

				[_unitbox] execVM _LoadoutTotalPath;
			} else {
				systemChat format ["'%1' not found! (fn_addLoadout197th)", _LoadoutTotalPath];
			};
		} forEach _LoadoutList;
	};
} forEach _LoadoutParametres;

sleep 5;
removeBackpack _unitbox;
if (currentWeapon _unitbox == "197th_DC17SA_Regs") then {
	_unitbox action ["SwitchWeapon", _unitbox, _unitbox, -1];
};

sleep 5;
_unitbox disableAI "all";