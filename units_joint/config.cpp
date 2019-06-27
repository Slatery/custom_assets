#include "defs.hpp"
class CBA_Extended_EventHandlers_base;
class EventHandlers;
class CfgPatches{
	// Modern Units
	// ===================================================================
	class redi_units{
		name = "Joint ops units"
		#include "units.hpp"
		weapons[]={
			"SMA_Steyr_acc",
			"SMA_Steyr_gl_acc",
			"SMA_M4_cqb_acc",
			"SMA_M4_rifleman_acc",
			"SMA_M4_gl_acc",
			"SMA_762_RIFLEBASE",
			"SMA_HK417",
			"SMA_417_acc",
			"SMA_M4_light_acc",
			"medic_standard_m4",
			"mg_standard_m249",
			"rifleman_standard_m4a1",
			"officer_standard_m4a1",
			"officer_standard_m4a1_203s",
			"rto_standard_m4a1_203",
		};
		requiredVersion=1;
		requiredAddons[]={
			"CBA_xeh",
			"A3_Data_F",
			"A3_Characters_F",
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",

			"rhsusf_main",
			"rhsusf_scopes",
			"rhsusf_weapons",
			"rhsusf_infantry2",

			"ADFU_Units_AMC",

			"ace_common",

			"SMA_Eotech_552",
			"SMA_Weapons_Steyr",
			"SMA_Weapons_Accessories",
			"SMA_Weapons_Magazines",
			"SMA_Weapons"
		};
	};
};
#include "\units_joint\CfgGroups.hpp"
#include "\units_joint\CfgWeapons.hpp"
#include "\units_joint\CfgFunctions.hpp"
#include "\units_joint\CfgFactionClasses.hpp"
#include "\units_joint\CfgVehicles.hpp"