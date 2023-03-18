class ItemCore;
class H_mas_can_opscorn;
class H_mas_can_opscore;
class rhsusf_cvc_green_ess;
class H_PilotHelmetFighter_B;
class H_PilotHelmetHeli_B;
class H_CrewHelmetHeli_B;

class H_HelmetB : ItemCore
{
	class ItemInfo;
};
class HelmetBase : ItemCore
{
	class ItemInfo;
};
class H_Beret_blk : HelmetBase
{
	class ItemInfo;
};
// Berets ----------------------------------------------------------------------
class H_Beret_02;
class cgqc_beret_vanilla : H_Beret_blk {
	author = "silent1";
	displayName = "CGQC Beret Vanilla";
	_generalMacro = "cgqc_beret_vanilla";
	picture = "\A3\characters_f\Data\UI\icon_H_Beret_blk_CA.paa";
	model = "\cgqc_base\helmets\cgqc_beret_1.p3d";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_vanilla.paa"};
	hiddenSelectionsMaterials[] = {"\cgqc_base\helmets\cgqc_beret.rvmat"};
	class ItemInfo : ItemInfo
	{
		mass = 6;
		allowedSlots[] = {801, 901, 701, 605};
		uniformModel = "\cgqc_base\helmets\cgqc_beret.p3d";
		modelSides[] = {3};
	};
};
class cgqc_beret_blue : cgqc_beret_vanilla {
	author = "silent1";
	displayName = "CGQC Beret bleu";
	_generalMacro = "cgqc_beret_blue";
	picture = "\A3\characters_f\Data\UI\icon_H_Beret_blk_CA.paa";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_blue.paa"};
};
class cgqc_beret_green : cgqc_beret_vanilla {
	author = "silent1";
	displayName = "CGQC Beret Vert";
	_generalMacro = "cgqc_beret_green";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_green.paa"};
};
class cgqc_beret_red : cgqc_beret_vanilla {
	author = "silent1";
	displayName = "CGQC Beret Rouge";
	_generalMacro = "cgqc_beret_red";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_red.paa"};
};
class cgqc_beret_gray : cgqc_beret_vanilla {
	author = "silent1";
	displayName = "CGQC Beret Gris";
	_generalMacro = "cgqc_beret_gray";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_gray.paa"};
};
class cgqc_beret_yellow : cgqc_beret_vanilla {
	author = "silent1";
	displayName = "CGQC Beret Jaune";
	_generalMacro = "cgqc_beret_yellow";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_yellow.paa"};
};
class cgqc_beret_orange : cgqc_beret_vanilla {
	author = "silent1";
	displayName = "CGQC Beret Orange";
	_generalMacro = "cgqc_beret_orange";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_beret_orange.paa"};
};
class cgqc_cap_green : H_HelmetB
{
	author = "silent1";
	_generalMacro = "cgqc_cap_green";
	displayName = "CGQC Casquette verte";
	picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
	model = "\A3\Characters_F\common\capb_headphones.p3d";
	descriptionShort = "$STR_A3_SP_NOARMOR";
	class ItemInfo : ItemInfo
	{
		mass = 10;
		uniformModel = "\A3\Characters_F\common\capb_headphones.p3d";
		modelSides[] = {6};
		hiddenSelections[] =
			{
				"camo"};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 0;
				passThrough = 1;
			};
		};
	};
	ace_hearing_protection = 0.75;
	ace_hearing_lowerVolume = 0;
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_cap_green.paa"};
	hiddenSelectionsMaterials[] = {"\cgqc_base\helmets\cgqc_cap_green.rvmat"};
};

// Mk1 "Net" helmets
// Green
class cgqc_helmet_mk1 : H_mas_can_opscorn
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1";
    displayName = "CGQC Casque mk1";
    picture = "\mas_can_lite\ui\green_sf.paa";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\green.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside.paa"};
    ace_hearing_protection = 0.75;
	ace_hearing_lowerVolume = 0;
    // Grad helmet compatibility
    grad_slingHelmet_allow = true;
    // Ctab camera compat
    CTAB_Camera = true;
};
class cgqc_helmet_mk1_black : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_black";
    displayName = "CGQC Casque mk1 - Noir";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\black.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_black.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_white : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_white";
    displayName = "CGQC Casque mk1 - Blanc";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\white.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_white.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_cadpat : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_cadpat";
    displayName = "CGQC Casque mk1 - Cadpat";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cadpat.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_desert : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_desert";
    displayName = "CGQC Casque mk1 - Desert";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\desert.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_mcam : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_mcam";
    displayName = "CGQC Casque mk1 - Multicam";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\mcam.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside.paa"};
};
// Flat color -----------------------------------
class cgqc_helmet_mk1_f_gray : H_mas_can_opscore
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_gray";
    displayName = "CGQC Casque mk1 - Gray";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\gray.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside_dark.paa"};
    ace_hearing_protection = 0.75;
	ace_hearing_lowerVolume = 0;
    // Grad helmet compatibility
    grad_slingHelmet_allow = true;
    // Ctab camera compat
    CTAB_Camera = true;
};
class cgqc_helmet_mk1_f_black : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_black";
    displayName = "CGQC Casque mk1 - Noir mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\flat_black.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_black.paa",
        "\cgqc_base\helmets\inside_dark.paa"};
};
class cgqc_helmet_mk1_f_coyote : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_coyote";
    displayName = "CGQC Casque mk1 - Coyote";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\coyote.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_f_green : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_green";
    displayName = "CGQC Casque mk1 - Vert Mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\flat_green.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro.paa",
        "\cgqc_base\helmets\inside.paa"};
};

// Medic helmets ---------------------------------------------------------------
class cgqc_helmet_mk1_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_medic";
    displayName = "CGQC Casque Medic mk1";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\green.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_black_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_medic";
    displayName = "CGQC Casque Medic mk1 - Noir";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\black.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_black_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_white_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_white_medic";
    displayName = "CGQC Casque Medic mk1 - Blanc";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\white.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_white_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_cadpat_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_cadpat_medic";
    displayName = "CGQC Casque Medic mk1 - Cadpat";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cadpat.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_desert_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_desert_medic";
    displayName = "CGQC Casque Medic mk1 - Desert";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\desert.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_mcam_medic : cgqc_helmet_mk1
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_mcam_medic";
    displayName = "CGQC Casque Medic mk1 - Multicam";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\mcam.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_f_gray_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_gray_medic";
    displayName = "CGQC Casque Medic mk1 - Gray";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\gray.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside_dark.paa"};
};
class cgqc_helmet_mk1_f_black_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_black_medic";
    displayName = "CGQC Casque Medic mk1 - Noir mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\flat_black.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_black_medic.paa",
        "\cgqc_base\helmets\inside_dark.paa"};
};
class cgqc_helmet_mk1_f_coyote_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_coyote_medic";
    displayName = "CGQC Casque Medic mk1 - Coyote";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\coyote.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};
class cgqc_helmet_mk1_f_green_medic : cgqc_helmet_mk1_f_gray
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_f_green_medic";
    displayName = "CGQC Casque Medic mk1 - Vert Mat";
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\flat_green.paa",
        "\cgqc_base\helmets\cgqc_helmet_mk1_velcro_medic.paa",
        "\cgqc_base\helmets\inside.paa"};
};

// Jet helmets -----------------------------------------------------------------------------------------------
class cgqc_helmet_mk1_jetpilot : H_PilotHelmetFighter_B
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_jetpilot";
    displayName = "CGQC Casque Pilote de jet mk1";
    grad_slingHelmet_allow = true;
};

// Tank/Crew helmets -----------------------------------------------------------------------------------------------
class cgqc_helmet_mk1_tank : rhsusf_cvc_green_ess
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank";
    displayName = "CGQC Casque Tank mk1";
    grad_slingHelmet_allow = true;
};

// Helicopter/Crew helmets -----------------------------------------------------------------------------------------------
// CGQC Airforce black -----------------------------------------------------
class cgqc_helmet_heli_black : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Noir";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_heli_black.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Noir full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_heli_black.paa"};
	grad_slingHelmet_allow = true;
};

// CGQC Airforce Green -----------------------------------------------------
class cgqc_helmet_heli_green : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Vert";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_heli_green.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_green : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Vert full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_heli_green.paa"};
	grad_slingHelmet_allow = true;
};

// CGQC Airforce woodland -----------------------------------------------------
class cgqc_helmet_heli_wood : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Woodland";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_heli_wood.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_wood : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Woodland full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_heli_wood.paa"};
	grad_slingHelmet_allow = true;
};


// Custom helmets -----------------------------------------------------------------------------------------------
// Cloutier -----------------------------------------------------
class cgqc_helmet_heli_black_cloutier : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Cloutier";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_cloutier.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_cloutier : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Cloutier Full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_cloutier.paa"};
	grad_slingHelmet_allow = true;
};
// Villeneuve -----------------------------------------------------
class cgqc_helmet_heli_black_villeneuve : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Villeneuve DickForce";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_villeneuve_dick.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_villeneuve : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Villeneuve Full DickForce";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_villeneuve_dick.paa"};
	grad_slingHelmet_allow = true;
};
// Audi -----------------------------------------------------
class cgqc_helmet_heli_black_audi : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Audi";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_audi.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_audi : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Audi Full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_audi.paa"};
	grad_slingHelmet_allow = true;
};
// Turcotte 
class cgqc_helmet_heli_black_turcotte : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Turcotte";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_turcotte.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_turcotte : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Turcotte Full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_turcotte.paa"};
	grad_slingHelmet_allow = true;
};
// Comeau 
class cgqc_helmet_heli_black_comeau : H_PilotHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Comeau";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_comeau.paa"};
	grad_slingHelmet_allow = true;
};
class cgqc_helmet_crew_black_comeau : H_CrewHelmetHeli_B
{
	scope = 2;
	author = "silent1";
	displayName = "CGQC Heli Comeau Full";
	hiddenSelectionsTextures[] = {"\cgqc_base\helmets\cgqc_helmet_comeau.paa"};
	grad_slingHelmet_allow = true;
};


// Tank helmets ---------------------------------------------------------------------------------------
// Turcotte tank helmet
class cgqc_helmet_mk1_tank_turcotte : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_turcotte";
    displayName = "CGQC Casque Tank Turcotte";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_turcotte.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_audi : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_audi";
    displayName = "CGQC Casque Tank Audi";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_audi.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_tremblay : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_tremblay";
    displayName = "CGQC Casque Tank Tremblay";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_tremblay.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_comeau : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_comeau";
    displayName = "CGQC Casque Tank Comeau";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_comeau.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_genest : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_genest";
    displayName = "CGQC Casque Tank Genest";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_genest.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_frechette : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_frechette";
    displayName = "CGQC Casque Tank Frechette";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_frechette.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_laforest : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_laforest";
    displayName = "CGQC Casque Tank Laforest";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_laforest.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_fortin : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_fortin";
    displayName = "CGQC Casque Tank Fortin";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_fortin.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_pinard : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_pinard";
    displayName = "CGQC Casque Tank Pinard";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_pinard.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_gaudreault : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_gaudreault";
    displayName = "CGQC Casque Tank Gaudreault";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_gaudreault.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
class cgqc_helmet_mk1_tank_cloutier : cgqc_helmet_mk1_tank
{
    author = "silent1";
    _generalMacro = "cgqc_helmet_mk1_tank_cloutier";
    displayName = "CGQC Casque Tank Cloutier";
    grad_slingHelmet_allow = true;
    hiddenSelectionsTextures[] = {
        "\cgqc_base\helmets\cgqc_helmet_tank_cloutier.paa",
        "\rhsusf\addons\rhsusf_infantry\gear\head\data\crew_equip_co.paa"};
};
