#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgVehicles
{
	class 3as_ATTE_Base;
	class OPTRE_M412_IFV_UNSC;
	class B_Truck_01_transport_F;//
	class B_Truck_01_ammo_F;//
	class B_Truck_01_cargo_F; // 
	class B_Truck_01_covered_F; //
	class B_Truck_01_fuel_F; //
	class B_Truck_01_medical_F; //
	class B_Truck_01_mover_F; //
	class B_Truck_01_flatbed_f; //
	class B_truck_01_repair_f; //
	class 3AS_Saber_M1;
	class B_Boat_Armed_01_minigun_F;
	class B_Boat_transport_01_F;
	class 612thABD_Minigun_Boat: B_Boat_Armed_01_minigun_F
	{
		author = "Hound";
		scope = 2;
		accuracy = 1.5;
		crew = "612thABD_Trooper";
		faction = "Fac612th";
		editorSubcategory = "Sub612thBoats";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\Speedboat_minigun\612thABD_Boat_Armed_01_ext_CO.paa","612thABD_Vehicles\Ground_vehicles\Speedboat_minigun\612thABD_Boat_Armed_01_int_CO.paa","612thABD_Vehicles\Ground_vehicles\Speedboat_minigun\612thABD_Boat_Armed_01_CROWS_CO.paa"};
	};
	class 612thABD_RHIB: B_Boat_transport_01_F
	{
		author = "Hound";
		scope = 2;
		crew = "612thABD_Trooper";
		faction = "Fac612th";
		editorSubcategory = "Sub612thBoats";
		maxSpeed = 120;
		enginePower = 160;
		thrustDelay = 2;
		redRPM = 3000;
		overSpeedBrakeCoef = 1.5;
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper","612thABD_Trooper"};
	};
	class 612thABD_Saber_M1: 3AS_Saber_M1
	{
		displayname="[612thABD] Tx-130 Saber";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thTanks";
		crew = "612thABD_Crewman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\Saber\612thABD_Tx130_Hull_co.paa","612thABD_Vehicles\Ground_vehicles\Saber\612thABD_TX130_Weapons_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_ATTE: 3as_ATTE_Base
	{
		displayname="[612thABD] ATTE";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thTanks";
		crew = "612thABD_Crewman";
		availableForSupportTypes[] = {"Drop","Transport"};
		hiddenselections[] = {"camo1","camo2","camo3","camo4","camo5","camo11"};
		hiddenselectionstextures[] = {"612thABD_Vehicles\Ground_vehicles\AT_TE\612thABD_ATTE_Shell_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
		"612thABD_Vehicles\Ground_vehicles\AT_TE\612thABD_ATTE_Legs_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
		"3as\3as_atte\data\textures\3as_atte_armor_co.paa"};
		class TextureSources
		{
			class Base612thATTE
			{
				displayname="612th Base";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
					"612thABD_Vehicles\Ground_vehicles\AT_TE\612thABD_ATTE_Shell_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"612thABD_Vehicles\Ground_vehicles\AT_TE\612thABD_ATTE_Legs_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[]=
				{
					"Fac612th"
				};
			};
			class Base612thATTE_Grey
			{
				displayname="612th Grey";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
					"612thABD_Vehicles\Ground_vehicles\AT_TE\612thABD_ATTE_Shell_Gray_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
					"612thABD_Vehicles\Ground_vehicles\AT_TE\612thABD_ATTE_Legs_Gray_co.paa",
					"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
					"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
				};
				factions[]=
				{
					"Fac612th"
				};
			};
		};
		textureList[]=
		{
			"Base612thATTE","Base612thATTE_Grey"
		};
	};
	class 612thABD_HEMTT_repair: B_truck_01_repair_f
	{
		displayname="[612thABD] Hemtt (Repair)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa","\a3\structures_f\data\metal\containers\containers_02_set_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_HEMTT_flatbed: B_Truck_01_flatbed_f
	{
		displayname="[612thABD] Hemtt (Flatbed)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_co.paa","\a3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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

	};
	class 612thABD_HEMTT_Mover: B_Truck_01_mover_F
	{
		displayname="[612thABD] Hemtt";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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

	};
	class 612thABD_HEMTT_Medical: B_Truck_01_medical_F
	{
		displayname="[612thABD] Hemtt (Medical)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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

	};
	class 612thABD_HEMTT_Transport: B_Truck_01_transport_F
	{
		displayname="[612thABD] Hemtt (Transport)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_HEMTT_Transport_Covered: B_Truck_01_covered_F
	{
		displayname="[612thABD] Hemtt (Covered Transport)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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

	};
	class 612thABD_HEMTT_Cargo: B_Truck_01_cargo_F
	{
		displayname="[612thABD] Hemtt (Cargo)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_pacific_co.paa","\a3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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

	};
	class 612thABD_HEMTT_Ammo: B_Truck_01_ammo_F
	{
		displayname="[612thABD] Hemtt (Ammo)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_HEMTT_Fuel: B_Truck_01_fuel_F
	{
		displayname="[612thABD] Hemtt (Fuel)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thVics";
		crew = "612thABD_Trooper";
		typicalCargo[] = {"612thABD_Trooper","612thABD_Trooper"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_DRONMTT_Transport_Covered: B_Truck_01_covered_F
	{
		displayname="[612thABD] DRONMTT (Covered Transport)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thDrone";
		isUav=1;
		crew = "B_UAV_AI";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cargo_olive_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_cover_olive_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 20;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_DRONMTT_Fuel: B_Truck_01_fuel_F
	{
		displayname="[612thABD] DRONmtt (Fuel)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thDrone";
		isUav=1;
		crew = "B_UAV_AI";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_Fuel_olive_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 20;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_DRONMTT_Ammo: B_Truck_01_ammo_F
	{
		displayname="[612thABD] DRONMTT (Ammo)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thDrone";
		isUav=1;
		crew = "B_UAV_AI";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa","\A3\Soft_F_Exp\Truck_01\Data\truck_01_ammo_olive_CO.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_DRONMTT_Transport: B_Truck_01_transport_F
	{
		displayname="[612thABD] DRONMTT (Transport)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thDrone";
		isUav=1;
		crew = "B_UAV_AI";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_cargo_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
	class 612thABD_DRONMTT_repair: B_truck_01_repair_f
	{
		displayname="[612thABD] DRONMTT (Repair)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "Sub612thDrone";
		isUav=1;
		crew = "B_UAV_AI";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Ground_vehicles\HEMTT\612thABD_HEMTT_EXT01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa","\a3\structures_f\data\metal\containers\containers_02_set_co.paa"};
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
				class _xx_612thABD_BlasterCell_308
				{
					magazine = "612thABD_BlasterCell_308";
					count = 4;
				};
			};
			class TransportWeapons
			{
				class _xx_612thABD_DC15S
				{
					weapon = "612thABD_DC15S";
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
	};
};