#define REPLACE_HEADGEAR(ID, DISPLAY_STR, HEADGEAR_SOURCE, HEADGEAR_TARGET) \
class REPLACE_HEADGEAR_##ID { \
	displayName = DISPLAY_STR; \
	condition = "(alive _player) and ((headgear _player) isKindOf ["#HEADGEAR_SOURCE", configFile >> 'CfgWeapons'])"; \
	statement = "[_player, "#HEADGEAR_TARGET"] call SOCOMD_fnc_Action_ReplaceHeadgear;"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};
#define REPLACE_HEADGEAR_IR_ON(ID, DISPLAY_STR, HEADGEAR_SOURCE, HEADGEAR_TARGET) \
class REPLACE_HEADGEAR_##ID { \
	displayName = DISPLAY_STR; \
	condition = "(alive _player) and ((headgear _player) isKindOf ["#HEADGEAR_SOURCE", configFile >> 'CfgWeapons'])"; \
	statement = "[_player, "#HEADGEAR_TARGET"] call SOCOMD_fnc_Action_ReplaceHeadgear_IR_ON;"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};
#define REPLACE_HEADGEAR_IR_OFF(ID, DISPLAY_STR, HEADGEAR_SOURCE, HEADGEAR_TARGET) \
class REPLACE_HEADGEAR_##ID { \
	displayName = DISPLAY_STR; \
	condition = "(alive _player) and ((headgear _player) isKindOf ["#HEADGEAR_SOURCE", configFile >> 'CfgWeapons'])"; \
	statement = "[_player, "#HEADGEAR_TARGET"] call SOCOMD_fnc_Action_ReplaceHeadgear_IR_OFF;"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};
#define REPLACE_UNIFORM(ID, DISPLAY_STR, UNIFORM_SOURCE, UNIFORM_TARGET) \
class REPLACE_UNIFORM_##ID { \
	displayName = DISPLAY_STR; \
	condition = "(alive _player) and ((uniform _player) isKindOf ["#UNIFORM_SOURCE", configFile >> 'CfgWeapons'])"; \
	statement = "[_player, "#UNIFORM_TARGET"] call SOCOMD_fnc_Action_ReplaceUniform;"; \
	exceptions[] = {"isNotInside", "isNotSitting"}; \
	showDisabled = 0; \
};

// AMC Helmets
REPLACE_HEADGEAR(REDI_opscore_adf_cover_01,"Put on Headset",REDI_opscore_adf_cover,REDI_opscore_adf_cover_pelt);  // Base >> Peltor
REPLACE_HEADGEAR(REDI_opscore_adf_cover_02,"Take off Headset",REDI_opscore_adf_cover_pelt,REDI_opscore_adf_cover);  // Peltor >> Base
REPLACE_HEADGEAR(REDI_opscore_adf_cover_03,"Take off Headset",REDI_opscore_adf_cover_acc_pelt,REDI_opscore_adf_cover_acc);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(REDI_opscore_adf_cover_04,"Put on Headset",REDI_opscore_adf_cover_acc,REDI_opscore_adf_cover_acc_pelt);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(REDI_opscore_adf_cover_05,"Take off IR Strobe",REDI_opscore_adf_cover_acc,REDI_opscore_adf_cover);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(REDI_opscore_adf_cover_06,"Put on IR Strobe",REDI_opscore_adf_cover,REDI_opscore_adf_cover_acc);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(REDI_opscore_adf_cover_07,"Take off IR Strobe",REDI_opscore_adf_cover_acc_pelt,REDI_opscore_adf_cover_pelt);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(REDI_opscore_adf_cover_08,"Put on IR Strobe",REDI_opscore_adf_cover_pelt,REDI_opscore_adf_cover_acc_pelt);  // Peltor >> Peltor + Acc

REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMC_0,"Put on Headset",ADFU_H_Airframe_Cover_02_AMC,ADFU_H_Airframe_Cover_03_AMC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMC_1,"Take off Headset",ADFU_H_Airframe_Cover_03_AMC,ADFU_H_Airframe_Cover_02_AMC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMC_2,"Take off Headset",ADFU_H_Airframe_Cover_07_AMC,ADFU_H_Airframe_Cover_06_AMC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMC_3,"Put on Headset",ADFU_H_Airframe_Cover_06_AMC,ADFU_H_Airframe_Cover_07_AMC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_AMC_4,"Take off IR Strobe",ADFU_H_Airframe_Cover_06_AMC,ADFU_H_Airframe_Cover_02_AMC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_AMC_5,"Put on IR Strobe",ADFU_H_Airframe_Cover_02_AMC,ADFU_H_Airframe_Cover_06_AMC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_AMC_6,"Take off IR Strobe",ADFU_H_Airframe_Cover_07_AMC,ADFU_H_Airframe_Cover_03_AMC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_AMC_7,"Put on IR Strobe",ADFU_H_Airframe_Cover_03_AMC,ADFU_H_Airframe_Cover_07_AMC);  // Peltor >> Peltor + Acc

REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMC_0,"Put on Headset",ADFU_H_OpsCore_02_AMC,ADFU_H_OpsCore_03_AMC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMC_1,"Take off Headset",ADFU_H_OpsCore_03_AMC,ADFU_H_OpsCore_02_AMC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMC_2,"Take off Headset",ADFU_H_OpsCore_09_AMC,ADFU_H_OpsCore_08_AMC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMC_3,"Put on Headset",ADFU_H_OpsCore_08_AMC,ADFU_H_OpsCore_09_AMC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMC_4,"Take off IR Strobe",ADFU_H_OpsCore_08_AMC,ADFU_H_OpsCore_02_AMC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMC_5,"Put on IR Strobe",ADFU_H_OpsCore_02_AMC,ADFU_H_OpsCore_08_AMC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMC_6,"Take off IR Strobe",ADFU_H_OpsCore_09_AMC,ADFU_H_OpsCore_03_AMC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMC_7,"Put on IR Strobe",ADFU_H_OpsCore_03_AMC,ADFU_H_OpsCore_09_AMC);  // Peltor >> Peltor + Acc


// MC Helmets
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_0,"Put on Headset",ADFU_H_Airframe_Cover_02_MC,ADFU_H_Airframe_Cover_03_MC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_1,"Take off Headset",ADFU_H_Airframe_Cover_03_MC,ADFU_H_Airframe_Cover_02_MC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_2,"Take off Headset",ADFU_H_Airframe_Cover_07_MC,ADFU_H_Airframe_Cover_06_MC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_3,"Put on Headset",ADFU_H_Airframe_Cover_06_MC,ADFU_H_Airframe_Cover_07_MC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_MC_4,"Take off IR Strobe",ADFU_H_Airframe_Cover_06_MC,ADFU_H_Airframe_Cover_02_MC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_MC_5,"Put on IR Strobe",ADFU_H_Airframe_Cover_02_MC,ADFU_H_Airframe_Cover_06_MC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_MC_6,"Take off IR Strobe",ADFU_H_Airframe_Cover_07_MC,ADFU_H_Airframe_Cover_03_MC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_MC_7,"Put on IR Strobe",ADFU_H_Airframe_Cover_03_MC,ADFU_H_Airframe_Cover_07_MC);  // Peltor >> Peltor + Acc

REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_0,"Put on Headset",ADFU_H_OpsCore_02_MC,ADFU_H_OpsCore_03_MC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_1,"Take off Headset",ADFU_H_OpsCore_03_MC,ADFU_H_OpsCore_02_MC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_2,"Take off Headset",ADFU_H_OpsCore_09_MC,ADFU_H_OpsCore_08_MC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_3,"Put on Headset",ADFU_H_OpsCore_08_MC,ADFU_H_OpsCore_09_MC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_MC_4,"Take off IR Strobe",ADFU_H_OpsCore_08_MC,ADFU_H_OpsCore_02_MC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_MC_5,"Put on IR Strobe",ADFU_H_OpsCore_02_MC,ADFU_H_OpsCore_08_MC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_MC_6,"Take off IR Strobe",ADFU_H_OpsCore_09_MC,ADFU_H_OpsCore_03_MC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_MC_7,"Put on IR Strobe",ADFU_H_OpsCore_03_MC,ADFU_H_OpsCore_09_MC);  // Peltor >> Peltor + Acc


// AMCT Helmets
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCT_0,"Put on Headset",ADFU_H_Airframe_Cover_02_AMCT,ADFU_H_Airframe_Cover_03_AMCT);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCT_1,"Take off Headset",ADFU_H_Airframe_Cover_03_AMCT,ADFU_H_Airframe_Cover_02_AMCT);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCT_2,"Take off Headset",ADFU_H_Airframe_Cover_07_AMCT,ADFU_H_Airframe_Cover_06_AMCT);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCT_3,"Put on Headset",ADFU_H_Airframe_Cover_06_AMCT,ADFU_H_Airframe_Cover_07_AMCT);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_AMCT_4,"Take off IR Strobe",ADFU_H_Airframe_Cover_06_AMCT,ADFU_H_Airframe_Cover_02_AMCT);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_AMCT_5,"Put on IR Strobe",ADFU_H_Airframe_Cover_02_AMCT,ADFU_H_Airframe_Cover_06_AMCT);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_AMCT_6,"Take off IR Strobe",ADFU_H_Airframe_Cover_07_AMCT,ADFU_H_Airframe_Cover_03_AMCT);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_AMCT_7,"Put on IR Strobe",ADFU_H_Airframe_Cover_03_AMCT,ADFU_H_Airframe_Cover_07_AMCT);  // Peltor >> Peltor + Acc

REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCT_0,"Put on Headset",ADFU_H_OpsCore_02_AMCT,ADFU_H_OpsCore_03_AMCT);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCT_1,"Take off Headset",ADFU_H_OpsCore_03_AMCT,ADFU_H_OpsCore_02_AMCT);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCT_2,"Take off Headset",ADFU_H_OpsCore_09_AMCT,ADFU_H_OpsCore_08_AMCT);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCT_3,"Put on Headset",ADFU_H_OpsCore_08_AMCT,ADFU_H_OpsCore_09_AMCT);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMCT_4,"Take off IR Strobe",ADFU_H_OpsCore_08_AMCT,ADFU_H_OpsCore_02_AMCT);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMCT_5,"Put on IR Strobe",ADFU_H_OpsCore_02_AMCT,ADFU_H_OpsCore_08_AMCT);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMCT_6,"Take off IR Strobe",ADFU_H_OpsCore_09_AMCT,ADFU_H_OpsCore_03_AMCT);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMCT_7,"Put on IR Strobe",ADFU_H_OpsCore_03_AMCT,ADFU_H_OpsCore_09_AMCT);  // Peltor >> Peltor + Acc


// AMCS Helmets
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCS_0,"Put on Headset",ADFU_H_Airframe_Cover_02_AMCS,ADFU_H_Airframe_Cover_03_AMCS);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCS_1,"Take off Headset",ADFU_H_Airframe_Cover_03_AMCS,ADFU_H_Airframe_Cover_02_AMCS);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCS_2,"Take off Headset",ADFU_H_Airframe_Cover_07_AMCS,ADFU_H_Airframe_Cover_06_AMCS);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_AMCS_3,"Put on Headset",ADFU_H_Airframe_Cover_06_AMCS,ADFU_H_Airframe_Cover_07_AMCS);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_AMCS_4,"Take off IR Strobe",ADFU_H_Airframe_Cover_06_AMCS,ADFU_H_Airframe_Cover_02_AMCS);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_AMCS_5,"Put on IR Strobe",ADFU_H_Airframe_Cover_02_AMCS,ADFU_H_Airframe_Cover_06_AMCS);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_AMCS_6,"Take off IR Strobe",ADFU_H_Airframe_Cover_07_AMCS,ADFU_H_Airframe_Cover_03_AMCS);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_AMCS_7,"Put on IR Strobe",ADFU_H_Airframe_Cover_03_AMCS,ADFU_H_Airframe_Cover_07_AMCS);  // Peltor >> Peltor + Acc

REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCS_0,"Put on Headset",ADFU_H_OpsCore_02_AMCS,ADFU_H_OpsCore_03_AMCS);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCS_1,"Take off Headset",ADFU_H_OpsCore_03_AMCS,ADFU_H_OpsCore_02_AMCS);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCS_2,"Take off Headset",ADFU_H_OpsCore_09_AMCS,ADFU_H_OpsCore_08_AMCS);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMCS_3,"Put on Headset",ADFU_H_OpsCore_08_AMCS,ADFU_H_OpsCore_09_AMCS);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMCS_4,"Take off IR Strobe",ADFU_H_OpsCore_08_AMCS,ADFU_H_OpsCore_02_AMCS);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMCS_5,"Put on IR Strobe",ADFU_H_OpsCore_02_AMCS,ADFU_H_OpsCore_08_AMCS);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMCS_6,"Take off IR Strobe",ADFU_H_OpsCore_09_AMCS,ADFU_H_OpsCore_03_AMCS);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMCS_7,"Put on IR Strobe",ADFU_H_OpsCore_03_AMCS,ADFU_H_OpsCore_09_AMCS);  // Peltor >> Peltor + Acc


// UNIFORM roll

REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMC,"Roll Up Sleeves",ADFU_G3_AMC,ADFU_G3_AMC_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMC,"Roll Down Sleeves",ADFU_G3_AMC_Rolled,ADFU_G3_AMC)
REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMC_NOPAD,"Roll Up Sleeves",ADFU_G3_AMC_Nopad,ADFU_G3_AMC_Nopad_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMC_NOPAD,"Roll Down Sleeves",ADFU_G3_AMC_Nopad_Rolled,ADFU_G3_AMC_Nopad)

REPLACE_UNIFORM(UNIFORM_ROLL_UP_MC,"Roll Up Sleeves",ADFU_G3_MC,ADFU_G3_MC_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_MC,"Roll Down Sleeves",ADFU_G3_MC_Rolled,ADFU_G3_MC)
REPLACE_UNIFORM(UNIFORM_ROLL_UP_MC_NOPAD,"Roll Up Sleeves",ADFU_G3_MC_Nopad,ADFU_G3_MC_Nopad_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_MC_NOPAD,"Roll Down Sleeves",ADFU_G3_MC_Nopad_Rolled,ADFU_G3_MC_Nopad)

REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMCT,"Roll Up Sleeves",ADFU_G3_AMCT,ADFU_G3_AMCT_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMCT,"Roll Down Sleeves",ADFU_G3_AMCT_Rolled,ADFU_G3_AMCT)
REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMCT_NOPAD,"Roll Up Sleeves",ADFU_G3_AMCT_Nopad,ADFU_G3_AMCT_Nopad_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMCT_NOPAD,"Roll Down Sleeves",ADFU_G3_AMCT_Nopad_Rolled,ADFU_G3_AMCT_Nopad)

REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMCS,"Roll Up Sleeves",ADFU_G3_AMCS,ADFU_G3_AMCS_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMCS,"Roll Down Sleeves",ADFU_G3_AMCS_Rolled,ADFU_G3_AMCS)
REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMCS_NOPAD,"Roll Up Sleeves",ADFU_G3_AMCS_Nopad,ADFU_G3_AMCS_Nopad_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMCS_NOPAD,"Roll Down Sleeves",ADFU_G3_AMCS_Nopad_Rolled,ADFU_G3_AMCS_Nopad)
