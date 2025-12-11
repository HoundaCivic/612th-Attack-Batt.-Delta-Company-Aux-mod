class CfgPatches {
	class Aux_612th {
		//requiredAddons[] = {"ace_common"};
		units[] = {"612thABD_Night_B1_Heavy_AT", "612thABD_Night_B1_Lite_AT", "612thABD_Night_B1_Sniper", "612thABD_MC_B1_Droid", 
		"612thABD_Desert_B1_Heavy_AT", "612thABD_Desert_B1_Lite_AT", "612thABD_Desert_B1_Sniper", "612thABD_Desert_B1_Heavy", 
		"612thABD_Desert_B1_Flame", "612thABD_Desert_B1_Droid", "612thABD_Woodland_B1_Heavy_AT", "612thABD_Woodland_B1_Lite_AT", 
		"612thABD_Woodland_B1_Sniper", "612thABD_Woodland_B1_Heavy", "612thABD_Woodland_B1_Flame", "612thABD_Bison_IFV", "612thABD_Woodland_B1_Droid", 
		"612thABD_MC_B1_Flame", "612thABD_Winter_B1_Heavy", "612thABD_Winter_B1_Flame", "612thABD_Winter_B1_Droid", "612thABD_MC_B1_Heavy_AT",
		"612thABD_MC_B1_Lite_AT", "612thABD_MC_B1_Sniper", "612thABD_MC_B1_Heavy", "612thABD_Night_B1_Heavy", "612thABD_Night_B1_Flame", "612thABD_Night_B1_Droid", 
		"612thABD_Winter_B1_Heavy_AT", "612thABD_Winter_B1_Lite_AT", "612thABD_Winter_B1_Sniper", "612thABD_Z95", "612thABD_Serina_Trooper", "612thABD_Laatc_3as", 
		"612thABD_ARC_Trooper", "612thABD_Arc170", "612thABD_Y_Wing", "612thABD_Bones_P2_Trooper", "612thABD_Pilot_Trooper", "612thABD_EOD_Trooper", "612thABD_Medic_Trooper", 
		"612thABD_IDA_Walker_Trooper", "612thABD_Trooper", "612thABD_Flag_Vertical", "612thABD_Flag_Damaged_Vertical", "612thABD_flag", "612thABD_flag_Damaged", "612thABD_ATTE",
		"612thABD_Saber_M1", "612thABD_DRONMTT_repair", "612thABD_DRONMTT_Transport", "612thABD_DRONMTT_Ammo", "612thABD_DRONMTT_Fuel", "612thABD_DRONMTT_Transport_Covered",
		"612thABD_LSV_Unarmed", "612thABD_UGV_Unarmed", "612thABD_UGV_RCWS", "612thABD_Basic_P1_crewman", "612thABD_LSV_BASE_Armed", "612thABD_MQ_12_Drone", "612thABD_MRAP_Unarmed",
		"612th_MRAP_HMG", "612thABD_Bones_P2_Trooper", "612thABD_RHIB", "612thABD_Minigun_Boat", "612thABD_HEMTT_Fuel", "612thABD_Walker_P2_Trooper", "612thABD_HEMTT_Ammo", "612thABD_HEMTT_Cargo",
		"612thABD_HEMTT_Transport_Covered", "612thABD_HEMTT_Transport", "612thABD_HEMTT_Medical", "612thABD_HEMTT_Mover", "612thABD_HEMTT_flatbed", "612thABD_HEMTT_repair", "612th_Arsenal_Weapon_Crate",
		"612th_Arsenal_Box", "612thABD_CIS_CWIS", "612thABD_Medical_Resupply", "612thABD_Z6_Resupply", "612thABD_DC15S_Resupply", "612thABD_Ammo_Resupply", "612th_Arsenal_Supply", "612thABD_Rooikat", "612thABD_Laat", "612thABD_Laat_AB", "612thABD_Laatc", "612thABD_Laat_Transport", "612thABD_Laat_Medevac"};
		weapons[] ={};
		skipWhenMissingDependencies = 1;
	};
	
};
class cfgFactionClasses
{
	class Fac612th
	{
		displayName = "612th Attack Bat. Delta Co.";
	};
	class FacCIS_612th
	{
		displayName = "612th Confederacy";
	};
	class Fac612thEXT_Umbara
	{
		displayName = "Umbaran Troops";
	};
	class Fac612thEXT_Outcast
	{
		displayName = "The Outcasts";
	};
};
zeusCompositionScriptLevel = 2;

class CfgEditorCategories
{
    class 612th_Objects
    {
        displayName="[612th] Objects";
    };
};
class cfgEditorSubcategories {
	class Sub612thMen
	{
		displayName = "Infantry"; 
	};
	class Sub612thCustom
	{
		displayName = "Customs"; 
	};
	class Sub612thSF
	{
		displayName = "Special Forces"; 
	};
	class Sub612thVics
	{
		displayName = "Trucks"; 
	};
	class Sub612thLightVic
	{
		displayName = "Cars"; 
	};
	class Sub612thDrone
	{
		displayName = "Drone"; 
	};
	class Sub612thTanks
	{
		displayName = "Tanks"; 
	};
	class Sub612thBoats
	{
		displayName = "Boats"; 
	};
	class SUB612thAir
	{
		displayName = "Aircraft"; 
	};
	class SUB612thOBJ
	{
		displayName = "Objects"; 
	};
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
	class Sub612thEXTMen_Gen
	{
		displayName = "Infantry"; 
	};
	class Sub612thEXTMen_Wood
	{
		displayName = "Infantry (woodland)"; 
	};
	class Sub612thEXTSF
	{
		displayName = "Special Forces"; 
	};
	class Sub612thEXTVics
	{
		displayName = "Trucks"; 
	};
	class Sub612thEXTLightVic
	{
		displayName = "Cars"; 
	};
	class Sub612thEXTDrone
	{
		displayName = "Drone"; 
	};
	class Sub612thEXTTanks
	{
		displayName = "Tanks"; 
	};
	class Sub612thEXTBoats
	{
		displayName = "Boats"; 
	};
	class Sub612thEXTAir
	{
		displayName = "Aircraft"; 
	};
};