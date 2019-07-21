class CfgPatches
{
	class ace_compat_rhs_usf3
	{
		name="ACE3 - RHS USF Compatibility";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"ace_javelin",
			"ace_rearm",
			"ace_refuel",
			"ace_repair",
			"rhsusf_c_weapons",
			"rhsusf_c_troops",
			"rhsusf_c_m1a1",
			"rhsusf_c_m1a2",
			"RHS_US_A2_AirImport",
			"rhsusf_c_m109",
			"rhsusf_c_HEMTT_A4",
			"rhsusf_c_hmmwv",
			"rhsusf_c_rg33",
			"rhsusf_c_fmtv",
			"rhsusf_c_m113",
			"RHS_US_A2Port_Armor",
			"rhsusf_c_melb"
		};
		author="$STR_ace_common_ACETeam";
		authors[]=
		{
			"Ruthberg",
			"GitHawk",
			"BaerMitUmlaut"
		};
		url="$STR_ace_main_URL";
		version="3.12.6.43";
		versionStr="3.12.6.43";
		versionAr[]={3,12,6,43};
		magazines[]={};
		ammo[]=
		{
			"rhsusf_ammo_127x99_M33_Ball",
			"rhsusf_ammo_127x99_mk211",
			"rhsusf_B_300winmag",
			"rhs_ammo_556x45_M855_Ball",
			"rhs_ammo_556x45_M855A1_Ball",
			"rhs_ammo_556x45_M855A1_Ball_Red",
			"rhs_ammo_556x45_M855A1_Ball_Green",
			"rhs_ammo_556x45_M855A1_Ball_Yellow",
			"rhs_ammo_556x45_M855A1_Ball_Orange",
			"rhs_ammo_556x45_Mk318_Ball",
			"rhs_ammo_556x45_Mk262_Ball",
			"rhs_ammo_762x51_M80_Ball",
			"rhs_ammo_762x51_M61_AP",
			"rhs_ammo_762x51_M62_tracer",
			"rhs_ammo_762x51_M80A1EPR_Ball",
			"rhs_ammo_762x51_M118_Special_Ball",
			"rhs_ammo_762x51_M993_Ball",
			"rhs_ammo_46x30_FMJ",
			"rhs_ammo_46x30_JHP",
			"rhs_ammo_46x30_AP",
			"rhs_ammo_45ACP_MHP",
			"rhs_ammo_9x19_FMJ",
			"rhs_ammo_9x19_JHP",
			"rhs_ammo_M_fgm148_AT",
			"rhs_ammo_mk3a2",
			"rhs_ammo_m84",
			"rhs_ammo_m7a3_cs",
			"rhs_ammo_m69",
			"rhs_ammo_m67",
			"rhs_ammo_M136_rocket",
			"rhs_ammo_M136_hedp_rocket",
			"rhs_ammo_smaw_SR"
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_127x99_Ball;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		ACE_caliber=12.954;
		ACE_bulletLength=58.674;
		ACE_bulletMass=41.925598;
		ACE_muzzleVelocityVariationSD=0.34999999;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.67000002};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={900};
		ACE_barrelLengths[]={736.59998};
	};
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
		ACE_caliber=12.954;
		ACE_bulletLength=58.674;
		ACE_bulletMass=41.990398;
		ACE_muzzleVelocityVariationSD=0.40000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.67000002};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={900};
		ACE_barrelLengths[]={736.59998};
	};
	class B_762x54_Ball;
	class rhsusf_B_300winmag: B_762x54_Ball
	{
		ACE_caliber=7.823;
		ACE_bulletLength=37.820999;
		ACE_bulletMass=14.256;
		ACE_muzzleVelocityVariationSD=0.30000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-5.3000002,-5.0999999,-4.5999999,-4.1999998,-3.4000001,-2.5999999,-1.4,-0.30000001,1.4,3,5.1999998};
		ACE_ballisticCoefficients[]={0.31};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={847,867,877};
		ACE_barrelLengths[]={508,609.59998,660.40002};
	};
	class B_556x45_Ball;
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
	};
	class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball
	{
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
	};
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
	{
	};
	class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red
	{
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red
	{
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange: rhs_ammo_556x45_M855A1_Ball_Red
	{
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.30700001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={780,886,950};
		ACE_barrelLengths[]={254,393.70001,508};
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
	{
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.9896002;
		ACE_muzzleVelocityVariationSD=0.40000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.361};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={624,816,832,838};
		ACE_barrelLengths[]={190.5,368.29999,457.20001,508};
	};
	class rhs_ammo_762x51_M80_Ball: BulletBase
	{
		ACE_caliber=7.823;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=9.4608002;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.2};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={700,800,820,833,845};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
	class rhs_ammo_762x51_M61_AP: rhs_ammo_762x51_M80_Ball
	{
	};
	class rhs_ammo_762x51_M62_tracer: rhs_ammo_762x51_M80_Ball
	{
	};
	class rhs_ammo_762x51_M80A1EPR_Ball: rhs_ammo_762x51_M80_Ball
	{
	};
	class rhs_ammo_762x51_M118_Special_Ball: rhs_ammo_762x51_M80_Ball
	{
		ACE_caliber=7.823;
		ACE_bulletLength=31.496;
		ACE_bulletMass=11.34;
		ACE_muzzleVelocityVariationSD=0.40000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.243};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={750,780,790,794};
		ACE_barrelLengths[]={406.39999,508,609.59998,660.40002};
	};
	class rhs_ammo_762x51_M993_Ball: rhs_ammo_762x51_M80_Ball
	{
		ACE_caliber=7.823;
		ACE_bulletLength=31.496;
		ACE_bulletMass=8.2294617;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.359};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={875,910,930,945};
		ACE_barrelLengths[]={330.20001,406.39999,508,609.59998};
	};
	class rhs_ammo_46x30_FMJ: rhs_ammo_556x45_M855A1_Ball
	{
		ACE_caliber=4.6500001;
		ACE_bulletLength=21;
		ACE_bulletMass=2.5999999;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.171};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={620};
		ACE_barrelLengths[]={180};
	};
	class rhs_ammo_46x30_JHP: rhs_ammo_46x30_FMJ
	{
		ACE_caliber=4.6500001;
		ACE_bulletLength=17.4;
		ACE_bulletMass=2;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.112};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={690};
		ACE_barrelLengths[]={180};
	};
	class rhs_ammo_46x30_AP: rhs_ammo_46x30_FMJ
	{
		ACE_caliber=4.6500001;
		ACE_bulletLength=20.299999;
		ACE_bulletMass=2;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.141};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={680};
		ACE_barrelLengths[]={180};
	};
	class rhs_ammo_45ACP_MHP: BulletBase
	{
		ACE_caliber=11.481;
		ACE_bulletLength=17.271999;
		ACE_bulletMass=14.904;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.19499999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={230,250,285};
		ACE_barrelLengths[]={101.6,127,228.60001};
	};
	class rhs_ammo_9x19_FMJ: BulletBase
	{
		ACE_caliber=9.0170002;
		ACE_bulletLength=15.494;
		ACE_bulletMass=8.0352001;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.16500001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={340,370,400};
		ACE_barrelLengths[]={101.6,127,228.60001};
	};
	class rhs_ammo_9x19_JHP: BulletBase
	{
		ACE_caliber=9.0170002;
		ACE_bulletLength=15.494;
		ACE_bulletMass=8.0352001;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.16500001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={340,370,400};
		ACE_barrelLengths[]={101.6,127,228.60001};
	};
	class MissileBase;
	class rhs_ammo_M_fgm148_AT: MissileBase
	{
		irLock=1;
		laserLock=0;
		airLock=0;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=4.9999999e-005;
			maxDeflection=0.025;
			incDeflection=4.9999999e-005;
			canVanillaLock=0;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic"
			};
			defaultSeekerLockMode="LOBL";
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerAngle=180;
			seekerAccuracy=1;
			seekerMinRange=0;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			defaultAttackProfile="JAV_TOP";
			attackProfiles[]=
			{
				"JAV_TOP",
				"JAV_DIR"
			};
			useModeForAttackProfile=1;
		};
	};
	class GrenadeHand;
	class rhs_ammo_mk3a2: GrenadeHand
	{
		ace_frag_enabled=0;
		ace_frag_skip=1;
		ace_frag_force=0;
	};
	class rhs_ammo_m84: GrenadeHand
	{
		ace_frag_enabled=0;
		ace_frag_skip=1;
		ace_frag_force=0;
	};
	class rhs_ammo_m7a3_cs: GrenadeHand
	{
		ace_frag_enabled=0;
		ace_frag_skip=1;
		ace_frag_force=0;
	};
	class GrenadeHand_stone;
	class rhs_ammo_m69: GrenadeHand_stone
	{
		ace_frag_enabled=0;
		ace_frag_skip=1;
		ace_frag_force=0;
	};
	class rhs_ammo_m67: GrenadeHand
	{
		ace_frag_enabled=1;
		ace_frag_metal=213;
		ace_frag_charge=185;
		ace_frag_gurney_c=2700;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_medium_HD"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
	};
	class RocketBase;
	class rhs_ammo_M136_rocket: RocketBase
	{
	};
	class rhs_ammo_M136_hedp_rocket: rhs_ammo_M136_rocket
	{
		ace_frag_enabled=1;
		ace_frag_metal=330;
		ace_frag_charge=280;
		ace_frag_gurney_c=2800;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_medium_HD"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
	};
	class rhs_ammo_smaw_SR: RocketBase
	{
		ACE_caliber=9;
	};
};
class Extended_PreStart_EventHandlers
{
	class ace_compat_rhs_usf3
	{
		init="call compile preprocessFileLineNumbers '\z\ace\addons\compat_rhs_usf3\XEH_preStart.sqf'";
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_compat_rhs_usf3
	{
		init="call compile preprocessFileLineNumbers '\z\ace\addons\compat_rhs_usf3\XEH_preInit.sqf'";
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		ace_isbelt=1;
	};
	class rhsusf_50Rnd_762x51: CA_Magazine
	{
		ace_isbelt=1;
	};
	class rhs_mag_100rnd_127x99_mag: VehicleMagazine
	{
		ace_isbelt=1;
	};
	class RHS_48Rnd_40mm_MK19: VehicleMagazine
	{
		ace_isbelt=1;
	};
	class CA_LauncherMagazine;
	class rhs_mag_smaw_SR: CA_LauncherMagazine
	{
		ace_overpressure_priority=99;
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
	};
};
class CfgWeapons
{
	class NVGoggles;
	class rhsusf_ANPVS_14: NVGoggles
	{
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius=0.13;
	};
	class rhsusf_ANPVS_15: rhsusf_ANPVS_14
	{
		modelOptics="";
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
	};
	class Pistol_Base_F;
	class Rifle_Base_F;
	class srifle_EBR_F;
	class launch_O_Titan_F;
	class GM6_base_F;
	class rhs_weap_M107_Base_F: GM6_base_F
	{
		ACE_barrelTwist=381;
		ACE_barrelLength=736.59998;
		ACE_RailHeightAboveBore=4.1863899;
	};
	class rhs_weap_XM2010_Base_F: Rifle_Base_F
	{
		ACE_barrelTwist=254;
		ACE_barrelLength=609.59998;
		ACE_Overheating_dispersion=0.75;
		ACE_RailHeightAboveBore=3.1027999;
	};
	class rhs_weap_m24sws: rhs_weap_XM2010_Base_F
	{
		ACE_barrelTwist=285.75;
		ACE_barrelLength=609.59998;
		ACE_RailHeightAboveBore=2.41891;
	};
	class rhs_weap_m40a5: rhs_weap_XM2010_Base_F
	{
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=635;
		ACE_RailHeightAboveBore=2.46368;
	};
	class arifle_MX_Base_F;
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		ACE_RailHeightAboveBore=2.5651801;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
	};
	class rhs_weap_m4a1;
	class rhs_weap_hk416d10: rhs_weap_m4a1
	{
		ACE_RailHeightAboveBore=3.5613899;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=254;
	};
	class rhs_weap_hk416d145: rhs_weap_hk416d10
	{
		ACE_barrelTwist=177.8;
		ACE_barrelLength=368.29999;
	};
	class rhs_weap_m27iar: rhs_weap_m4a1
	{
		ACE_RailHeightAboveBore=3.5613899;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=419.10001;
	};
	class rhs_weap_m4a1_blockII;
	class rhs_weap_mk18: rhs_weap_m4a1_blockII
	{
		ACE_RailHeightAboveBore=2.6068001;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=261.62;
	};
	class rhs_weap_m16a4: rhs_weap_m4_Base
	{
		ACE_RailHeightAboveBore=2.59324;
		ACE_barrelTwist=177.8;
		ACE_barrelLength=508;
	};
	class rhs_weap_saw_base: Rifle_Base_F
	{
		ACE_Overheating_allowSwapBarrel=1;
	};
	class rhs_weap_lmg_minimi_railed;
	class rhs_weap_m249_pip_S: rhs_weap_lmg_minimi_railed
	{
		ACE_RailHeightAboveBore=4.1104398;
		ACE_barrelLength=348;
		ACE_barrelTwist=177.8;
	};
	class rhs_weap_m249_pip_L: rhs_weap_lmg_minimi_railed
	{
		ACE_RailHeightAboveBore=4.34899;
		ACE_barrelLength=464.79999;
		ACE_barrelTwist=177.8;
	};
	class rhs_weap_m240_base;
	class rhs_weap_m240B: rhs_weap_m240_base
	{
		ACE_RailHeightAboveBore=4.3987002;
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=629.91998;
		ACE_Overheating_allowSwapBarrel=1;
	};
	class rhs_weap_m14ebrri: srifle_EBR_F
	{
		ACE_barrelTwist=304.79999;
		ACE_barrelLength=558.79999;
		ACE_Overheating_dispersion=0.75;
		ACE_RailHeightAboveBore=3.08341;
	};
	class rhs_weap_sr25: rhs_weap_m14ebrri
	{
		ACE_barrelTwist=285.75;
		ACE_barrelLength=609.59998;
		ACE_RailHeightAboveBore=3.1316199;
	};
	class rhs_weap_sr25_ec: rhs_weap_sr25
	{
		ACE_barrelTwist=285.75;
		ACE_barrelLength=508;
		ACE_RailHeightAboveBore=3.1368899;
	};
	class rhs_weap_M590_5RD: Rifle_Base_F
	{
		ACE_barrelTwist=0;
		ACE_twistDirection=0;
		ACE_barrelLength=469.89999;
	};
	class rhs_weap_M590_8RD: rhs_weap_M590_5RD
	{
		ACE_barrelTwist=0;
		ACE_twistDirection=0;
		ACE_barrelLength=508;
	};
	class SMG_02_base_F;
	class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
	{
		ACE_RailHeightAboveBore=5;
		ACE_barrelTwist=160;
		ACE_barrelLength=180;
	};
	class hgun_ACPC2_F;
	class rhsusf_weap_m1911a1: hgun_ACPC2_F
	{
		ACE_barrelTwist=406.39999;
		ACE_barrelLength=127;
	};
	class hgun_P07_F;
	class rhsusf_weap_glock17g4: hgun_P07_F
	{
		ACE_barrelTwist=248.92;
		ACE_barrelLength=114.046;
	};
	class rhsusf_weap_m9: rhsusf_weap_glock17g4
	{
		ACE_barrelTwist=248.92;
		ACE_barrelLength=124.46;
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class rhsusf_acc_sniper_base: ItemCore
	{
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class pso1_scope
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class rhsusf_acc_LEUPOLDMK4: rhsusf_acc_sniper_base
	{
		ACE_ScopeHeightAboveRail=2.62567;
	};
	class rhsusf_acc_LEUPOLDMK4_2: rhsusf_acc_sniper_base
	{
		ACE_ScopeHeightAboveRail=3.86377;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class pso1_scope
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class rhsusf_acc_premier: rhsusf_acc_LEUPOLDMK4_2
	{
		ACE_ScopeHeightAboveRail=5.2606602;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class pso1_scope
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class rhsusf_acc_premier_low: rhsusf_acc_premier
	{
		ACE_ScopeHeightAboveRail=3.9089899;
	};
	class rhsusf_acc_premier_anpvs27: rhsusf_acc_premier
	{
		ACE_ScopeHeightAboveRail=5.2506599;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class pso1_nvg
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class rhsusf_acc_M8541: rhsusf_acc_premier
	{
		ACE_ScopeHeightAboveRail=4.2234998;
		ACE_ScopeAdjust_Vertical[]={0,22};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class rhsusf_acc_M8541_low: rhsusf_acc_M8541
	{
		ACE_ScopeHeightAboveRail=2.9789;
	};
	class rhs_weap_fgm148: launch_O_Titan_F
	{
		ace_javelin_enabled=1;
		weaponInfoType="ACE_RscOptics_javelin";
		modelOptics="\z\ace\addons\javelin\data\reticle_titan.p3d";
		canLock=0;
		lockingTargetSound[]=
		{
			"",
			0,
			1
		};
		lockedTargetSound[]=
		{
			"",
			0,
			1
		};
		class Single;
		class Cruise: Single
		{
			ace_missileGuidance_attackProfile="JAV_DIR";
		};
		class TopDown: Single
		{
			ace_missileGuidance_attackProfile="JAV_TOP";
		};
	};
	class Launcher_Base_F;
	class rhs_weap_smaw: Launcher_Base_F
	{
		ace_reloadlaunchers_enabled=1;
		ace_overpressure_angle=45;
	};
	class rhs_weap_maaws: Launcher_Base_F
	{
		ace_reloadlaunchers_enabled=1;
		ace_overpressure_range=15;
		ace_overpressure_angle=70;
		ace_overpressure_damage=0.75;
	};
	class rhsusf_opscore_01;
	class rhsusf_opscore_aor1_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor1_pelt_nsw: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_bk_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_fg_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_fg_pelt_nsw: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_fg_pelt_cam: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_paint_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_paint_pelt_nsw: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_paint_pelt_nsw_cam: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor2_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor2_pelt_nsw: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut_pelt_cam: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut_pelt_nsw_cam: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_pelt: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_pelt_nsw: rhsusf_opscore_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_cover;
	class rhsusf_opscore_mc_cover_pelt: rhsusf_opscore_cover
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_cover_pelt_cam: rhsusf_opscore_cover
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_rg_cover_pelt: rhsusf_opscore_cover
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_coy_cover_pelt: rhsusf_opscore_cover
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mar_01;
	class rhsusf_opscore_mar_ut_pelt: rhsusf_opscore_mar_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mar_fg_pelt: rhsusf_opscore_mar_01
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_helmet_ocp;
	class rhsusf_ach_bare_des_headset: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_des_headset_ess: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_headset: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_headset_ess: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_semi_headset: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_semi_headset_ess: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_tan_headset: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_tan_headset_ess: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_wood_headset: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_wood_headset_ess: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_helmet_headset_ocp: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_helmet_headset_ess_ocp: rhsusf_ach_helmet_ocp
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_cvc_helmet: rhsusf_opscore_01
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhsusf_mich_bare;
	class rhsusf_mich_bare_alt: rhsusf_mich_bare
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos;
	class rhsusf_mich_bare_norotos_alt: rhsusf_mich_bare_norotos
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc;
	class rhsusf_mich_bare_norotos_arc_alt: rhsusf_mich_bare_norotos_arc
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_semi;
	class rhsusf_mich_bare_alt_semi: rhsusf_mich_bare_semi
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_semi;
	class rhsusf_mich_bare_norotos_alt_semi: rhsusf_mich_bare_norotos_semi
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc_semi;
	class rhsusf_mich_bare_norotos_arc_alt_semi: rhsusf_mich_bare_norotos_arc_semi
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_tan;
	class rhsusf_mich_bare_alt_tan: rhsusf_mich_bare_tan
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_tan;
	class rhsusf_mich_bare_norotos_alt_tan: rhsusf_mich_bare_norotos_tan
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc_tan;
	class rhsusf_mich_bare_norotos_arc_alt_tan: rhsusf_mich_bare_norotos_arc_tan
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_hgu56p: rhsusf_opscore_01
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class H_HelmetB;
	class RHS_jetpilot_usaf: H_HelmetB
	{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
			};
		};
	};
	class Car_F: Car
	{
	};
	class Truck_F: Car_F
	{
	};
	class rhs_truck: Truck_F
	{
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class ACE_Actions
		{
			class ACE_MainActions
			{
			};
		};
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MBT_01_base_F: Tank_F
	{
	};
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
		ace_refuel_fuelCapacity=1909;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Eventhandlers;
	};
	class Heli_Light_03_base_F: Helicopter_Base_F
	{
	};
	class RHS_UH1_Base: Heli_Light_03_base_F
	{
		ace_refuel_fuelCapacity=1447;
	};
	class RHS_UH1Y_base: RHS_UH1_Base
	{
	};
	class RHS_UH1Y_US_base: RHS_UH1Y_base
	{
	};
	class RHS_UH1Y: RHS_UH1Y_US_base
	{
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesAnchorBar";
		ace_fastroping_friesAttachmentPoint[]={0,2.3800001,-0.13500001};
		ace_fastroping_onCut="ace_compat_rhs_usf3_fnc_onCut";
		ace_fastroping_onPrepare="ace_compat_rhs_usf3_fnc_onPrepare";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
		class UserActions;
		class EventHandlers: Eventhandlers
		{
			class RHSUSF_EventHandlers;
		};
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property="ace_fastroping_equipFRIES";
				control="Checkbox";
				displayName="$STR_ace_fastroping_Eden_equipFRIES";
				tooltip="$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression="[_this] call ace_fastroping_fnc_equipFRIES";
				typeName="BOOL";
				condition="objectVehicle";
				defaultValue=0;
			};
		};
	};
	class RHS_UH1Y_FFAR: RHS_UH1Y
	{
		class UserActions: UserActions
		{
			class OpenCargoDoor;
			class CloseCargoDoor: OpenCargoDoor
			{
				condition="[this,'doorRB'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			};
			class CloseCargoLDoor: OpenCargoDoor
			{
				condition="[this,'doorLB'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			};
		};
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Eventhandlers;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
	};
	class RHS_MELB_base: Helicopter_Base_H
	{
	};
	class RHS_MELB_MH6M: RHS_MELB_base
	{
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{1.166,0.79000002,-0.0099999998},
			{-1.166,0.79000002,-0.0099999998}
		};
		ace_fastroping_onCut="ace_compat_rhs_usf3_fnc_onCut";
		ace_fastroping_onPrepare="ace_compat_rhs_usf3_fnc_onPrepare";
	};
	class RHS_UH60_Base: Heli_Transport_01_base_F
	{
		ace_refuel_fuelCapacity=1360;
	};
	class RHS_UH60M_base: RHS_UH60_Base
	{
	};
	class RHS_UH60M_US_base: RHS_UH60M_base
	{
	};
	class RHS_UH60M: RHS_UH60M_US_base
	{
		ace_fastroping_enabled=2;
		ace_fastroping_friesType="ACE_friesAnchorBar";
		ace_fastroping_friesAttachmentPoint[]={0,1.25,-0.64999998};
		ace_fastroping_onCut="ace_compat_rhs_usf3_fnc_onCut";
		ace_fastroping_onPrepare="ace_compat_rhs_usf3_fnc_onPrepare";
		ace_fastroping_ropeOrigins[]=
		{
			"ropeOriginLeft",
			"ropeOriginRight"
		};
		class UserActions
		{
			class OpenCargoDoor;
			class CloseCargoDoor: OpenCargoDoor
			{
				condition="[this,'doorRB'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			};
			class CloseCargoLDoor: OpenCargoDoor
			{
				condition="[this,'doorLB'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			};
		};
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property="ace_fastroping_equipFRIES";
				control="Checkbox";
				displayName="$STR_ace_fastroping_Eden_equipFRIES";
				tooltip="$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression="[_this] call ace_fastroping_fnc_equipFRIES";
				typeName="BOOL";
				condition="objectVehicle";
				defaultValue=0;
			};
		};
	};
	class RHS_UH60M_MEV: RHS_UH60M
	{
		ace_fastroping_enabled=0;
		class Attributes
		{
			delete ace_fastroping_equipFRIES;
		};
	};
	class RHS_UH60M_MEV2: RHS_UH60M_MEV
	{
		ace_fastroping_enabled=2;
		class Attributes
		{
			class ace_fastroping_equipFRIES
			{
				property="ace_fastroping_equipFRIES";
				control="Checkbox";
				displayName="$STR_ace_fastroping_Eden_equipFRIES";
				tooltip="$STR_ace_fastroping_Eden_equipFRIES_Tooltip";
				expression="[_this] call ace_fastroping_fnc_equipFRIES";
				typeName="BOOL";
				condition="objectVehicle";
				defaultValue=0;
			};
		};
	};
	class Heli_Transport_02_base_F;
	class RHS_CH_47F_base: Heli_Transport_02_base_F
	{
		ace_refuel_fuelCapacity=3914;
	};
	class RHS_CH_47F: RHS_CH_47F_base
	{
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{0.5,-7.1500001,-0.94999999},
			{-0.5,-7.1500001,-0.94999999}
		};
		ace_fastroping_onCut="ace_compat_rhs_usf3_fnc_onCut";
		ace_fastroping_onPrepare="ace_compat_rhs_usf3_fnc_onPrepare";
		class UserActions
		{
			class OpenCargoDoor;
			class CloseCargoDoor: OpenCargoDoor
			{
				condition="[this,'ramp_anim'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			};
		};
	};
	class rhsusf_CH53E_USMC: Helicopter_Base_H
	{
		ace_interaction_bodyWidth=3.5;
		ace_map_vehicleLightColor[]={1,0,0,0.1};
		ace_fastroping_enabled=1;
		ace_fastroping_ropeOrigins[]=
		{
			{0,-9.5,2.5999999}
		};
		ace_fastroping_onCut="ace_compat_rhs_usf3_fnc_onCut";
		ace_fastroping_onPrepare="ace_compat_rhs_usf3_fnc_onPrepare";
		class UserActions
		{
			class RampOpen;
			class RampClose: RampOpen
			{
				condition="[this,'ramp_bottom'] call ace_compat_rhs_usf3_fnc_canCloseDoor";
			};
		};
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
	};
	class RHS_AH1Z_base: Heli_Attack_01_base_F
	{
		ace_refuel_fuelCapacity=1600;
		ace_hellfire_addLaserDesignator=1;
	};
	class RHS_AH64_base: Heli_Attack_01_base_F
	{
		ace_refuel_fuelCapacity=1420;
		ace_hellfire_addLaserDesignator=1;
	};
	class MBT_01_arty_base_F;
	class rhsusf_m109tank_base: MBT_01_arty_base_F
	{
		ace_refuel_fuelCapacity=511;
	};
	class MRAP_01_base_F;
	class rhsusf_hmmwe_base: MRAP_01_base_F
	{
		ace_refuel_fuelCapacity=95;
	};
	class rhsusf_rg33_base: MRAP_01_base_F
	{
		ace_refuel_fuelCapacity=302;
	};
	class Truck_01_base_F: Truck_F
	{
	};
	class rhsusf_fmtv_base: Truck_01_base_F
	{
		ace_refuel_fuelCapacity=219;
	};
	class rhsusf_M1078A1P2_B_M2_fmtv_usarmy;
	class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_M1078A1P2_B_M2_fmtv_usarmy
	{
		transportAmmo=0;
		ace_rearm_defaultSupply=800;
		transportFuel=0;
		ace_refuel_hooks[]=
		{
			{1.1,0.89999998,-1.2}
		};
		ace_refuel_fuelCargo=900;
		transportRepair=0;
		ace_repair_canRepair=1;
	};
	class rhsusf_HEMTT_A4_base: Truck_01_base_F
	{
	};
	class rhsusf_M977A4_usarmy_wd: rhsusf_HEMTT_A4_base
	{
	};
	class rhsusf_M977A4_AMMO_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		transportAmmo=0;
		ace_rearm_defaultSupply=1200;
	};
	class rhsusf_M977A4_BKIT_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
	};
	class rhsusf_M977A4_AMMO_BKIT_usarmy_wd: rhsusf_M977A4_BKIT_usarmy_wd
	{
		transportAmmo=0;
		ace_rearm_defaultSupply=1200;
	};
	class rhsusf_M977A4_BKIT_M2_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
	};
	class rhsusf_M977A4_AMMO_BKIT_M2_usarmy_wd: rhsusf_M977A4_BKIT_M2_usarmy_wd
	{
		transportAmmo=0;
		ace_rearm_defaultSupply=1200;
	};
	class rhsusf_M978A4_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		transportFuel=0;
		ace_refuel_hooks[]=
		{
			{-0.44,-4.8699999,0},
			{0.5,-4.8699999,0}
		};
		ace_refuel_fuelCargo=10000;
	};
	class rhsusf_M978A4_BKIT_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		transportFuel=0;
		ace_refuel_hooks[]=
		{
			{-0.44,-4.8699999,0},
			{0.5,-4.8699999,0}
		};
		ace_refuel_fuelCargo=10000;
	};
	class rhsusf_M977A4_REPAIR_usarmy_wd: rhsusf_M977A4_usarmy_wd
	{
		transportRepair=0;
		ace_repair_canRepair=1;
	};
	class rhsusf_M977A4_REPAIR_BKIT_usarmy_wd: rhsusf_M977A4_BKIT_usarmy_wd
	{
		transportRepair=0;
		ace_repair_canRepair=1;
	};
	class rhsusf_M977A4_REPAIR_BKIT_M2_usarmy_wd: rhsusf_M977A4_BKIT_M2_usarmy_wd
	{
		transportRepair=0;
		ace_repair_canRepair=1;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
	};
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
	{
		ace_map_vehicleLightColor[]={0,1,0,0.1};
		ace_refuel_fuelCapacity=360;
	};
	class rhsusf_m113_usarmy: rhsusf_m113tank_base
	{
	};
	class rhsusf_m113_usarmy_supply: rhsusf_m113_usarmy
	{
		transportAmmo=0;
		ace_rearm_defaultSupply=1200;
	};
	class APC_Tracked_03_base_F;
	class RHS_M2A2_Base: APC_Tracked_03_base_F
	{
		ace_refuel_fuelCapacity=746;
	};
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F
	{
		ace_refuel_fuelCapacity=6223;
	};
	class Plane_Base_F;
	class RHS_C130J_Base: Plane_Base_F
	{
		ace_refuel_fuelCapacity=25704;
		ace_cargo_space=4;
		ace_cargo_hasCargo=1;
	};
	class StaticWeapon: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions;
		};
	};
	class StaticMortar: StaticWeapon
	{
	};
	class RHS_M252_Base: StaticMortar
	{
		class ACE_Actions: ACE_Actions
		{
			class ACE_MainActions: ACE_MainActions
			{
				position="";
				selection="main_gun";
			};
		};
	};
	class rhsusf_infantry_usmc_base;
	class rhsusf_usmc_marpat_wd_helipilot: rhsusf_infantry_usmc_base
	{
		ace_gforcecoef=0.55000001;
	};
	class rhsusf_infantry_army_base;
	class rhsusf_army_ocp_helipilot: rhsusf_infantry_army_base
	{
		ace_gforcecoef=0.55000001;
	};
	class rhsusf_usmc_marpat_wd_rifleman_m4;
	class rhsusf_airforce_jetpilot: rhsusf_usmc_marpat_wd_rifleman_m4
	{
		ace_gforcecoef=0.55000001;
	};
};
class CfgGlasses
{
	class G_Combat;
	class rhs_ess_black: G_Combat
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhs_googles_black: G_Combat
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhs_googles_clear: G_Combat
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=0;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhs_googles_orange: G_Combat
	{
		ACE_Color[]={1,0.5,0};
		ACE_TintAmount=8;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhs_googles_yellow: G_Combat
	{
		ACE_Color[]={0,0,-1.5};
		ACE_TintAmount=8;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhsusf_oakley_goggles_base: G_Combat
	{
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhsusf_oakley_goggles_blk: rhsusf_oakley_goggles_base
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
	};
	class rhsusf_oakley_goggles_clr: rhsusf_oakley_goggles_base
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=0;
	};
	class rhsusf_oakley_goggles_ylw: rhsusf_oakley_goggles_base
	{
		ACE_Color[]={0,0,-1.5};
		ACE_TintAmount=8;
	};
	class rhsusf_shemagh_gogg_base: G_Combat
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhsusf_shemagh2_gogg_base: G_Combat
	{
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_Overlay="";
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class rhsusf_shemagh_base: G_Combat
	{
		ACE_Overlay="";
		ACE_OverlayDirt="";
		ACE_OverlayCracked="";
		ACE_Resistance=0;
		ACE_Protection=0;
		ACE_DustPath="";
	};
	class rhsusf_shemagh2_base: G_Combat
	{
		ACE_Overlay="";
		ACE_OverlayDirt="";
		ACE_OverlayCracked="";
		ACE_Resistance=0;
		ACE_Protection=0;
		ACE_DustPath="";
	};
};
