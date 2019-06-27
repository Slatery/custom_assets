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

REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_0,"Put on Headset",ADFU_H_Airframe_Cover_02_MC,ADFU_H_Airframe_Cover_03_MC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_1,"Take off Headset",ADFU_H_Airframe_Cover_03_MC,ADFU_H_Airframe_Cover_02_MC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_2,"Take off Headset",ADFU_H_Airframe_Cover_07_MC,ADFU_H_Airframe_Cover_06_MC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_AIRFRAME_MC_3,"Put on Headset",ADFU_H_Airframe_Cover_06_MC,ADFU_H_Airframe_Cover_07_MC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_MC_4,"Take off IR Strobe",ADFU_H_Airframe_Cover_06_MC,ADFU_H_Airframe_Cover_02_MC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_MC_5,"Put on IR Strobe",ADFU_H_Airframe_Cover_02_MC,ADFU_H_Airframe_Cover_06_MC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_AIRFRAME_MC_6,"Take off IR Strobe",ADFU_H_Airframe_Cover_07_MC,ADFU_H_Airframe_Cover_03_MC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_AIRFRAME_MC_7,"Put on IR Strobe",ADFU_H_Airframe_Cover_03_MC,ADFU_H_Airframe_Cover_07_MC);  // Peltor >> Peltor + Acc

REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMC_0,"Put on Headset",ADFU_H_OpsCore_02_AMC,ADFU_H_OpsCore_03_AMC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_AMC_1,"Take off Headset",ADFU_H_OpsCore_03_AMC,ADFU_H_OpsCore_02_AMC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_aMC_2,"Take off Headset",ADFU_H_OpsCore_09_AMC,ADFU_H_OpsCore_08_AMC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_aMC_3,"Put on Headset",ADFU_H_OpsCore_08_AMC,ADFU_H_OpsCore_09_AMC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMC_4,"Take off IR Strobe",ADFU_H_OpsCore_08_AMC,ADFU_H_OpsCore_02_AMC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMC_5,"Put on IR Strobe",ADFU_H_OpsCore_02_AMC,ADFU_H_OpsCore_08_AMC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_AMC_6,"Take off IR Strobe",ADFU_H_OpsCore_09_AMC,ADFU_H_OpsCore_03_AMC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_AMC_7,"Put on IR Strobe",ADFU_H_OpsCore_03_AMC,ADFU_H_OpsCore_09_AMC);  // Peltor >> Peltor + Acc


REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_0,"Put on Headset",ADFU_H_OpsCore_02_MC,ADFU_H_OpsCore_03_MC);  // Base >> Peltor
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_1,"Take off Headset",ADFU_H_OpsCore_03_MC,ADFU_H_OpsCore_02_MC);  // Peltor >> Base
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_2,"Take off Headset",ADFU_H_OpsCore_09_MC,ADFU_H_OpsCore_08_MC);  // Peltor + Acc >> Base + Acc
REPLACE_HEADGEAR(HEADGEAR_OPSCORE_MC_3,"Put on Headset",ADFU_H_OpsCore_08_MC,ADFU_H_OpsCore_09_MC);  // Base + Acc >> Peltor + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_MC_4,"Take off IR Strobe",ADFU_H_OpsCore_08_MC,ADFU_H_OpsCore_02_MC);  //Base + Acc >> Base
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_MC_5,"Put on IR Strobe",ADFU_H_OpsCore_02_MC,ADFU_H_OpsCore_08_MC);  // Base >> Base + Acc
REPLACE_HEADGEAR_IR_OFF(HEADGEAR_OPSCORE_MC_6,"Take off IR Strobe",ADFU_H_OpsCore_09_MC,ADFU_H_OpsCore_03_MC);  // Peltor + Acc >> Peltor
REPLACE_HEADGEAR_IR_ON(HEADGEAR_OPSCORE_MC_7,"Put on IR Strobe",ADFU_H_OpsCore_03_MC,ADFU_H_OpsCore_09_MC);  // Peltor >> Peltor + Acc

// UNIFORM roll
REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMC,"Roll Up Sleeves",ADFU_G3_AMC,ADFU_G3_AMC_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMC,"Roll Down Sleeves",ADFU_G3_AMC_Rolled,ADFU_G3_AMC)
REPLACE_UNIFORM(UNIFORM_ROLL_UP_AMC_NOPAD,"Roll Up Sleeves",ADFU_G3_AMC_Nopad,ADFU_G3_AMC_Nopad_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_AMC_NOPAD,"Roll Down Sleeves",ADFU_G3_AMC_Nopad_Rolled,ADFU_G3_AMC_Nopad)

REPLACE_UNIFORM(UNIFORM_ROLL_UP_MC,"Roll Up Sleeves",ADFU_G3_MC,ADFU_G3_MC_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_MC,"Roll Down Sleeves",ADFU_G3_MC_Rolled,ADFU_G3_MC)
REPLACE_UNIFORM(UNIFORM_ROLL_UP_MC_NOPAD,"Roll Up Sleeves",ADFU_G3_MC_Nopad,ADFU_G3_MC_Nopad_Rolled)
REPLACE_UNIFORM(UNIFORM_ROLL_DOWN_MC_NOPAD,"Roll Down Sleeves",ADFU_G3_MC_Nopad_Rolled,ADFU_G3_MC_Nopad)