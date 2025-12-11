#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgAmmo
{
	class B_762x51_Ball;
	class G_40mm_HE;
	class RocketBase;
	class BulletBase;
	class GrenadeHand_stone;
	class GrenadeHand;
	class SmokeShell;
	class SmokeLauncherAmmo;
	class FlameRound;
	class FlameRound_sub;
	class R_PG32V_F;
	class M_Titan_AT;
	class PLX_Javelin;
	class 442_nlaw_AT;
	class B_40mm_APFSDS;
	class B_12Gauge_Pellets_Submunition;
	class SatchelCharge_Remote_Ammo;
	class IDA_blasterbolt_Overcharged;
	class 3AS_FlakCannon_AA;
	class 612thABD_blasterbolt_OC: IDA_blasterbolt_Overcharged
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		ACE_damageType = "plasma";
		hit = 45;
		caliber = 6;
		coefGravity = 0.02;
	};
	class 612thABD_blasterbolt: BulletBase
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		ACE_damageType = "plasma";
		cartridge = "";
		lightcolor[] = {0,0.3,1};
		hit = 20;
		caliber = 6;
		coefGravity = 0.02;
	};
	class 612thABD_blasterbolt_High: 612thABD_blasterbolt
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		effectfly = "IDA_BlasterBoltGlow_Blue_Fly";
		hit = 100;
		caliber = 6;
		coefGravity = 0.02;
	};
	class 612thABD_blasterbolt_Overcharged_VEHICLE: G_40mm_HE
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectFly = "IDA_BlasterBoltGlow_Medium_Yellow_Fly";
		ACE_damageType = "plasmashell";
		hit = 800;
		indirectHit = 150;
		explosive = 1;
		indirectHitRange = 2.5;
		caliber = 2;
	};
	class 612thABD_Heavy_blasterbolt: 612thABD_blasterbolt
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		ACE_damageType = "plasma";
		cartridge = "";
		lightcolor[] = {0,0.3,1};
		hit = 300;
		caliber = 6;
		coefGravity = 0.02;
	};
	class 612thABD_Apex_Blasterbolt: 612thABD_Heavy_blasterbolt
	{
		model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		ACE_damageType = "plasma";
		cartridge = "";
		lightcolor[] = {0,0.3,1};
		hit = 350;
		caliber = 2;
		coefGravity = 0.02;
	};
	/*class 3AS_FlakCannon_AA: 3AS_FlakCannon_AA
	{
		hit = 60;
		indirectHit = 25;
		indirectHitRange = 2.4;
		warheadName = "HE";
		visibleFire = 38;
		audibleFire = 200;
		visibleFireTime = 5;
		proximityExplosionDistance = 50;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		simulation = "shotBullet";
		suppressionRadiusHit = 24;
		deflecting = 0;
		explosive = 0.6;
		airLock = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "GrenadeExplosion";
		explosionSoundEffect = "DefaultExplosion";
		model = "\3AS\3AS_Weapons\Data\tracer_shell_red.p3d";
		tracerScale = 1.85;
		tracerStartTime = 0;
		tracerEndTime = 10;
		timeToLive = 10;
		airFriction = -0.0005;
		muzzleEffect = "";
		caliber = 2.8;
		typicalSpeed = 960;
		effectFly = "3AS_PlasmaBolt_Large_Red_Fly";
		soundSetSonicCrack[] = {"3AS_HeavyPlasma_Flyby_SoundSet"};
		soundDefault1[] = {"3AS\3AS_VehicleWeapons\Impacts\Flak\FLAK_Explosion_1.ogg",6,1,500};
		soundDefault2[] = {"3AS\3AS_VehicleWeapons\Impacts\Flak\FLAK_Explosion_2.ogg",6,1,500};
		soundDefault3[] = {"3AS\3AS_VehicleWeapons\Impacts\Flak\FLAK_Explosion_3.ogg",6,1,500};
		soundDefault4[] = {"3AS\3AS_VehicleWeapons\Impacts\Flak\FLAK_Explosion_3.ogg",6,1,500};
		hitDefault[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitGround[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitGroundHard[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitGroundSoft[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitConcrete[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitBuilding[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitFoliage[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitWood[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitPlastic[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitRubber[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitTyre[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitMetal[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitIron[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitMetalInt[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitMetalPlate[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitArmor[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		hitArmorInt[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault4",0.25};
		multiSoundHit[] = {"soundDefault1",0.25,"soundDefault2",0.25,"soundDefault3",0.25,"soundDefault3",0.25};
		class CamShakeExplode
		{
			power = 3.6;
			duration = 0.8;
			frequency = 20;
			distance = 41.9411;
		};
		class CamShakeHit
		{
			power = 18;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 1.49535;
			duration = 0.4;
			frequency = 20;
			distance = 17.8885;
		};
		class CamShakePlayerFire
		{
			power = 0.001;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	}; */
}; 
class CfgMagazines
{
	class 100Rnd_65x39_caseless_mag;
	class 3Rnd_Smoke_Grenade_shell;
	class 1Rnd_HE_Grenade_shell;
	class CA_LauncherMagazine;
	class CA_Magazine;
	class RPG32_F;
	class IDA_blaster_cell;
	class Titan_AT;
	class IDA_HE_LauncherGrenade;
	class SWLW_mag_40mm_6rnd;
	class Vorona_HEAT;
	class magazine_Cannon_Phalanx_x1550;
	class IDA_Stun_cell;
	class 612thABD_Stun_mag: IDA_Stun_cell
	{
		displayName = "30Rnd Stun Magazine";
		author = "Hound";
		count = 30;
		mass = 10;
	};
	class 612th_CIWIS_Magazine: magazine_Cannon_Phalanx_x1550
	{
		displayName = "6000rnd Anti-Air Rounds";
		author = "Hound";
		ammo = "3AS_GAT_redPlasma_AT";
		count = 6000;
		mass = 10;
	};
	class 612thABD_GL_Ext_Cell: IDA_HE_LauncherGrenade
	{
		displayName = "150rnd High Explosive Cell";
		descriptionShort = "Energy cell<br/>Rounds: 150<br/>";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "IDA_HE_LauncherGrenade";
		count = 150;
		mass = 300;
	};
	class 612thABD_Imploder_Cell: IDA_HE_LauncherGrenade
	{
		displayName = "150rnd Imploder Cell";
		descriptionShort = "Energy cell<br/>Rounds: 150<br/>";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "IDA_grenade_Imploder_ammo";
		count = 150;
		mass = 1000;
	};
	class 612thABD_BlasterCell_High_Cap: IDA_blaster_cell
	{
		displayName = "300rnd Energy Cell";
		descriptionShort = "Energy cell<br/>Rounds: 60<br/>";
		displayNameShort = "Med-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "612thABD_blasterbolt_OC";
		count = 300;
		mass = 20;
	};
	class 612thABD_BlasterCell_308: IDA_blaster_cell
	{
		displayName = "60rnd Energy Cell";
		descriptionShort = "Energy cell<br/>Rounds: 60<br/>";
		displayNameShort = "Med-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "612thABD_blasterbolt_OC";
		count = 60;
		mass = 10;
	};
	class 612thABD_BlasterCell_308_EXT: IDA_blaster_cell
	{
		displayName = "120rnd Energy Cell";
		descriptionShort = "Energy cell<br/>Rounds: 60<br/>";
		displayNameShort = "Med-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "612thABD_blasterbolt_OC";
		count = 120;
		mass = 25;
	};
	class 612thABD_IDA_HEGL_Shell: IDA_HE_LauncherGrenade
	{
		author = "Hound";
		count = 3;
		displayName = "3Rnd Impact grenade";
		descriptionShort = "Impact grenade";
		ammo = "IDA_HE_LauncherGrenade";
		mass = 8;
	};
	class 612thABD_40mm_Blue : SWLW_mag_40mm_6rnd
	{
		displayName = "3rd 40mm GL (Blue)";
		descriptionShort = "Energy cell<br/>Rounds: 6<br/>";
		displayNameShort = "Hi-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "SWLW_ammo_40mm_blue";
		count = 3;
		mass = 20;
	};
	class 612thABD_40mm_red_smoke : SWLW_mag_40mm_6rnd
	{
		displayName = "3rd 40mm Smoke (Red)";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "M319_Smoke_Red";
		count = 3;
		mass = 20;
	};
	class 612thABD_40mm_orange_smoke : SWLW_mag_40mm_6rnd
	{
		displayName = "3rd 40mm Smoke (Orange)";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "M319_Smoke_Orange";
		count = 3;
		mass = 20;
	};
	class 612thABD_40mm_green_smoke : SWLW_mag_40mm_6rnd
	{
		displayName = "3rd 40mm Smoke (Green)";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "M319_Smoke_Green";
		count = 3;
		mass = 20;
	};
	class 612thABD_40mm_red : SWLW_mag_40mm_6rnd
	{
		displayName = "3rd 40mm GL (red)";
		descriptionShort = "Energy cell<br/>Rounds: 6<br/>";
		displayNameShort = "Hi-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "ls_ammo_40mm_red";
		count = 3;
		mass = 20;
	};
	class 612thABD_RPS_Extended_Mag: Vorona_HEAT
	{
		scope = 2;
		displayname = "[612thABD] 3rd RPS Magazine";
		picture = "\ls_weapons\_ui\RPS6_mag_ca.paa";
		count = 3;
		initSpeed = 300;
		maxLeadSpeed = 80;
	};
	class 612thABD_Manta_Tow_Mag: Vorona_HEAT
	{
		scope = 2;
		displayname = "[612thABD] 8rd Tow Missle";
		picture = "\ls_weapons\_ui\RPS6_mag_ca.paa";
		count = 8;
		initSpeed = 300;
		maxLeadSpeed = 80;
	};
	class 612thABD_blaster_cell: 100Rnd_65x39_caseless_mag
	{
		author= "612thABD Bloodpack Division + IDA Dev Team";
		scope= 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 75;
		displayName = "Standard Energy Cell";
		displayNameShort = "Energy Cell";
		descriptionShort = "75 round capacity.";
		ammo = "612thABD_blasterbolt";
		tracersEvery = 1;
		initSpeed = 300;
		mass = 5;
	};
	class 612thABD_blaster_cell_High: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 60;
		displayName = "High-Power Energy Cell";
		displayNameShort = "HP Energy Cell";
		descriptionShort = "60 round capacity.";
		ammo = "612thABD_blasterbolt_High";
		tracersEvery = 1;
		initSpeed = 500;
		mass = 5;
	};
	class 612thABD_blaster_cell_Vintage: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 45;
		displayName = "Vintage HP Energy Cell";
		displayNameShort = "HP Energy Cell";
		descriptionShort = "45 round capacity.";
		ammo = "612thABD_blasterbolt_High";
		tracersEvery = 1;
		initSpeed = 450;
		mass = 5;
	};
	class 612thABD_blaster_cell_low: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 500;
		displayName = "Low-Power Energy Cell";
		displayNameShort = "LP Energy Cell";
		descriptionShort = "Near-infinte ammo, but lower power";
		ammo = "IDA_blasterbolt_low";
		tracersEvery = 1;
		initSpeed = 250;
		mass = 2;
	};	
	class 612thABD_blaster_cell_Amp: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 45;
		displayName = "Amplified Energy Cell";
		displayNameShort = "Amp Energy Cell";
		descriptionShort = "30 round capacity.";
		ammo = "IDA_blasterbolt_Amp";
		tracersEvery = 1;
		initSpeed = 700;
		mass = 5;
	};
	class 612thABD_blaster_cell_OC: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 15;
		displayName = "Overcharged High-Power Energy Cell";
		displayNameShort = "O/HP Energy Cell";
		descriptionShort = "15 round capacity.";
		ammo = "612thABD_blasterbolt_OC";
		tracersEvery = 1;
		initSpeed = 750;
		mass = 10;
	};
	class 612thABD_blaster_cell_HOC: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 15;
		displayName = "Heavy HP Energy Cell";
		displayNameShort = "O/HP Energy Cell";
		descriptionShort = "15 round capacity.";
		ammo = "612thABD_blasterbolt_OC";
		tracersEvery = 1;
		initSpeed = 850;
		mass = 20;
	};
	class 612thABD_blaster_cell_APEX: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 10;
		displayName = "Apex Energy Cell";
		displayNameShort = "APEX Energy Cell";
		descriptionShort = "10 round capacity.";
		ammo = "612thABD_Apex_Blasterbolt";
		tracersEvery = 1;
		initSpeed = 700;
		mass = 30;
	};
	class 612thABD_blaster_scatter_cell: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 10;
		displayName = "High-Power Scatter Cell";
		displayNameShort = "HP Scatter Cell";
		descriptionShort = "10 round capacity";
		ammo = "IDA_blasterbolt_scatter";
		tracersEvery = 1;
		initSpeed = 250;
		mass = 8;
	};
	class 612thABD_LP_blaster_battery: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count = 1000;
		displayName = "Low-Power Energy Battery";
		displayNameShort = "LP Energy Battery";
		descriptionShort = "1000 round capacity.";
		ammo = "612thABD_blasterbolt";
		tracersEvery = 1;
		initSpeed = 600;
		mass = 30;
	};
	class 612thABD_HP_blaster_battery: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\z6\data\ui\z6_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count = 500;
		displayName = "High-Power Energy Battery";
		displayNameShort = "HP Energy Battery";
		descriptionShort = "500 round capacity.";
		ammo = "612thABD_blasterbolt_High";
		tracersEvery = 1;
		initSpeed = 650;
		mass = 45;
	};
	class 612thABD_thermal_coil_AMP: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 50;
		displayName = "Amplified Thermal coil";
		displayNameShort = "Amped Thermal coil";
		descriptionShort = "25 round capacity.";
		ammo = "IDA_thermal_shell_LP";
		tracersEvery = 1;
		initSpeed = 700;
		mass = 25;
	};
	class 612thABD_thermal_coil_HP: 100Rnd_65x39_caseless_mag
	{
		author = "Hound";
		scope = 2;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 10;
		displayName = "High-Power Thermal coil";
		displayNameShort = "HP Thermal coil";
		descriptionShort = "10 round capacity.";
		ammo = "612thABD_blasterbolt_Overcharged_VEHICLE";
		tracersEvery = 1;
		initSpeed = 500;
		mass = 40;
	};
};
class CfgMagazineWells
{
	class 612thABD_Blaster_Magwell
	{
		// Magazines defined 
		612thABD_Magazines[] =
		{
			"612thABD_BlasterCell_308",
			"612thABD_BlasterCell_308_EXT",
			"JLTS_stun_mag_long",
			"IDA_blaster_cell_Overcharged",
		};
	};
	class 612thABD_Blaster_Sniper_Magwell
	{
		// Magazines defined 
		612thABD_Magazines[] =
		{
			"612thABD_BlasterCell_308",
			"612thABD_BlasterCell_308_EXT",
			"JLTS_stun_mag_long",
			"IDA_blaster_cell_Overcharged",
		};
	};
	class 612thABD_RPS_MagWell
	{
		// Magazines defined 
		612thABD_Magazines[] =
		{
			"612thABD_RPS_Extended_Mag"
		};
	};	
	class 612thABD_GL_Magwell
	{
		// Magazines defined 
		612thABD_Magazines[] =
		{
			"SWLW_mag_40mm_6rnd",
			"IDA_HE_LauncherGrenade",
			"612thABD_Stun_mag",
			"IDA_Smoke_LauncherGrenade",
			"IDA_SmokeBlue_LauncherGrenade",
			"IDA_SmokeGreen_LauncherGrenade",
			"IDA_SmokePurple_LauncherGrenade",
			"IDA_SmokeRed_LauncherGrenade",
			"ACE_HuntIR_M203",
			"ACE_40mm_Flare_white",
			"ACE_40mm_Flare_red",
			"SWLW_mag_40mm_1rnd",
			"612thABD_40mm_red",
			"612thABD_40mm_Blue",
			"612thABD_40mm_green_smoke",
			"612thABD_40mm_orange_smoke",
			"612thABD_40mm_red_smoke",
			"IDA_HE_LauncherGrenade",
			"IDA_Smoke_LauncherGrenade",
			"IDA_SmokeRed_LauncherGrenade",
			"IDA_SmokeGreen_LauncherGrenade",
			"IDA_SmokeBlue_LauncherGrenade",
			"IDA_SmokePurple_LauncherGrenade",
			"ACE_40mm_Flare_Red",
			"ACE_40mm_Flare_White",
			"ACE_HuntIR_M203"
		};
	};
};