class CfgPatches{
    class redi_lav_overwrite{
        units[]={
            "SOCOMD_APC_C"
		};
		weapons[]={		};
		requiredVersion=1;
		requiredAddons[]={
			"redi_units"
		};
    };
};

class CfgVehicles{
    class APC_Wheeled_01_base_F;
    class VTN_LAV25_BASE : APC_Wheeled_01_base_F {
        class Turrets;
    };

    class VTN_LAV25A1_BASE : VTN_LAV25_BASE {
        class TextureSources;
        class AnimationSources;
        class HitPoints;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class VTN_LAV25A1_WDL : VTN_LAV25A1_BASE {
        class AnimationSources : AnimationSources {
            class Backpack;
            class Br;
            class Br1;
            class tabl;
        };
        class HitPoints : HitPoints {
            class HitHull;
            class HitEngine;
            class HitFuel;
            class HitLFWheelDir;
            class HitLFWheel;
            class HitGlass1;
        };
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class HitPoints;
            };
        };
    };

    class SOCOMD_APC_C : VTN_LAV25A1_WDL {
        scope = 2;
        scopeCurator = 2;
        side = 1;
        author = 'Zanvem';
        faction = "B_REDI_joint";
        displayname = "ASLAV-25";
        vehicleclass = "Armored";

        forceInGarage = 1;

        crew = "B_REDI_Crew";
        typicalCargo[] = {"B_REDI_Crew"};

        class AcreIntercoms {
            class Intercom_1 {
                displayName = "Crew Intercom";
                shortName = "Crew";
                allowedPositions[] = {"crew"};
                limitedPositions[] = {};
                numLimitedPositions = 0;
                masterPositions[] = {"commander"};
                connectedByDefault = 1;
            };
        };

        class TextureSources : TextureSources {
            class SOCOMD {
                displayName = "SOCOMD";
                author = 'Zanven';
                textures[] = {
                    "redi_aslav\lav\lavbody_co.paa",
                    "redi_aslav\lav\lavbody2_co.paa",
                    "redi_aslav\lav\kangaroo_decal.paa",
                    "redi_aslav\lav\lavalfa_ca.paa"
                };
                faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
            };
        };

        hiddenselections[] = {
            "Camo1",
            "Camo2",
            "z1",
            "Camo3"
        };

        hiddenselectionstextures[] = {
            "redi_aslav\data\lavbody_co.paa",
            "redi_aslav\data\lavbody2_co.paa",
            "redi_aslav\data\kangaroo_decal.paa",
            "redi_aslav\data\lavalfa_ca.paa"
        };

        class AnimationSources : AnimationSources {
            class Backpack : Backpack {
                initPhase = 1;
            };

            class tabl : tabl {
                initPhase = 1;
            };
        };
        class Turrets : Turrets {
            class MainTurret : MainTurret {
                class HitPoints : HitPoints {
                    class HitTurret {
                        armor = 0.7;
                        explosionShielding = 0.05;
                        material = -1;
                        minimalHit = 0.15;
                        name = "vez";
                        passThrough = 0;
                        radius = 0.25;
                        visual = "vez";
                    };
                    class HitGun {
                        armor = 0.25;
                        explosionShielding = 0.4;
                        material = -1;
                        minimalHit = 0.15;
                        name = "zbran";
                        passThrough = 0;
                        radius = 0.25;
                        visual = "zbran";
                    };
                };
            };
        };
        class HitPoints : HitPoints {
            class HitHull : HitHull {
                armor = 2.6;
                minimalHit = 0.060;
                explosionShielding = 0.0015;
                passThrough = 0.1;
            };
            //class HitEngine;
            class HitFuel : HitFuel {
                explosionShielding = 0.4;
            };
            //class HitGlass1;
            class HitLFWheelDir : HitLFWheelDir {
                //armor = 0.25;
                armor = 0.5;
                explosionShielding = 10;
                passThrough = 0;
            };
            class HitLFWheel : HitLFWheel {
                //explosionShielding = 10;
                armor = 0.5;
                explosionShielding = 10;
                passThrough = 0;
            };
            class HitLF2WheelDir: HitLFWheelDir
            {
                visual = "wheel_1_2_hide";
                armorComponent = "wheel_1_2_hide";
            };
            class HitLF2Wheel: HitLFWheel
            {
                name = "wheel_1_2_steering";
                depends = "HitLF2WheelDir - 0.25";
            };
            class HitLMWheelDir: HitLFWheelDir
            {
                visual = "wheel_1_3_hide";
                armorComponent = "wheel_1_3_hide";
            };
            class HitLMWheel: HitLFWheel
            {
                name = "wheel_1_3_steering";
                depends = "HitLMWheelDir - 0.25";
            };
            class HitLBWheelDir: HitLFWheelDir
            {
                visual = "wheel_1_4_hide";
                armorComponent = "wheel_1_4_hide";
            };
            class HitLBWheel: HitLFWheel
            {
                name = "wheel_1_4_steering";
                depends = "HitLBWheelDir - 0.25";
            };
            class HitRFWheelDir: HitLFWheelDir
            {
                visual = "wheel_2_1_hide";
                armorComponent = "wheel_2_1_hide";
            };
            class HitRFWheel: HitLFWheel
            {
                name = "wheel_2_1_steering";
                depends = "HitRFWheelDir - 0.25";
            };
            class HitRF2WheelDir: HitLFWheelDir
            {
                visual = "wheel_2_2_hide";
                armorComponent = "wheel_2_2_hide";
            };
            class HitRF2Wheel: HitLFWheel
            {
                name = "wheel_2_2_steering";
                depends = "HitRF2WheelDir - 0.25";
            };
            class HitRMWheelDir: HitLFWheelDir
            {
                visual = "wheel_2_3_hide";
                armorComponent = "wheel_2_3_hide";
            };
            class HitRMWheel: HitLFWheel
            {
                name = "wheel_2_3_steering";
                depends = "HitRMWheelDir - 0.25";
            };
            class HitRBWheelDir: HitLFWheelDir
            {
                visual = "wheel_2_4_hide";
                armorComponent = "wheel_2_4_hide";
            };
            class HitRBWheel: HitLFWheel
            {
                name = "wheel_2_4_steering";
                depends = "HitRBWheelDir - 0.25";
            };
        };
    };
};