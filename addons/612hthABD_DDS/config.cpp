#include "\612thABD_Equipment\cfgPatches.hpp"
		//Original author = "Ampersand"; "Author Contacted, Edit Allowed for reupload"
class SensorTemplateMan;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class Components: Components
	{
		class SensorsDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {60};
			showTargetTypes = "1+2+4+8+16+32+64+128+256+512+1024";
			resource = "RscCustomInfoSensors";
		};
	};
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class Components: Components
	{
		class SensorsDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {60};
			showTargetTypes = "1+2+4+8+16+32+64+128+256+512+1024";
			resource = "RscCustomInfoSensors";
		};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class Components;
	};
	class Tank: LandVehicle
	{
		class Components: Components
		{
			class SensorsManagerComponent;
		};
	};
	class Tank_F: Tank
	{
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components
				{
					class SensorMan: SensorTemplateMan
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						allowsMarking = 0;
						angleRangeHorizontal = 360;
					};
				};
			};
		};
	};
	class MBT_04_base_F: Tank_F
	{
		class Components: Components
		{
			class SensorsManagerComponent;
		};
	};
	class MBT_04_command_base_F: MBT_04_base_F
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftDriver{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightDriver{};
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components
				{
					class SensorMan: SensorTemplateMan
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						allowsMarking = 0;
						angleRangeHorizontal = 360;
					};
				};
			};
		};
	};
	class Car: LandVehicle
	{
		class Components: Components
		{
			class SensorsManagerComponent;
		};
	};
	class Car_F: Car
	{
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components
				{
					class SensorMan: SensorTemplateMan
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						allowsMarking = 0;
						angleRangeHorizontal = 360;
					};
				};
			};
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class Components: Components
		{
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components
				{
					class SensorMan: SensorTemplateMan
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						allowsMarking = 0;
						angleRangeHorizontal = 360;
					};
				};
			};
		};
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftDriver{};
			class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightDriver{};
			class SensorsManagerComponent: SensorsManagerComponent
			{
				class Components
				{
					class SensorMan: SensorTemplateMan
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 30;
							viewDistanceLimitCoef = 1;
							objectDistanceLimitCoef = 1;
						};
						allowsMarking = 0;
						angleRangeHorizontal = 360;
					};
				};
			};
		};
	};
};
