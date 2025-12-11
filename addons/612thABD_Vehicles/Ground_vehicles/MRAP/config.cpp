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
	class MRAP_01_base_F: Car_F{};
	class MRAP_01_hmg_base_F: MRAP_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
		};
	};
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F{};
	class 612th_MRAP_HMG: B_MRAP_01_hmg_F
	{
		vehicleClass = "Car";
		_generalMarcro = "B_MRAP_01_hmg_F";
		scope = 2;
		scopecurator = 2;
		side = 1;
		faction = "Fac612th";
		editorSubcategory = "Sub612thLightVic";
		displayName = "[612thABD] MRAP (HMG)";
		crew = "612thABD_Crewman";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\MRAP\612thABD_MRAP_Base_co.paa","612thABD_Vehicles\Ground_vehicles\MRAP\MRAPADDS.paa","612thABD_Vehicles\Ground_vehicles\MRAP\Turret.paa"};
		typicalCargo[] = {"612thABD_Trooper"};
		availableForSupportTypes[] = {"Drop","Transport"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SWLW_Z6"};
				magazines[] = {"SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag","SWLW_Z6_mag"};
			};
		};
	};
	class B_MRAP_01_F;
	class 612thABD_MRAP_Unarmed: B_MRAP_01_F
	{
		_generalMarcro = "B_MRAP_01_F";
		scope = 2;
		scopecurator = 2;
		side = 1;
		faction = "Fac612th";
		editorSubcategory = "Sub612thLightVic";
		displayName = "[612thABD] MRAP";
		crew = "612thABD_Crewman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\MRAP\612thABD_MRAP_Base_co.paa","612thABD_Vehicles\Ground_vehicles\MRAP\MRAPADDS.paa"};
		typicalCargo[] = {"612thABD_Trooper"};
		availableForSupportTypes[] = {"Drop","Transport"};
	};
};