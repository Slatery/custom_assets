class asdg_OpticRail1913;
class asdg_FrontSideRail
{
	class compatibleItems;
};
class asdg_UnderSlot;
class CfgWeapons{
	// Headgear 
	class ADFU_H_Airframe_Cover_07;
	
	class ADFU_H_OpsCore_09;


	class ADFU_H_OpsCore_09_AMC: ADFU_H_OpsCore_09
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
	class ADFU_H_Airframe_Cover_07_AMC: ADFU_H_Airframe_Cover_07
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
	// Weapons
	// ===================================================================
	class SMA_M4MOE_SM;
	class SMA_M4_GL_SM;
	class SMA_AUG_EGLM_Olive;
	class rhs_weap_m249_pip_L;
	class SMA_AUG_A3_MCAM_F;
	class SMG_05_F;
	// Custom Config for SMA guns
	// Custom Steyr
	// ===================================================================
	class Rifle;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher
	{
		class Single;
	};
	class mk20_base_f;
	class SMA_AssaultBase: mk20_base_f
	{
		class WeaponSlotsInfo;
	};
	class SMA_556_RIFLEBASE: SMA_AssaultBase
	{
		class Single;
		class FullAuto;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot;
			class CowsSlot;
			class MuzzleSlot;
		};
	};
	
	


	// Custom 417
	// ===================================================================
	class SMA_762_RIFLEBASE: SMA_AssaultBase
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class UnderBarrelSlot;
			class PointerSlot;
		};
		class Single;
		class FullAuto;
	};
	class SMA_HK417: SMA_762_RIFLEBASE
	{
		scope=2;
		dlc="SMA";
		inertia=0.80000001;
		dexterity=1.6;
		recoil="recoil_dmr_06";
		displayName="HK417 Assaulter 12in";
		author="Specialist Military Arms";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SMA_HK417\Data\Anim\HK416agf.rtm"
		};
		model="\SMA_HK417\HK417.p3d";
		picture="\SMA_HK417\ui\SMAHK417_ca.paa";
		descriptionShort="7.62mm Battle Rifle";
		reloadaction="GestureReloadSMG_02";
		drysound[]=
		{
			"SMA_SOUND\data\HK417\Mainempty1",
			1.5,
			1,
			10
		};
		reloadmagazinesound[]=
		{
			"SMA_SOUND\data\HK417\ARRL762.ogg",
			1,
			1,
			35
		};
		changeFiremodeSound[]=
		{
			"SMA_SOUND\data\HK417\AR1",
			0.25118899,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		opticsZoomMin=0.375;
		opticsZoomMax=0.9;
		opticsZoomInit=0.75;
		discreteDistance[]={100,200,300,400};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=83.199997;
			allowedSlots[]={901};

			class CowsSlot : CowsSlot{};
			class UnderBarrelSlot{};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"SMA_supptan_762",
					"SMA_supp_762",
					"sma_gemtech_one_blk"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]+=
				{
					"SMA_ANPEQ15_TOP_417TAN",
					"SMA_ANPEQ15_TOP_417BLK",
					"SMA_SFPEQ_HK417TOP_TAN",
					"SMA_SFPEQ_HK417TOP_TAN_LIGHT",
					"SMA_SFPEQ_HK417TOP_BLK",
					"SMA_SFPEQ_HK417TOP_BLK_LIGHT"
				};
			};
		};
		class Single: Single
		{
			scope=2;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class SilencedSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_SilencerShot_Soundset",
					"TRG20_silencerTail_SoundSet",
					"TRG20_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_Shot_Soundset",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.101;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class SilencedSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_SilencerShot_Soundset",
					"TRG20_silencerTail_SoundSet",
					"TRG20_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSet="";
				soundSetShot[]=
				{
					"SMA_HK417_Shot_Soundset",
					"TRG20_Tail_SoundSet",
					"TRG20_InteriorTail_SoundSet"
				};
			};
		};
		class GunParticles
		{
			class MuzzelEffect
			{
				directionname="Konec hlavne";
				effectname="RifleAssaultCloud";
				positionname="Usti hlavne";
			};
			class EjectionEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
	};

	class SMA_HK417_16in: SMA_HK417
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=88;
			class asdg_FrontSideRail_SMAAssault: asdg_FrontSideRail
			{
				class compatibleItems: compatibleItems
				{
					SMA_ANPEQ15_TOP_417TAN=1;
					SMA_ANPEQ15_TOP_417BLK=1;
					SMA_SFPEQ_HK417TOP_TAN=1;
					SMA_SFPEQ_HK417TOP_TAN_LIGHT=1;
					SMA_SFPEQ_HK417TOP_BLK=1;
					SMA_SFPEQ_HK417TOP_BLK_LIGHT=1;
				};
			};
		};
		scope=2;
		inertia=0.81999999;
		recoil="recoil_dmr_06";
		displayName="HK417 Recce 16in ";
		author="Specialist Military Arms";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SMA_HK417\Data\Anim\HK416agf.rtm"
		};
		model="\SMA_HK417\HK417_16in.p3d";
		picture="\SMA_HK417\ui\SMAHK41716in_ca.paa";
		descriptionShort="7.62mm Battle Rifle";
		reloadaction="GestureReloadSMG_02";
		reloadmagazinesound[]=
		{
			"SMA_SOUND\data\HK417\ARRL762.ogg",
			1,
			1,
			35
		};
		changeFiremodeSound[]=
		{
			"SMA_SOUND\data\HK417\AR1",
			0.25118899,
			1,
			20
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		opticsZoomMin=0.375;
		opticsZoomMax=0.9;
		opticsZoomInit=0.75;
		discreteDistance[]={100,200,300,400};
		class Single: Single
		{
			dispersion=0.00028581001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00028581001;
		};
	};
	// end
	//==================================================================
	class SMA_minimi_acc:rhs_weap_m249_pip_L{
		author="Slatery";
		_generalMacro="SMA_minimi_acc";
		class LinkedItems
		{
			class LinkedItemsAcc{
				slot="PointerSlot"; 
				item="acc_pointer_ir";
			};
			class LinkedItemsOptic{
				slot="CowsSlot";
				item="SMA_eotech552";
			};
		};
	};
	class SMA_Steyr_acc:SMA_AUG_A3_MCAM_F{
		author="Slatery";
		_generalMacro="SMA_Steyr_acc";
		
		class LinkedItems
		{
			
			class LinkedItemsAcc{
				slot="PointerSlot";
				item="SMA_ANPEQ15_BLK";
			};
			class LinkedItemsOptic{
				slot="CowsSlot";
				item="rhsusf_acc_acog_rmr";
			};
		};
	};
	class SMA_Steyr_gl_acc:SMA_AUG_EGLM_Olive{
		author="Slatery";
		_generalMacro="SMA_Steyr_gl_acc";
		
		class LinkedItems
		{
			
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="SMA_ANPEQ15_BLK";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_acog_rmr";
			};
		};
	};
	class SMA_M4_rifleman_acc:SMA_M4MOE_SM{
		author="Slatery";
		_generalMacro="SMA_M4_rifleman_acc";
		
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot"; 
				item="SMA_ANPEQ15_BLK";
			};
			class LinkedItemsOptic 
			{
				slot="CowsSlot";
				item="SMA_eotech552";
			};
		};
	};
	class SMA_M4_gl_acc:SMA_M4_GL_SM{
		author="Slatery";
		_generalMacro="SMA_M4_gl_acc";
		
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot"; 
				item="SMA_ANPEQ15_BLK";
			};
			class LinkedItemsOptic 
			{
				slot="CowsSlot";
				item="SMA_eotech552";
			};
		};
	};
	class SMA_417_acc:SMA_HK417_16in{
		author="Slatery";
		_generalMacro="SMA_417_acc";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot"; 
				item="SMA_ANPEQ15_BLK";
			};
			class LinkedItemsOptic 
			{
				slot="CowsSlot";
				item="SMA_eotech552";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_02_f_blk";
			};
		};
	};
	class SMA_M4_light_acc:SMA_M4MOE_SM{
		author="Slatery";
		_generalMacro="SMA_M4_light_acc";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot"; 
				item="SMA_ANPEQ15_BLK";
			};
			class LinkedItemsOptic 
			{
				slot="CowsSlot";
				item="SMA_eotech552";
			};
		};
	};
	class MP5_rds: SMG_05_F{
		_generalMacro = "MP5_rds";
		class LinkedItemsOptic 
		{
			slot="CowsSlot";
			item="rhsusf_acc_mrds";
		};
	}
	//template
	// class arifle_MXM_khk_MOS_Pointer_Bipod_F: arifle_MXM_khk_F <--class name and inherited stats
	// {
		// author="$STR_A3_Bohemia_Interactive"; 
		// _generalMacro="arifle_MXM_khk_MOS_Pointer_Bipod_F";
		// class LinkedItems
		// {
		// 	class LinkedItemsAcc
		// 	{
		// 		slot="PointerSlot"; 
		// 		item="SMA_ANPEQ15_BLK";
		// 	};
		// 	class LinkedItemsOptic 
		// 	{
		// 		slot="CowsSlot";
		// 		item="optic_SOS_khk_F";
		// 	};
		// 	class LinkedItemsUnder
		// 	{
		// 		slot="UnderBarrelSlot";
		// 		item="bipod_01_F_khk";
		// 	};
		// };
	// };

	// Temp definition for broken cfg
	
};