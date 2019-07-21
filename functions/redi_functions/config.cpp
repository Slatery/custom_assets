class CfgPatches{
	class redi_functions
	{
		name="Functions";
		author="Slatery";
		requiredVersion=1;
		requiredAddons[]=
		{
			"CBA_xeh",
			"ace_common"
		};
		units[]={};
		weapons[]={};
	};
};
class CfgFunctions {
	class SOCOMD {
		tag="SOCOMD";
		class Common {
			file="\redi_functions\functions\common";
			class CommonInitServer { postInit = 1; };
			class CommonInitLocal {};
		};

		class Utils {
			file="\redi_functions\functions\utils";
			class HandleIrStrobe {};
			class SetUnitLoadout {};
			class SwitchUnitLoadout {};
			class SwitchUnitPrimaryWeapon {};
			class SwitchUnitSecondaryWeapon {};
		};

		class Actions {
			file="\redi_functions\functions\action";
			class Action_ToggleDiving {};
			class Action_ToggleSnow {};
			class Action_ReplaceCrewColours {};
			class Action_ReplaceUniform {};
			class Action_ReplaceVest {};
			class Action_ReplaceHeadgear {};
			class Action_ReplaceHeadgear_IR_ON {};
			class Action_ReplaceHeadgear_IR_OFF {};
			class Action_ReplaceFacewear {};
			class Action_ReplacePrimary {};
			class Action_ReplaceBackpack {};
			class Action_EnterSpectator {};
			class Action_displayName {};
			class Action_placePlaceables {};
		};

		class ActionConditions {
			file="\redi_functions\functions\actionConditions";
			class ActionCondition_CanToggleDiving {};
			class ActionCondition_CanSwitchVest {};
			class ActionCondition_CanUseLoadoutWeapon {};
			class ActionCondition_HasPrimary556	{};
			class ActionCondition_CanSwapVest {};
			class ActionCondition_CanSwapBackpacks {};
			class ActionCondition_IsAdmin {};
		};
	};
};
