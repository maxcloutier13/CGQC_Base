class B_AssaultPack_rgr;
class B_AssaultPack_cbr;
class B_AssaultPack_mcamo;
class B_AssaultPack_dgtl;
class B_AssaultPack_blk;
class B_Kitbag_Base;
class B_Kitbag_rgr;
class B_mas_can_Kitbag_d;
class B_mas_can_Kitbag_m;
//class rhssaf_kitbag_digital;
class B_mas_can_Kitbag_LW;
class B_RadioBag_01_black_F;
class B_RadioBag_01_tropic_F;
class B_RadioBag_01_eaf_F;
class B_RadioBag_01_wdl_F;
class B_RadioBag_01_oucamo_F;
class B_Carryall_cbr;
class B_Carryall_mcamo;
class B_Carryall_khk;
class B_Carryall_oucamo;
class B_Parachute;
//class UK3CB_AAF_B_B_ASS_DIGI_BLK;
//class UK3CB_LNM_B_B_CARRYALL_FLK_02;
//class UK3CB_CW_US_B_LATE_B_RIF_04;
class cgqc_pack_mk1_magic : B_AssaultPack_rgr
{
    scope = 2;
    author = "silent1";
    displayName = "CGQC Backpack magique";
    hiddenSelectionsTextures[] = {""};
    model = "\A3\weapons_f\empty";
    class TransportMagazines
    {
        class _xx_ACE_Chemlight_HiRed
        {
            count = 1;
            magazine = "ACE_Chemlight_HiRed";
        };
        class _xx_ACE_Chemlight_IR
        {
            count = 1;
            magazine = "ACE_Chemlight_IR";
        };
        class _xx_SmokeShell
        {
            count = 3;
            magazine = "SmokeShell";
        };
        class _xx_SmokeShellBlue
        {
            count = 3;
            magazine = "SmokeShellBlue";
        };
        class _xx_SmokeShellRed
        {
            count = 3;
            magazine = "SmokeShellRed";
        };
        class _xx_B_IR_Grenade
        {
            count = 1;
            magazine = "B_IR_Grenade";
        };
    };
    class TransportItems
    {
        class _xx_ACE_fieldDressing
        {
            count = 10;
            name = "ACE_fieldDressing";
        };
        class _xx_ACE_salineIV_500
        {
            count = 2;
            name = "ACE_salineIV_500";
        };
        class _xx_ACE_EntrenchingTool
        {
            count = 1;
            name = "ACE_EntrenchingTool";
        };
    };
    class TransportWeapons
    {
    };
};
// Assault packs --------------------------------------------------------------------------------------
class cgqc_pack_mk1_assault : B_AssaultPack_rgr // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Vert";
};
class cgqc_pack_mk1_assault_desert : B_AssaultPack_cbr // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_desert";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Desert";
};
class cgqc_pack_mk1_assault_mcam : B_AssaultPack_mcamo // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_mcam";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Multicam";
};
class cgqc_pack_mk1_assault_cadpat : B_AssaultPack_dgtl // Cadpat
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_cadpat";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Cadpat-ish";
};
class cgqc_pack_mk1_assault_black : B_AssaultPack_blk // Black
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_black";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack Black";
};
/*
class cgqc_pack_mk1_assault_white : UK3CB_AAF_B_B_ASS_DIGI_BLK // White
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_assault_white";
    maximumLoad = 160;
    mass = 20;
    displayName = "CGQC AssaultPack White";
};*/
// Kitbags --------------------------------------------------------------------------------------
class cgqc_pack_mk1_kitbag : B_Kitbag_Base // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag";
    maximumLoad = 280;
    mass = 40;
    displayName = "CGQC Kitbag Vert";
    picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
    model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
    hiddenSelectionsTextures[] = {"\A3\weapons_f\ammoboxes\bags\data\backpack_fast_rgr_co.paa"};   
};
class cgqc_pack_mk1_kitbag_desert : B_mas_can_Kitbag_d // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_desert";
    maximumLoad = 280;
    mass = 40;
    displayName = "CGQC Kitbag Desert";
};
class cgqc_pack_mk1_kitbag_mcam : B_mas_can_Kitbag_m // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_mcam";
    maximumLoad = 280;
    mass = 40;
    displayName = "CGQC Kitbag Multicam";
};
/*
class cgqc_pack_mk1_kitbag_cadpat : rhssaf_kitbag_digital // Woodland
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_cadpat";
    maximumLoad = 280;
    mass = 40;
    displayName = "CGQC Kitbag Cadpat";
};
*/
/*
class cgqc_pack_mk1_kitbag_black : UK3CB_CW_US_B_LATE_B_RIF_04 // Black
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_black";
    maximumLoad = 280;
    mass = 40;
    displayName = "CGQC Kitbag Black";
};*/
class cgqc_pack_mk1_kitbag_white : B_Kitbag_rgr // Winter
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_kitbag_white";
    maximumLoad = 280;
    mass = 40;
    displayName = "CGQC Kitbag White";
    hiddenSelectionsTextures[] = {"\cgqc_base\containers\cgqc_kitbag_white.paa"};
};
// Radio Backpacks --------------------------------------------------------------------------------------
class cgqc_pack_mk1_Radiobag: B_RadioBag_01_eaf_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Vert";
};
class cgqc_pack_mk1_radiobag_desert : B_RadioBag_01_eaf_F // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_desert";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Desert";
};
class cgqc_pack_mk1_radiobag_mcam : B_RadioBag_01_wdl_F // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_mcam";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Multicam";
};
class cgqc_pack_mk1_radiobag_cadpat : B_RadioBag_01_tropic_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_cadpat";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Cadpat";
};
class cgqc_pack_mk1_radiobag_black : B_RadioBag_01_black_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_black";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag Black";
};
class cgqc_pack_mk1_radiobag_white : B_RadioBag_01_oucamo_F // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_radiobag_white";
    maximumLoad = 350;
    mass = 50;
    displayName = "CGQC Radiobag White";
};
// Carryalls --------------------------------------------------------------------------------------
class cgqc_pack_mk1_carryall : B_Carryall_khk // Base
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall";
    maximumLoad = 365;
    mass = 60;
    displayName = "CGQC Carryall Vert";
};
class cgqc_pack_mk1_carryall_desert :  B_Carryall_cbr // Desert
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_desert";
    maximumLoad = 365;
    mass = 60;
    displayName = "CGQC Carryall Desert";
};
class cgqc_pack_mk1_carryall_mcam : B_Carryall_mcamo // Multicam
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_mcam";
    maximumLoad = 365;
    mass = 60;
    displayName = "CGQC Carryall Multicam";
};
/*
class cgqc_pack_mk1_carryall_cadpat : UK3CB_LNM_B_B_CARRYALL_FLK_02 // Cadpat
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_cadpat";
    maximumLoad = 365;
    mass = 60;
    displayName = "CGQC Carryall Cadpat-ish";
};*/
class cgqc_pack_mk1_carryall_black : B_Carryall_khk // Black
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_black";
    maximumLoad = 365;
    mass = 60;
    displayName = "CGQC Carryall Black";
    hiddenSelectionsTextures[] = {"\cgqc_base\containers\cgqc_carryall_black.paa"};
};
class cgqc_pack_mk1_carryall_white : B_Carryall_oucamo // White
{
    scope = 2;
    author = "silent1";
    _generalMacro = "cgqc_pack_mk1_carryall_white";
    maximumLoad = 365;
    mass = 60;
    displayName = "CGQC Carryall White";
};
// Invisible backpack ---------------------------------------------------------------------------------
class cgqc_pack_mk1_tank_driver : cgqc_pack_mk1_magic
{
    scope = 1;
    class TransportMagazines
    {
    };
    class TransportItems
    {
  
    };
    class TransportWeapons
    {
    };
};
