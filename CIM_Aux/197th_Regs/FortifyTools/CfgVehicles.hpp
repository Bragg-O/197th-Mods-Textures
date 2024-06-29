class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class ace_fortify
		{
			displayName = "F-187";
			condition = "[_player] call CIM_fnc_canFortify";
			modifierFunction = "call ace_fortify_fnc_modifyAction";
			insertChildren = "_this call ace_fortify_fnc_addActions";
			statement = "";
			exceptions[] = {};
			showDisabled = 0;
			priority = 1;
		};
	};
};