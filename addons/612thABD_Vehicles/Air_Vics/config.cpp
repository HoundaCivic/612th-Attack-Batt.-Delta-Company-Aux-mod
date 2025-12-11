#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgVehicles
{
	class lsd_heli_laati;
	class lsd_heli_laatc;
	class 3AS_ARC_170_blue;
	class lsd_heli_laati_ab;
	class lsd_heli_laati_transport;
	class lsd_heli_laati_medevac;
	class 3as_LAATC;
	class 3AS_BTLB_Bomber;
	class 3AS_Z95_Republic;
	class 3AS_Delta7_Orange;
	class 612THABD_Delta7: 3AS_Delta7_Orange
	{
		author = "Hound";
		scope = 2;
		displayName = "[612thABD] Delta 7";
		faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		hiddenSelectionsTextures[] = {"612thABD_Vehicles\Air_Vics\Delta7\612thABD_Delta7_Hull_co.paa","3AS\3AS_Delta7\data\Delta7_Landing_Gear_co.paa","3AS\3AS_Delta7\data\Delta7_Cockpit_co.paa","3as\3as_delta7\data\delta7_interfaces_ca.paa"};
	};
	class 612thABD_Z95: 3AS_Z95_Republic
	{
		displayName = "[612thABD] Z-95 Headhunter";
		author = "Denal";
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		hiddenselections[] = {"camo","camo1","camo2"};
		hiddenselectionstextures[] = {"612thABD_Vehicles\Air_Vics\z95\612th_z95_co.paa","3AS\3AS_Z95\Data\cockpit_co.paa","3AS\3AS_Z95\data\glass\glass_ca"};
	};
	class 612thABD_Arc170: 3AS_ARC_170_blue
	{
		author = "Denal";
		displayName = "[612thABD] ARC-170";
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		hiddenselectionstextures[] = {"612thABD_Vehicles\Air_Vics\Arc170\612th_main_frame_co.paa","612thABD_Vehicles\Air_Vics\Arc170\612th_wings_co.paa","3as\3AS_ARC170\Data\units\501st_Guns_CO.paa"};
	};
	class 612thABD_Y_Wing: 3AS_BTLB_Bomber
	{
		displayName = "[612thABD] BTL-Y Wing ";
		author = "Denal";
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		hiddenselectionstextures[] = {"612thABD_Vehicles\Air_Vics\Y_Wing\612th_chasis_Y_Wing.paa","3as\3AS_btlb\data\detail_co.paa","3as\3AS_btlb\data\interior_co.paa"};
	};
	class 612thABD_Laatc: lsd_heli_laatc
	{
		displayname="[612thABD] LAAT/C Transport";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		hiddenselections[] = {"_auxiliary","_cockpit","_glass","_hull","_wings"};
		hiddenSelectionsTextures[] = {
			"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_auxiliary_co.paa",
			"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_cockpit_co.paa",
			"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
			"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_hull_co.paa",
			"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_wings_co.paa"
		};
		class TextureSources
		{
			class LAATC1
			{
				displayname="612th LAAT/C";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
				"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_auxiliary_co.paa",
				"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_cockpit_co.paa",
				"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
				"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_hull_co.paa",
				"612thABD_Vehicles\Air_Vics\LAATC\612thABD_laatc_wings_co.paa"
				};
				factions[]=
				{
					"Fac236th"
				};
			};
		};
	};
	class 612thABD_Laat_Medevac: lsd_heli_laati_medevac
	{
		displayname="[612thABD] LAAT/I Gunship (Medevac)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		availableForSupportTypes[] = {"Drop","Transport"};
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","ls_laat_DAR","ls_weapon_CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","ls_mag_300rnd_CMFlareChaff_red", "ls_mag_300rnd_CMFlareChaff_red", "ls_mag_300rnd_CMFlareChaff_red", "200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","12rnd_missiles","12rnd_missiles"};
		hiddenselections[] = {"body","body_2","door_1","door_2","door_3","wings","missiles","cockpits","glass","clan","zasleh_l","zasleh_r","zasleh_b"};
		hiddenselectionstextures[] = {
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
		"lsd_vehicles_heli\laati\data\door3_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
		"lsd_vehicles_heli\laati\data\missiles_co.paa",
		"lsd_vehicles_heli\laati\data\cockpits_co.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class Base612thLAATMEDEVAC
			{
				displayname="612th Base";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[]=
				{
					"Fac612th"
				};
			};
		};
		textureList[]=
		{
			"Base612thLAATMEDEVAC"
		};
	};

	class 612thABD_Laatc_3as: 3as_LAATC
	{
		displayname="[612thABD] LAAT/C (3as)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		availableForSupportTypes[] = {"Drop","Transport"};
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenselectionstextures[] = {
		"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\612th_laat_c_hull_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\612th_laat_c_wings_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\612th_laat_c_top_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\laat_c_detail_front_co.paa"
		};
		class TextureSources
		{
			class 3as_612thLAATC
			{
				displayname="Base";
				scope=2;
				author="Denal";
				textures[]=
				{
					"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\612th_laat_c_hull_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\612th_laat_c_wings_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\612th_laat_c_top_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATC\3as_LAAT\laat_c_detail_front_co.paa"
				};
				factions[]=
				{
					"3as_612thLAATC"
				};
			};
		};
		textureList[]=
		{
			"3as_612thLAATC"
		};
	};	
	class 612thABD_Laat_Transport: lsd_heli_laati_transport
	{
		displayname="[612thABD] LAAT/I Gunship (Transport)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		availableForSupportTypes[] = {"Drop","Transport"};
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","ls_laat_DAR","ls_weapon_CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","12rnd_missiles","12rnd_missiles","ls_mag_300rnd_CMFlareChaff_red","ls_mag_300rnd_CMFlareChaff_red","ls_mag_300rnd_CMFlareChaff_red",
		hiddenselections[] = {"body","body_2","door_1","door_2","door_3","wings","missiles","cockpits","glass","clan","zasleh_l","zasleh_r","zasleh_b"};
		hiddenselectionstextures[] = {
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
		"lsd_vehicles_heli\laati\data\door3_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
		"lsd_vehicles_heli\laati\data\missiles_co.paa",
		"lsd_vehicles_heli\laati\data\cockpits_co.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class Base612thLAATTransport
			{
				displayname="612th Base";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[]=
				{
					"Fac612th"
				};
			};
		};
		textureList[]=
		{
			"Base612thLAATTransport"
		};
	};
	class 612thABD_Laat: lsd_heli_laati
	{
		displayname="[612thABD] LAAT/I Gunship (Pylons)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		availableForSupportTypes[] = {"Drop","Transport"};
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","ls_laat_DAR","ls_weapon_CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","12rnd_missiles","12rnd_missiles","ls_mag_300rnd_CMFlareChaff_red","ls_mag_300rnd_CMFlareChaff_red","ls_mag_300rnd_CMFlareChaff_red",
		hiddenselections[] = {"body","body_2","door_1","door_2","door_3","wings","missiles","cockpits","glass","clan","zasleh_l","zasleh_r","zasleh_b"};
		hiddenselectionstextures[] = {
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
		"lsd_vehicles_heli\laati\data\door3_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
		"lsd_vehicles_heli\laati\data\missiles_co.paa",
		"lsd_vehicles_heli\laati\data\cockpits_co.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class Base612thLAAT
			{
				displayname="612th Base";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[]=
				{
					"Fac612th"
				};
			};
		};
		textureList[]=
		{
			"Base612thLAAT"
		};
	};
class 612thABD_Laat_AB: lsd_heli_laati_ab
	{
		displayname="[612thABD] LAAT/I Gunship(Airborne)";
		scope=2;
        faction = "Fac612th";
        editorSubcategory = "SUB612thAir";
		crew = "612thABD_Pilot_Trooper";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		availableForSupportTypes[] = {"Drop","Transport"};\
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","ls_laat_DAR","ls_weapon_CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","12rnd_missiles","12rnd_missiles","ls_mag_300rnd_CMFlareChaff_red","ls_mag_300rnd_CMFlareChaff_red","ls_mag_300rnd_CMFlareChaff_red",
		hiddenselections[] = {"body","body_2","door_1","door_2","door_3","wings","missiles","cockpits","glass","clan","zasleh_l","zasleh_r","zasleh_b"};
		hiddenselectionstextures[] = {
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
		"lsd_vehicles_heli\laati\data\door3_co.paa",
		"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
		"lsd_vehicles_heli\laati\data\missiles_co.paa",
		"lsd_vehicles_heli\laati\data\cockpits_co.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class Base612thLAATAB
			{
				displayname="612th Base";
				scope=2;
				author="Hound & Edwards";
				textures[]=
				{
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_body2_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door1_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_door2_co.paa",
					"lsd_vehicles_heli\laati\data\door3_co.paa",
					"612thABD_Vehicles\Air_Vics\LAATI\612thABD_LAATI_wings_co.paa",
					"lsd_vehicles_heli\laati\data\missiles_co.paa",
					"lsd_vehicles_heli\laati\data\cockpits_co.paa",
					"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[]=
				{
					"Fac612th"
				};
			};
		};
		textureList[]=
		{
			"Base612thLAATAB"
		};
	};
};