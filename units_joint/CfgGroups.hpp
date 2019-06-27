class CfgGroups
{
    class West
    {
        class B_REDI_joint
        {
            name = "[JOINT] REDi Groups";
            class Infantry
            {
                name = "Infantry";
                class REDI_PLATOON_HQ
                {
                    name = "Platoon HQ";
                    side = 0;
                    faction = "B_REDI_joint";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "B_REDI_Platoon_Lead";
                        rank = "LIEUTENANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "B_REDI_Platoon_Sergeant";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "B_REDI_Radio_Operator";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "B_REDI_Combat_Medic";
                        rank = "CORPORAL";
                        position[] = {10,-10,0};
                    };
                };
                class REDI_INF_SQUAD
                {
                    name = "Standard Squad";
                    side = 0;
                    faction = "B_REDI_joint";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "B_REDI_Squad_Lead";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "B_REDI_Team_Lead";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "B_REDI_Combat_Medic";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "B_REDI_Machine_Gunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "B_REDI_Missile_Specialist";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "B_REDI_Rifleman";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "B_REDI_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "B_REDI_Rifleman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class REDI_INF_SQUAD_MARKS
                {
                    name = "Standard Squad + Marksman";  
                    side = 0;
                    faction = "B_REDI_joint";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "B_REDI_Squad_Lead";
                        rank = "SERGEANT";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "B_REDI_Team_Lead";
                        rank = "SERGEANT";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "B_REDI_Combat_Medic";
                        rank = "CORPORAL";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "B_REDI_Machine_Gunner";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                    class Unit4
                    {
                        side = 0;
                        vehicle = "B_REDI_Missile_Specialist";
                        rank = "PRIVATE";
                        position[] = {-10,-10,0};
                    };
                    class Unit5
                    {
                        side = 0;
                        vehicle = "B_REDI_Rifleman";
                        rank = "PRIVATE";
                        position[] = {15,-15,0};
                    };
                    class Unit6
                    {
                        side = 0;
                        vehicle = "B_REDI_Rifleman";
                        rank = "PRIVATE";
                        position[] = {-15,-15,0};
                    };
                    class Unit7
                    {
                        side = 0;
                        vehicle = "B_REDI_marksman";
                        rank = "PRIVATE";
                        position[] = {20,-20,0};
                    };
                };
                class REDI_MG_TEAM
                {
                    name = "MG Team";
                    side = 0;
                    faction = "B_REDI_joint";
                    rarityGroup = 0.3;
                    class Unit0
                    {
                        side = 0;
                        vehicle = "B_REDI_Squad_Lead";
                        rank = "CORPORAL";
                        position[] = {0,0,0};
                    };
                    class Unit1
                    {
                        side = 0;
                        vehicle = "B_REDI_Machine_Gunner";
                        rank = "PRIVATE";
                        position[] = {5,-5,0};
                    };
                    class Unit2
                    {
                        side = 0;
                        vehicle = "B_REDI_Machine_Gunner";
                        rank = "PRIVATE";
                        position[] = {-5,-5,0};
                    };
                    class Unit3
                    {
                        side = 0;
                        vehicle = "B_REDI_Rifleman";
                        rank = "PRIVATE";
                        position[] = {10,-10,0};
                    };
                };
			};
		};
	};
};