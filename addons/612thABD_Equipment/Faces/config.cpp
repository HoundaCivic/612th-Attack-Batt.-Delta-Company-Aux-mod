#include "\612thABD_Equipment\cfgPatches.hpp"
class CfgFaces
{
	class Default;
	class lsd_cis_bx_head;
	class Man_A3: Default
	{
		class 612thABD_Hound_Face: Default
		{
			name = "Clone Trooper Hound";
			author = "Hound";
			displayname = "[612thABD] Hound";
			texture = "612thABD_Equipment\Faces\612thabd_hound_co.paa";
			head = "DefaultHead_A3";
			identityTypes[] = {"Head_NATO","Head_Euro"};
			material = "612thABD_Equipment\Faces\612thABD_Hound_Face.rvmat";
			materialWounded1 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			materialWounded2 = "A3\Characters_F\Heads\Data\m_White_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
		};
		class 612thABD_Bones_Face: lsd_cis_bx_head
		{
			author = "Hound";
			displayname = "BX-1337 Bones Face";
			identityTypes[] = {"Head_LSD_BX"};
			head = "d_bxCommando";
			material = "\ls_armor_redfor\uniform\cis\bx\data\body.rvmat";
			texture = "612thABD_Equipment\Faces\612thABD_Bones_Face_co_V1.paa";
			disabled = 0;
			materialWounded1 = "";
			materialWounded2 = "";
			textureHL = "\ls_armor_redfor\uniform\cis\bx\data\body_co.paa";
			materialHL = "\ls_armor_redfor\uniform\cis\bx\data\body.rvmat";
			textureHL2 = "\ls_armor_redfor\uniform\cis\bx\data\body_co.paa";
			materialHL2 = "\ls_armor_redfor\uniform\cis\bx\data\body.rvmat";
		};
	};
};