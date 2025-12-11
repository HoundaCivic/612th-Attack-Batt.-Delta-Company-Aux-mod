#include "\612thABD_Equipment\cfgPatches.hpp"
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class UAV_03_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class B_T_UAV_03_dynamicLoadout_F: UAV_03_base_F{};
	class 612thABD_MQ_12_Drone: B_T_UAV_03_dynamicLoadout_F
	{
		author = "Hound";
		nameSound = "veh_air_UAV_s";
		_generalMacro = "UAV_03_base_F";
		faction = "Fac612th";
		displayName = "[612th] Mosquito-12 Drone";
		editorSubcategory = "Sub612thDrone";
		vehicleClass = "Autonomous";
		fuelCapacity = 400;
		scope = 2;
		scopecurator = 2;
		fuelConsumptionRate = 0.0325;
		armor = 30;
		maxSpeed = 450;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		class AnimationSources: AnimationSources
		{
			class Rockets_source
			{
				source = "revolving";
				weapon = "missiles_DAR";
			};
			class CollisionLightWhite_source
			{
				source = "MarkerLight";
				markerLight = "CollisionLightWhite1";
			};
			class HideWeapons
			{
				source = "user";
				animPeriod = 1e-06;
				initPhase = 0;
			};
		};
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Air_Vics\Mosquito-12\612thABD_UAV_03_1_CO.paa","612thABD_Vehicles\Air_Vics\Mosquito-12\612thABD_UAV_03_2_CO.paa","612thABD_Vehicles\Air_Vics\Mosquito-12\612thABD_UAV_03_mlod_CO.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isCopilot = 0;
				minElev = -85;
				maxElev = 50;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				body = "MainTurret";
				gun = "MainGun";
				weapons[] = {"missiles_SCALPEL","3as_LAAT_Medium_Canon","3AS_LAAT_Missile_AGM","3AS_LAAT_Missile_AA","missiles_DAR","Laserdesignator_mounted"};
				magazines[] = {"6Rnd_LG_scalpel","24Rnd_missiles","Laserbatteries","3AS_PylonMissile_LAAT_8Rnd_Missile_AA","3AS_LAAT_8Rnd_Missile_AGM","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells","3as_LAAT_1000Rnd_Medium_shells"};
				showAllTargets = 4;
				commanding = -1;
				gunnerCompartments = "Compartment2";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				memoryPointGun = "PIP1_pos";
				memoryPointGunnerOptics = "PIP1_pos";
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				primaryGunner = 1;
				soundServo[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\air\noises\servo_drone_turret_2",0.099999994,1,10};
				stabilizedInAxes = 3;
				startEngine = 0;
				turretInfoType = "RscOptics_UAV_gunner";
				LODTurnedIn = -1;
				LODTurnedOut = -1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.5;
						minFov = 0.5;
						maxFov = 0.5;
						opticsDisplayName = "W";
						directionStabilized = 1;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						initFov = 0.1;
						minFov = 0.1;
						maxFov = 0.1;
						opticsDisplayName = "M";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						initFov = 0.0286;
						minFov = 0.0286;
						maxFov = 0.0286;
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};
};
