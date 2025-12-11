class CfgPatches {
	class Aux_612th {
		//requiredAddons[] = {"ace_common"};
		units[] = {"612th_Night_B1_SniperTeam","612th_Night_B1_Sentry", "612th_Night_B1_Flame_FireTeam", "612th_Night_B1_AT_FireTeam",
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
class CfgGroups {
	class East {

		class 612th_CIS
		{
			name = "[612th] Battledroids";
			class 612th_Battledroid_Groups
			{
				name = "Infantry";
				class 612thABD_Woodland_B1_Squad
				{
					name = "Woodland B1 Squad";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Heavy";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-3,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-4,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};
				class 612th_Woodland_B1_FireTeam
				{
					name = "Woodland B1 Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Woodland_B1_AT_FireTeam
				{
					name = "Woodland B1 AT Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Woodland_B1_Flame_FireTeam
				{
					name = "Woodland B1 Flame-team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Flame";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Woodland_B1_Sentry
				{
					name = "Woodland B1 Sentry team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
			class 612th_Woodland_B1_SniperTeam
				{
					name = "Woodland B1 Sniper team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Sniper";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Woodland_B1_Sniper";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
				class 612thABD_Desert_B1_Squad
				{
					name = "Desert B1 Squad";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Heavy";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-3,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-4,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};
				class 612th_Desert_B1_FireTeam
				{
					name = "Desert B1 Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Desert_B1_AT_FireTeam
				{
					name = "Desert B1 AT Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Desert_B1_Flame_FireTeam
				{
					name = "Desert B1 Flame-team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Flame";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Desert_B1_Sentry
				{
					name = "Desert B1 Sentry team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
			class 612th_Desert_B1_SniperTeam
				{
					name = "Desert B1 Sniper team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Sniper";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Desert_B1_Sniper";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
				class 612thABD_MC_B1_Squad
				{
					name = "MC B1 Squad";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Heavy";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-3,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-4,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};
				class 612th_MC_B1_FireTeam
				{
					name = "MC B1 Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_MC_B1_AT_FireTeam
				{
					name = "MC B1 AT Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_MC_B1_Flame_FireTeam
				{
					name = "MC B1 Flame-team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Flame";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_MC_B1_Sentry
				{
					name = "MC B1 Sentry team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
			class 612th_MC_B1_SniperTeam
				{
					name = "MC B1 Sniper team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Sniper";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_MC_B1_Sniper";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
				class 612thABD_Winter_B1_Squad
				{
					name = "Winter B1 Squad";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Heavy";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-3,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-4,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};
				class 612th_Winter_B1_FireTeam
				{
					name = "Winter B1 Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Winter_B1_AT_FireTeam
				{
					name = "Winter B1 AT Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Winter_B1_Flame_FireTeam
				{
					name = "Winter B1 Flame-team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Flame";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Winter_B1_Sentry
				{
					name = "Winter B1 Sentry team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
			class 612th_Winter_B1_SniperTeam
				{
					name = "Winter B1 Sniper team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Sniper";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Winter_B1_Sniper";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
				class 612thABD_Night_B1_Squad
				{
					name = "Night B1 Squad";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Heavy";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-3,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-4,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-3,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Sniper";
						rank = "PRIVATE";
						position[] = {0,-4,0};
					};
					class Unit11
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-5,0};
					};
				};
				class 612th_Night_B1_FireTeam
				{
					name = "Night B1 Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Heavy";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Night_B1_AT_FireTeam
				{
					name = "Night B1 AT Fireteam";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Heavy_AT";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Lite_AT";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Night_B1_Flame_FireTeam
				{
					name = "Night B1 Flame-team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Flame";
						rank = "PRIVATE";
						position[] = {1,-2,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-1,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Flame";
						rank = "PRIVATE";
						position[] = {0,-2,0};
					};
				};
			class 612th_Night_B1_Sentry
				{
					name = "Night B1 Sentry team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Droid";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
			class 612th_Night_B1_SniperTeam
				{
					name = "Night B1 Sniper team";
					faction = "FacCIS_612th";
					side = 0;
					class Unit0
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Sniper";
						rank = "SERGEANT";
						position[] = {1,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "612thABD_Night_B1_Sniper";
						rank = "PRIVATE";
						position[] = {1,-1,0};
					};
				};
			};
		};
	};
};