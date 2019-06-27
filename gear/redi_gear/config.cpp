class EventHandlers;
class CfgPatches{
	// Modern Units
	// ===================================================================
	class redi_custom_gear{
		name = "REDi Custom Gear"
		units[]={
		};
		weapons[]={
			"redi_opscore_adf_cover",
			"redi_opscore_adf_cover_pelt",
			"redi_opscore_adf_cover_acc",
			"redi_opscore_adf_cover__acc_pelt",
			"REDI_V_TBAS_Assaulter_AMC",
			"REDI_V_TBAS_Assaulter_Belt_AMC",
			"REDI_V_TBAS_Grenadier_AMC",
			"REDI_V_TBAS_Grenadier_Belt_AMC",
			"REDI_V_TBAS_Hgunner_AMC",
			"REDI_V_TBAS_Hgunner_Belt_AMC",
			"REDI_V_TBAS_Light_AMC",
			"REDI_V_TBAS_Marksman_AMC",
			"REDI_V_TBAS_Marksman_Belt_AMC",
			"REDI_V_TBAS_Medic_AMC",
			"REDI_V_TBAS_Medic_Belt_AMC",
			"REDI_V_TBAS_TeamLeader_AMC",
			"REDI_V_TBAS_TeamLeader_Belt_AMC",
			"ADFU_H_Airframe_Cover_07_AMC",
			"ADFU_H_OpsCore_09_AMC"
		};
		requiredVersion=1;
		requiredAddons[]={
			"redi_functions",
			"rhsusf_main",
			"rhsusf_infantry2",
			
			"ADFU_Units_AMC",
			"ADFU_Units_MC",
			"ace_common",
			"ace_compat_rhs_usf3"
		};
	};
};
#include "CfgWeapons.hpp"