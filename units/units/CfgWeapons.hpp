class asdg_OpticRail1913;
class asdg_FrontSideRail
{
	class compatibleItems;
};
class asdg_UnderSlot;
class CfgWeapons{
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
	class SPS_hk417_20_vfg_black_f;
	class SMA_417_acc:SPS_hk417_20_vfg_black_f{
		author="Slatery";
		_generalMacro="SMA_417_acc";
		
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
				item="rhsusf_acc_acog_mdo";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="rhsusf_acc_harris_bipod";
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