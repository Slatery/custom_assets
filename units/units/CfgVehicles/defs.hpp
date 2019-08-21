// Gear definitions
#define FIRSTAID_KIT ITEM06("ACE_fieldDressing"),ITEM06("ACE_elasticBandage"),\
					 ITEM06("ACE_packingBandage"),ITEM06("ACE_quikclot"),ITEM05("ACE_morphine"),\
					 ITEM02("ACE_epinephrine"),ITEM02("ACE_tourniquet"),ITEM02("adv_aceSplint_splint")
#define UNIFORM_KIT ITEM03("ACE_CableTie"), ITEM01("ACE_Flashlight_XL50"), ITEM01("ACE_EarPlugs"), ITEM01("ACE_DAGR"), ITEM03("MS_Strobe_Mag_1")
#define LINKED_ITEMS ITEM01("ItemMap"),ITEM01("ItemCompass"),ITEM01("ItemWatch"),ITEM01("ItemGPS"),ITEM01("TFAR_anprc152")

// Ammo templates
// Hand grenades
#define MEDIC_GR "SmokeShellGreen","SmokeShellGreen","SmokeShellRed","SmokeShellRed","rhs_mag_m67","SmokeShell","SmokeShell"						// Medic grenades
#define STANDARD_GR "SmokeShellGreen","rhs_mag_m67","rhs_mag_m67","SmokeShell","SmokeShell"															// Rifleman/standard
#define OFFICER_GR  "SmokeShellPurple","SmokeShellRed","SmokeShellGreen","SmokeShellGreen","rhs_mag_m67","SmokeShell","SmokeShell","B_IR_Grenade"	// Officer

// MUST have one extra mag to ensure there is one in the gun
// Primary Ammo
#define AR_FOUR_MAG ITEM05("ACE_30Rnd_556x45_Stanag_Mk262_mag") 												// 4 mags
#define AR_SIX_MAG ITEM07("ACE_30Rnd_556x45_Stanag_Mk262_mag")													// 6 mags
#define AR_EIGHT_MAG ITEM09("ACE_30Rnd_556x45_Stanag_Mk262_mag")												// 8 mags
#define MARKSMAN_MAG ITEM07("ACE_20Rnd_762x51_M118LR_Mag")														// Desmark mags
#define GUNNER_MAG ITEM03("rhsusf_200rnd_556x45_mixed_box") 													// MG mags
#define PILOT_MAG ITEM05("30Rnd_9x21_Mag_SMG_02")																// SMG Mags
// UGL Ammo
#define UGL_STAND ITEM07("1Rnd_HE_Grenade_shell"), ITEM02("1Rnd_SmokeRed_Grenade_shell"),ITEM02("1Rnd_SmokeBlue_Grenade_shell"),ITEM02("1Rnd_Smoke_Grenade_shell")			// 8x HE, 2x Red smoke, 2x Blue smoke
#define UGL_FSO ITEM06("1Rnd_HE_Grenade_shell"), ITEM06("1Rnd_SmokeRed_Grenade_shell"),ITEM04("UGL_FlareRed_F"),ITEM02("B_IR_Grenade")	// 6x HE, 6x Red Smoke,4 Red Flare, 2 IR grenade
//Pistol Ammo
#define NINEMM ITEM03("16Rnd_9x21_Mag")