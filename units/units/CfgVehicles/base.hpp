class B_soldier_F;
class REDI_base_soldier :B_soldier_F{
	author = "[REDi]1R Slatery";
	identityTypes[] = {"Head_NATO","LanguageENG_F"};
	uniformClass="ADFU_G3_AMC";
	scope = 1;
	Items[] 				= {FIRSTAID_KIT,REQUIRED_KIT};
	RespawnItems[] 			= {FIRSTAID_KIT,REQUIRED_KIT};
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
// Medic Base
class B_base_medic : REDI_base_soldier{
	attendant = 1;
	scope = 1;
};