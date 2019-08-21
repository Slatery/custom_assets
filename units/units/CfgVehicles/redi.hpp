class B_REDI_Platoon_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon Commander";
	side = 1;
	faction = "B_REDI_joint";
	editorSubcategory = "men_amcu";

	linkedItems[] 				+= {"lbt_tl_amcu"};
	respawnLinkedItems[]		+= {"lbt_tl_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	backpack = "redi_rifle_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Platoon_Sergeant : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon 2iC";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {"lbt_tl_amcu"};
	respawnLinkedItems[]		+= {"lbt_tl_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };	
	editorSubcategory = "men_amcu";
	backpack = "redi_rifle_bag";
			unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Squad_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"lbt_weapons_amcu"};
	respawnLinkedItems[]		+= {"lbt_weapons_amcu"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { STANDARD_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { STANDARD_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	editorSubcategory = "men_amcu";
	backpack = "redi_gl_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Team_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_weapons_amcu"};
	respawnLinkedItems[]		+= {"lbt_weapons_amcu"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { STANDARD_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { STANDARD_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	editorSubcategory = "men_amcu";
	backpack = "redi_gl_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Machine_Gunner : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Support Gunner";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {"REDI_V_TBAS_Hgunner_Belt_AMC"};
	respawnLinkedItems[]		+= {"REDI_V_TBAS_Hgunner_Belt_AMC"};
	weapons[] 					+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	editorSubcategory = "men_amcu";
	backpack = "redi_mg_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
// Legacy for now, will remove at some point
class B_REDI_Missile_Specialist : REDI_base_soldier{
	scope = 1;
	scopeCurator = 1;
	displayName = "Missile Specialist";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"lbt_tl_amcu"};
	respawnLinkedItems[]		+= {"lbt_tl_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_M3_CG", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_M3_CG", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_amcu";
	backpack = "redi_hat_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_lat : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Light AT";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"lbt_operator_amcu"};
	respawnLinkedItems[]		+= {"lbt_operator_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","rhs_weap_m72a7", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","rhs_weap_m72a7", Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM,"rhs_m72a7_mag"};
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM,"rhs_m72a7_mag"};
	editorSubcategory = "men_amcu";
	backpack = "redi_rifle_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_hat : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Heavy AT";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"lbt_operator_amcu"};
	respawnLinkedItems[]		+= {"lbt_operator_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_m3CG_optic", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_m3CG_optic", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_amcu";
	backpack = "redi_hat_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_Rifleman : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"lbt_operator_amcu"};
	respawnLinkedItems[]		+= {"lbt_operator_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	backpack = "redi_rifle_bag";
	editorSubcategory = "men_amcu";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_marksman : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Marksman";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= { "lbt_comms_amcu"};
	respawnLinkedItems[]		+= { "lbt_comms_amcu"};
	weapons[] 					+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_amcu";
	backpack = "redi_marksman_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Combat_Medic : B_base_medic{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat First Responder";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_medical_amcu"};
	respawnLinkedItems[]		+= {"lbt_medical_amcu"};
	weapons[] 					+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	editorSubcategory = "men_amcu";
	backpack = "redi_med_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Radio_Operator : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Radio Operator";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_weapons_amcu"};
	respawnLinkedItems[]		+= {"lbt_weapons_amcu"};
	weapons[] 					+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	editorSubcategory = "men_amcu";
	backpack = "rto_radio";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Engineer : REDI_base_soldier{
	engineer = true; 
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Enginer";
	side = 1;
	faction = "B_REDI_joint";
	
	Items[] 					+= {"ACE_Clacker","ACE_DefusalKit"};
	RespawnItems[] 				+= {"ACE_Clacker","ACE_DefusalKit"};
	linkedItems[] 				+= {"lbt_comms_amcu"};
	respawnLinkedItems[]		+= {"lbt_comms_amcu"};
	weapons[] 					+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR };
	editorSubcategory = "men_amcu";
	
	backpack = "REDI_eng_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"REDI_opscore_adf_cover",
		"ADFU_H_Airframe_Cover_02_AMC",
		"ADFU_H_OpsCore_02_AMC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Pilot : REDI_crew_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= { "lbt_pouchless_amcu","rhsusf_hgu56p_visor_green"};
	respawnLinkedItems[]		+= { "lbt_pouchless_amcu","rhsusf_hgu56p_visor_green"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
	editorSubcategory = "men_amcu";
		
	backpack = "REDI_aus_radio";
};

class B_REDI_Crew : REDI_crew_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Crewman";
	side = 1;
	faction = "B_REDI_joint";
	editorSubcategory = "men_amcu";

	linkedItems[] 				+= {"lbt_pouchless_amcu","rhsusf_cvc_green_alt_helmet"};
	respawnLinkedItems[]		+= {"lbt_pouchless_amcu","rhsusf_cvc_green_alt_helmet"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
		
	headoptions[]=
	{
		"rhsusf_cvc_green_alt_helmet"
	};
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	backpack = "REDI_aus_radio";
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
// ===================================================================================================================================================
// Multicam
class B_REDI_Platoon_Lead_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon Commander";
	side = 1;
	faction = "B_REDI_joint";
	editorSubcategory = "men_mc";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","lbt_tl_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","lbt_tl_mc"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	backpack = "redi_rifle_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Platoon_Sergeant_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon 2iC";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","lbt_tl_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","lbt_tl_mc"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };	
	editorSubcategory = "men_mc";
	backpack = "redi_rifle_bag_MC";
			unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Squad_Lead_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC""lbt_weapons_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC""lbt_weapons_mc"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { STANDARD_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { STANDARD_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	editorSubcategory = "men_mc";
	backpack = "redi_gl_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Team_Lead_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","lbt_weapons_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","lbt_weapons_mc"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { STANDARD_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { STANDARD_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	editorSubcategory = "men_mc";
	backpack = "redi_gl_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Machine_Gunner_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Support Gunner";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","ADFU_V_JPC_Hgunner_Belt_MC"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","ADFU_V_JPC_Hgunner_Belt_MC"};
	weapons[] 					+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	editorSubcategory = "men_mc";
	backpack = "redi_mg_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_lat_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Light AT";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","lbt_operator_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","lbt_operator_mc"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","rhs_weap_m72a7", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","rhs_weap_m72a7", Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM,"rhs_m72a7_mag"};
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM,"rhs_m72a7_mag"};
	editorSubcategory = "men_mc";
	backpack = "redi_rifle_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_hat_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Heavy AT";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","lbt_operator_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","lbt_operator_mc"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_m3CG_optic", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_m3CG_optic", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_mc";
	backpack = "redi_hat_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_Rifleman_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_MC","lbt_operator_mc"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_MC","lbt_operator_mc"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	backpack = "redi_rifle_bag_MC";
	editorSubcategory = "men_mc";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_MC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_marksman_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Marksman";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= { "lbt_comms_mc"};
	respawnLinkedItems[]		+= { "lbt_comms_mc"};
	weapons[] 					+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_mc";
	backpack = "redi_marksman_bag_MC";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Combat_Medic_mc : B_base_medic{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat First Responder";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_medical_mc"};
	respawnLinkedItems[]		+= {"lbt_medical_mc"};
	weapons[] 					+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	editorSubcategory = "men_mc";
	backpack = "redi_med_bag";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Radio_Operator_mc : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Radio Operator";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_weapons_mc"};
	respawnLinkedItems[]		+= {"lbt_weapons_mc"};
	weapons[] 					+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	editorSubcategory = "men_mc";
	backpack = "rto_radio";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Engineer_mc : REDI_base_soldier{
	engineer = true; 
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Enginer";
	side = 1;
	faction = "B_REDI_joint";
	
	Items[] 					+= {"ACE_Clacker","ACE_DefusalKit"};
	RespawnItems[] 				+= {"ACE_Clacker","ACE_DefusalKit"};
	linkedItems[] 				+= {"lbt_comms_mc"};
	respawnLinkedItems[]		+= {"lbt_comms_mc"};
	weapons[] 					+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR };
	editorSubcategory = "men_mc";
	
	backpack = "REDI_eng_bag";
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_MC",
		"ADFU_H_OpsCore_02_MC"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Pilot_mc : REDI_crew_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= { "lbt_pouchless_mc","rhsusf_hgu56p_visor_green"};
	respawnLinkedItems[]		+= { "lbt_pouchless_mc","rhsusf_hgu56p_visor_green"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
	editorSubcategory = "men_mc";
		unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	backpack = "REDI_aus_radio";
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Crew_mc : REDI_crew_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Crewman";
	side = 1;
	faction = "B_REDI_joint";
	editorSubcategory = "men_mc";

	linkedItems[] 				+= {"lbt_pouchless_mc","rhsusf_cvc_green_alt_helmet"};
	respawnLinkedItems[]		+= {"lbt_pouchless_mc","rhsusf_cvc_green_alt_helmet"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
		
	headoptions[]=
	{
		"rhsusf_cvc_green_alt_helmet"
	};
	unifoptions[]=
	{
		"ADFU_G3_MC",
		"ADFU_G3_MC_Rolled",
		"ADFU_G3_MC_Nopad",
		"ADFU_G3_MC_Nopad_Rolled"
	};
	backpack = "REDI_aus_radio";
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

// ===================================================================================================================================================
// AMCT
class B_REDI_Platoon_Lead_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon Commander";
	side = 1;
	faction = "B_REDI_joint";
	editorSubcategory = "men_AMCT";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_tl_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_tl_od"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	backpack = "redi_rifle_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Platoon_Sergeant_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon 2iC";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_tl_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_tl_od"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };	
	editorSubcategory = "men_AMCT";
	backpack = "redi_rifle_bag_AMCT";
			unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Squad_Lead_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_weapons_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_weapons_od"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { STANDARD_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { STANDARD_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	editorSubcategory = "men_AMCT";
	backpack = "redi_gl_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Team_Lead_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_weapons_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_weapons_od"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { STANDARD_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { STANDARD_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	editorSubcategory = "men_AMCT";
	backpack = "redi_gl_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Machine_Gunner_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Support Gunner";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","ADFU_V_TBAS_Hgunner_Belt_AMCT"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","ADFU_V_TBAS_Hgunner_Belt_AMCT"};
	weapons[] 					+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	editorSubcategory = "men_AMCT";
	backpack = "redi_mg_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_lat_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Light AT";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_operator_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_operator_od"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","rhs_weap_m72a7", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","rhs_weap_m72a7", Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM,"rhs_m72a7_mag"};
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM,"rhs_m72a7_mag"};
	editorSubcategory = "men_AMCT";
	backpack = "redi_rifle_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_hat_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Heavy AT";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_operator_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_operator_od"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_m3CG_optic", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_m3CG_optic", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_AMCT";
	backpack = "redi_hat_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};
class B_REDI_Rifleman_AMCT : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_operator_od"};
	respawnLinkedItems[]		+= {"ADFU_H_Airframe_Cover_02_AMCT","lbt_operator_od"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	backpack = "redi_rifle_bag_AMCT";
	editorSubcategory = "men_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMCT_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};


class B_REDI_marksman_AMCT: REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Marksman";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= { "lbt_comms_od"};
	respawnLinkedItems[]		+= { "lbt_comms_od"};
	weapons[] 					+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	editorSubcategory = "men_AMCT";
	backpack = "redi_marksman_bag_AMCT";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Combat_Medic_AMCT: B_base_medic{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat First Responder";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_medical_od"};
	respawnLinkedItems[]		+= {"lbt_medical_od"};
	weapons[] 					+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	editorSubcategory = "men_AMCT";
	backpack = "redi_med_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Radio_Operator_AMCT: REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Radio Operator";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {"lbt_weapons_od"};
	respawnLinkedItems[]		+= {"lbt_weapons_od"};
	weapons[] 					+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	editorSubcategory = "men_AMCT";
	backpack = "rto_radio";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Engineer_AMCT: REDI_base_soldier{
	engineer = true; 
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Enginer";
	side = 1;
	faction = "B_REDI_joint";
	
	Items[] 					+= {"ACE_Clacker","ACE_DefusalKit"};
	RespawnItems[] 				+= {"ACE_Clacker","ACE_DefusalKit"};
	linkedItems[] 				+= {"lbt_comms_od"};
	respawnLinkedItems[]		+= {"lbt_comms_od"};
	weapons[] 					+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR };
	editorSubcategory = "men_AMCT";
	
	backpack = "REDI_eng_bag";
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	headoptions[]=
	{
		"ADFU_H_Airframe_Cover_02_AMCT",
		"ADFU_H_OpsCore_02_AMCT"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Pilot_AMCT: REDI_crew_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= { "lbt_pouchless_od","rhsusf_hgu56p_visor_green"};
	respawnLinkedItems[]		+= { "lbt_pouchless_od","rhsusf_hgu56p_visor_green"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
	editorSubcategory = "men_AMCT";
		
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	backpack = "REDI_aus_radio";
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};

class B_REDI_Crew_AMCT: REDI_crew_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Crewman";
	side = 1;
	faction = "B_REDI_joint";
	editorSubcategory = "men_AMCT";

	linkedItems[] 				+= {"lbt_pouchless_od","rhsusf_cvc_green_alt_helmet"};
	respawnLinkedItems[]		+= {"lbt_pouchless_od","rhsusf_cvc_green_alt_helmet"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
		
	headoptions[]=
	{
		"rhsusf_cvc_green_alt_helmet"
	};
	unifoptions[]=
	{
		"ADFU_G3_AMCT",
		"ADFU_G3_AMCT_Rolled",
		"ADFU_G3_AMCT_Nopad",
		"ADFU_G3_AMCT_Nopad_Rolled"
	};
	backpack = "REDI_aus_radio";
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
};