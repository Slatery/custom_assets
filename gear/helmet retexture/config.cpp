class CfgPatches
{
	class ADFU_Units
	{
		units[]={};
		weapons[]=
		{
			"ADFU_Wetsuit"
		};
		requiredAddons[]=
		{
			"ADFU_Base"
		};
		author="ADFU";
		projectName="Australian Defense Force - Uncut";
	};
};
class CfgVehicles
{
	class Man;
	class B_Soldier_base_F;
	class B_Soldier_03_f;
	class B_Soldier_diver_base_F;
	class ADFU_Soldier_G3: B_Soldier_base_F
	{
		author="ADFU";
		dlc="ADFU";
		faction="ADFU";
		editorSubcategory="adfu_men";
		side=1;
		scope=1;
		scopeCurator=0;
		vehicleClass="Men";
		displayName="Rifleman";
		uniformClass="ADFU_G3";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ADFU_Units\data\clothing1_ADFU.rvmat"
		};
		accuracy=2.3;
		camouflage=0.5;
		linkeditems[]=
		{
			"ADFU_v_TBAS_light",
			"ADFU_h_opscore_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_v_TBAS_light",
			"ADFU_h_opscore_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		weapons[]=
		{
			"ADFU_SteyrEF88_optic",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ADFU_SteyrEF88_optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B"
		};
		respawnMagazines[]=
		{
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B"
		};
	};
	class ADFU_Soldier_G3_Tee: B_Soldier_base_F
	{
		author="ADFU";
		dlc="ADFU";
		faction="ADFU";
		editorSubcategory="adfu_men";
		side=1;
		scope=1;
		scopeCurator=2;
		vehicleclass="Men";
		displayName="Rifleman [Tee]";
		nakedUniform="U_BasicBody";
		uniformClass="ADFU_G3_AMCU_Tee";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		accuracy=2.3;
		camouflage=0.5;
		linkeditems[]=
		{
			"ADFU_v_TBAS_light",
			"ADFU_h_opscore_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_v_TBAS_light",
			"ADFU_h_opscore_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		weapons[]=
		{
			"ADFU_SteyrEF88_optic",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ADFU_SteyrEF88_optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B"
		};
		respawnMagazines[]=
		{
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B"
		};
	};
	class ADFU_Soldier_G3_Rolled: B_Soldier_03_f
	{
		author="ADFU";
		dlc="ADFU";
		faction="ADFU";
		editorSubcategory="adfu_men";
		side=1;
		scope=1;
		scopeCurator=0;
		vehicleClass="Men";
		displayName="Rifleman [Rolled]";
		uniformClass="ADFU_G3_Rolled";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ADFU_Units\data\clothing1_ADFU.rvmat"
		};
		accuracy=2.3;
		camouflage=0.5;
		linkeditems[]=
		{
			"ADFU_v_TBAS_light",
			"ADFU_h_opscore_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"ADFU_v_TBAS_light",
			"ADFU_h_opscore_02",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		weapons[]=
		{
			"ADFU_SteyrEF88_optic",
			"Throw",
			"Put"
		};
		respawnweapons[]=
		{
			"ADFU_SteyrEF88_optic",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B",
			"ADFU_30Rnd_556x45_B"
		};
		respawnMagazines[]=
		{
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B",
			"ADF_30Rnd_556x45_B"
		};
	};
	class ADFU_Soldier_G3_NoPad: ADFU_Soldier_G3
	{
		scope=1;
		displayName="Rifleman [No Pads]";
		uniformClass="ADFU_G3_Nopad";
		model="\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ADFU_Units\data\clothing1_ADFU_NP.rvmat"
		};
	};
	class ADFU_Soldier_G3_NoPad_Rolled: ADFU_Soldier_G3_Rolled
	{
		scope=1;
		displayName="Rifleman [No Pads/Rolled]";
		uniformClass="ADFU_G3_Nopad_Rolled";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ADFU_Units\data\clothing1_ADFU_NP.rvmat"
		};
		model="\A3\characters_F\BLUFOR\b_soldier_03.p3d";
	};
	class ADFU_Soldier_G3_NoPad_Tee: ADFU_Soldier_G3_Tee
	{
		scope=1;
		displayName="Rifleman [No Pads/Tee]";
		uniformClass="ADFU_G3_AMCU_nopad_rolled_tee";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ADFU_Units\data\clothing1_ADFU_NP.rvmat"
		};
		model="\A3\characters_F\BLUFOR\b_soldier_02.p3d";
	};
	class ADFU_Diver: B_Soldier_diver_base_F
	{
		author="ADFU";
		dlc="ADFU";
		faction="ADFU";
		editorSubcategory="adfu_men";
		side=1;
		scope=1;
		scopeCurator=0;
		vehicleClass="Men";
		displayName="Diver";
		backpack="";
		model="\A3\characters_F\Common\diver_slotable";
		modelSides[]={3,1};
		linkedItems[]=
		{
			"ADFU_Rebreather",
			"ADFU_Diving_Googles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ADFU_Rebreather",
			"ADFU_Diving_Googles",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_Carryall_Base;
	class ADFU_Carryall: B_Carryall_Base
	{
		displayname="Carryall Backpack";
		scope=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_tortila_khk_co.paa"
		};
	};
	class ADFU_Carryall_HeavyAmmo: ADFU_Carryall
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_ADFU_100Rnd_762x51
			{
				magazine="ADFU_100Rnd_762x51";
				count=4;
			};
		};
	};
	class ADFU_Carryall_GustavAmmo: ADFU_Carryall
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_ADFU_m3CG_HEDP
			{
				magazine="ADFU_m3CG_HEDP";
				count=1;
			};
			class _xx_ADFU_m3CG_HE
			{
				magazine="ADFU_m3CG_HE";
				count=1;
			};
			class _xx_ADFU_m3CG_HEAT
			{
				magazine="ADFU_m3CG_HEAT";
				count=1;
			};
		};
	};
	class B_AssaultPack_Base;
	class ADFU_Assaultpack: B_AssaultPack_Base
	{
		displayname="Assault Pack";
		scope=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_compact_khk_co.paa"
		};
	};
	class ADFU_Assaultpack_CLS: ADFU_Assaultpack
	{
		scope=1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
	class B_Kitbag_Base;
	class ADFU_Kitbag: B_Kitbag_Base
	{
		displayname="Kitbag";
		scope=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"
		};
	};
	class ADFU_Kitbag_MinimiAmmo: ADFU_Kitbag
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_ADFU_200Rnd_556x45
			{
				magazine="ADFU_200Rnd_556x45";
				count=4;
			};
		};
	};
	class B_FieldPack_Base;
	class ADFU_FieldPack: B_FieldPack_Base
	{
		displayname="Field Pack";
		scope=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\weapons_f\ammoboxes\bags\data\backpack_gorod_cbr_co.paa"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Uniform_Base;
	class Vest_Camo_Base;
	class ADFU_G3: Uniform_Base
	{
		author="ADFU";
		dlc="ADFU";
		scope=1;
		displayName="G3 Uniform";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Soldier_G3";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFU_G3_Tee: Uniform_Base
	{
		author="ADFU";
		dlc="ADFU";
		scope=1;
		displayName="G3 Uniform (Tee)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Soldier_G3_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFU_G3_Rolled: Uniform_Base
	{
		author="ADFU";
		dlc="ADFU";
		scope=1;
		displayName="G3 Uniform (Rolled)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Soldier_G3_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFU_G3_Nopad: Uniform_Base
	{
		author="ADFU";
		dlc="ADFU";
		scope=1;
		displayName="G3 Uniform (No Pads)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Soldier_G3_NoPad";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFU_G3_Nopad_Rolled: Uniform_Base
	{
		author="ADFU";
		dlc="ADFU";
		scope=0;
		displayName="G3 Uniform (No Pads, Rolled Sleeves)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Soldier_G3_NoPad_Rolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFU_G3_Nopad_Rolled_Tee: Uniform_Base
	{
		author="ADFU";
		dlc="ADFU";
		scope=1;
		displayName="G3 Uniform (No Pads, Rolled, Tee)";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Soldier_G3_NoPad_Rolled_Tee";
			containerClass="Supply40";
			mass=40;
		};
	};
	class ADFU_Wetsuit: Uniform_Base
	{
		author="ADFU";
		scope=2;
		scopeArsenal=2;
		displayName="Diver Wetsuit";
		picture="\A3\characters_f\data\ui\icon_U_B_Wetsuit_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F\Common\Data\diver_suit_nato_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="ADFU_Diver";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class HeadgearItem;
	class H_HelmetB;
	class H_HelmetCrew_B;
	class ADFU_Helmet_ECH: H_HelmetB
	{
		author="ADFU";
		dlc="ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="ECH";
		picture="\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"
		};
	};
	class H_Booniehat_khk;
	class ADFU_Booniehat: H_Booniehat_khk
	{
		author="ADFU";
		scope=1;
		allowedslots[]={801,901};
		displayName="Booniehat";
		picture="\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_khk_co.paa"
		};
	};
	class H_MilCap_ocamo;
	class ADFU_MilCap: H_MilCap_ocamo
	{
		author="ADFU";
		scope=1;
		allowedslots[]={801,901};
		displayName="Military Cap";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_ocamo_ca.paa";
		model="\A3\Characters_F\Common\cappatrol";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\cappatrol_ocamo_co.paa"
		};
	};
	class H_Cap_red;
	class ADFU_Cap: H_Cap_red
	{
		author="ADFU";
		scope=1;
		allowedslots[]={801,901};
		displayName="Cap";
		picture="\A3\Characters_F\Data\UI\icon_h_cap_tan_specops_us_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\capb_red_co.paa"
		};
	};
	class H_HelmetCrew_I;
	class ADFU_CavHelmet: H_HelmetCrew_I
	{
		author="ADFU";
		scope=1;
		displayName="Cavalry Helmet";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"
		};
	};
	class H_HelmetIA;
	class ADFU_MICH: H_HelmetIA
	{
		author="ADFU";
		scope=1;
		allowedslots[]={901};
		displayName="MICH";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\INDEP\Data\headgear_helmet_canvas_co.paa"
		};
	};
	class H_Watchcap_blk;
	class ADFU_Beenie: H_Watchcap_blk
	{
		author="ADFU";
		scope=1;
		allowedslots[]={801,901};
		displayName="Beenie";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\woolhat_khk_co.paa"
		};
	};
	class H_PilotHelmetHeli_B;
	class ADFU_HeliPilotHelmet: H_PilotHelmetHeli_B
	{
		author="ADFU";
		scope=1;
		displayName="Helicopter Pilot Helmet";
		picture="\A3\characters_f\Data\UI\icon_H_Pilot_Helmet_Heli_B_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\helmet_heli_blk_co.paa"
		};
	};
	class H_CrewHelmetHeli_B;
	class ADFU_HeliCrewHelmet: H_CrewHelmetHeli_B
	{
		author="ADFU";
		scope=1;
		displayName="Helicopter Crew Helmet";
		picture="\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\helmet_heli_blk_co.paa"
		};
	};
	class ADFU_H_OpsCore_01: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [SF]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\tactical_ca.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_02: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Standard]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_03: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Sound Suppression]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_04: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Combat Recording]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_05: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Air Insert]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\tactical_ca.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_06: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Air Insert/Sound Suppression]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"\ADFU_Units\data\tactical_ca.paa",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_07: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Night Ops]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_08: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Night Ops/Strobe]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_cb_co.paa",
			"",
			"",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_OpsCore_09: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="OpsCore [Night Ops/Headset]";
		picture="\ADFU_Units\ui\icon_h_opscore_cb_ca.paa";
		model="\ADFU_Units\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_ESSglass",
			"_IR_Strobe",
			"_Peltor",
			"_Peltor_mic",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\ADFU_Units\data\h_opscore_base_co.paa",
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
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_ESSglass",
				"_IR_Strobe",
				"_Peltor",
				"_Peltor_mic",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_01: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [Base]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo1",
			"camo2",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"ADFU_Units\data\f_face_cover_rgr_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa",
			"ADFU_Units\data\f_face_cover_rgr_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo1",
				"camo2",
				"camo4"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_02: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [Standard]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"",
			"",
			"",
			"",
			"ADFU_Units\data\h_airframe_khk_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_03: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [Sound Suppression]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"",
			"",
			"",
			"",
			"\ADFU_Units\data\h_gear_01_rgr_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_04: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [Combat Recording]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"",
			"",
			"",
			"",
			"ADFU_Units\data\h_airframe_khk_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_05: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [Night Ops]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"",
			"",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"\ADFU_Units\data\h_gear_01_rgr_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_06: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [Night Ops/Strobe]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"",
			"",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"\ADFU_Units\data\h_gear_01_rgr_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_H_Airframe_Cover_07: ItemCore
	{
		author="Adacas + ADFU";
		dlc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedslots[]={901};
		displayName="Airframe [SF]";
		picture="\ADFU_Units\ui\icon_h_airframe_cb_ca.paa";
		model="\ADFU_Units\h_airframe_cover_base.p3d";
		hiddenSelections[]=
		{
			"_arc_peltor",
			"_arc_peltor_mic",
			"_camera",
			"_cover",
			"_face_cover",
			"_Manta_Rear",
			"_NVG_Battery",
			"_surefire_light",
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"",
			"ADFU_Units\data\h_airframe_cover_base_co.paa",
			"",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"ADFU_Units\data\h_gear_01_khk_co.paa",
			"",
			"\ADFU_Units\data\h_gear_01_rgr_co.paa",
			"ADFU_Units\data\h_fast_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\ADFU_Units\h_airframe_cover_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"_arc_peltor",
				"_arc_peltor_mic",
				"_camera",
				"_cover",
				"_face_cover",
				"_Manta_Rear",
				"_NVG_Battery",
				"_surefire_light",
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class ADFU_V_TBAS_Assaulter: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Assaulter]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_assaulter_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_assaulter_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Assaulter_Belt: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Assaulter/Belt]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_assaulter_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_assaulter_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Grenadier: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Grenadier]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Grenadier_Belt: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Grenadier/Belt]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Hgunner: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [LSW]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_hgunner_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Hgunner_Belt: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [LSW/Belt]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_hgunner_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Light: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Light]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_light_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Marksman: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Marskman]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_marksman_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_marksman_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Marksman_Belt: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Marksman/Belt]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_medic_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_marksman_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Medic: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Medic]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_medic_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_medic_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_Medic_Belt: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [Medic/Belt]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_medic_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_medic_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_TeamLeader: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [NCO]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_teamleader_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_teamleader_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_TBAS_TeamLeader_Belt: ItemCore
	{
		author="Adacas + ADFU";
		scope=1;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T3 [NCO/Belt]";
		picture="\ADFU_Units\ui\icon_v_TBAS_AMCU_ca.paa";
		model="ADFU_Units\v_TBAS_teamleader_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_tbas_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_TBAS_teamleader_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Assaulter: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Assaulter]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		model="ADFU_Units\v_JPC_assaulter_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_JPC_assaulter_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Assaulter_Belt: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Assaulter/Belt]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		model="ADFU_Units\v_JPC_assaulter_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_JPC_assaulter_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_v_JPC_Grenadier: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Grenadier]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		model="ADFU_Units\v_JPC_grenadier_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_JPC_grenadier_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Grenadier_Belt: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Grenadier/Belt]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		model="ADFU_Units\v_JPC_grenadier_belt_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"clan"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_JPC_grenadier_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Hgunner: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [LSW]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_hgunner_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Hgunner_Belt: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [LSW/Belt]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_hgunner_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Medic: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Medic]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_medic_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Medic_Belt: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Medic/Belt]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_medic_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Marksman: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Marksman]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_marksman_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Marksman_Belt: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Marksman/Belt]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_marksman_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_TeamLeader: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [TeamLeader]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_teamleader_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Teamleader_Belt: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [TeamLeader/Belt]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_battle_belt_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_teamleader_belt_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class ADFU_V_JPC_Light: ItemCore
	{
		author="Adacas + ADFU";
		dkc="ADFU";
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		displayname="TBAS T1 [Light]";
		picture="\ADFU_Units\ui\icon_v_jpc_AMP_ca.paa";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ADFU_Units\data\v_jpc_base_co.paa",
			"ADFU_Units\data\v_gear_01_base_co.paa",
			"ADFU_Units\data\v_gear_02_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="ADFU_Units\v_jpc_light_base.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3"
			};
			containerClass="Supply140";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class V_RebreatherB;
	class ADFU_Rebreather: V_RebreatherB
	{
		author="ADFU";
		displayName="Rebreather";
		picture="\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
};
class CfgGlasses
{
	class G_Diving;
	class ADFU_Diving_Googles: G_Diving
	{
		author="ADFU";
		displayname="Diving Googles";
		model="\A3\Characters_F_EPB\Heads\Glasses\g_b_diving.p3d";
		picture="\A3\Characters_F_EPB\Heads\Glasses\data\UI\icon_g_diving_nato_ca.paa";
		mass=4;
	};
};
