
class B_SOCOMD_Platoon_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon Commander";
	side = 1;
	faction = "B_SOCOMD_joint";
	
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_JPC_TeamLeader_MC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_JPC_TeamLeader_MC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	respawnWeapons[] 			= {"SMA_Steyr_acc", "hgun_Rook40_F","Binocular",Throw, Put};
	magazines[] 				= { OFFICER_GR,AR_SIX_MAG,NINEMM };
	respawnMagazines[] 			= { OFFICER_GR,AR_SIX_MAG,NINEMM };
};

class B_SOCOMD_Platoon_Sergeant : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Platoon 2iC";
	side = 1;
	faction = "B_SOCOMD_joint";		
};

class B_SOCOMD_Squad_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Squad Leader";
	side = 1;
	faction = "B_SOCOMD_joint";

	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_JPC_TeamLeader_Belt_MC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_JPC_TeamLeader_Belt_MC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				= { OFFICER_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			= { OFFICER_GR,AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
};

class B_SOCOMD_Team_Lead : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Team Leader";
	side = 1;
	faction = "B_SOCOMD_joint";
	
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Grenadier_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Grenadier_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	respawnWeapons[] 			= {"SMA_Steyr_gl_acc", "hgun_Rook40_F","Laserdesignator",Throw, Put};
	magazines[] 				= { OFFICER_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
	respawnMagazines[] 			= { OFFICER_GR, AR_SIX_MAG,UGL_STAND,NINEMM,"Laserbatteries" };
};

class B_SOCOMD_Machine_Gunner : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Support Gunner";
	side = 1;
	faction = "B_SOCOMD_joint";

	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Hgunner_Belt_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Hgunner_Belt_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			= { "SMA_minimi_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				= { GUNNER_MAG, STANDARD_GR,NINEMM };
	respawnMagazines[] 			= { GUNNER_MAG, STANDARD_GR,NINEMM };
};

class B_SOCOMD_Missile_Specialist : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Missile Specialist";
	side = 1;
	faction = "B_SOCOMD_joint";
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
};

class B_SOCOMD_Rifleman : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Rifleman";
	side = 1;
	faction = "B_SOCOMD_joint";
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			= {"SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			= { AR_EIGHT_MAG,STANDARD_GR,NINEMM };
};

class B_SOCOMD_marksman : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Marksman";
	side = 1;
	faction = "B_SOCOMD_joint";

	Items[] 					= {FIRSTAID_KIT,UNIFORM_KIT};
	RespawnItems[] 				= {FIRSTAID_KIT,UNIFORM_KIT};
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Marksman_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Marksman_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			= { "SMA_417_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				= { MARKSMAN_MAG,STANDARD_GR,NINEMM };
	respawnMagazines[] 			= { MARKSMAN_MAG,STANDARD_GR,NINEMM };	
	class EventHandlers: EventHandlers
	{
		class marksmanEH{	
			init="if (local (_this select 0)) then { [(_this select 0)] call redi_fnc_AddMarksmanScope;};";		
		};
	};
	
};

class B_SOCOMD_Combat_Medic : B_base_medic{
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat First Responder";
	side = 1;
	faction = "B_SOCOMD_joint";
	
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Medic_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Medic_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			= { "SMA_Steyr_acc", "hgun_Rook40_F",Throw, Put};
	magazines[] 				= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			= { AR_SIX_MAG, MEDIC_GR,NINEMM };
	backpack = "redi_med_bag";
};

class B_SOCOMD_Radio_Operator : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Radio Operator";
	side = 1;
	faction = "B_SOCOMD_joint";
	
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Grenadier_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Grenadier_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	respawnWeapons[] 			= { "SMA_Steyr_gl_acc", "Laserdesignator", Throw, Put};
	magazines[] 				= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};
	respawnMagazines[] 			= { AR_SIX_MAG,STANDARD_GR,UGL_FSO,"Laserbatteries"};

	backpack = "rto_radio";
};


class B_SOCOMD_Pilot : REDI_base_soldier{
	scope = 2;
	scopeCurator = 2;
	displayName = "Pilot";
	side = 1;
	faction = "B_SOCOMD_joint";
	
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","rhsusf_hgu56p_visor_green"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","rhsusf_hgu56p_visor_green"};
	weapons[] 					= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	respawnWeapons[] 			= { "MP5_rds", "hgun_Rook40_F",Throw, Put};
	magazines[] 				= { PILOT_MAG, MEDIC_GR,NINEMM };
	respawnMagazines[] 			= { PILOT_MAG, MEDIC_GR,NINEMM };
	backpack = "REDI_aus_radio";
};

class B_SOCOMD_Engineer : REDI_base_soldier{
	engineer = true; 
	scope = 2;
	scopeCurator = 2;
	displayName = "Combat Enginer";
	side = 1;
	faction = "B_SOCOMD_joint";
	 
	Items[] 					= {"ACE_Clacker","ACE_DefusalKit",FIRSTAID_KIT,UNIFORM_KIT};
	RespawnItems[] 				= {"ACE_Clacker","ACE_DefusalKit",FIRSTAID_KIT,UNIFORM_KIT};
	linkedItems[] 				= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","ADFU_H_Airframe_Cover_02_MC"};
	respawnLinkedItems[]		= {LINKED_ITEMS,"ADFU_V_TBAS_Assaulter_AMC","ADFU_H_Airframe_Cover_02_MC"};
	weapons[] 					= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	respawnWeapons[] 			= {"SMA_Steyr_acc", "ACE_VMM3",Throw, Put};
	magazines[] 				= { AR_SIX_MAG,STANDARD_GR,};
	respawnMagazines[] 			= { AR_SIX_MAG,STANDARD_GR,};
	backpack = "REDI_eng_bag";
};