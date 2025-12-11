#include "\612thABD_Equipment\cfgPatches.hpp"
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

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
class cfgWeapons
{
	class 3AS_Flashlight_Cinnagaran_1_F;

	class 612thABDEXT_Custom_Cinnagaran: 3AS_Flashlight_Cinnagaran_1_F
	{
		displayName="[612thABD] Cinnagaran Carbine";
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="3AS_Optic_Cinnagaran_1_F";
			};
		};
	};
};
class cfgVehicles
{
  class O_Soldier_F;

  class 612thABDEXT_Umbaran_Rifleman_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Rifleman";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "IDA_Clone_ScoutPack";
		weapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "Throw", "Put"};
        respawnweapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "Throw", "Put"};
		magazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
  class 612thABDEXT_Umbaran_Marksman_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Marksman";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "IDA_Clone_ScoutPack";
		weapons[] = {"IDA_Galaar90", "IDA_MK23", "Throw", "Put"};
        respawnweapons[] = {"IDA_Galaar90", "IDA_MK23", "Throw", "Put"};
		magazines[] = {mag_6(IDA_blaster_cell_Overcharged_Yellow),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(IDA_blaster_cell_Overcharged_Yellow),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_CEE_Clone_Hood", "OPTRE_NVG_UAB_CNM", "SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_CEE_Clone_Hood", "OPTRE_NVG_UAB_CNM", "SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
  class 612thABDEXT_Umbaran_Officer_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Officer";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "IDA_Clone_ScoutPack";
		weapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "Throw", "Put"};
        respawnweapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "Throw", "Put"};
		magazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","H_MilCap_grn","OPTRE_NVG", "G_Bandanna_Skull2","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","H_MilCap_grn","OPTRE_NVG", "G_Bandanna_Skull2", "SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
  class 612thABDEXT_Umbaran_MG_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Machine Gunner";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "IDA_Clone_ScoutPack";
		weapons[] = {"IDA_Z6", "IDA_MK23", "Throw", "Put"};
        respawnweapons[] = {"IDA_Z6", "IDA_MK23", "Throw", "Put"};
		magazines[] = {mag_6(IDA_blaster_battery_Yellow),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(IDA_blaster_battery_Yellow),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
   class 612thABDEXT_Umbaran_Lite_AT_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Rifleman (Light AT)";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "3AS_B_Katarn_Backpack_Omega";
		weapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "3AS_RPS6_HP", "Throw", "Put"};
        respawnweapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "3AS_RPS6_HP", "Throw", "Put"};
		magazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
    class 612thABDEXT_Umbaran_Heavy_AT_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Rifleman (AT)";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "3AS_B_Katarn_Backpack_Omega";
		weapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "612thABD_PLX_ENY", "Throw", "Put"};
        respawnweapons[] = {"IDA_UmbaraRifle", "IDA_MK23", "612thABD_PLX_ENY", "Throw", "Put"};
		magazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(IDA_blaster_cell_Green),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","OPTRE_NVG_UAB_CNM","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_2_Helmet","OPTRE_NVG_UAB_CNM","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
    class 612thABDEXT_Umbaran_Medic_WDL: O_Soldier_F
	{
        author = "Hound";
		scope = 2;
		scopecurator = 2;
        displayName = "Medic";
        faction = "Fac612thEXT_Umbara";
        editorSubcategory = "Sub612thEXTMen_Wood";
        uniformclass = "OPTRE_UNSC_Army_Uniform_T_BLK";
		backpack = "ls_mandalorian_medic_backpack";
		attendant = true;
		weapons[] = {"3AS_Cinnagaran_Carbine_F", "IDA_MK23", "Throw", "Put"};
        respawnweapons[] = {"3AS_Cinnagaran_Carbine_F", "IDA_MK23", "Throw", "Put"};
		magazines[] = {mag_6(3AS_50Rnd_EG40_Mag),mag_3(IDA_blaster_cell_Yellow),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {"mag_6(3AS_50Rnd_EG40_Mag)","mag_3(IDA_blaster_cell_Yellow)","SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        linkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_4_Helmet","OPTRE_NVG_HURS","OPTRE_Glasses_Visor","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass",};
        respawnLinkedItems[] = {"OPTRE_Ins_BJ_Armor_Wdl","OPTRE_CH255_Security_Type_4_Helmet","OPTRE_NVG_HURS","OPTRE_Glasses_Visor","SWLB_clone_commander_binocular_night","ItemMap","ItemGPS","SWLB_comlink_droid","ItemCompass"};
	};
};
//////////////// Paste cfgGroups after this line //////////////// 
class CfgGroups {
	class East {

		class Fac612thEXT_Umbara {
			name = "Umbaran Forces";

			class Infantry {
				name = "Infantry";

				class Fac612thABDEXT_UBAR_Fireteam1 {
					name = "Infantry Squad";
					side = 0;
					faction = "Fac612thEXT_Umbara";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroups = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Officer_WDL";
					};
					class Unit1 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Medic_WDL";
					};
					class Unit2 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_MG_WDL";
					};
					class Unit3 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Lite_AT_WDL";
					};
					class Unit4 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Rifleman_WDL";
					};
					class Unit5 {
						position[] = {15,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Marksman_WDL";
					};
					class Unit6 {
						position[] = {-15,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Heavy_AT_WDL";
					};
					class Unit7 {
						position[] = {20,-10,0};
						rank = "PRIVATE";
						side = 0;
						vehicle = "612thABDEXT_Umbaran_Rifleman_WDL";
					};
				};
			};
		};
	};
};