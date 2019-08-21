class CfgPatches
{
	class uh60
	{
		units[]=
		{
			"B_MH60L_F",
			"B_MH60L_noprobe_F",
			"B_UH60L_F",
			"B_MH60L_gray_F",
			"B_UH60L_med_F",
			"B_HH60A_gray_F",
			"B_HH60A_gray_doors_F"
		};
		weapons[]=
		{
			"LMG_M240_UH60",
			"LMG_M240_UH60_2"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F",
			"A3_Weapons_F"
		};
	};
};
class CfgVehicleClasses
{
	class YuraPetrov_helicopters
	{
		displayname="$STR_BLACKHAWKS_YURA_PETROV";
	};
};
class CfgMagazines
{
	class 500Rnd_127x99_mag;
	class 2000Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag
	{
		scope=2;
		count=2000;
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="12.7mm AA MG Tracer (Red) Mag";
		descriptionShort="Caliber: 1.27x99 mm NATO<br/>Rounds: 2000<br />Used in: Vehicles";
	};
};
class CfgWeapons
{
	class LMG_RCWS;
	class LMG_M240_UH60: LMG_RCWS
	{
		displayName="M240 7.62 mm";
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Other\reload_bolt_1",
			10,
			1,
			20
		};
		class GunParticles
		{
			class effect1
			{
				positionName="machinegun_end";
				directionName="machinegun_beg";
				effectName="MachineGun1";
			};
		};
		magazines[]=
		{
			"200Rnd_762x51_Belt",
			"200Rnd_762x51_Belt_Red",
			"200Rnd_762x51_Belt_Green",
			"200Rnd_762x51_Belt_Yellow",
			"200Rnd_762x51_Belt_T_Red",
			"200Rnd_762x51_Belt_T_Green",
			"200Rnd_762x51_Belt_T_Yellow"
		};
	};
	class LMG_M240_UH60_2: LMG_M240_UH60
	{
		class GunParticles
		{
			class effect1
			{
				positionName="machinegun2_end";
				directionName="machinegun2_beg";
				effectName="MachineGun1";
			};
		};
	};
	class HMG_M2;
	class HMG_M2_UH60: HMG_M2
	{
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\weapons\Other\reload_bolt_1",
			10,
			1,
			20
		};
		magazines[]=
		{
			"2000Rnd_127x99_mag_Tracer_Red"
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_beg";
				directionName="muzzle_end";
				effectName="MachineGunCloud";
			};
		};
	};
	class HMG_M2_UH60_2: HMG_M2_UH60
	{
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_beg_2";
				directionName="muzzle_end_2";
				effectName="MachineGunCloud";
			};
		};
	};
};
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
		};
	};
	class B_UH60L_base_F: Heli_Transport_01_base_F
	{
		author="Yuri Petrov";
		vehicleClass="YuraPetrov_helicopters";
		model="\uh60\mh60l\mh60l.p3d";
		icon="\uh60\UI\icon_uh60m_ca.paa";
		GetInAction="GetInHeli_Transport_01Cargo";
		gearRetracting=0;
		availableForSupportTypes[]=
		{
			"Drop",
			"Transport"
		};
		liftForceCoef=1;
		cyclicAsideForceCoef=0.80000001;
		cyclicForwardForceCoef=0.64999998;
		bodyFrictionCoef=1.05;
		backRotorForceCoef=0.60000002;
		class MFD
		{
		};
		class UserActions
		{
			class form_lights
			{
				displayName="$STR_BLACKHAWKS_FORM_LIGHTS_ON";
				condition="this animationPhase ""formation_lights"" == 1 and player in this and isengineon this";
				statement="this animate [""formation_lights"",0]; this animate [""tail_lights"",0];";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
			class form_lights_off
			{
				displayName="$STR_BLACKHAWKS_FORM_LIGHTS_OFF";
				condition="this animationPhase ""formation_lights"" == 0 and player in this";
				statement="this animate [""formation_lights"",1]; this animate [""tail_lights"",1];";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Probe_hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rope1hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class rope2hide
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class TiltBlade_1
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltBlade_2
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltBlade_3
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltBlade_4
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltTailBlade_1
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltTailBlade_2
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltTailBlade_3
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltTailBlade_4
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class TiltTailRotor
			{
				source="user";
				animPeriod=0;
				initPhase=0.30000001;
			};
			class MovePilotDoor
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class MoveCopilotDoor
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class MoveCargoDoor
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class MoveCargo2Door
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class formation_lights
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class CollisionLightRed_source
			{
				source="MarkerLight";
				markerLight="CollisionRed";
			};
			class tail_lights: formation_lights
			{
			};
		};
		class CargoTurret;
		class Eventhandlers: Eventhandlers
		{
			init="_this execVM ""\uh60\scripts\rotor.sqf"";";
		};
	};
	class B_MH60L_F: B_UH60L_base_F
	{
		_generalMacro="B_MH60L_F";
		model="\uh60\mh60l\mh60l.p3d";
		displayName="MH-60L Spec ops BH";
		transportSoldier=7;
		cargoAction[]=
		{
			"passenger_flatground_1",
			"passenger_flatground_4",
			"passenger_flatground_2",
			"passenger_flatground_3",
			"passenger_flatground_2",
			"passenger_flatground_1",
			"passenger_flatground_2"
		};
		hideWeaponsCargo=0;
		cargoProxyIndexes[]={10,11,12,13,14,15};
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		class RenderTargets
		{
			class MFD_01
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PiP0";
					pointDirection="PiP0_dir";
					renderVisionMode=1;
					renderQuality=2;
					fov=0.050000001;
				};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"uh60\t1\flare_dispenser.rvmat",
				"uh60\t1\flare_dispenser_damage.rvmat",
				"uh60\t1\flare_dispenser_destruct.rvmat",
				"uh60\t1\flirl.rvmat",
				"uh60\t1\flirl_damage.rvmat",
				"uh60\t1\flirl_destruct.rvmat",
				"uh60\t1\gloss.rvmat",
				"uh60\t1\gloss_damage.rvmat",
				"uh60\t1\gloss_destruct.rvmat",
				"uh60\t1\intl_1.rvmat",
				"uh60\t1\intl_1_damage.rvmat",
				"uh60\t1\intl_1_destruct.rvmat",
				"uh60\t1\intl_2.rvmat",
				"uh60\t1\intl_2_damage.rvmat",
				"uh60\t1\intl_2_destruct.rvmat",
				"uh60\t1\mh60l01.rvmat",
				"uh60\t1\mh60l01_damage.rvmat",
				"uh60\t1\mh60l01_destruct.rvmat",
				"uh60\t1\mh60l02.rvmat",
				"uh60\t1\mh60l02_damage.rvmat",
				"uh60\t1\mh60l02_destruct.rvmat",
				"uh60\t1\mh60l03.rvmat",
				"uh60\t1\mh60l03_damage.rvmat",
				"uh60\t1\mh60l03_destruct.rvmat",
				"uh60\t1\mh60l04.rvmat",
				"uh60\t1\mh60l04_damage.rvmat",
				"uh60\t1\mh60l04_destruct.rvmat",
				"uh60\t1\mh60l05.rvmat",
				"uh60\t1\mh60l05_damage.rvmat",
				"uh60\t1\mh60l05_destruct.rvmat",
				"uh60\t1\rotorl.rvmat",
				"uh60\t1\rotorl_damage.rvmat",
				"uh60\t1\rotorl_destruct.rvmat",
				"uh60\t\glasses.rvmat",
				"uh60\t\glasses_damage.rvmat",
				"uh60\t\glasses_damage.rvmat",
				"uh60\t\glass_veh_int.rvmat",
				"uh60\t\glass_veh_int_damage.rvmat",
				"uh60\t\glass_veh_int_damage.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				body="flir_base";
				gun="flir";
				animationSourceBody="flir_base";
				animationSourceGun="flir";
				gunBeg="gun";
				gunEnd="gunnerview";
				gunnerOutOpticsShowCursor=0;
				gunnerOpticsShowCursor=0;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F.p3d";
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					10
				};
				minElev=-90;
				maxElev=10;
				initElev=0;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				outGunnerMayFire=1;
				gunnerForceOptics=0;
				usePip=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.055;
					minFov=0.0070000002;
					maxFov=0.1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,2};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.89999998;
					minFov=0.41999999;
					maxFov=0.89999998;
					visionMode[]={};
				};
			};
			class MainTurret: MainTurret
			{
				selectionFireAnim="zasleh_2";
				minTurn=10;
				maxTurn=170;
				minElev=-50;
				maxElev=15;
			};
			class RightDoorGun: RightDoorGun
			{
				minTurn=-170;
				maxTurn=-10;
				minElev=-50;
				maxElev=15;
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_bench_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=1;
				maxElev=45;
				minElev=-50;
				maxTurn=50;
				minTurn=-50;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Light_01bench";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerCompartments="Compartment3";
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				proxyIndex=2;
				class dynamicViewLimits
				{
					CargoTurret_03[]={-65,95};
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerCompartments="Compartment3";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				proxyIndex=3;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-95,65};
				};
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerCompartments="Compartment2";
				gunnerName="$STR_A3_TURRETS_BENCH_R2";
				proxyIndex=4;
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
			};
		};
	};
	class B_MH60L_gray_F: B_MH60L_F
	{
		displayName="MH-60L twin M2 (gray)";
		model="\uh60\mh60l\mh60l_gray.p3d";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				selectionFireAnim="zasleh_2";
				minTurn=0;
				maxTurn=180;
				minElev=-50;
				maxElev=15;
				weapons[]=
				{
					"HMG_M2_UH60"
				};
				magazines[]=
				{
					"2000Rnd_127x99_mag_Tracer_Red"
				};
			};
			class RightDoorGun: RightDoorGun
			{
				minTurn=-180;
				maxTurn=0;
				minElev=-50;
				maxElev=15;
				weapons[]=
				{
					"HMG_M2_UH60_2"
				};
				magazines[]=
				{
					"2000Rnd_127x99_mag_Tracer_Red"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		class AnimationSources: AnimationSources
		{
			class CollisionLightRed_source
			{
				source="MarkerLight";
				markerLight="CollisionRed";
			};
			class formation_lights
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class copilot_door
			{
				source="door";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class Pilot_Door
			{
				source="door";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class cargo_door_r
			{
				source="door";
				animPeriod=1;
				initPhase=0;
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="HMG_M2_UH60";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="HMG_M2_UH60";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="HMG_M2_UH60_2";
			};
			class ReloadAnim2
			{
				source="reload";
				weapon="HMG_M2_UH60_2";
			};
		};
	};
	class B_HH60A_gray_F: B_MH60L_gray_F
	{
		displayName="HH-60A twin M2 (gray)";
		model="\uh60\mh60l\hh60a.p3d";
		precisegetinout=1;
		getInAction="pilot_Heli_Light_02_Enter";
		getOutAction="pilot_Heli_Light_02_exit";
		driverDoor="pilot_door";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerDoor="copilot_door";
				precisegetinout=1;
				memoryPointsGetInGunnerPrecise="pos copilot";
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
			};
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: RightDoorGun
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
			class CargoTurret_02: CargoTurret_02
			{
			};
			class CargoTurret_03: CargoTurret_03
			{
			};
			class CargoTurret_04: CargoTurret_04
			{
			};
		};
		hiddenSelections[]=
		{
			"num1",
			"num2"
		};
		hiddenSelectionsTextures[]=
		{
			"\uh60\t1\numbers\5_ca.paa",
			"\uh60\t1\numbers\6_ca.paa"
		};
		class Eventhandlers: Eventhandlers
		{
			init="_this execVM ""\uh60\scripts\randomize.sqf""; _this execVM ""\uh60\scripts\rotor.sqf"";";
		};
	};
	class B_HH60A_gray_doors_F: B_HH60A_gray_F
	{
		displayName="HH-60A closeble cargo doors";
		model="\uh60\mh60l\hh60a_doors.p3d";
		precisegetinout=1;
		getInAction="pilot_Heli_Light_02_Enter";
		getOutAction="pilot_Heli_Light_02_exit";
		driverDoor="pilot_door";
		cargoDoors[]=
		{
			"cargo_door_r"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerDoor="copilot_door";
				precisegetinout=1;
				memoryPointsGetInGunnerPrecise="pos copilot";
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
			};
			class MainTurret: MainTurret
			{
				gunnerDoor="cargo_door_r";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerDoor="cargo_door_r";
			};
		};
		hiddenSelections[]=
		{
			"num1",
			"num2"
		};
		hiddenSelectionsTextures[]=
		{
			"\uh60\t1\numbers\5_ca.paa",
			"\uh60\t1\numbers\6_ca.paa"
		};
		class Eventhandlers: Eventhandlers
		{
			init="_this execVM ""\uh60\scripts\randomize.sqf""; _this execVM ""\uh60\scripts\rotor.sqf"";";
		};
		class UserActions: UserActions
		{
			class door_open
			{
				displayName="$STR_BLACKHAWKS_CLOSE_DOORS";
				condition="this doorPhase ""cargo_door_r"" == 1 and player in this";
				statement="this animateDoor [""cargo_door_r"",0];";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
			class door_close
			{
				displayName="$STR_BLACKHAWKS_OPEN_DOORS";
				condition="this doorPhase ""cargo_door_r"" == 0 and player in this";
				statement="this animateDoor [""cargo_door_r"",1];";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
		};
	};
	class B_MH60L_noprobe_F: B_MH60L_F
	{
		displayName="MH-60L(no probe) spec ops BH";
		class Eventhandlers: Eventhandlers
		{
			init="_this execVM ""\uh60\scripts\hide_probe.sqf""; _this execVM ""\uh60\scripts\rotor.sqf"";";
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class B_UH60L_F: B_UH60L_base_F
	{
		displayName="UH-60L US army BH";
		model="\uh60\uh60l\uh60l.p3d";
		scope=2;
		side=1;
		faction="BLU_F";
		crew="B_Helipilot_F";
		typicalCargo[]=
		{
			"B_Helipilot_F"
		};
		precisegetinout=1;
		memoryPointsGetInDriverPrecise="pos pilot";
		getInAction="pilot_Heli_Light_02_Enter";
		getOutAction="pilot_Heli_Light_02_exit";
		driverDoor="pilot_door";
		cargoProxyIndexes[]={10,11,12,13,14,15,16};
		hideWeaponsCargo=1;
		transportSoldier=7;
		cargoAction[]=
		{
			"passenger_mantisrear",
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands",
			"passenger_low01",
			"passenger_generic01_foldhands",
			"passenger_generic01_leanright",
			"passenger_generic01_leanleft"
		};
		cargoDoors[]=
		{
			"cargo_door_r"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"uh60\t\glasses.rvmat",
				"uh60\t\glasses_damage.rvmat",
				"uh60\t\glasses_damage.rvmat",
				"uh60\t\glass_veh_int.rvmat",
				"uh60\t\glass_veh_int_damage.rvmat",
				"uh60\t\glass_veh_int_damage.rvmat",
				"uh60\t\uh60l01.rvmat",
				"uh60\t\uh60l01_damage.rvmat",
				"uh60\t\uh60l01_destruct.rvmat",
				"uh60\t\uh60l04.rvmat",
				"uh60\t\uh60l04_damage.rvmat",
				"uh60\t\uh60l04_destruct.rvmat",
				"uh60\t\uh60l05.rvmat",
				"uh60\t\uh60l05_damage.rvmat",
				"uh60\t\uh60l05_destruct.rvmat",
				"uh60\t\uh60q02.rvmat",
				"uh60\t\uh60q02_damage.rvmat",
				"uh60\t\uh60q02_destruct.rvmat",
				"uh60\t\uh60q03.rvmat",
				"uh60\t\uh60q03_damage.rvmat",
				"uh60\t\uh60q03_destruct.rvmat",
				"uh60\t\uh60q05.rvmat",
				"uh60\t\uh60q05_damage.rvmat",
				"uh60\t\uh60q05_destruct.rvmat"
			};
		};
		class AnimationSources: AnimationSources
		{
			class CollisionLightRed_source
			{
				source="MarkerLight";
				markerLight="CollisionRed";
			};
			class formation_lights
			{
				source="user";
				animPeriod=0;
				initPhase=1;
			};
			class copilot_door
			{
				source="door";
				animPeriod=0.40000001;
				initPhase=0;
			};
			class Pilot_Door
			{
				source="door";
				animPeriod=0.60000002;
				initPhase=0;
			};
			class cargo_door_r
			{
				source="door";
				animPeriod=1;
				initPhase=0;
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="LMG_M240_UH60";
			};
			class ReloadAnim
			{
				source="reload";
				weapon="LMG_M240_UH60";
			};
			class ReloadMagazine
			{
				source="reloadmagazine";
				weapon="LMG_M240_UH60";
			};
			class Revolving
			{
				source="revolving";
				weapon="LMG_M240_UH60";
			};
			class Muzzle_flash2
			{
				source="ammorandom";
				weapon="LMG_M240_UH60_2";
			};
			class ReloadAnim2
			{
				source="reload";
				weapon="LMG_M240_UH60_2";
			};
			class ReloadMagazine2
			{
				source="reloadmagazine";
				weapon="LMG_M240_UH60_2";
			};
			class Revolving2
			{
				source="revolving";
				weapon="LMG_M240_UH60_2";
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerDoor="copilot_door";
				precisegetinout=1;
				memoryPointsGetInGunnerPrecise="pos copilot";
				gunnerGetInAction="copilot_Heli_Light_02_Enter";
				gunnerGetOutAction="copilot_Heli_Light_02_Exit";
			};
			class MainTurret: MainTurret
			{
				selectionFireAnim="zasleh_2";
				gunnerDoor="cargo_door_r";
				minTurn=0;
				maxTurn=180;
				minElev=-50;
				maxElev=15;
				weapons[]=
				{
					"LMG_M240_UH60"
				};
				magazines[]=
				{
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow"
				};
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerDoor="cargo_door_r";
				minTurn=-180;
				maxTurn=0;
				minElev=-50;
				maxElev=15;
				weapons[]=
				{
					"LMG_M240_UH60_2"
				};
				magazines[]=
				{
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow",
					"200Rnd_762x51_Belt_Yellow"
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				proxyIndex=1;
				maxElev=45;
				minElev=-50;
				maxTurn=70;
				minTurn=20;
				isPersonTurret=1;
				ejectDeadGunner=0;
				class dynamicViewLimits
				{
					CargoTurret_04[]={-65,95};
				};
				playerPosition=4;
				soundAttenuationTurret="";
				disableSoundAttenuation=1;
				gunnerGetInAction="GetInHeli_Transport_01Cargo";
				gunnerDoor="cargo_door_r";
				enabledByAnimationSource="cargo_door_r";
				cantCreateAI=1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				gunnerName="$STR_A3_TURRETS_BENCH_L1";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=2;
				maxTurn=-20;
				minTurn=-80;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment2";
				gunnerName="$STR_A3_TURRETS_BENCH_L2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=3;
				maxTurn=-20;
				minTurn=-80;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				gunnerName="$STR_A3_TURRETS_BENCH_R1";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=4;
				maxTurn=80;
				minTurn=20;
			};
		};
		class UserActions: UserActions
		{
			class door_open
			{
				displayName="$STR_BLACKHAWKS_CLOSE_DOORS";
				condition="this doorPhase ""cargo_door_r"" == 1 and player in this";
				statement="this animateDoor [""cargo_door_r"",0];";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
			class door_close
			{
				displayName="$STR_BLACKHAWKS_OPEN_DOORS";
				condition="this doorPhase ""cargo_door_r"" == 0 and player in this";
				statement="this animateDoor [""cargo_door_r"",1];";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
		};
	};
	class B_UH60L_med_F: B_UH60L_F
	{
		displayName="UH-60L medevac";
		model="\uh60\uh60l\uh60l_med.p3d";
		vehicleClass="Support";
		attendant=1;
		supplyRadius=3;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=15;
			};
		};
		cargoProxyIndexes[]={11};
		transportSoldier=3;
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_injured_medevac_truck03",
			"passenger_injured_medevac_truck02"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
			};
			class RightDoorGun: RightDoorGun
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
};
class cfgMods
{
	author="76561198041815156";
	timepacked="1450196504";
};
