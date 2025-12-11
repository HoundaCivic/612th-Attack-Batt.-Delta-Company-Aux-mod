class CfgPatches {
	class Aux_612th {
		//requiredAddons[] = {"ace_common"};
		units[] = {"612thABD_Night_B1_Heavy_AT", "612thABD_Night_B1_Lite_AT", "612thABD_Night_B1_Sniper", "612thABD_MC_B1_Droid", 
		"612thABD_Desert_B1_Heavy_AT", "612thABD_Desert_B1_Lite_AT", "612thABD_Desert_B1_Sniper", "612thABD_Desert_B1_Heavy", 
		"612thABD_Desert_B1_Flame", "612thABD_Desert_B1_Droid", "612thABD_Woodland_B1_Heavy_AT", "612thABD_Woodland_B1_Lite_AT", 
		"612thABD_Woodland_B1_Sniper", "612thABD_Woodland_B1_Heavy", "612thABD_Woodland_B1_Flame", "612thABD_Woodland_B1_Droid", 
		"612thABD_MC_B1_Flame", "612thABD_Winter_B1_Heavy", "612thABD_Winter_B1_Flame", "612thABD_Winter_B1_Droid", "612thABD_MC_B1_Heavy_AT",
		"612thABD_MC_B1_Lite_AT", "612thABD_MC_B1_Sniper", "612thABD_MC_B1_Heavy", "612thABD_Night_B1_Heavy", "612thABD_Night_B1_Flame", "612thABD_Night_B1_Droid", 
		"612thABD_Winter_B1_Heavy_AT", "612thABD_Winter_B1_Lite_AT", "612thABD_Winter_B1_Sniper","612th_Night_B1_SniperTeam","612th_Night_B1_Sentry", "612th_Night_B1_Flame_FireTeam", "612th_Night_B1_AT_FireTeam",
		"612th_Night_B1_FireTeam", "612thABD_Night_B1_Squad", "612th_Desert_B1_SniperTeam","612th_Desert_B1_Sentry", "612th_Desert_B1_Flame_FireTeam", "612th_Desert_B1_AT_FireTeam", "612th_Desert_B1_FireTeam",
		"612thABD_Desert_B1_Squad", "612th_MC_B1_SniperTeam","612th_MC_B1_Sentry", "612th_MC_B1_Flame_FireTeam", "612th_MC_B1_AT_FireTeam", "612th_MC_B1_FireTeam" ,"612thABD_MC_B1_Squad",
		"612th_Woodland_B1_SniperTeam","612th_Woodland_B1_Sentry", "612th_Woodland_B1_Flame_FireTeam", "612th_Woodland_B1_AT_FireTeam", "612th_Woodland_B1_FireTeam",
		"612thABD_Woodland_B1_Squad", "612th_Winter_B1_SniperTeam","612th_Winter_B1_Sentry", "612th_Winter_B1_Flame_FireTeam", "612th_Winter_B1_AT_FireTeam", "612th_Winter_B1_FireTeam", "612thABD_Winter_B1_Squad"};
		weapons[] ={};
		skipWhenMissingDependencies = 1;
	};
	
};
class cfgFactionClasses
{
	class FacCIS_612th
	{
		displayName = "612th Confederacy";
	};
};

class cfgEditorSubcategories {

	class Sub612thCISWoodland
	{
		displayName = "Woodland Camo"; 
	};
	class Sub612thCISDesert
	{
		displayName = "Desert Camo"; 
	};
	class Sub612thCISWinter
	{
		displayName = "Winter Camo"; 
	};
	class Sub612thCISMC
	{
		displayName = "Multi-Camo"; 
	};
	class Sub612thCISNight
	{
		displayName = "Urban Camo"; 
	};
};
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define item_2(a) a, a
#define item_3(a) a, a, a
#define item_4(a) a, a, a, a
#define item_5(a) a, a, a, a, a
#define item_6(a) a, a, a, a, a, a
#define item_7(a) a, a, a, a, a, a, a
#define item_8(a) a, a, a, a, a, a, a, a
#define item_9(a) a, a, a, a, a, a, a, a, a
#define item_10(a) a, a, a, a, a, a, a, a, a, a
#define item_11(a) a, a, a, a, a, a, a, a, a, a, a
#define item_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
class CfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class JLTS_DroidB1;
	class 612thABD_DroidB1_Woodland: JLTS_DroidB1
	{
		author = "Hound";
		scope = 2; 
		scopecurator =2;
		displayName = "Woodland Droid Armor";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "612thABD_Woodland_B1_Droid";
			containerClass = "Supply250";
			mass = 40;
		};
	};
	class 612thABD_DroidB1_Desert: JLTS_DroidB1
	{
		author = "Hound";
		scope = 2; 
		scopecurator =2;
		displayName = "Desert Droid Armor";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "612thABD_Desert_B1_Droid";
			containerClass = "Supply250";
			mass = 40;
		};
	};
	class 612thABD_DroidB1_MC: JLTS_DroidB1
	{
		author = "Hound";
		scope = 2; 
		scopecurator =2;
		displayName = "Multi-Cam Droid Armor";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "612thABD_MC_B1_Droid";
			containerClass = "Supply250";
			mass = 40;
		};
	};
	class 612thABD_DroidB1_Night: JLTS_DroidB1
	{
		author = "Hound";
		scope = 2; 
		scopecurator =2;
		displayName = "Urban Droid Armor";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "612thABD_Night_B1_Droid";
			containerClass = "Supply250";
			mass = 40;
		};
	};
	class 612thABD_DroidB1_Winter: JLTS_DroidB1
	{
		author = "Hound";
		scope = 2; 
		scopecurator =2;
		displayName = "Winter Droid Armor";
		picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "612thABD_Winter_B1_Droid";
			containerClass = "Supply250";
			mass = 40;
		};
	};
};
class CfgVehicles
{
	class JLTS_Droid_B1_E5;
	class JLTS_Droid_B1_AR;
	class JLTS_Droid_B1_Sniper;
	class JLTS_Droid_B1_AT;
	class 612thABD_Woodland_B1_Droid: JLTS_Droid_B1_E5
	{
		displayName = "B1 Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Woodland";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Woodland_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWoodland";
		weapons[] = {"IDA_E5","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Woodland_B1_Flame: JLTS_Droid_B1_E5
	{
		displayName = "B1 Flame Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Woodland";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Woodland_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWoodland";
		weapons[] = {"3AS_Flamer_Base","Throw","Put"};
		respawnWeapons[] = {"3AS_Flamer_Base","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Woodland_B1_Heavy: JLTS_Droid_B1_AR
	{
		displayName = "B1 Droid Heavy";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Woodland";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Woodland_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWoodland";
		weapons[] = {"IDA_E5C_Stock","Throw","Put"};
		respawnWeapons[] = {"IDA_E5C_Stock","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
class 612thABD_Woodland_B1_Sniper: JLTS_Droid_B1_Sniper
	{
		displayName = "B1 Droid Sniper";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Woodland";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Woodland_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWoodland";
		weapons[] = {"IDA_E5S","Throw","Put"};
		respawnWeapons[] = {"IDA_E5S","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Woodland_B1_Lite_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Light-AT Droid";
		scope = 2; 
		scopecurator =2;		
		uniformClass = "612thABD_DroidB1_Woodland";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Woodland_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWoodland";
		weapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Woodland_B1_Heavy_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Heavy-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Woodland";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Woodland_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWoodland";
		weapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Desert_B1_Droid: JLTS_Droid_B1_E5
	{
		displayName = "B1 Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Desert";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Desert_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISDesert";
		weapons[] = {"IDA_E5","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Desert_B1_Flame: JLTS_Droid_B1_E5
	{
		displayName = "B1 Flame Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Desert";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Flame_Droid_Desert_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISDesert";
		weapons[] = {"3AS_Flamer_Base","Throw","Put"};
		respawnWeapons[] = {"3AS_Flamer_Base","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Desert_B1_Heavy: JLTS_Droid_B1_AR
	{
		displayName = "B1 Droid Heavy";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Desert";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Desert_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISDesert";
		weapons[] = {"IDA_E5C_Stock","Throw","Put"};
		respawnWeapons[] = {"IDA_E5C_Stock","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
class 612thABD_Desert_B1_Sniper: JLTS_Droid_B1_Sniper
	{
		displayName = "B1 Droid Sniper";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Desert";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Desert_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISDesert";
		weapons[] = {"IDA_E5S","Throw","Put"};
		respawnWeapons[] = {"IDA_E5S","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Desert_B1_Lite_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Light-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Desert";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Desert_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISDesert";
		weapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Desert_B1_Heavy_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Heavy-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_Desert";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Desert_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISDesert";
		weapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_MC_B1_Droid: JLTS_Droid_B1_E5
	{
		displayName = "B1 Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_MC";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_MC_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISMC";
		weapons[] = {"IDA_E5","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_MC_B1_Flame: JLTS_Droid_B1_E5
	{
		displayName = "B1 Flame Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_MC";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Flame_Droid_MC_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISMC";
		weapons[] = {"3AS_Flamer_Base","Throw","Put"};
		respawnWeapons[] = {"3AS_Flamer_Base","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_MC_B1_Heavy: JLTS_Droid_B1_AR
	{
		displayName = "B1 Droid Heavy";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_MC";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_MC_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISMC";
		weapons[] = {"IDA_E5C_Stock","Throw","Put"};
		respawnWeapons[] = {"IDA_E5C_Stock","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
class 612thABD_MC_B1_Sniper: JLTS_Droid_B1_Sniper
	{
		displayName = "B1 Droid Sniper";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_MC";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_MC_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISMC";
		weapons[] = {"IDA_E5S","Throw","Put"};
		respawnWeapons[] = {"IDA_E5S","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_MC_B1_Lite_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Light-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_MC";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_MC_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISMC";
		weapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_MC_B1_Heavy_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Heavy-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformClass = "612thABD_DroidB1_MC";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_MC_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISMC";
		weapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Winter_B1_Droid: JLTS_Droid_B1_E5
	{
		displayName = "B1 Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Winter";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Winter_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWinter";
		weapons[] = {"IDA_E5","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Winter_B1_Flame: JLTS_Droid_B1_E5
	{
		displayName = "B1 Flame Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Winter";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Flame_Droid_Winter_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWinter";
		weapons[] = {"3AS_Flamer_Base","Throw","Put"};
		respawnWeapons[] = {"3AS_Flamer_Base","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Winter_B1_Heavy: JLTS_Droid_B1_AR
	{
		displayName = "B1 Droid Heavy";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Winter";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Winter_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWinter";
		weapons[] = {"IDA_E5C_Stock","Throw","Put"};
		respawnWeapons[] = {"IDA_E5C_Stock","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
class 612thABD_Winter_B1_Sniper: JLTS_Droid_B1_Sniper
	{
		displayName = "B1 Droid Sniper";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Winter";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Winter_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWinter";
		weapons[] = {"IDA_E5S","Throw","Put"};
		respawnWeapons[] = {"IDA_E5S","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Winter_B1_Lite_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Light-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Winter";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Winter_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWinter";
		weapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Winter_B1_Heavy_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Heavy-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Winter";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Winter_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISWinter";
		weapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Night_B1_Droid: JLTS_Droid_B1_E5
	{
		displayName = "B1 Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Night";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Night_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		weapons[] = {"IDA_E5","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Night_B1_Flame: JLTS_Droid_B1_E5
	{
		displayName = "B1 Flame Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Night";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Flame_Droid_Night_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		weapons[] = {"3AS_Flamer_Base","Throw","Put"};
		respawnWeapons[] = {"3AS_Flamer_Base","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(3AS_FlamerFuel),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Night_B1_Heavy: JLTS_Droid_B1_AR
	{
		displayName = "B1 Droid Heavy";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Night";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Night_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		weapons[] = {"IDA_E5C_Stock","Throw","Put"};
		respawnWeapons[] = {"IDA_E5C_Stock","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_battery_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
class 612thABD_Night_B1_Sniper: JLTS_Droid_B1_Sniper
	{
		displayName = "B1 Droid Sniper";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Night";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Night_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		weapons[] = {"IDA_E5S","Throw","Put"};
		respawnWeapons[] = {"IDA_E5S","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_Overcharged_Red),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Night_B1_Lite_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Light-AT Droid";
		scope = 2; 
		scopecurator =2;
		uniformclass = "612thABD_DroidB1_Night";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Night_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		weapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","IDA_RPS6HP","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(IDA_RPS6_rocket),item_2(IDA_grenade_Penetrator_mag)};
	};
	class 612thABD_Night_B1_Heavy_AT: JLTS_Droid_B1_AT
	{
		displayName = "B1 Heavy-AT Droid";
		scope = 2; 
		scopecurator = 2;
		uniformclass = "612thABD_DroidB1_Night";
		backpack = "JLTS_B1_backpack";
		hiddenSelectionsTextures[] = {"\612thABD_CIS\B1\612thABD_B1_Night_co.paa"};
        faction = "FacCIS_612th";
        editorSubcategory = "Sub612thCISNight";
		weapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		respawnWeapons[] = {"IDA_E5","3AS_E60R_F","Throw","Put"};
		linkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		respawnLinkedItems[] = {"IDA_vest_attachment_base","JLTS_NVG_droid_chip_2","IDA_Electrobinoculars_Rep","JLTS_droid_comlink"};
		magazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
		respawnMagazines[] = {mag_5(IDA_blaster_cell_red),mag_2(3AS_E60R_AT),item_2(IDA_grenade_Penetrator_mag)};
	};
};
