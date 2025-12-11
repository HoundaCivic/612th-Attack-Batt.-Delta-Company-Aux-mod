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
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Eventhandlers;
class CfgVehicles
{
	class NonStrategic;
	class StaticShip;
	class Building;
	class House_F;
	class FloatingStructure_F;
	class thingx;
	class Ship;
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class Components;
	};
	class AAA_System_01_base_F: StaticMGWeapon{};
	class B_AAA_System_01_F :AAA_System_01_base_F{};
	class 612thABD_CIS_CWIS: B_AAA_System_01_F
	{
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"barrel_revolving",1},{"muzzleflashrot",44},{"mainturret",0},{"maingun",0.26},{"sightscorrection_horizontal",0},{"sightscorrectionv_vertical",0.26},{"damageturret",0},{"damagegun",0}};
			hide[] = {"zasleh","light_back","brzdove svetlo","clan","podsvit pristroju","poskozeni"};
			verticalOffset = 2.467;
			verticalOffsetWorld = -0.039;
			init = "''";
		};
		author = "$Hound";
		displayName = "Close-in Weapon System";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minelev = -25;
				maxelev = 85;
				minturn = -180;
				maxturn = 180;
				initElev = 15;
				initTurn = 0;
				maxHorizontalRotSpeed = 2.7;
				maxVerticalRotSpeed = 2.7;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",1.4125376,1,40};
				hasGunner = 1;
				gunnerName = "$STR_A3_Phalanx_operator_displayName";
				primary = 1;
				primaryGunner = 1;
				startEngine = 0;
				enableManualFire = 1;
				turretinfotype = "RscOptics_APC_Tracked_01_gunner";
				optics = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_m_F";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_AAA_01_n_F";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				forceHideGunner = 1;
				gunnerforceoptics = 1;
				gunnerOutForceOptics = 1;
				viewgunnerinExternal = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 0;
				showAllTargets = 2;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunbeg = "pos_barrel_end";
				gunend = "pos_barrel";
				uavCameraGunnerPos = "pos_gunner_view";
				uavCameraGunnerDir = "pos_gunner_view_dir";
				memoryPointGunnerOptics = "pos_gunner_view";
				particlespos = "pos_fx";
				particlesdir = "pos_fx_dir";
				selectionFireAnim = "zasleh";
				gunnerlefthandanimname = "";
				gunnerrighthandanimname = "";
				weapons[] = {"612thABD_CIWIS_Cannon"};
				magazines[] = {"612th_CIWIS_Magazine","612th_CIWIS_Magazine"};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000,8000,4000,2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {16000,8000,4000,2000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
	};
};
