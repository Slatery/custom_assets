
class CfgWeapons{
	#define REDI_HEARING_PROTECTION_VICCREW ace_hearing_lowerVolume = 0.85; ace_hearing_protection = 0.6;
	#define REDI_HEARING_PROTECTION_EARMUFF ace_hearing_lowerVolume = 0.75; ace_hearing_protection = 0.5;
	#define REDI_HEARING_PROTECTION_PELTOR ace_hearing_lowerVolume = 0.55; ace_hearing_protection = 0.3;
	// Gear
	// ===================================================================

	// Missing ADFU Gear
	// ==================================================================
	class ADFU_H_Airframe_Cover_02
	class ADFU_H_Airframe_Cover_03: ADFU_H_Airframe_Cover_02{
		REDI_HEARING_PROTECTION_PELTOR
		nameSound="";
		type="";
	};
	class ADFU_H_Airframe_Cover_07:ADFU_H_Airframe_Cover_03{
		REDI_HEARING_PROTECTION_PELTOR
		nameSound="";
		type="";
	};
	
	class ADFU_H_OpsCore_02;
	class ADFU_H_OpsCore_03:ADFU_H_OpsCore_02{
		REDI_HEARING_PROTECTION_PELTOR
	};
	class ADFU_H_OpsCore_09:ADFU_H_OpsCore_02{
		REDI_HEARING_PROTECTION_PELTOR
		nameSound="";
		type="";
	};


	class ADFU_H_OpsCore_09_AMC: ADFU_H_OpsCore_09_MC
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		allowedslots[]={901};
		displayName="OpsCore (AMC) [Night Ops/Headset]";
		picture="\ADFU_Units_MC\ui\icons\oc\oc_04_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units_AMC\data\h_opscore_AMC_co.paa",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			""
		};
	};

	class ADFU_H_Airframe_Cover_07_AMC: ADFU_H_Airframe_Cover_07_MC
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayName="Airframe (AMC) [Night Ops/Headset]";
		allowedslots[]={901};
		picture="\ADFU_Units_MC\ui\icons\af\af_04_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"",
			"ADFU_Units_AMC\data\h_airframe_cover_AMC_co.paa",
			"",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"ADFU_Units_MC\data\h_airframe_brn_co.paa",
			"ADFU_Units_MC\data\h_fast_khk_co.paa"
		};
	};
	class ADFU_H_OpsCore_09_AMCT: ADFU_H_OpsCore_09_MC
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		allowedslots[]={901};
		displayName="OpsCore (AMCT) [Night Ops/Headset]";
		picture="\ADFU_Units_MC\ui\icons\oc\oc_04_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units_AMCT\data\h_opscore_AMCT_co.paa",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			""
		};
	};

	class ADFU_H_Airframe_Cover_07_AMCT: ADFU_H_Airframe_Cover_07_MC
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayName="Airframe (AMCT) [Night Ops/Headset]";
		allowedslots[]={901};
		picture="\ADFU_Units_MC\ui\icons\af\af_04_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"",
			"ADFU_Units_AMCT\data\h_airframe_cover_AMCT_co.paa",
			"",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"ADFU_Units_MC\data\h_airframe_brn_co.paa",
			"ADFU_Units_MC\data\h_fast_khk_co.paa"
		};
	};
	// Ace Compat
	#include "aceCompat.hpp"
	// Custom Gear
	// ==================================================================
	class rhsusf_opscore_mc_cover;
	class REDI_opscore_adf_cover : rhsusf_opscore_mc_cover{
		scope = 2;
		displayName="ADF Opscore (AMCU Cover)";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
			"",
			"",
			"",
			"redi_gear\data\amc_cover.paa",
			""
		};
	};
	class REDI_opscore_adf_cover_pelt : rhsusf_opscore_mc_cover_pelt{
		scope = 1;
		displayName="ADF Opscore (AMCU Cover)";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"redi_gear\data\amc_cover.paa",
			""
		};
	};
	class REDI_opscore_adf_cover_acc : rhsusf_opscore_mc_cover{
		scope = 1;
		displayName="ADF Opscore (AMCU Cover)";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
			"",
			"redi_gear\data\amc_cover.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	
	class REDI_opscore_adf_cover_acc_pelt : rhsusf_opscore_mc_cover_pelt{
		scope = 1;
		displayName="ADF Opscore (AMCU Cover)";
		hiddenSelectionsTextures[] = {
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\nsw_co.paa",
			"",
			"redi_gear\data\amc_cover.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	// Chest Rigs
	class ADFU_V_TBAS_Assaulter;
	class REDI_V_TBAS_Assaulter_AMC: ADFU_V_TBAS_Assaulter
	{
		author="Adacas + ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Assaulter]";
		picture="\ADFU_Units_AMC\ui\icons\as\icon_v_tbas_as_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units_AMC\data\v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Assaulter_Belt;
	class REDI_V_TBAS_Assaulter_Belt_AMC: ADFU_V_TBAS_Assaulter_Belt
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Assaulter/Belt]";
		picture="\ADFU_Units_AMC\ui\icons\as\icon_v_tbas_asb_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units_AMC\data\v_tbas_amc_co.paa",
			"ADFU_Units_AMC\data\v_battle_belt_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Grenadier;
	class REDI_V_TBAS_Grenadier_AMC: ADFU_V_TBAS_Grenadier
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Grenadier]";
		picture="\ADFU_Units_AMC\ui\icons\gl\icon_v_tbas_gl_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Grenadier_Belt;
	class REDI_V_TBAS_Grenadier_Belt_AMC: ADFU_V_TBAS_Grenadier_Belt
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Grenadier/Belt]";
		picture="\ADFU_Units_AMC\ui\icons\gl\icon_v_tbas_glb_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan",
			"redi_gear\unit_logos\REDI_256.paa"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"ADFU_Units_AMC\data\v_battle_belt_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa"
		};
	};
	class ADFU_V_TBAS_Hgunner;
	class REDI_V_TBAS_Hgunner_AMC: ADFU_V_TBAS_Hgunner
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [LSW]";
		picture="\ADFU_Units_AMC\ui\icons\gu\icon_v_tbas_gu_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Hgunner_Belt;
	class REDI_V_TBAS_Hgunner_Belt_AMC: ADFU_V_TBAS_Hgunner_Belt
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [LSW/Belt]";
		picture="\ADFU_Units_AMC\ui\icons\gu\icon_v_tbas_gub_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"ADFU_Units_AMC\data\v_battle_belt_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Light;
	class REDI_V_TBAS_Light_AMC: ADFU_V_TBAS_Light
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Light]";
		picture="\ADFU_Units_AMC\ui\icons\li\icon_v_tbas_li_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Marksman;
	class REDI_V_TBAS_Marksman_AMC: ADFU_V_TBAS_Marksman
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Marskman]";
		picture="\ADFU_Units_AMC\ui\icons\ma\icon_v_tbas_ma_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Marksman_Belt;
	class REDI_V_TBAS_Marksman_Belt_AMC: ADFU_V_TBAS_Marksman_Belt
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Marksman/Belt]";
		picture="\ADFU_Units_AMC\ui\icons\ma\icon_v_tbas_mab_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"ADFU_Units_AMC\data\v_battle_belt_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Medic;
	class REDI_V_TBAS_Medic_AMC: ADFU_V_TBAS_Medic
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Medic]";
		picture="\ADFU_Units_AMC\ui\icons\me\icon_v_tbas_me_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_Medic_Belt;
	class REDI_V_TBAS_Medic_Belt_AMC: ADFU_V_TBAS_Medic_Belt
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [Medic/Belt]";
		picture="\ADFU_Units_AMC\ui\icons\me\icon_v_tbas_meb_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"ADFU_Units_AMC\data\v_battle_belt_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_TeamLeader;
	class REDI_V_TBAS_TeamLeader_AMC: ADFU_V_TBAS_TeamLeader
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [NCO]";
		picture="\ADFU_Units_AMC\ui\icons\tl\icon_v_tbas_tl_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
	class ADFU_V_TBAS_TeamLeader_Belt;
	class REDI_V_TBAS_TeamLeader_Belt_AMC: ADFU_V_TBAS_TeamLeader_Belt
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=2;
		scopeArsenal=2;
		displayname="TBAS T3 (AMC) [NCO/Belt]";
		picture="\ADFU_Units_AMC\ui\icons\tl\icon_v_tbas_tlb_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"redi_gear\data\redi_v_tbas_amc_co.paa",
			"ADFU_Units_AMC\data\v_battle_belt_amc_co.paa",
			"redi_gear\data\redi_v_gear_01_amc_co.paa",
			"redi_gear\unit_logos\REDI_256.paa"
		};
	};
};