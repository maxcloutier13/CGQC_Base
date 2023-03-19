// Pistol for default soldier
class hgun_P07_F;
class launch_B_Titan_short_F;
class launch_MRAWS_green_F;
class srifle_mas_can_LRR_F;
class arifle_mas_can_SPAR_02_blk_F;
class arifle_mas_can_SPAR_01_GL_blk_F;
class launch_MRAWS_green_rail_F;
class arifle_mas_can_mp7_F;
class arifle_SPAR_03_blk_F;
class LMG_mas_can_03_F;
class LMG_mas_can_02_F;
class cgqc_gun_p99_wood : hgun_P07_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_p99_wood";
	baseWeapon = "cgqc_gun_p99_wood";
	displayName = "CGQC P99 Woodland";
	hiddenSelectionsTextures[] = {
		"\cgqc_base\guns\cgqc_gun_p99_wood.paa"};
	picture = "\A3\Weapons_F_Exp\Pistols\P07\Data\UI\icon_hgun_P07_khk_F_X_CA.paa";
};
class cgqc_gun_mk1_Javelin : launch_B_Titan_short_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_Javelin";
	displayName = "CGQC Javelin mk1";
	scopeArsenal = 2;
	baseWeapon = "cgqc_gun_mk1_Javelin";
	model = "\mas_can_lite\akm\mas_Javelin_Launcher.p3d";
	picture = "\mas_can_lite\akm\gear_javelin_x_ca.paa";
	reloadAction = "ReloadRPG";
	magazines[] = {"jav_AT_mas_can", "jav_AP_mas_can"};
	descriptionshort = "Anti Tank Launcher<br />Caliber: 127 mm";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	ace_javelin_enabled = 1;
};
class cgqc_gun_mk1_MAAWS_cadpat : launch_MRAWS_green_F 
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_MAAWS_cadpat";
	baseWeapon = "cgqc_gun_mk1_MAAWS_cadpat";
	displayName = "CGQC MAAWS - Cadpat";
	hiddenSelectionsTextures[] = {
	"\CGQC_base\guns\cgqc_gun_MAAWS_cadpat",
	"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	class LinkedItems
	{
	};
};
class cgqc_gun_mk1_MAAWS_woodland : launch_MRAWS_green_F 
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_MAAWS_woodland";
	baseWeapon = "cgqc_gun_mk1_MAAWS_woodland";
	displayName = "CGQC MAAWS - Woodland";
	hiddenSelectionsTextures[] = {
	"\CGQC_base\guns\cgqc_gun_maaws_woodland",
	"\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	class LinkedItems
	{
	};
};
class cgqc_gun_mk1_m200 : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200";
	baseWeapon = "cgqc_gun_mk1_m200";
	displayName = "CGQC M200 Intervention";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_base\guns\cgqc_gun_m200_black.paa"};
};
class cgqc_gun_mk1_m200_arid : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_arid";
	baseWeapon = "cgqc_gun_mk1_m200_arid";
	displayName = "CGQC M200 Intervention - Arid";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_base\guns\cgqc_gun_m200_arid.paa"};
};
class cgqc_gun_mk1_m200_sand : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_sand";
	baseWeapon = "cgqc_gun_mk1_m200_sand";
	displayName = "CGQC M200 Intervention - Sand";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_base\guns\cgqc_gun_m200_sand.paa"};
};
class cgqc_gun_mk1_m200_semiarid : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_semiarid";
	baseWeapon = "cgqc_gun_mk1_m200_semiarid";
	displayName = "CGQC M200 Intervention - Semi-Arid";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_base\guns\cgqc_gun_m200_semiarid.paa"};
};
class cgqc_gun_mk1_m200_tropical : srifle_mas_can_LRR_F
{
	scope = 2;
	author = "silent1";
	_generalMacro = "cgqc_gun_mk1_m200_tropical";
	baseWeapon = "cgqc_gun_mk1_m200_tropical";
	displayName = "CGQC M200 Intervention - Tropical";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\CGQC_base\guns\cgqc_gun_m200_tropical.paa"};
};

// Unit versions -------------------------------------------------------------
class cgqc_gun_base_rifleman: arifle_mas_can_SPAR_02_blk_F
{
	displayName="Colt C8A1 blk(CAN-SOF)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_M";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_Arco_blk_F";
		};
		class LinkedItemsAcc
		{
		slot="PointerSlot";
		item="ACE_acc_pointer_green";
		};
	};
};
class cgqc_gun_base_tl: arifle_mas_can_SPAR_01_GL_blk_F
{
	displayName="Colt C8IUR M203 blk(CAN-SOF)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_M";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="ACE_optic_Hamr_2D";
		};
		class LinkedItemsAcc
		{
		slot="PointerSlot";
		item="ACE_acc_pointer_green";
		};
	};
};
class cgqc_gun_base_pilot: arifle_mas_can_mp7_F
{
	displayName="HK MP7(CAN-SOF)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_L";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_ACO_grn";
		};
	};
};
class cgqc_gun_base_sniper: cgqc_gun_mk1_m200
{
	displayName="CGQC M200 Intervention";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_LRPS";
		};
	};
};
class cgqc_gun_base_marksman: arifle_SPAR_03_blk_F
{
	displayName="HK417A2 20 (Black)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_B";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_AMS";
		};
		class LinkedItemsAcc
		{
		slot="PointerSlot";
		item="ACE_acc_pointer_green";
		};
		class LinkedItemsUnder
		{
		slot="UnderBarrelSlot";
		item="bipod_01_F_blk";
		};
	};
};
class cgqc_gun_base_grenadier: arifle_mas_can_SPAR_01_GL_blk_F
{
	displayName="Colt C8IUR M203 blk(CAN-SOF)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_M";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_Arco_blk_F";
		};
		class LinkedItemsAcc
		{
		slot="PointerSlot";
		item="ACE_acc_pointer_green";
		};
	};
};
class cgqc_gun_base_lmg: LMG_mas_can_03_F
{
	displayName="C9-A2(CAN-SOF)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_M";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_Arco_blk_F";
		};
		class LinkedItemsAcc
		{
		slot="PointerSlot";
		item="ACE_acc_pointer_green";
		};
	};
};
class cgqc_gun_base_hmg: LMG_mas_can_02_F
{
	displayName="C9-A2(CAN-SOF)";
	scope=1;
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
		slot="MuzzleSlot";
		item="muzzle_snds_h_mg_blk_f";
		};
		class LinkedItemsOptic
		{
		slot="CowsSlot";
		item="optic_Arco_blk_F";
		};
	};
};

