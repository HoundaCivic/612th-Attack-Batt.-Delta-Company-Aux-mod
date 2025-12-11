#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgVehicles
{
	class ls_carrybox_base;
	class b_supplyCrate_F;
	class 3as_Small_Box_9_Prop;
	class ls_flag_republic;
	class ls_flag_republicDamaged;
	class ls_flag_republic_vertical;
	class ls_flag_republicDamaged_vertical;
	
	class 612thABD_Flag_Vertical: ls_flag_republic_vertical
	{
		scope = 2;
		displayName = "612th Flag [Vertical]";
		model = "LS_statics_props\flags\ls_vertical_flag";
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"612thABD_Objects\flag\612thABD_flag.paa"};
	};
	class 612thABD_Flag_Damaged_Vertical: ls_flag_republicDamaged_vertical
	{
		scope = 2;
		displayName = "612th Flag (Damaged) [Vertical]";
		model = "LS_statics_props\flags\ls_vertical_flag";
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"612thABD_Objects\flag\612thABD_flag_damaged.paa"};
	};
 	class 612thABD_flag: ls_flag_republic
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		displayName = "612th Flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\612thABD_Objects\flag\612thABD_flag.paa'";
		};
	};
	class 612thABD_flag_Damaged: ls_flag_republicDamaged
	{
		scope = 2;
		scopeCurator = 2;
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		displayName = "612th Flag (Damaged)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\612thABD_Objects\flag\612thABD_flag_damaged.paa'";
		};
	};
	class 612th_Arsenal_Box: ls_carrybox_base     // full arsenal box
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[612th] Full Arsenal Box";
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		class UserActions
		{
			class 612th_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class 612th_GiveMedicPerms: 612th_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class 612th_TakeMedicPerms: 612th_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class 612th_GiveEngiPerms: 612th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 1];";
			};
			class 612th_TakeEngiPerms: 612th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 0];";
			};
			class 612th_GiveEODPerms: 612th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get EOD-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class 612th_TakeEODPerms: 612th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove EOD-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 612th_Arsenal: 612th_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#00FF00'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
	class 612th_Arsenal_Supply: b_supplyCrate_F     // full arsenal box
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[612th] Full Arsenal Supply Crate";
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		class UserActions
		{
			class 612th_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class 612th_GiveMedicPerms: 612th_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class 612th_TakeMedicPerms: 612th_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class 612th_GiveEngiPerms: 612th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 1];";
			};
			class 612th_TakeEngiPerms: 612th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 0];";
			};
			class 612th_GiveEODPerms: 612th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get EOD-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class 612th_TakeEODPerms: 612th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove EOD-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 612th_Arsenal: 612th_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#00FF00'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
	class 612th_Arsenal_Weapon_Crate: 3as_Small_Box_9_Prop     // full arsenal box
	{
        author = "Hound";
        scopecurator = 2;
        displayName = "[612th] Full Arsenal Weapons Crate";
		editorCategory = "612th_Objects";
        editorSubcategory = "SUB612thOBJ";
		class UserActions
		{
			class 612th_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class 612th_GiveMedicPerms: 612th_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class 612th_TakeMedicPerms: 612th_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class 612th_GiveEngiPerms: 612th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 1];";
			};
			class 612th_TakeEngiPerms: 612th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""engineer "")";
				statement = "player setUnitTrait [""engineer"", 0];";
			};
			class 612th_GiveEODPerms: 612th_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get EOD-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class 612th_TakeEODPerms: 612th_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove EOD-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 612th_Arsenal: 612th_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#00FF00'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
};