class CfgPatches {
	class Aux_612th {
		//requiredAddons[] = {"ace_common"};
		units[] = {"612thABD_Bones_P2_Trooper","612thABD_Hound_Trooper","612thABD_Serina_Trooper","612thABD_IDA_Walker_Trooper","612thABD_EOD_Trooper","612thABD_Medic_Trooper","612thABD_Pilot_Trooper","612thABD_Crewman","612thABD_ARC_Trooper","612thABD_Trooper"};
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
};
class CfgWeapons
{
	class ls_gar_phase2_helmet; //
	class IDA_P2_Helmet; //
	class HeadgearItem;
	class UniformItem;
	class IDA_Clone_Uniform;
	class IDA_vest_base;
	class VestItem;
	class SEA_Helmet_ARF_base;
	class SWLB_clone_uniform;
	class IDA_Holster_2;
	class IDA_KnifeHolster;
	class IDA_Holster_1;
	class SWLB_clone_medic_armor;
	class SEA_Helmet_Engineer_IllumBase;
	class SEA_Helmet_SpecOps_LR_IllumBase;
	class LSEA_Helmet_Pilot_P1_Base_Illum;
	class 3as_P2_Pilot_helmet;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestARCCadet;
	class 612thABD_ARC_Helmet_Base: JLTS_CloneHelmetARC
	{
		scope = 1;
        scopeArsenal = 1;
		ace_hearing_protection = 0.95;
		ace_hearing_lowervolume = 0.2;
		picture = "\MRC\JLTS\characters\CloneArmor2\data\ui\CloneHelmetARC_ui_ca.paa";
		hiddenSelections[] = {"camo1"};
		subItems[] = {};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetARC.p3d";
			hiddenSelections[] = {"camo1"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 612thABD_ARC_Helmet:612thABD_ARC_Helmet_Base
	{
		scope = 2;
        scopeArsenal = 2;
		author = "Hound";
		displayname = "[612thABD] ARC Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_ARC_Helmet_co.paa"};
	};	
    class 612thABD_P2_Pilot_helmet: 3as_P2_Pilot_helmet
    {
        author="Denal";
        scope=2;
        weaponPoolAvailable=1;
        displayName="[612thABD] Pilot Helmet";
        picture="3AS\3AS_Characters\Clones\Headgear\ui\p2pilot_ui_ca.paa";
        model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo1",
            "Camo2",
            "Camo3",
            "Camo4",
            "Camo5"
        };
        hiddenSelectionsTextures[]=
        {
            "612thABD_Equipment\Helmet\612th_Pilot_Helmet.paa",
            "612thABD_Equipment\Helmet\612th_Pilot_Helmet.paa",
            "",
            "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
            "612thABD_Equipment\Helmet\612th_Pilot_Helmet.paa",
            ""
        };
        class ItemInfo: HeadgearItem
        {
            mass=40;
            uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
            hiddenSelections[]=
            {
                "Camo",
                "Camo1",
                "Camo2",
                "Camo3",
                "Camo4",
                "Camo5"
            };
            modelSides[]={3,1};
            class HitpointsProtectionInfo
            {
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
        };
    };
	class 612thABD_P1_Pilot_helmet_Base:LSEA_Helmet_Pilot_P1_Base_Illum
	{
		scope = 1;
        scopeArsenal = 1;
		ace_hearing_protection = 0.95;
		ace_hearing_lowervolume = 0.2;
		hiddenSelections[] = {"Camo1","Camo2","Visor"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
        hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
        class ItemInfo: HeadgearItem {
            uniformModel = "JLTS_AE\LS_Helmet_Pilot_P1.p3d";
            hiddenSelections[] = {"Camo1","Camo2","Visor"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 612thABD_P1_Pilot_helmet:612thABD_P1_Pilot_helmet_Base
	{
		scope = 2;
        scopeArsenal = 2;
		author = "Hound";
		displayname = "[612thABD] P1 Pilot Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_P1_Pilot_Helmet_CO.paa","\JLTS_AE\Data\BaseTextures\Pilot\LifeSupport_CO.paa","612thABD_Equipment\Helmet\612thABD_P1_Pilot_Helmet_CO.paa"};
	};		
	class 612thABD_RTO_helmet_Base:SEA_Helmet_SpecOps_LR_IllumBase
	{
		scope = 1;
        scopeArsenal = 1;
		ace_hearing_protection = 0.95;
		ace_hearing_lowervolume = 0.2;
		hiddenSelections[] = {"Camo1","Camo2","Visor"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
        hiddenSelectionsMaterials[] = {"","","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
        class ItemInfo: HeadgearItem {
            uniformModel = "JLTS_AE\SEA_Helmet_SpecOps_LR.p3d";
            hiddenSelections[] = {"Camo1","Camo2","Visor"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 612thABD_rto_helmet:612thABD_RTO_helmet_Base
	{
		scope = 2;
        scopeArsenal = 2;
		author = "Hound";
		displayname = "[612thABD] RTO Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_RTO_Helmet_CO.paa","\JLTS_AE\Data\BaseTextures\SpecOps\Antennas\LR_Antenna_co.paa","612thABD_Equipment\Helmet\612thABD_RTO_Helmet_CO.paa"};
	};	
	class 612thABD_Engineer_helmet_Base:SEA_Helmet_Engineer_IllumBase
	{
		scope = 1;
        scopeArsenal = 1;
		ace_hearing_protection = 0.95;
		ace_hearing_lowervolume = 0.2;
		hiddenSelections[] = {"Camo1","Visor"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
        hiddenSelectionsMaterials[] = {"","\JLTS_AE\Data\BaseTextures\ARF\ARF_Helmet.rvmat"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
        class ItemInfo: HeadgearItem {
            uniformModel = "JLTS_AE\SEA_Helmet_Engineer.p3d";
            hiddenSelections[] = {"Camo1","Visor"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 612thABD_Engineer_helmet:612thABD_Engineer_helmet_Base
	{
		scope = 2;
        scopeArsenal = 2;
		author = "Hound";
		displayname = "[612thABD] Engineer Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Engineer_helmet_CO.paa","612thABD_Equipment\Helmet\612thABD_Engineer_helmet_CO.paa"};
	};
	class 612thABD_arf_helmet_Base:SEA_Helmet_ARF_base
	{
		scope = 1;
        scopeArsenal = 1;
		ace_hearing_protection = 0.95;
		ace_hearing_lowervolume = 0.2;
		hiddenSelections[] = {"Camo1","Camo2","Visor"};
		subItems[] = {"Integrated_NVG_TI_0_F"};
        hiddenSelectionsMaterials[] = {"","","\JLTS_AE\Data\BaseTextures\ARF\ARF_Helmet.rvmat"};
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_ui_ca.paa";
        class ItemInfo: HeadgearItem {
            uniformModel = "JLTS_AE\SEA_Helmet_ARF.p3d";
            hiddenSelections[] = {"Camo1","Camo2","Visor"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 612thABD_Arf_helmet:612thABD_arf_helmet_Base
	{
		scope = 2;
        scopeArsenal = 2;
		author = "Hound";
		displayname = "[612thABD] Arf Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Basic_ARF_Helmet.paa","\JLTS_AE\Data\BaseTextures\ARF\Plates_CO.paa","\JLTS_AE\Data\BaseTextures\ARF\ARF_Visor_CO.paa"};
	};
	class 612thABD_IDA_helmet_base:IDA_P2_Helmet
	{
		scope = 1;
		author = "Hound";
        scopeArsenal = 1;
		ace_hearing_protection = 0.95;
		ace_hearing_lowervolume = 0.2;
		subItems[] = {""};
		hiddenselections[] = {"Camo","visor"};
		picture = "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\P2_Helmet_UI.paa";
        class ItemInfo: HeadgearItem {
            uniformModel = "\Indecisive_Armoury_units\REPUBLIC\Clone_P2_Helmet\IDA_Clone_P2_Helmet.p3d";
            hiddenselections[] = {"Camo","visor"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=15;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	};
	class 612thABD_CT_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Basic Trooper Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Base_p2_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Base_p2_Helmet_co.paa"};
	};
	class 612thABD_Medic_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Medic Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Medic_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Medic_Helmet_co.paa"};
	};
	class 612thABD_RAK_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] RAK's Helmet";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Rak_IDA_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Rak_IDA_Helmet_co.paa"};
	};
	class 612thABD_Rose_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Rose's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Rose_helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Rose_helmet_co.paa"};
	};
	class 612thABD_HelmetVSR_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Veteran Trooper Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_P2_RedVSR_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_P2_RedVSR_Helmet_co.paa"};
	};
	class 612thABD_IDA_Serina_Helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Serina's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Serina_helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Serina_helmet_co.paa"};
	};
	class 612thABD_IDA_Walker_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Walker's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612THABD_WalkerI_IDA_Helmet_Co.paa","612thABD_Equipment\Helmet\612THABD_WalkerI_IDA_Helmet_Co.paa"};
	};
	class 612thABD_IDA_Oats_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Oat's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_OATS_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_OATS_Helmet_co.paa"};
	};
	class 612thABD_IDA_Hound_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Hound's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Hound_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Hound_Helmet_co.paa"};
	};
	class 612thABD_IDA_Wolf_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Wolf's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Wolf_IDA_helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Wolf_IDA_helmet_co.paa"};
	};
	class 612thABD_IDA_Bones_helmet:612thABD_IDA_helmet_base
	{
		scope = 2;
        scopeArsenal = 2;
		displayname = "[612thABD] Bones's Helmet";
		hiddenSelectionsMaterials[] = {"","a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Helmet\612thABD_Bones_Helmet_co.paa","612thABD_Equipment\Helmet\612thABD_Bones_Helmet_co.paa"};
	};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class 612thABD_Dual_holsters: IDA_Holster_2
	{
		author = "Hound";
		scope = 2;
		displayname = "[612thABD] Dual DC-17 Holsters";
		model = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Holster_2.p3d";
		picture = "\Indecisive_Armoury_units\REPUBLIC\vests\Holster_UI.paa";
		hiddenSelectionsTextures[] = {"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_Holster\IDA_Holster_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Holster_2.p3d";
			containerclass = "Supply200";
			hiddenSelections[] = {"camo"};
			mass = 15;
			vesttype = "Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Legs
				{
					hitpointName = "Hitlegs";
					armor = 15;
					PassThrough = 0.08975;
				};
			};
		};
	};
	class 612thABD_KnifeHolster: IDA_KnifeHolster
	{
		author = "Hound";
		scope = 2;
		displayname = "[612thABD] Knife Holster";
		model = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_KnifeHolster.p3d";
		picture = "\Indecisive_Armoury_units\REPUBLIC\vests\KnifeHolster_UI.paa";
		hiddenSelections[] = {"holster","knife"};
		hiddenSelectionsTextures[] = {"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_Holster\IDA_KnifeHolster_co.paa","\Indecisive_Armoury_Melee\Data\Clone_Knife\Textures\Clone_Hunting_Knife_co.paa"};
		class ItemInfo: VestItem
		{
			uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_KnifeHolster.p3d";
			containerclass = "Supply200";
			hiddenSelections[] = {"holster","knife"};
			mass = 15;
			vesttype = "Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15;
					PassThrough = 0.08975;
				};
				class Legs
				{
					hitpointName = "Hitlegs";
					armor = 15;
					PassThrough = 0.08975;
				};
			};
		};
	};
	class 612thAbd_Holster: IDA_Holster_1
	{
		scope = 2;
        displayName="[612thABD] Holster";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_Holster\IDA_Holster_co.paa"};
        class ItemInfo: VestItem
        {
            uniformmodel = "\Indecisive_Armoury_units\REPUBLIC\Vests\IDA_Holster_1.p3d";
            containerClass= "Supply150";
            mass=80;
            hiddenSelections[] = {"camo1"};
            class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 15; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
        };
	};
class 612thABD_Hidden_Vest: IDA_vest_base
	{
		author = "Hound";
		displayname = "[612thABD] Standard Armor Plating";
		model = "";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		picture = "\Indecisive_Armoury_units\Plate_UI.paa";
		class ItemInfo: VestItem
		{
			uniformmodel = "";
			containerclass = "Supply200";
			mass = 15;
			vesttype = "Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Legs
				{
					hitpointName = "Hitlegs";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
			};
		};
	};
class 612thABD_Hidden_Medical_Vest: IDA_vest_base
	{
		author = "Hound";
		displayname = "[612thABD] Medical Armor Plating";
		model = "";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		picture = "\Indecisive_Armoury_units\Plate_UI.paa";
		class ItemInfo: VestItem
		{
			uniformmodel = "";
			containerclass = "Supply250";
			mass = 15;
			vesttype = "Rebreather";
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
				class Legs
				{
					hitpointName = "Hitlegs";
					armor=15;
					passThrough=0.1;
					explosiveShielding= 6;
				};
			};
		};
	};
	class 612thABD_Medic_Vest: SWLB_clone_medic_armor
    {
        scope = 2;
        displayName="[612th] Medic Vest";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\vest\612thABD_Medic_Heavy_Accessories_co.paa"};
        class ItemInfo: VestItem
        {
            uniformModel = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
            containerClass= "Supply250";
            mass=80;
            hiddenSelections[] = {"camo1"};
            class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 15; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 15; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
        };
    };

class 612thABD_ARC_Vest: JLTS_CloneVestARC
	{
		author = "Hound";
		scope = 2;
		displayName = "[612thABD] ARC Vest";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Vest\612THABD_vest_arc_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestARC.p3d";
			containerClass = "Supply250";
			hiddenSelections[] = {"camo1"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 9;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 9;
					passThrough = 0.3;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 4;
					passThrough = 0.3;
				};
			};
		};
	};
	class 612thABD_ARC_Cadet_Vest: JLTS_CloneVestARCCadet
	{
		displayName = "[612thABD] ARC Cadet Vest";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Vest\612THABD_vest_arc_co.paa"};
		
		class ItemInfo: VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestARCCadet.p3d";
			containerClass = "Supply250";
			hiddenSelections[] = {"camo1"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 9;
					PassThrough = 0.3;
				};
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 9;
					passThrough = 0.3;
				};
			};
		};
	};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class IDA_Clone_Rangefinder;
	class IDA_Clone_NVG;
	class IDA_Clone_NVG_flipped;
	class lsd_gar_artilleryGunner_nvg;
	class 612thABD_NVG: IDA_Clone_NVG
	{
		author = "Hound";
		displayName = "[612thABD] Macrobinoculars";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\NVG\612thABD_NVG_co.paa"};
	};
	class 612thABD_NVG_flipped: IDA_Clone_NVG_flipped
	{
		author = "Hound";
		displayName = "[612thABD] Macrobinoculars (On)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\NVG\612thABD_NVG_co.paa"};
	};
	class 612thABD_Rangefinder: IDA_Clone_Rangefinder
	{
		author = "Hound";
		displayName = "[612thABD] Rangefinder";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\NVG\612thABD_RNGFinder_co.paa"};
	};
	class 612thABD_Tanker_Gunner: lsd_gar_artilleryGunner_nvg 
	{
		author = "Hound";
		displayName = "[612th] Crewman NVG";
		visionMode[] = {"Normal","NVG","TI"};
		hiddenSelections[] = {"camo1"};
		modelOptics = "\lsd_equipment_bluefor\nvg\gar\visor\swlb_clone_nvg_optic_dummy.p3d";
		hiddenSelectionsTextures[] = {"612thABD_Equipment\NVG\612thABD_Gunner_Plate_NVG.paa"};
	};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class 612thABD_IDA_Trooper_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD] Basic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
	class 612thABD_Medic_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD] Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_Medic_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
	class 612thABD_IDA_Walker_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD]Walker's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_IDA_Walker_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
	class 612thABD_Bones_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD] Bones's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_Bones_P2_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
	class 612thABD_Hound_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD] Hound's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_Hound_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
	class 612thABD_Serina_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD] Serina's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_Serina_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
	class 612thABD_Rose_Uniform: IDA_Clone_Uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[612thABD] Rose's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "612thABD_Rose_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply250";
			mass=40;
		};
	};
};
class CfgGlasses
{
	class IDA_PauldronEp3_L;
	class IDA_PauldronEp3_R;
	class IDA_KamaEp3_PauldronEp3_L;
	class IDA_KamaEp3_PauldronEp3_R;
	class IDA_KamaEp3;
	class IDA_Airborne_Harness;
	class IDA_Officer_Harness;
	
	class 612thABD_Arf_Vest: IDA_Officer_Harness
	{
		author = "Hound";
		displayname = "[612thABD] Arf Vest";
		scope = 2;
	};	
	class 612thABD_Heavy_Vest: IDA_Airborne_Harness
	{
		author = "Hound";
		displayname = "[612thABD] Heavy Vest";
		scope = 2;
	};
	class 612thABD_PauldronEp3_L: IDA_PauldronEp3_L
	{
		author = "Hound";
		displayname = "[612thABD] Pauldron [L]";
		picture = "\Indecisive_Armoury_Units\REPUBLIC\Vests\pauldronEp3_ui.paa";
		scope = 2;
		hiddenSelectionsTextures[] = {"","","","","","","612thABD_Equipment\vest\612thABD_IDA_Pauldron_EP3_co.paa","","\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEp3\IDA_PauldronAccessory_co.paa","","","","","","",""};
	};
	class 612thABD_PauldronEp3_R: IDA_PauldronEp3_R
	{
		author = "Hound";
		displayname = "[612thABD] Pauldron [R]";
		picture = "\Indecisive_Armoury_Units\REPUBLIC\Vests\pauldronEp3_ui.paa";
		scope = 2;
		hiddenSelectionsTextures[] = {"","","","","","","","612thABD_Equipment\vest\612thABD_IDA_Pauldron_EP3_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEp3\IDA_PauldronAccessory_co.paa","","","","","","",""};
	};
	class 612thABD_Officer_L: IDA_KamaEp3_PauldronEp3_L
	{
		author = "Hound";
		displayname = "[612thABD] Kama + Pauldron [L]";
		picture = "\Indecisive_Armoury_Units\REPUBLIC\Vests\pauldronEp3_ui.paa";
		scope = 2;
		hiddenSelectionsTextures[] = {"","","","612thABD_Equipment\vest\612thABD_IDA_KAMA_co.paa","","","612thABD_Equipment\vest\612thABD_IDA_Pauldron_EP3_co.paa","","\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEp3\IDA_PauldronAccessory_co.paa","","","","","","",""};
	};
	class 612thABD_Hound_Vest: IDA_KamaEp3_PauldronEp3_L
	{
		author = "Hound";
		displayname = "[612thABD] Hound Vest";
		picture = "\Indecisive_Armoury_Units\REPUBLIC\Vests\pauldronEp3_ui.paa";
		scope = 2;
		hiddenSelectionsTextures[] = {"","","","612thABD_Equipment\vest\612thABD_Hound_Kama_IDA_co.paa","","","612thABD_Equipment\vest\612thABD_IDA_Pauldron_EP3_co.paa","","\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEp3\IDA_PauldronAccessory_co.paa","","","","","","",""};
	};
	class 612thABD_KamaEp3_PauldronEp3_R: IDA_KamaEp3_PauldronEp3_R
	{
		author = "Hound";
		displayname = "[612thABD] Kama + Pauldron [R]";
		picture = "\Indecisive_Armoury_Units\REPUBLIC\Vests\pauldronEp3_ui.paa";
		scope = 2;
		hiddenSelectionsTextures[] = {"","","","612thABD_Equipment\vest\612thABD_IDA_KAMA_co.paa","","","","612thABD_Equipment\vest\612thABD_IDA_Pauldron_EP3_co.paa","\Indecisive_Armoury_Units\REPUBLIC\Vests\IDA_PauldronEp3\IDA_PauldronAccessory_co.paa","","","","","","",""};
	};
	class 612thABD_KamaEp3: IDA_KamaEp3
	{
		author = "Hound";
		displayname = "Kama (Ep3)";
		picture = "\Indecisive_Armoury_Units\REPUBLIC\Vests\kamaEP3_UI.paa";
		scope = 2;
		hiddenSelectionsTextures[] = {"","","","612thABD_Equipment\vest\612thABD_IDA_KAMA_co.paa","","","","","","","","","","","",""};
	};
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
/// Magazines macros definition ///

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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class CfgVehicles
{
	class IDA_Clone_DC15S;
	class SWLB_clone_base_P2;
	class IDA_Clone_Rucksack;
	class IDA_Clone_Radiopack;
	class IDA_Clone_RadioAntenna;
	class IDA_Clone_ExplosiveRig;
	class IDA_Clone_GrenadeRig;
	class JLTS_Clone_ARC_backpack;
	class 612thABD_ARC_Pack: JLTS_Clone_ARC_backpack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] ARC Backpack";
		maximumload = 250;
	};
	class 612thABD_ARC_Medic_Pack: JLTS_Clone_ARC_backpack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] ARC Medic Backpack";
		maximumload = 350;
	};
	class 612thABD_ARC_Heavy_Pack: JLTS_Clone_ARC_backpack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] ARC Heavy Backpack";
		maximumload = 350;
	};
class 612thABD_ARC_RTO_Pack: JLTS_Clone_ARC_backpack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] ARC RTO Backpack";
		maximumload = 250;
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
	class 612thABD_Rucksack: IDA_Clone_Rucksack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] Rucksack";
		maximumload = 250;
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Backpack\612thABD_Rucksack_Basic_co.paa","612thABD_Equipment\Backpack\612thABD_Rucksack_grenade_co.paa","612thABD_Equipment\Backpack\612thABD_Rucksack_cloth.paa"};
	};
	class 612thABD_Medic_Rucksack: IDA_Clone_Rucksack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] Medic Rucksack";
		maximumload = 350;
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Backpack\612thABD_Medic_backpack_co.paa","612thABD_Equipment\Backpack\612thABD_Medic_Grenade_Pack_co.paa","612thABD_Equipment\Backpack\612thABD_Rucksack_cloth.paa"};
	};
	class 612thABD_EOD_Rucksack: IDA_Clone_Rucksack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[612thABD] EOD Rucksack";
		maximumload = 350;
		hiddenSelections[] = {"Rucksack","Grenade","Cloth"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Backpack\612thABD_EOD_Backpack_co.paa","612thABD_Equipment\Backpack\612thABD_EOD_Backpack_grenade_co.paa","612thABD_Equipment\Backpack\612thABD_Rucksack_cloth.paa"};
	};

	class 612thABD_Radiopack: IDA_Clone_Radiopack
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		maximumload = 250;
		displayName = "[612thABD] Radiopack";
		hiddenSelectionsTextures[] = {"","","","","\Indecisive_Armoury_units\REPUBLIC\Backpacks\IDA_Clone_Radiopack\IDA_Clone_Radiopack_co.paa",""};
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
	class 612thABD_RadioAntenna: IDA_Clone_RadioAntenna
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		maximumload = 250;
		displayName = "[612thABD] Radio Antenna";
		hiddenSelectionsTextures[] = {"","","","\Indecisive_Armoury_units\REPUBLIC\Backpacks\IDA_Clone_RadioAntenna\IDA_Clone_RadioAntenna_co.paa","",""};
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 20000;
		tf_subtype = "digital_lr";
	};
	class 612thABD_ExplosiveRig: IDA_Clone_ExplosiveRig
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		maximumload = 250;
		displayName = "[612thABD] Explosives Rig";
		hiddenSelectionsTextures[] = {"","612thABD_Equipment\Backpack\612thABD_Rucksack_grenade_co.paa","612thABD_Equipment\Backpack\612thABD_Rucksack_grenade_co.paa","","",""};
	};
	class 612thABD_GrenadeRig: IDA_Clone_GrenadeRig
	{
		author = "Hound";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		maximumload = 250;
		displayName = "[612thABD] Grenade Rig";
		hiddenSelectionsTextures[] = {"","612thABD_Equipment\Backpack\612thABD_Rucksack_grenade_co.paa","","","",""};
	};
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class 612thABD_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] P2 Private (DC15S)";
        faction = "Fac612th";
        editorSubcategory = "Sub612thMen";
        uniformclass = "612thABD_IDA_Trooper_Uniform";
		backpack = "612thABD_Rucksack";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Upper_CO.paa","612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Lower.paa"};
        linkedItems[] = {"612thABD_Hidden_Vest","612thABD_CT_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Hidden_Vest","612thABD_CT_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_ARC_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] ARC Trooper";
        faction = "Fac612th";
        editorSubcategory = "Sub612thMen";
        uniformclass = "612thABD_IDA_Trooper_Uniform";
		backpack = "612thABD_ARC_Pack";
		weapons[] = {"3AS_WestarM5_F", "3AS_DC17STest_F", "Throw", "Put"};
        respawnweapons[] = {"3AS_WestarM5_F", "3AS_DC17STest_F", "Throw", "Put"};
		magazines[] = {mag_6(3AS_60Rnd_EC50_Mag),mag_3(3AS_60Rnd_Test_mag),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
		respawnmagazines[] = {mag_6(3AS_60Rnd_EC50_Mag),mag_3(3AS_60Rnd_Test_mag),"SmokeShell","SmokeShell","ls_mag_classB_thermalDet","ls_mag_classB_thermalDet"};
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Upper_CO.paa","612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Lower.paa"};
        linkedItems[] = {"612thABD_ARC_Vest","612thABD_ARC_Helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_ARC_Vest","612thABD_ARC_Helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Crewman: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] P2 Crewman";
        faction = "Fac612th";
		engineer = 1;
        editorSubcategory = "Sub612thMen";
        uniformclass = "612thABD_IDA_Trooper_Uniform";
		backpack = "612thABD_GrenadeRig";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Upper_CO.paa","612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Lower.paa"};
        linkedItems[] = {"612thABD_Hidden_Vest","612thABD_CT_helmet","612thABD_Tanker_Gunner", "SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Hidden_Vest","612thABD_CT_helmet","612thABD_Tanker_Gunner", "SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Pilot_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] P2 Pilot";
        faction = "Fac612th";
        editorSubcategory = "Sub612thMen";
        uniformclass = "612thABD_IDA_Trooper_Uniform";
		backpack = "612thABD_RadioAntenna";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Upper_CO.paa","612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Lower.paa"};
        linkedItems[] = {"612thABD_Hidden_Vest","612thABD_P2_Pilot_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Hidden_Vest","612thABD_P2_Pilot_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Medic_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] P2 Medic (DC15S)";
        faction = "Fac612th";
        editorSubcategory = "Sub612thMen";
		attendant = true;
        uniformclass = "612thABD_IDA_Trooper_Uniform";
		backpack = "612thABD_Medic_Rucksack";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_Medic_Upper_co.paa","612thABD_Equipment\Uniform\612thABD_Medic_Lower_co.paa"};
        linkedItems[] = {"612thABD_Medic_Vest","612thABD_Medic_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Medic_Vest","612thABD_Medic_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Rose_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] Rose";
        faction = "Fac612th";
        editorSubcategory = "Sub612thCustom";
		attendant = true;
        uniformclass = "612thABD_Rose_Uniform";
		backpack = "612thABD_Medic_Rucksack";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_Rose_Uper_co.paa","612thABD_Equipment\Uniform\612thABD_Rose_Lower_co.paa"};
        linkedItems[] = {"612thABD_Medic_Vest","612thABD_Rose_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Medic_Vest","612thABD_Rose_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_EOD_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] P2 EOD(DC15S)";
        faction = "Fac612th";
        editorSubcategory = "Sub612thMen";
		attendant = true;
        uniformclass = "612thABD_IDA_Trooper_Uniform";
		backpack = "612thABD_EOD_Rucksack";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Upper_CO.paa","612thABD_Equipment\Uniform\612thABD_P2_Trooper_Base_Lower.paa"};
        linkedItems[] = {"612thABD_Hidden_Vest","612thABD_CT_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Hidden_Vest","612thABD_CT_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_IDA_Walker_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] Walker";
        faction = "Fac612th";
        editorSubcategory = "Sub612thCustom";
		engineer = 1;
        uniformclass = "612thABD_IDA_Walker_Uniform";
		backpack = "612thABD_GrenadeRig";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612THABD_Walker_IDA_Upper_co.paa","612thABD_Equipment\Uniform\612THABD_Walker_IDA_Lower.paa"};
        linkedItems[] = {"612thABD_PauldronEp3_R","612thABD_IDA_Walker_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_PauldronEp3_R","612thABD_IDA_Walker_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Serina_Trooper: IDA_Clone_DC15S
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] Serina";
        faction = "Fac612th";
        editorSubcategory = "Sub612thCustom";
		engineer = 1;
        uniformclass = "612thABD_Serina_Uniform";
		backpack = "612thABD_GrenadeRig";
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_Serina_Upper_co.paa","612thABD_Equipment\Uniform\612thABD_Serina_Lower_co.paa"};
        linkedItems[] = {"612thABD_Kama_Vest","612thABD_IDA_Serina_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
        respawnLinkedItems[] = {"612thABD_Kama_Vest","612thABD_IDA_Serina_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Hound_Trooper: IDA_Clone_DC15S   
	{
        author = "Hound, Rose";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] Hound";
        faction = "Fac612th";
        editorSubcategory = "Sub612thCustom";
        uniformclass = "612thABD_Hound_Uniform";
		backpack = "612thABD_RadioAntenna";
		engineer = 1;
		uavHacker = 1;
		canDeactivateMines = true;
		attendant = true;
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_Hound_Upper_co.paa","612thABD_Equipment\Uniform\612thABD_Hound_Lower_co.paa"};
        linkedItems[] = {"612thABD_Hound_Vest","612thABD_IDA_Hound_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass",};
        respawnLinkedItems[] = {"612thABD_Hound_Vest","612thABD_IDA_Hound_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	class 612thABD_Bones_P2_Trooper: IDA_Clone_DC15S   
	{
        author = "Hound, Rose";
		scope=2;
        scopecurator = 2;
        displayName = "[612thABD] Bones";
        faction = "Fac612th";
        editorSubcategory = "Sub612thCustom";
        uniformclass = "612thABD_Bones_Uniform";
		backpack = "612thABD_RadioAntenna";
		engineer = 1;
		uavHacker = 1;
		canDeactivateMines = true;
		attendant = true;
        hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_Bones_Upper_co.paa","612thABD_Equipment\Uniform\612thABD_Bones_Lower_co.paa"};
        linkedItems[] = {"612thABD_Kama_Vest","612thABD_IDA_Bones_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass",};
        respawnLinkedItems[] = {"612thABD_Kama_Vest","612thABD_IDA_Bones_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
    };
	/*class 612thABD_Test_Unit: SWLB_clone_marshal_commander_base_P2   
	{
        author = "Hound";
		scope=2;
        scopecurator = 2;
		scopeArsenal = 2;
        displayName = "[612thABD] Test Unit";
        faction = "Fac612th";
        editorSubcategory = "Sub612thCustom";
        uniformclass = "612thABD_Hound_Uniform";
		attendant = true;
		uavHacker = 1;
		backpack = "612thABD_Radio_Backpack";
		hiddenSelections[] = {"camo1","camo2","biceps","rank"};
		hiddenSelectionsTextures[] = {"612thABD_Equipment\Uniform\612thABD_Trooper_Upper.paa","612thABD_Equipment\Uniform\612thABD_Trooper_Lower_co.paa","612thABD_Equipment\Uniform\612thABD_Marshal_Commander_Shoulders_co.paa","SWLB_clones\data\rank_co.paa"};
        linkedItems[] = {"612thABD_Kama_Vest","612thABD_Hound_P1_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass",};
        respawnLinkedItems[] = {"612thABD_Kama_Vest","612thABD_Hound_P1_helmet","SWLB_clone_commander_binocular","ItemMap","ItemGPS","ls_comlink_aur","ItemCompass"};
		class HitPoints
		{
			class HitFace
			{
				armor = 2;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.15;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 2;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.55;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 2;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.55;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 15;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 2;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 2;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 2;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 2;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 3;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
    };*/
};
/*class CfgGroups {
	class WEST {

		class Fac612th {
			name = "612th Attack Bat. Delta Co.";

			class Infantry {
				name = "Infantry";

				class Fac612thABD_Fireteam1 {
					name = "Fenrir Squad";
					side = 1;
					faction = "Fac612th";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroups = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "612thABD_MCP1_Trooper";
					};
					class Unit1 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Medic_Trooper";
					};
					class Unit2 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_EOD_Trooper";
					};
					class Unit3 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Basic_P1_Trooper";
					};
					class Unit4 {
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Basic_P1_Trooper";
					};
				};
			};
		class Fireteam1 {
				name = "Fireteam";

				class Fac612thABD_Fireteam2 {
					name = "Fenrir fireteam";
					side = 1;
					faction = "Fac612th";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroups = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "612thABD_MCP1_Trooper";
					};
					class Unit1 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Medic_Trooper";
					};
					class Unit2 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_EOD_Trooper";
					};
					class Unit3 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Basic_P1_Trooper";
					};
				};
			};
		};
		class Fireteam2 {
				name = "Marine Fireteam";

				class Fac612thABD_Fireteam3 {
					name = "Marine fireteam";
					side = 1;
					faction = "Fac612th";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroups = 0.5;

					class Unit0 {
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
						vehicle = "612thABD_Titan_Trooper";
					};
					class Unit1 {
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Marine_EOD_Trooper";
					};
					class Unit2 {
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Marine_Medic_Trooper";
					};
					class Unit3 {
						position[] = {-10,-10,0};
						rank = "PRIVATE";
						side = 1;
						vehicle = "612thABD_Marine_Trooper";
					};
				};
			};
	};
};