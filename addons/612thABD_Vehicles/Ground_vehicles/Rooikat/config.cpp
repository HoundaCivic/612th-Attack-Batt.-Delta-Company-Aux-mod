#include "\612thABD_Equipment\cfgPatches.hpp"
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
				class Components;
			};
		};
		class AnimationSources;
		class Components;
		class EventHandlers;
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F{};
	class B_T_AFV_Wheeled_01_up_Cannon_F: AFV_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class 612thABD_Rooikat: B_T_AFV_Wheeled_01_up_Cannon_F
	{
		displayname="Rooikat 120 UP";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thTanks";
		armor = 520;
		typicalCargo[] = {"612thABD_Trooper"};
		availableForSupportTypes[] = {"Drop","Transport"};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","CamoNet","CamoSlat"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\Rooikat\612thABD_afv_wheeled_01_EXT1_CO.paa","612thABD_Vehicles\Ground_vehicles\Rooikat\612thABD_afv_wheeled_01_EXT2_CO.paa",
		"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","612thABD_Vehicles\Ground_vehicles\Rooikat\612thABD_afv_wheeled_01_EXT3_CO.paa","612thABD_Vehicles\Ground_vehicles\Rooikat\612thABD_afv_commander_tow_CO.paa",
		"a3\Armor_F\Data\camonet_NATO_Green_CO.paa","612thABD_Vehicles\Ground_vehicles\Rooikat\612thABD_afv_wheeled_01_EXT3_CO.paa"};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "3AS_Mass_Driver_Cannon";
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "3AS_Mass_Driver_Cannon";
			};
			class muzzle_rot_HMG
			{
				source = "ammorandom";
				weapon = "3AS_ATTE_Turret";
			};
			class cannon_120mm_revolving
			{
				source = "revolving";
				weapon = "3AS_Mass_Driver_Cannon";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						commanding = 2;
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"SmokeLauncher","SWLW_Z6", "Laserdesignator_vehicle"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag", "SWLW_Z6_mag", "SWLW_Z6_mag", "SWLW_Z6_mag", "Laserbatteries"};
						soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1.0,1,30};
						soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1.0,1,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						forceHideGunner = 0;
						gunnerAction = "Commander_AFV_Wheeled_01_out";
						gunnerInAction = "Commander_AFV_Wheeled_01_in";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerForceOptics = 0;
						turretFollowFreeLook = 2;
						animationSourceStickX = "com_turret_control_x";
						animationSourceStickY = "com_turret_control_y";
						gunnerLeftHandAnimName = "com_turret_control_y";
						gunnerRightHandAnimName = "com_turret_control_y";
						usepip = 2;
						LODOpticsIn = 0;
						isPersonTurret = 0;
						personTurretAction = "vehicle_turnout_2";
						minOutElev = -30;
						maxOutElev = 45;
						initOutElev = 0;
						minOutTurn = -165;
						maxOutTurn = 30;
						initOutTurn = 0;
						class ViewGunner: ViewGunner
						{
							initAngleX = -5;
							initAngleY = 0;
							initFov = 0.9;
							minFov = 0.25;
							maxFov = 1.25;
							minAngleX = -65;
							maxAngleX = 85;
							minAngleY = -150;
							maxAngleY = 150;
							minMoveX = -0.075;
							maxMoveX = 0.075;
							minMoveY = -0.075;
							maxMoveY = 0.075;
							minMoveZ = -0.075;
							maxMoveZ = 0.1;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.31;
							minFov = 0.034;
							maxFov = 0.31;
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};
						turretInfoType = "RscOptics_MBT_01_commander";
						showCrewAim = 1;
						startEngine = 0;
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType = "TransportFeedDisplayComponent";
										source = "Missile";
									};
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {4000,2000,1000,8000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay = "SensorDisplay";
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType = "TransportFeedDisplayComponent";
										source = "Missile";
									};
									class SensorDisplay
									{
										componentType = "SensorsDisplayComponent";
										range[] = {4000,2000,1000,8000};
										resource = "RscCustomInfoSensors";
									};
								};
							};
						};
						class HitPoints
						{
							class HitComTurret
							{
								armor = 0.5;
								material = -1;
								armorComponent = "hit_com_turret";
								name = "hit_com_turret_point";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.05;
								explosionShielding = 1;
								radius = 0.15;
								isTurret = 1;
							};
							class HitComGun
							{
								armor = 0.1;
								material = -1;
								armorComponent = "hit_com_gun";
								name = "hit_com_gun_point";
								visual = "-";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.15;
								isGun = 1;
							};
						};
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						viewGunnerShadowAmb = 0.5;
						viewGunnerShadowDiff = 0.05;
					};
				};
				weapons[] = {"3AS_Mass_Driver_Cannon","3AS_ATTE_Turret"};
				magazines[] = {"3AS_30Rnd_Mass_Driver_shells","3AS_30Rnd_Mass_Driver_shells","3AS_30Rnd_Mass_Driver_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells"};
				commanding = 1;
				gunnerAction = "Gunner_AFV_Wheeled_01_out";
				gunnerInAction = "Gunner_AFV_Wheeled_01_in";
				animationSourceStickX = "turret_control_x";
				animationSourceStickY = "turret_control_y";
				gunnerLeftHandAnimName = "turret_control_y";
				gunnerRightHandAnimName = "turret_control_y";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = 3;
				startEngine = 0;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex = 2;
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh2";
				LODOpticsIn = 0;
				usepip = 2;
				isPersonTurret = 0;
				personTurretAction = "vehicle_turnout_2";
				minElev = -10;
				initElev = 0;
				maxElev = 20;
				minOutElev = -40;
				maxOutElev = 60;
				initOutElev = 0;
				minOutTurn = -30;
				maxOutTurn = 165;
				initOutTurn = 0;
				class TurnIn
				{
					limitsArrayTop[] = {{22,-180},{22,180}};
					limitsArrayBottom[] = {{-2.9,-180},{-3.0,-161.6867},{-3.3683,-150.6867},{-8.3683,-145.6867},{-10,0},{-8.7173,138.6372},{-2.7173,150.6372},{-3.0,161.6867},{-2.9,180}};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX = -5;
					initAngleY = 0;
					initFov = 0.9;
					minFov = 0.25;
					maxFov = 1.25;
					minAngleX = -65;
					maxAngleX = 85;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = -0.075;
					maxMoveX = 0.075;
					minMoveY = -0.075;
					maxMoveY = 0.075;
					minMoveZ = -0.075;
					maxMoveZ = 0.1;
				};
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","NVG","TI"};
				};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				showCrewAim = 2;
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,2000,1000,8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay = "SensorDisplay";
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000,2000,1000,8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.2;
						isGun = 1;
					};
				};
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1_damage.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT1_destruct.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT2.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT2_damage.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT2_destruct.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel_damage.rvmat","a3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_wheel_destruct.rvmat"};
		};
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectAMV";
			};
		};
		engineStartSpeed = 5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
		explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5.0;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				hitpoint = "Light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				hitpoint = "Light_L_flare";
				useFlare = 1;
			};
			class Right3: Right2
			{
				position = "light_R_flare2";
				hitpoint = "Light_R2_flare";
				flareSize = 0.7;
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				hitpoint = "Light_L2_flare";
				flareSize = 0.7;
			};
		};
		aggregateReflectors[] = {{"Left","Left2","Left3","Right","Right2","Right3"}};
		selectionFireAnim = "";
		class RenderTargets
		{
			class commander_display
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "commanderview";
					pointDirection = "commanderview_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.334595;
					turret[] = {0,0};
				};
			};
			class driver_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 1;
					turret[] = {-1};
				};
			};
		};
		transportSoldier = 0;
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SWLW_beltGrenade_mag
			{
				magazine = "SWLW_beltGrenade_mag";
				count = 2;
			};
			class _xx_SWLW_DC15A_Mag
			{
				magazine = "SWLW_DC15A_Mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_ls_weapon_dc15a
			{
				weapon = "ls_weapon_dc15a";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGDriver = 0;
		numberPhysicalWheels = 8;
	class VehicleTransport
    {
        class Cargo
        {
            parachuteClass            = B_Parachute_02_F;
            parachuteHeightLimit    = 40;                
            canBeTransported        = 1;                
            dimensions[]            = { "doplnovani", "action" };
        };
    };
		class TextureSources
		{
			class Rooiv1
			{
				displayname="Basic";
				scope=2;
				author="Hound";
				hiddenSelectionsTextures[] = {"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_EXT1_green_CO.paa","612thABD_Vehicles\Ground_vehicles\Rooikat\612thABD_afv_wheeled_01_EXT2_CO.paa.paa",
				"a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_wheeled_01_wheel_green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa","a3\Armor_F_Tank\AFV_Wheeled_01\data\afv_commander_tow_CO.paa",
				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa","A3\Armor_F_Tank\AFV_Wheeled_01\Data\afv_wheeled_01_EXT3_CO.paa"};
				factions[]=
				{
					"Fac612th"
				};
			};
		};
	};
};