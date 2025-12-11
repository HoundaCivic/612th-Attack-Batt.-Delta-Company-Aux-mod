#include "\612thABD_Equipment\cfgPatches.hpp"
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
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
		class Components;
	};
	class UGV_01_base_F: Car_F{};
	class UGV_01_rcws_base_F: UGV_01_base_F{};
	class UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class CargoTurret_01;
		};
	};

	class 612thABD_UGV_RCWS: UGV_01_rcws_F
	{
		author = "Hound";
		_generalMacro = "UGV_01_rcws_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Fac612th";
		editorSubcategory = "Sub612thDrone";
		crew = "B_UAV_AI";
		typicalCargo[] = {"612thABD_Trooper"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\UGV\612thABD_UGV_01_ext_co.paa","612thABD_Vehicles\Ground_vehicles\UGV\612thABD_UGV_01_int_co.paa","612thABD_Vehicles\Ground_vehicles\UGV\612thABD_UGV_Turret_CO.paa"};
		maxSpeed = 120;
		acceleration = 80;
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.8;
		centreBias = 1.5;
		clutchStrength = 20.0;
		enginePower = 375;
		maxOmega = 450;
		peakTorque = 850;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.5;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"(0/3500)","(0/850)"},{"(500/3500)","(400/850)"},{"(1500/3500)","(710/850)"},{"(2000/3500)","(780/850)"},{"(2500/3500)","(850/850)"},{"(3000/3500)","(600/850)"},{"(6000/3500)","(0/850)"}};
		changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
		switchTime = 0.11;
		latency = 1.5;
		armor = 30;
		armorStructural = 4;
		armorFuel = 2;
		armorWheels = 0.15;	
		damageResistance = 0.00900;
		canFloat = true;
		enableGPS = 1;
		cargoCanControlUAV = 1;
		maximumLoad = 6000;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = -250;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "OtocVez";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.25;
						isTurret = 1;
					};
					class HitGun
					{
						armor = -250;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "OtocHlaven";
						passThrough = 0;
						minimalHit = 0.03;
						explosionShielding = 0.4;
						radius = 0.2;
						isGun = 1;
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
				weapons[] = {"SWLW_Z6","GMG_40mm"};
				magazines[] = {"SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag", "96Rnd_40mm_G_belt","96Rnd_40mm_G_belt","96Rnd_40mm_G_belt"};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",0.31622776,1,30};
				minElev = -10;
				maxElev = 60;
				forceHideGunner = 1;
				outGunnerMayFire = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = 3;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
					initFov = 0.4667;
					maxFov = 0.4667;
					minFov = 0.035;
					directionStabilized = 1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
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
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class components
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
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret_01{};
		};
	};
	class B_T_UGV_01_olive_F;
	class 612thABD_UGV_Unarmed : B_T_UGV_01_olive_F
	{
		author = "Hound";
		_generalMacro = "B_T_UGV_01_olive_F";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Fac612th";
		editorSubcategory = "Sub612thDrone";
		crew = "B_UAV_AI";
		typicalCargo[] = {"612thABD_Trooper"};
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\UGV\612thABD_UGV_01_ext_co.paa","612thABD_Vehicles\Ground_vehicles\UGV\612thABD_UGV_01_int_co.paa","612thABD_Vehicles\Ground_vehicles\UGV\612thABD_UGV_Turret_CO.paa"};
		maxSpeed = 120;
		acceleration = 80;
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.8;
		centreBias = 1.5;
		clutchStrength = 20.0;
		enginePower = 375;
		maxOmega = 450;
		peakTorque = 850;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.5;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"(0/3500)","(0/850)"},{"(500/3500)","(400/850)"},{"(1500/3500)","(710/850)"},{"(2000/3500)","(780/850)"},{"(2500/3500)","(850/850)"},{"(3000/3500)","(600/850)"},{"(6000/3500)","(0/850)"}};
		changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
		switchTime = 0.11;
		latency = 1.5;
		armor = 30;
		armorStructural = 4;
		armorFuel = 2;
		armorWheels = 0.15;	
		damageResistance = 0.00900;
		canFloat = true;
		enableGPS = 1;
		cargoCanControlUAV = 1;
		maximumLoad = 6000;
	};
};
