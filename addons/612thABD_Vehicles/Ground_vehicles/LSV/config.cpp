#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
	};
	class LSV_01_base_F: Car_F{};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class CodRiverTurret;
			class ViewOptics;
			class ViewGunner;
		};
	};
	class B_T_LSV_01_armed_F: LSV_01_armed_base_F{};
	class 612thABD_LSV_BASE_Armed: B_T_LSV_01_armed_F
	{
		displayname="[612thABD] LRATV (MG)";
		scope = 2;
		scopecurator = 2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thLightVic";
		crew = "612thABD_Crewman";
        hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		transportSoldier = 4;
        hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_01_BODY_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_02_BASE_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_03_Base_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_Adds_base_CO.paa"};
		typicalCargo[] = {"612thABD_Basic_P1_Trooper"};
		availableForSupportTypes[] = {"Drop","Transport"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				disableSoundAttenuation = 1;
				gunnerLeftHandAnimName = "otocHlaven";
				gunnerRightHandAnimName = "otocHlaven";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				weapons[] = {"SWLW_Z6"};
				magazines[] = {"SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag"};
				minElev = -10;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound",9.999998e-07,1.0};
				gunnerAction = "gunner_lsv_01";
				gunnerCompartments = "Compartment1";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "muzzle_beg";
				gunEnd = "muzzle_end";
				memoryPointGunnerOptics = "gunnerView";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				commanding = -2;
				primaryGunner = 1;
				optics = 1;
				discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 1.25;
					visionMode[] = {"Normal","NVG"};
				};
				class ViewGunner: ViewGunner{};

			};
			class 612th_CodRiverTurret : CodRiverTurret
			{
				weapons[] = {"SWLW_Z6"};
				magazines[] = {"SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag"};
			};
		};
		class TextureSources
		{
			class Black
			{
				displayName = "[612thABD] Base";
				author = "Hound";
				hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_01_BODY_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_02_BASE_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_03_Base_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_Adds_base_CO.paa"};
				factions[] = {"Fac612th"};
			};
		};
	};
	class B_LSV_01_unarmed_F;
	class 612thABD_LSV_Unarmed: B_LSV_01_unarmed_F
	{
		_generalMarcro = "B_LSV_01_unarmed_F";
		scope = 2;
		scopecurator = 2;
		side = 1;
		faction = "Fac612th";
		editorSubcategory = "Sub612thLightVic";
		displayName = "[612thABD] LRATV";
		crew = "612thABD_Crewman";
		transportSoldier = 4;
		typicalCargo[] = {"612thABD_Basic_P1_Trooper","612thABD_Basic_P1_Trooper"};
        hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
        hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_01_BODY_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_02_BASE_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_03_Base_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_Adds_base_CO.paa"};
		availableForSupportTypes[] = {"Drop","Transport"};
		class TextureSources
		{
			class Black
			{
				displayName = "[612thABD] Base";
				author = "Hound";
				hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_01_BODY_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_02_BASE_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_03_Base_CO.paa","612thABD_Vehicles\Ground_vehicles\LSV\612thABD_LSV_Adds_base_CO.paa"};
				factions[] = {"Fac612th"};
			};
		};
	};
};