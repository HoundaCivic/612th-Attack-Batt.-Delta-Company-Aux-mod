#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgSounds
{
	sounds[] = {"612thABD_DropPodSound1","612thABD_DropPodSound2"};
	class 612thABD_DropPodSound1
	{
		name = "Drop Pod Sound 1";
		sound[] = {"612thABD_Objects\Supply_Pod\data\Drop_Pod_Sound1.ogg",1,1,100};
	};
	class 612thABD_DropPodSound2
	{
		name = "Drop Pod Sound 2";
		sound[] = {"612thABD_Objects\Supply_Pod\data\Drop_Pod_Sound2.ogg",1,1,100};
	};
};
class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
	class 612thABD_DroppodModule: Module_F
	{
		scope = 1;
		scopeCurator = 2;
		displayName = "Spawn Resupply Pod";
		category = "612thABD_Modules";
		function = "612thABD_fnc_Module_SpawnDropPod";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 1;
		is3DEN = 0;
		class Attributes: AttributesBase
		{
			class ModuleDescription: ModuleDescription{};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "Spawns a drop pod, with shit in it hopefully";
		};
	};
};
