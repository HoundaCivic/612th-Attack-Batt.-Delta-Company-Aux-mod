#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgFunctions
{
	class OPTRE
	{
		class ACE_Compat
		{
			class treatmentBandageAndPainReduction;
			class treatmentBandageAndPainReductionLocal;
		};
	};
};
class CfgWeapons
{
	class Default;
	class ACE_ItemCore;
	class ACE_plasmaIV;
	class ItemCore: Default
	{
		class ItemInfo;
	};
	class CBA_MiscItem_ItemInfo;
	class ACE_fieldDressing;
	class 612thABD_MedKit: ACE_ItemCore
	{
		scope = 2;
		author = "Hound";
		displayName = "[612thABD] MedKit";
		picture = "\MRC\JLTS\contraband\Drugs\data\ui\medikit_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\medikit.p3d";
		descriptionShort = "First aid kit that contains several types of stimulants,<br/>painkillers, medicines and medical equipment.";
		type = 0;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 20;
		};
	};
	class 612thABD_Bacta: ACE_fieldDressing
	{
		scope = 2;
		author = "Hound";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";
		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
		displayName = "[612thABD] Bacta Canister";
		descriptionShort = "Processed natural liquid used as general medicine for various types of wounds";
		descriptionUse = "Applying Bacta...";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
	};
	class 612thABD_Bacta_Red: ACE_fieldDressing
	{
		scope = 2;
		author = "Hound";
		model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";
		picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_red_ui_ca.paa";
		displayName = "[612thABD] Red Bacta";
		descriptionShort = "Processed natural liquid used as general medicine for various types of wounds";
		descriptionUse = "Injecting Red Bacta...";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2;
		};
	};
    /*class 612thABD_plasmaIV: ACE_plasmaIV {
        scope = 2;
        author = "Hound";
        displayName = "[612thABD] PFG-700 Mix";
        model = QPATHTOF(data\IVBag_1000ml.p3d);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {QPATHTOF(data\IVBag_plasma_1000ml_ca.paa)};
        picture = QPATHTOF(ui\plasmaIV_ca.paa);
        descriptionShort = "A plasma/blood synthesizer developed by Hadrassi Emergency Medical Systems Technologies.";
        descriptionUse = "Injecting Fluids....";
        ACE_isMedicalItem = 1;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };*/
};
class CfgVehicles
{

	class Item_Base_F;
	class ACE_fieldDressingItem;
	class ACE_plasmaIVItem;
	class 612thABD_BactaItem: ACE_fieldDressingItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[612thABD] Bacta";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Bacta
			{
				name = "612thABD_Bacta";
				count = 1;
			};
		};
	};
    /*class 612thABD_PlasmaItem: ACE_plasmaIVItem {
        scope = 2;
        scopeCurator = 2;
        author = "Hound";
        displayName = "[612thABD] PFG-700 Mix";
        vehicleClass = "Items";
        class TransportItems {
			class _xx_612thABD_Plasma
			{
				name = "612thABD_PlasmaIV";
				count = 1;
			};
        };
    }; */
	class 612thABD_MediGelItem: ACE_fieldDressingItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[612thABD] Medigel";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Medigel
			{
				name = "612thABD_Bacta_Red";
				count = 1;
			};
		};
	};
	class 612thABD_MedkitItem: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[612thABD] Medkit";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Medkit
			{
				name = "612thABD_Medkit";
				count = 1;
			};
		};
	};
};
class ACE_Medical_Treatment
{
	class Bandaging
	{
		class OPTRE_Bacta;
		class 612thABD_Bacta: OPTRE_Bacta
		{
			class Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AbrasionMinor: Abrasion{};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 6;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = ;
				reopeningChance = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 4;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 5;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 6;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 7;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class ContusionMinor: Contusion{};
			class ContusionMedium: Contusion{};
			class ContusionLarge: Contusion{};
			class Crush: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CrushMinor: Crush
			{
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 2.25;
			};
			class CrushLarge: Crush
			{
				effectiveness = 2;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 6;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CutMinor: Cut{};
			class CutMedium: Cut
			{
				effectiveness = 4;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class LacerationMinor: Laceration{};
			class LacerationMedium: Laceration
			{
				effectiveness = 4;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class velocityWoundMinor: velocityWound{};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 4;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 3;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 4;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class punctureWoundMinor: punctureWound{};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 3;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 2.5;
			};
		};
		class OPTRE_Medigel;
		class 612thABD_Bacta_Red: OPTRE_Medigel
		{
			class Abrasion
			{
				effectiveness = 3.75;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AbrasionMinor: Abrasion{};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class ThermalBurn: Abrasion
			{
				effectiveness = 3.75;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 2.25;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 2;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 2.25;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class ContusionMinor: Contusion{};
			class ContusionMedium: Contusion{};
			class ContusionLarge: Contusion{};
			class Crush: Abrasion
			{
				effectiveness = 2;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CrushMinor: Crush
			{
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 1.5;
			};
			class CrushLarge: Crush
			{
				effectiveness = 1.75;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 4.5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CutMinor: Cut{};
			class CutMedium: Cut
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 2.75;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 2.5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class LacerationMinor: Laceration{};
			class LacerationMedium: Laceration
			{
				effectiveness = 2;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 1.75;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class velocityWoundMinor: velocityWound{};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 2.75;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 2;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 2.75;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class punctureWoundMinor: punctureWound{};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 2.15;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 2;
			};
		};
	};
	/*class IV {
	class PlasmaIV;
        class 612thABD_PlasmaIV: PlasmaIV {
            volume = 1000;
            ratio[] = {"Blood", 1};
            type = "Plasma";
        };
        class 612thABD_PlasmaIV_1500: PlasmaIV {
            volume = 1500;
            ratio[] = {"Blood", 1};
            type = "Plasma";
        };
	}; */
};
class ACE_Medical_Treatment_Actions
{
	class BasicBandage;
	class PlasmaIV;
	class 612thABD_Bacta: BasicBandage
	{
		displayName = "Inject [612thABD] Bacta Canister";
		displayNameProgress = "Injecting [612thABD] Bacta...";
		treatmentTime = 4;
		items[] = {"612thABD_Bacta"};
		callbackSuccess = "[_medic, _patient, _bodyPart, _className] call OPTRE_fnc_treatmentBandageAndPainReduction;[_patient, _bodyPart] call kat_pharma_fnc_treatmentAdvanced_TXALocal;";
		animationCaller = "AinvPknlMstpSlayWrflDnon_medic1";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Bacta"}};
	};
	class 612thABD_Bacta_Red: BasicBandage
	{
		displayName = "Apply [612thABD] Red Bacta";
		displayNameProgress = "Applying [612thABD] Red Bacta...";
		treatmentTime = 5;
		items[] = {"612thABD_Bacta_Red"};
		callbackSuccess = "OPTRE_fnc_treatmentBandageAndPainReduction";
		icon = "OPTRE_Weapons\Items\icons\biofoam.paa";
		litter[] = {{},{"ACE_MedicalLitter_Medigel"}};
	};
	class PersonalAidKit;
	class 612thABD_Medkit: PersonalAidKit
	{
		displayName = "Use [612thABD] Medkit";
		displayNameProgress = "Using [612thABD] Medkit...";
		treatmentTime = 5;
		items[] = {"612thABD_MedKit"};
		icon = "OPTRE_Weapons\Items\icons\medkit.paa";
		litter[] = {{},{"ACE_MedicalLitter_Medkit"}};
	};
    /*class 612thABD_PlasmaIV: PlasmaIV {
        displayName = "Use PFG-700 Mix";
        displayNameProgress = "Infusing Liquid Mixture in Patient.....";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        treatmentTime = 8;
        items[] = {"612thABD_plasmaIV"};
        callbackSuccess = "[_medic, _patient, _bodyPart, _className, _itemUser, _usedItem] call ace_medical_treatment_fnc_ivBag; [_patient, -800, 16] call kat_pharma_fnc_fluid;";
    }; */
};
