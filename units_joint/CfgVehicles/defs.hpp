// Gear definitions
#define FIRSTAID_KIT ITEM05("ACE_fieldDressing"),ITEM05("ACE_elasticBandage"),\
					ITEM05("ACE_packingBandage"),ITEM05("ACE_quikclot"),ITEM03("ACE_morphine"),\
					ITEM01("ACE_epinephrine"),ITEM02("ACE_tourniquet")
#define REQUIRED_KIT ITEM02("ACE_CableTie"), ITEM01("ACE_Flashlight_XL50"), ITEM01("ACE_EarPlugs")
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
#define MARKSMAN_MAG ITEM07("SMA_20Rnd_762x51mm_M80A1_EPR")														// Desmark mags
#define GUNNER_MAG ITEM01("rhsusf_200rnd_556x45_mixed_box"), ITEM04("rhsusf_100Rnd_556x45_mixed_soft_pouch")	// MG mags
#define PILOT_MAG ITEM05("30Rnd_9x21_Mag_SMG_02")																// SMG Mags
// UGL Ammo
#define UGL_STAND ITEM08("1Rnd_HE_Grenade_shell"), ITEM02("1Rnd_SmokeRed_Grenade_shell"),ITEM02("1Rnd_SmokeBlue_Grenade_shell")			// 8x HE, 2x Red smoke, 2x Blue smoke
#define UGL_FSO ITEM06("1Rnd_HE_Grenade_shell"), ITEM06("1Rnd_SmokeRed_Grenade_shell"),ITEM04("UGL_FlareRed_F"),ITEM02("B_IR_Grenade")	// 6x HE, 6x Red Smoke,4 Red Flare, 2 IR grenade
//Pistol Ammo
#define NINEMM ITEM03("16Rnd_9x21_Mag")