#include "\612thABD_Equipment\cfgPatches.hpp"
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class ViewOptics;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class UGV_01_base_F: Car_F{};
	class UGV_01_rcws_base_F: UGV_01_base_F{};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F{};
	class CCS_Manta_Base: I_UGV_01_rcws_F
	{};
	class 612thABD_Manta : CCS_Manta_Base
	{
		author = "Hound";
		displayName = "[612thABD] Manta";
		scope = 2;
		side = 1;
		scopearsenal = 2;
		scopecurator = 2;
		faction = "Fac612th";
		editorSubcategory = "Sub612thDrone";
		crew = "B_UAV_AI";
		typicalCargo[] = {"612thABD_Basic_P1_Trooper"};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "otochlaven";
						visual = "otochlaven";
						passThrough = 0;
						explosionShielding = 0.4;
						minimalHit = 0.01;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 1;
						material = -1;
						name = "otochlaven";
						visual = "otochlaven";
						passThrough = 0;
						explosionShielding = 0.4;
						minimalHit = 0.01;
						radius = 0.25;
					};
				};
				isCopilot = 0;
				dontCreateAI = 0;
				body = "mainTurret";
				gun = "mainGun";
				memoryPointGunnerOptics = "PiP1_pos";
				memoryPointGun = "machinegun";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UGV_gunner";
				weapons[] = {"IDA_Z6","612thABDEXT_VIC_TOW_LAUNCHER"};
				magazines[] = {"IDA_blaster_battery","IDA_blaster_battery","612thABD_Manta_Tow_Mag"};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.31622776,1,30};
				minElev = -35;
				maxElev = 60;
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = 3;
				gunnerInAction = "Disabled";
				gunnerAction = "Disabled";
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
					initFov = 0.4667;
					maxFov = 0.4667;
					minFov = 0.035;
					directionStabilized = 1;
				};
			};
		};
		class TextureSources
		{
			class 612thABD_Base
			{
				displayName = "Base";
				author = "Hound";
				textures[] = {"612THEXT_Vic\Manta\612thABD_manta_base_co.paa"};
				factions[] = {"Fac612th"};
			};
		};
		textureList[] = {"612thABD_Base",1};
		hiddenSelectionsTextures[] = {"612THEXT_Vic\Manta\612thABD_manta_base_co.paa"};
	};
};
class CfgWeapons
{
	class missiles_titan;
	class 612thABDEXT_VIC_TOW_LAUNCHER: missiles_titan
	{
		displayName = "Mini Tow Launcher";
		magazines[] = {"612thABD_Manta_Tow_Mag"};
	};
};