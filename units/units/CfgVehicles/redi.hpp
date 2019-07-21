class B_REDI_Platoon_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon Commander";
	side = 1;
	faction = "B_REDI_joint";
	
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_TeamLeader_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_TeamLeader_AMC"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
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
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_TeamLeader_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_TeamLeader_AMC"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,NINEMM };	
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

	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_TeamLeader_Belt_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_TeamLeader_Belt_AMC"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { OFFICER_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { OFFICER_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
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
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Grenadier_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Grenadier_AMC"};
	weapons[] 					+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				+= { OFFICER_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			+= { OFFICER_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
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
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Hgunner_Belt_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Hgunner_Belt_AMC"};
	weapons[] 					+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { GUNNER_MAG, STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { GUNNER_MAG, STANDARD_GR,NINEMM };
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

class B_REDI_Missile_Specialist : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Missile Specialist";
	side = 1;
	faction = "B_REDI_joint";

	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Assaulter_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Assaulter_AMC"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_M3_CG", Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F","ADFU_M3_CG", Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
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

	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Assaulter_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Assaulter_AMC"};
	weapons[] 					+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
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
	
	Items[] 					+= {FIRSTAID_KIT,REQUIRED_KIT};
	RespawnItems[] 				+= {FIRSTAID_KIT,REQUIRED_KIT};
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Marksman_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Marksman_AMC"};
	weapons[] 					+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			+= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
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
	
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Medic_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Medic_AMC"};
	weapons[] 					+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { AR_SIX_MAG, MEDIC_GR,NINEMM };
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
	
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Grenadier_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Grenadier_AMC"};
	weapons[] 					+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	respawnWeapons[] 			+= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
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

class B_REDI_Pilot : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_V_TBAS_Light_AMC","rhsusf_hgu56p_visor_green"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_V_TBAS_Light_AMC","rhsusf_hgu56p_visor_green"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
		
	headoptions[]=
	{
		"rhsusf_hgu56p_visor_green"
	};
	unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
	backpack = "REDI_aus_radio";
};

class B_REDI_Engineer : REDI_base_soldier{
	engineer = true; 
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Enginer";
	side = 1;
	faction = "B_REDI_joint";
	
	Items[] 					+= {"ACE_Clacker","ACE_DefusalKit",FIRSTAID_KIT,REQUIRED_KIT};
	RespawnItems[] 				+= {"ACE_Clacker","ACE_DefusalKit",FIRSTAID_KIT,REQUIRED_KIT};
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Assaulter_AMC"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_opscore_adf_cover","REDI_V_TBAS_Assaulter_AMC"};
	weapons[] 					+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	respawnWeapons[] 			+= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	magazines[] 				+= { AR_SIX_MAG,STANDARD_GR };
	respawnMagazines[] 			+= { AR_SIX_MAG,STANDARD_GR };
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

class B_REDI_Crew : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Crewman";
	side = 1;
	faction = "B_REDI_joint";
	linkedItems[] 				+= {LINKED_ITEMS,"REDI_V_TBAS_Light_AMC","ADFU_Cav_Helmet"};
	respawnLinkedItems[]		+= {LINKED_ITEMS,"REDI_V_TBAS_Light_AMC","ADFU_Cav_Helmet"};
	weapons[] 					+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			+= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				+= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			+= { PILOT_MAG, MEDIC_GR,NINEMM };
		
	headoptions[]=
	{
		"ADFU_Cav_Helmet"
	};unifoptions[]=
	{
		"ADFU_G3_AMC",
		"ADFU_G3_AMC_Rolled",
		"ADFU_G3_AMC_Nopad",
		"ADFU_G3_AMC_Nopad_Rolled"
	};
	class EventHandlers: EventHandlers
	{
		class ADFU_AMC_ECavInf_G
		{
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_GearSwap;};";
		};
	};
	backpack = "REDI_aus_radio";
};

// US Forces
