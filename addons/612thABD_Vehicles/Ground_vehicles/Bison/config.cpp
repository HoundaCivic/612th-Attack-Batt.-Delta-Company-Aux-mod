#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgMovesBasic
{
	class Actions;
	class DefaultDie;
	class ManActions
	{
		Driver_OPTRE_Bison = "Driver_OPTRE_Bison";
		Gunner_OPTRE_Bison = "Gunner_OPTRE_Bison";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Driver_OPTRE_Bison: Crew
		{
			file = "\OPTRE_Vehicles\Bison\data\Anim\Driver_OPTRE_Bison.rtm";
		};
		class Gunner_OPTRE_Bison: Crew
		{
			file = "\OPTRE_Vehicles\Bison\data\Anim\Gunner_OPTRE_Bison.rtm";
		};
	};
};
class CfgMovesBasicSevenFoot
{
	class Actions;
	class DefaultDie;
	class ManActions
	{
		Driver_OPTRE_Bison = "Driver_OPTRE_Bison";
		Gunner_OPTRE_Bison = "Gunner_OPTRE_Bison";
	};
};
class CfgMovesMaleSevenFoot: CfgMovesBasicSevenFoot
{
	class States
	{
		class Crew;
		class Driver_OPTRE_Bison: Crew
		{
			file = "\OPTRE_MJOLNIR\data\anims\OPTRE_anims\anims\Driver_OPTRE_Bison.rtm";
		};
		class Gunner_OPTRE_Bison: Crew
		{
			file = "\OPTRE_MJOLNIR\data\anims\OPTRE_anims\anims\Gunner_OPTRE_Bison.rtm";
		};
	};
};
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
	class Wheeled_APC_F: Car_F{};
	class APC_Wheeled_01_base_F: Wheeled_APC_F
	{
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
			};
		};
		class AnimationSources;
		class EventHandlers;
		class CargoTurret;
	};
	class OPTRE_M413_base: APC_Wheeled_01_base_F{};
	class OPTRE_M412_IFV_UNSC: OPTRE_M413_base{};
	class 612thABD_Bison_IFV: OPTRE_M412_IFV_UNSC
	{
		crew = "612thABD_Crewman";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "Fac612th";
        editorSubcategory = "Sub612thTanks";
		displayName = "[612thABD] Bison IFV";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"3AS_ATTE_Turret","OPTRE_M670_ATGM_Launcher"};
				magazines[] = {"3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","3AS_250Rnd_ATTE_30mm_MP_shells","OPTRE_2Rnd_GAT_missiles"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "OPTRE_M230";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "OPTRE_M230";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "OPTRE_M230";
			};
		};
		class textureSources
		{
			class 612th_Base
			{
				displayName = "Republic White";
				author = "Hound";
				textures[] = {"612thABD_Vehicles\Ground_vehicles\Bison\612thABD_Bison_Body_co.paa","612thABD_Vehicles\Ground_vehicles\Bison\612thABD_Bison_Misc_co.paa","OPTRE_Vehicles\Bison\data\Bison_WheelsCannon_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Seats_CO.paa","OPTRE_Vehicles\Bison\data\Bison_Interior_CO.paa","OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO.paa","612thABD_Vehicles\Ground_vehicles\Bison\612thABD_Bison_90mm_co.paa"};
				factions[] = {"Fac612th"};
			};
		};
		textureList[] = {"612th_Base",1};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
	};
};