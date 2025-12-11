#include "\612thABD_Equipment\cfgPatches.hpp"
 class Mode_SemiAuto;
 class Mode_Burst;
 class Mode_FullAuto;
 class CowsSlot;
 class MuzzleSlot;
 class PointerSlot;

class CfgWeapons
{
	class srifle_LRR_camo_F;
	class NVGoggles;
	class InventoryOpticsItem_Base_F;
	class optic_lrps;
	class UGL_F;
	class ItemCore;
	class WeaponSlotsInfo;
	class Launcher_Base_F;
	class Pistol_Base_F;
	class 612thEXT_Space_Intervention: srifle_LRR_camo_F
	{
		displayname = "DC-23XTL";
		scope = 2;
		author = "Hound";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"612THABD_Weapons\Weapons\Space_Intervention\Space_Intervention_co.paa"};
		magazines[] = {"612thABD_blaster_cell_OC","IDA_blaster_cell_Amp"};
		baseweapon = "612thEXT_Space_Intervention";
		magazineWell[] = {};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "";
				begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15x\DC15x.ogg",2.5,1,1800};
				soundBegin[] = {"begin1",1};
				beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC-15x\DC15x.ogg",1,1,400};
				soundBeginWater[] = {"beginwater1",1};
			};
			reloadTime = 0.9;
			dispersion = 0.00010;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 10000;
			maxRangeProbab = 0.3;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"IDA_773_scope", "3AS_optic_holo_DC15S", "3AS_optic_acog_DC15C", "optic_Nightstalker"};
			};

			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"acc_flashlight", "ACE_acc_pointer_green", "OPTRE_M6D_Carbine_Flashlight"};
			};
		};
	};

};