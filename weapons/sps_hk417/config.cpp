class CfgPatches
{
	class SPS_weapons_hk417
	{
		addonRootClass="A3_Weapons_F";
		author[]=
		{
			"SPS Team"
		};
		name="SPS-Weapons-HK417";
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Data_F",
			"A3_Weapons_F_Mark",
			"cba_jr",
			"ace_smallarms",
			"ace_ballistics",
			"SPS_Weapons",
			"A3_Data_F_Mark",
			"SPS_weapons_hk416"
		};
		requiredVersion=1.6799999;
		units[]={};
		url="http://specialforcesgroup.co.uk/";
		version="1.0.0";
		versionAr[]={1,0,0};
		versionStr="1.0.0";
		weapons[]=
		{
			"SPS_hk417_13_afg_ral8000_F",
			"SPS_hk417_13_afg_black_F",
			"SPS_hk417_13_afg_fde_F",
			"SPS_hk417_13_vfg_ral8000_F",
			"SPS_hk417_13_vfg_black_F",
			"SPS_hk417_13_vfg_fde_F",
			"SPS_hk417_16_afg_ral8000_F",
			"SPS_hk417_16_afg_black_F",
			"SPS_hk417_16_afg_fde_F",
			"SPS_hk417_16_vfg_ral8000_F",
			"SPS_hk417_16_vfg_black_F",
			"SPS_hk417_16_vfg_fde_F",
			"SPS_hk417_20_afg_ral8000_F",
			"SPS_hk417_20_afg_black_F",
			"SPS_hk417_20_afg_fde_F",
			"SPS_hk417_20_vfg_ral8000_F",
			"SPS_hk417_20_vfg_black_F",
			"SPS_hk417_20_vfg_fde_F",
			"SPS_hk417_13_glm_black_f",
			"SPS_hk417_13_glm_fde_f",
			"SPS_hk417_13_glm_ral8000_f",
			"SPS_hk417_16_glm_black_f",
			"SPS_hk417_16_glm_ral8000_f",
			"SPS_hk417_16_glm_fde_f"
		};
		magazines[]=
		{
			"SPS_20Rnd_762x51mm_M80A1_EPR",
			"SPS_20Rnd_762x51mm_M80A1_EPR_Tracer",
			"SPS_20Rnd_762x51mm_M80A1_EPR_IR"
		};
		ammo[]=
		{
			"B_SPS_M80A1_EPR",
			"B_SPS_M80A1_EPR_Red",
			"B_SPS_M80A1_EPR_IR"
		};
	};
	class SPS_762_Magazines
	{
		units[]={};
		magazines[]=
		{
			"SPS_20Rnd_762x51mm_M80A1_EPR",
			"SPS_20Rnd_762x51mm_M80A1_EPR_Tracer",
			"SPS_20Rnd_762x51mm_M80A1_EPR_IR"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Ammoboxes",
			"A3_Weapons_F_beta",
			"A3_Weapons_F_Acc"
		};
		weapons[]={};
		ammo[]=
		{
			"B_SPS_M80A1_EPR",
			"B_SPS_M80A1_EPR_Red",
			"B_SPS_M80A1_EPR_IR"
		};
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;
class PointerSlot;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_MuzzleSlot_762;
class asdg_UnderSlot;
class SPS;
class ACE_ATragMX_Presets
{
	class sps_HK417_20M80A1_AtragMX
	{
		preset[]=
		{
			"HK417 20 M80A1",
			919.40002,
			100,
			0.076293997,
			-0.00103711,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.4802332,
			7.8200002,
			27.940001,
			0.398,
			1,
			"ICAO",
			
			{
				{-15,900},
				{0,907},
				{10,914},
				{15,919},
				{25,933},
				{30,942},
				{35,953}
			},
			
			{
				{0,0.39899999},
				{810,0.39199999},
				{1030,0.38299999},
				{1120,0.38100001},
				{1270,0.38},
				{1410,0.37900001},
				{1530,0.37900001}
			}
		};
	};
	class sps_HK417_16M80A1_AtragMX
	{
		preset[]=
		{
			"HK417 16 M80A1",
			885.70001,
			100,
			0.079648003,
			-0.00103711,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.4802332,
			7.8200002,
			27.940001,
			0.398,
			1,
			"ICAO",
			
			{
				{-15,867},
				{0,873},
				{10,881},
				{15,886},
				{25,899},
				{30,908},
				{35,920}
			},
			
			{
				{0,0.39899999},
				{810,0.39199999},
				{1030,0.38299999},
				{1120,0.38100001},
				{1270,0.38},
				{1410,0.37900001},
				{1530,0.37900001}
			}
		};
	};
	class sps_HK417_20M80_AtragMX
	{
		preset[]=
		{
			"HK417 20 M80",
			820.09998,
			100,
			0.086176001,
			-0.00103711,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			9.4608002,
			7.8200002,
			27.940001,
			0.398,
			1,
			"ICAO",
			
			{
				{-15,794},
				{0,800},
				{10,807},
				{15,812},
				{25,826},
				{30,835},
				{35,846}
			},
			
			{
				{0,0.39899999},
				{810,0.39199999},
				{1030,0.38299999},
				{1120,0.38100001},
				{1270,0.38},
				{1410,0.37900001},
				{1530,0.37900001}
			}
		};
	};
	class sps_HK417_16M80_AtragMX
	{
		preset[]=
		{
			"HK417 16 M80",
			802.5,
			100,
			0.087927997,
			-0.00103711,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			9.4608002,
			7.8200002,
			27.940001,
			0.398,
			1,
			"ICAO",
			
			{
				{-15,776},
				{0,783},
				{10,790},
				{15,795},
				{25,808},
				{30,818},
				{35,829}
			},
			
			{
				{0,0.39899999},
				{810,0.39199999},
				{1030,0.38299999},
				{1120,0.38100001},
				{1270,0.38},
				{1410,0.37900001},
				{1530,0.37900001}
			}
		};
	};
	class sps_HK417_20M118LR_AtragMX
	{
		preset[]=
		{
			"HK417 20 M118LR",
			780.20001,
			100,
			0.090147004,
			-0.00085156999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.34,
			7.8200002,
			27.940001,
			0.48199999,
			1,
			"ICAO",
			
			{
				{-15,754},
				{0,760},
				{10,767},
				{15,772},
				{25,786},
				{30,795},
				{35,806}
			},
			
			{
				{0,0.48300001},
				{790,0.479},
				{920,0.47499999},
				{1130,0.465},
				{1230,0.46200001},
				{1420,0.46000001},
				{1630,0.45899999}
			}
		};
	};
	class sps_HK417_16M118LR_AtragMX
	{
		preset[]=
		{
			"HK417 16 M118LR",
			753.79999,
			100,
			0.092773996,
			-0.00085156999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.34,
			7.8200002,
			27.940001,
			0.48199999,
			1,
			"ICAO",
			
			{
				{-15,727},
				{0,734},
				{10,741},
				{15,746},
				{25,760},
				{30,769},
				{35,780}
			},
			
			{
				{0,0.48300001},
				{790,0.479},
				{920,0.47499999},
				{1130,0.465},
				{1230,0.46200001},
				{1420,0.46000001},
				{1630,0.45899999}
			}
		};
	};
	class sps_HK417_20Mk316_AtragMX
	{
		preset[]=
		{
			"HK417 20 Mk316",
			790.09998,
			100,
			0.089162,
			-0.00084311003,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.34,
			7.8200002,
			27.940001,
			0.48300001,
			1,
			"ICAO",
			
			{
				{-15,785},
				{0,786},
				{10,787},
				{15,7989},
				{25,791},
				{30,793},
				{35,795}
			},
			
			{
				{0,0.484},
				{830,0.479},
				{950,0.47499999},
				{1130,0.46700001},
				{1260,0.463},
				{1430,0.461},
				{1660,0.45899999}
			}
		};
	};
	class sps_HK417_16Mk316_AtragMX
	{
		preset[]=
		{
			"HK417 16 Mk316",
			776.90002,
			100,
			0.090475,
			-0.00084311003,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			11.34,
			7.8200002,
			27.940001,
			0.48300001,
			1,
			"ICAO",
			
			{
				{-15,772},
				{0,773},
				{10,774},
				{15,775},
				{25,778},
				{30,780},
				{35,782}
			},
			
			{
				{0,0.484},
				{830,0.479},
				{950,0.47499999},
				{1130,0.46700001},
				{1260,0.463},
				{1430,0.461},
				{1660,0.45899999}
			}
		};
	};
	class sps_HK417_20Mk319_AtragMX
	{
		preset[]=
		{
			"HK417 20 Mk319",
			910.09998,
			100,
			0.07722,
			-0.00104515,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.4239998,
			7.8200002,
			27.940001,
			0.377,
			1,
			"ICAO",
			
			{
				{-15,907},
				{0,908},
				{10,909},
				{15,909},
				{25,911},
				{30,912},
				{35,913}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
	class sps_HK417_16Mk319_AtragMX
	{
		preset[]=
		{
			"HK417 16 Mk319",
			894.29999,
			100,
			0.078791998,
			-0.00104515,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.4239998,
			7.8200002,
			27.940001,
			0.377,
			1,
			"ICAO",
			
			{
				{-15,892},
				{0,893},
				{10,893},
				{15,894},
				{25,895},
				{30,896},
				{35,897}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
	class sps_HK417_20M993_AtragMX
	{
		preset[]=
		{
			"HK417 20 M993",
			930.09998,
			100,
			0.075228997,
			-0.0010938999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.2299995,
			7.8200002,
			27.940001,
			0.359,
			1,
			"ICAO",
			
			{
				{-15,903},
				{0,910},
				{10,917},
				{15,922},
				{25,936},
				{30,945},
				{35,956}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
	class sps_HK417_16M993_AtragMX
	{
		preset[]=
		{
			"HK417 16 M993",
			894.29999,
			100,
			0.076981001,
			-0.0010938999,
			7.6199999,
			0,
			2,
			10,
			120,
			0,
			0,
			8.2299995,
			7.8200002,
			27.940001,
			0.359,
			1,
			"ICAO",
			
			{
				{-15,886},
				{0,893},
				{10,900},
				{15,905},
				{25,918},
				{30,928},
				{35,939}
			},
			
			{
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0},
				{0,0}
			}
		};
	};
};
class CfgWeapons
{
	class Rifle;
	class UGL_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
		class GunParticles;
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class GunParticles: GunParticles
		{
			class SecondEffect;
		};
		class WeaponSlotsInfo;
		class Single;
		class FullAuto;
		class fullauto_medium;
		class single_close_optics1;
		class single_medium_optics1;
		class single_far_optics1;
	};
	class SPS_hk417_base_f: EBR_base_F
	{
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim",
			"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"SPS_20Rnd_762x51mm_M80A1_EPR",
			"SPS_20Rnd_762x51mm_M80A1_EPR_Tracer",
			"SPS_20Rnd_762x51mm_M80A1_EPR_IR"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0.050000001,0.38};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.64999998};
				iconScale=0.2;
			};
		};
		recoil="recoil_dmr_03";
		changeFiremodeSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Safety_02",
			0.112202,
			1,
			5
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_Dry",
			0.25118899,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR_03_reload",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
		};
		ACE_clearJamAction="GestureReloadSPAR_01";
		ACE_checkTemperatureAction="Gear";
		ACE_overheating_mrbs=10000;
		ACE_Overheating_Dispersion[]={0,0.00079999998,0.0012000001,0.0024000001};
		ACE_Overheating_SlowdownFactor[]={1,1,1,0.89999998};
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		ACE_ironsightbaseangle=0.057300001;
		reloadAction="GestureReloadSPAR_01";
		allowedSlots[]={901};
		maxZeroing=1200;
		discreteDistance[]={100,200,300,400};
		discreteDistanceInitIndex=0;
		selectionFireAnim="zasleh";
		class Single: Single
		{
			reloadTime=0.1;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.1;
		};
		class sps_glm: UGL_F
		{
			displayName="HK GLM";
			descriptionShort="40mm Grenade Launcher Module";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350"
			};
			discreteDistanceInitIndex=2;
			reloadAction="GestureReloadSPARUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_UGL_reload",
				1,
				1,
				10
			};
		};
	};
	class SPS_hk417_13_vfg_black_f: SPS_hk417_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00041444;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00041444;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00041444;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00041444;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00041444;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00041444;
		};
		scope=2;
		ACE_barrelLength=330.20001;
		ACE_barrelTwist=279.39999;
		dexterity=1.6;
		displayName="HK417A2 13 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_VFG2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\Black\BarrelGroup_13_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\VerticalGrip_low_CO.paa"
		};
		inertia=0.47999999;
		initSpeed=-0.9425;
		model="x\SPS\Weapons\SPS_hk417\HK417_13.p3d";
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_vfg_Black_ca.paa";
		UIpicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_vfg_Black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=93;
		};
	};
	class SPS_hk417_13_vfg_ral8000_f: SPS_hk417_13_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_13_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_vfg_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_vfg_ral8000_ca.paa";
	};
	class SPS_hk417_13_vfg_fde_f: SPS_hk417_13_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_13_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_vfg_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_vfg_fde_ca.paa";
	};
	class SPS_hk417_13_afg_black_f: SPS_hk417_13_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_AFG2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BarrelGroup_13_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_afg_Black_ca.paa";
		UIpicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_afg_Black_ca.paa";
	};
	class SPS_hk417_13_afg_ral8000_f: SPS_hk417_13_afg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_13_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_afg_ral8000_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_afg_ral8000_ca.paa";
	};
	class SPS_hk417_13_afg_fde_f: SPS_hk417_13_afg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_13_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_afg_fde_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_13inch_afg_fde_ca.paa";
	};
	class SPS_hk417_16_vfg_black_f: SPS_hk417_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00037269999;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00037269999;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00037269999;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00037269999;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00037269999;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00037269999;
		};
		scope=2;
		ACE_barrelLength=419.20001;
		ACE_barrelTwist=279.39999;
		dexterity=1.5;
		displayName="HK417A2 16.5 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_VFG2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\Black\BarrelGroup_16_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\VerticalGrip_low_CO.paa"
		};
		inertia=0.52200001;
		initSpeed=-0.9975;
		maxZeroing=1400;
		model="x\SPS\Weapons\SPS_hk417\HK417_16.p3d";
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_vfg_Black_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_vfg_Black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class SPS_hk417_16_vfg_ral8000_f: SPS_hk417_16_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_16_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_vfg_RAL8000_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_vfg_RAL8000_ca.paa";
	};
	class SPS_hk417_16_vfg_fde_f: SPS_hk417_16_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_16_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_vfg_FDE_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_vfg_FDE_ca.paa";
	};
	class SPS_hk417_16_afg_black_f: SPS_hk417_16_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_AFG2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BarrelGroup_16_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_afg_Black_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_afg_Black_ca.paa";
	};
	class SPS_hk417_16_afg_ral8000_f: SPS_hk417_16_afg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_16_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_afg_RAL8000_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_afg_RAL8000_ca.paa";
	};
	class SPS_hk417_16_afg_fde_f: SPS_hk417_16_afg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup_16_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\RIS_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_afg_FDE_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_16inch_afg_FDE_ca.paa";
	};
	class SPS_hk417_20_vfg_black_f: SPS_hk417_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00030330001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00030330001;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00030330001;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00030330001;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00030330001;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00030330001;
		};
		scope=2;
		ACE_barrelLength=508.60001;
		ACE_barrelTwist=279.39999;
		dexterity=1.4;
		displayName="HK417A2 20 Barrel (VFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_VFG2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\Black\BarrelGroup20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\VerticalGrip_low_CO.paa"
		};
		inertia=0.59100002;
		initSpeed=-1.0337501;
		maxZeroing=1600;
		model="x\SPS\Weapons\SPS_hk417\HK417_20.p3d";
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_vfg_Black_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_vfg_Black_ca.paa";
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104;
		};
	};
	class SPS_hk417_20_vfg_ral8000_f: SPS_hk417_20_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 20 Barrel (VFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_vfg_RAL8000_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_vfg_RAL8000_ca.paa";
	};
	class SPS_hk417_20_vfg_fde_f: SPS_hk417_20_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 20 Barrel (VFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\VerticalGrip_low_CO.paa"
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_vfg_FDE_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_vfg_FDE_ca.paa";
	};
	class SPS_hk417_20_afg_black_f: SPS_hk417_20_vfg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 20 Barrel (AFG) Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_AFG2.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\Black\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BarrelGroup20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\Black\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_afg_Black_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_afg_Black_ca.paa";
	};
	class SPS_hk417_20_afg_ral8000_f: SPS_hk417_20_afg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 20 Barrel (AFG) RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_afg_RAL8000_ca.paa";
		Uipicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_afg_RAL8000_ca.paa";
	};
	class SPS_hk417_20_afg_fde_f: SPS_hk417_20_afg_black_f
	{
		author="SPS Team";
		displayName="HK417A2 20 Barrel (AFG) Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip"
		};
		hiddenSelectionsTextures[]=
		{
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\AFG_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BarrelGroup20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\BoltGroup_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Addons_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Magazine_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\RIS20_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\DarkEarth\Receiver_low_CO.paa",
			"x\SPS\Weapons\SPS_hk417\data\RAL8000\Stock_low_CO.paa",
			""
		};
		picture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_afg_FDE_ca.paa";
		UiPicture="x\SPS\Weapons\SPS_hk417\ui\HK417A2_20inch_afg_FDE_ca.paa";
	};
	class SPS_hk417_13_glm_black_f: SPS_hk417_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00041440001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00041440001;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00041440001;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00041440001;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00041440001;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00041440001;
		};
		scope=1;
		ACE_barrelLength=330.20001;
		ACE_barrelTwist=279.39999;
		dexterity=1.5;
		displayName="HK417A2 13 Barrel GLM Black";
		handAnim[]={};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp417",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]={};
		inertia=0.55000001;
		initSpeed=-0.9425;
		muzzles[]=
		{
			"this",
			"sps_glm"
		};
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[]={901};
			mass=113;
		};
	};
	class SPS_hk417_13_glm_ral8000_f: SPS_hk417_13_glm_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel GLM RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp417",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		hiddenSelectionsTextures[]={};
	};
	class SPS_hk417_13_glm_fde_f: SPS_hk417_13_glm_black_f
	{
		author="SPS Team";
		displayName="HK417A2 13 Barrel GLM Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp417",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
	};
	class SPS_hk417_16_glm_black_f: SPS_hk417_base_f
	{
		author="SPS Team";
		class Single: Single
		{
			dispersion=0.00037269999;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00037269999;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00037269999;
		};
		class single_close_optics1: single_close_optics1
		{
			dispersion=0.00037269999;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00037269999;
		};
		class single_far_optics1: single_far_optics1
		{
			dispersion=0.00037269999;
		};
		scope=2;
		ACE_barrelLength=419.20001;
		ACE_barrelTwist=279.39999;
		dexterity=1.4;
		displayName="HK417A2 16.5 Barrel GLM Black";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"x\SPS\Weapons\SPS_hk417\data\rtm\HK417_GLM.rtm"
		};
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp417",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
		inertia=0.59200001;
		initSpeed=-0.9975;
		maxZeroing=1400;
		muzzles[]=
		{
			"this",
			"sps_glm"
		};
		class ItemInfo
		{
			priority=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=117;
		};
	};
	class SPS_hk417_16_glm_ral8000_f: SPS_hk417_16_glm_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel GLM RAL8000";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp417",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
	};
	class SPS_hk417_16_glm_fde_f: SPS_hk417_16_glm_black_f
	{
		author="SPS Team";
		displayName="HK417A2 16.5 Barrel GLM Dark Earth";
		hiddenSelections[]=
		{
			"AFG",
			"BarrelGroup",
			"BoltGroup",
			"AddonsGroup",
			"Magazine",
			"RIS",
			"Receiver",
			"Stock",
			"VertGrip",
			"40mmCase",
			"40mmRound",
			"Frame",
			"FrontClamp417",
			"Moveables",
			"Swingplate",
			"T1Body",
			"SpuhrMount",
			"GLM_Barrel"
		};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_762x51_Ball;
	class B_SPS_M80A1_EPR: B_762x51_Ball
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		airFriction=-0.00103;
		caliber=1.53;
		deflecting=21;
		hit=15.74;
		typicalSpeed=840;
		tracerScale=1.2;
		tracerStartTime=0.072999999;
		tracerEndTime=2.15957;
		ACE_caliber=7.823;
		ACE_bulletLength=30.1371;
		ACE_bulletMass=8.4802332;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.2};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={789.20001,888.5,926.79999,942.79999,953.20001,961};
		ACE_barrelLengths[]={254,406.39999,508,558.79999,609.59998,700};
	};
	class B_SPS_M80A1_EPR_Red: B_SPS_M80A1_EPR
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
	};
	class B_SPS_M80A1_EPR_IR: B_SPS_M80A1_EPR
	{
		scope=2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine;
	class 20Rnd_762x51_Mag;
	class SPS_20Rnd_762x51mm_M80A1_EPR: 20Rnd_762x51_Mag
	{
		scope=2;
		displayName="7.62x51mm 20Rnd Mag (M80A1 EPR)";
		displaynameshort="M80A1";
		ammo="B_SPS_M80A1_EPR";
		count=20;
		initSpeed=869;
		tracersEvery=0;
		lastRoundsTracer=3;
		descriptionShort="Caliber: 7.62x51mm M80A1 EPR. <br> Rounds: 20";
	};
	class SPS_20Rnd_762x51mm_M80A1_EPR_Tracer: SPS_20Rnd_762x51mm_M80A1_EPR
	{
		scope=2;
		displayName="7.62x51mm 20Rnd Mag (M80A1 EPR Tracer)";
		displaynameshort="M80A1 T";
		ammo="B_SPS_M80A1_EPR_Red";
		tracersEvery=1;
	};
	class SPS_20Rnd_762x51mm_M80A1_EPR_IR: SPS_20Rnd_762x51mm_M80A1_EPR
	{
		scope=2;
		displayName="7.62x51mm 20Rnd Mag (M80A1 EPR IR)";
		displaynameshort="M80A1 IR";
		ammo="B_SPS_M80A1_EPR_IR";
		tracersEvery=1;
	};
};
