
class CfgPatches
{
    class armaforces_spotlight
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {
            "redi_units",
            "A3_Data_F_Orange_Loadorder",
            "A3_Data_F_Tacops_Loadorder"
        };
        version = 1.0;
        versionStr = 1.0;
        versionAr[] = {1,0};
        author = "veteran29";
    };
};

#define ArmaForcesServer(no) \
class ArmaForcesServer_##no\
{\
    text = "$STR_armaforces_spotlight_join";\
    textIsQuote = 0;\
    picture = "\redi_gear\unit_logos\REDi_256.paa";\
    action = "0 = [_this] execVM join_fnc_join";\
    actionText = "Join REDI Server";\
    condition = "true";\
}\

class CfgMainMenuSpotlight
{
    ArmaForcesServer(1);

    // These are referenced somewhere so they can't be deleted
    class Orange_Campaign { condition = "false";};
    class Tacops_Campaign_01 { condition = "false";};

    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;
    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Showcase_TankDestroyers;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_03;
    delete Tanks_Campaign_01;
    delete gm_campaign_01;
};

class CfgFunctions {
	class join
	{
		Tag="join";
		class join
		{
			file="\spotlight\functions";
			class join {};
		};
	};
};
