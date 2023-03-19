class B_Soldier_f;
// Basic soldier --------------------------------
class CGQC_Soldat_Base : B_Soldier_f
{
	author = "silent1";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	faction = "CGQC";
	displayName = "Soldat (Training)";
	uniformClass = "cgqc_uniform_mk1";
	camouflage = 1.4;
	weapons[] = {"Rangefinder", "cgqc_gun_p99_wood", "Put", "Throw"};
	respawnWeapons[] = {"Rangefinder", "cgqc_gun_p99_wood", "Put", "Throw"};
	items[] = {
		"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing",
		"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing",
		"ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine",
		"ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools",
		"ACE_IR_Strobe_Item", "ACE_microDAGR"};
	respawnItems[] = {
		"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing",
		"ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing",
		"ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine",
		"ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools",
		"ACE_IR_Strobe_Item", "ACE_microDAGR"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	respawnMagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag"};
	linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "cgqc_item_rangefinder", "cgqc_cap_green", "cgqc_vest_mk1_belt", "None"};
	backpack = "cgqc_pack_mk1_magic";
	editorPreview = "\CGQC_base\pics\cgqc_soldat_moderne.jpg";
	class EventHandlers {
        //init = "[] spawn CGQC_fnc_initTraining";
    };
};
class CGQC_Soldat_Rifleman : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Rifleman";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_rifleman";
	weapons[] = {"cgqc_gun_base_rifleman", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnWeapons[] = {"cgqc_gun_base_rifleman", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag" };
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag" };
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnLinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_TL : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "TeamLeader";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_tl";
	weapons[] = {"cgqc_gun_base_tl", "cgqc_gun_p99_wood", "Laserdesignator_01_khk_F", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell" };
	items[] = {"ACRE_PRC343", "ACRE_PRC152","ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_rf", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "ACE_optic_Hamr_2D", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_tl", "cgqc_gun_p99_wood", "Laserdesignator_01_khk_F", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell" };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_rf", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "ACE_optic_Hamr_2D", "", "", "", "", ""};
};
class CGQC_Soldat_Medic : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Medic";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_medic";
	weapons[] = {"cgqc_gun_base_rifleman", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag"  };
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan", "cgqc_helmet_mk1_medic", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_rifleman", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag"  };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan", "cgqc_helmet_mk1_medic", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_Maaws : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "AT (Maaws)";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_maaws";
	weapons[] = {"cgqc_gun_base_rifleman", "launch_MRAWS_green_rail_F", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_rifleman", "launch_MRAWS_green_rail_F", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag"};
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_HeliPilot : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Pilot (Helicopter)";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1_helipilot";
	backpack = "B_Parachute";
	weapons[] = {"cgqc_gun_base_pilot", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellRed", "SmokeShellRed", "SmokeShellRed", "SmokeShell", "SmokeShell", "SmokeShell"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR"};
	linkedItems[] = {"cgqc_vest_mk1_black", "cgqc_helmet_heli_black", "G_mas_can_bala_b", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_L", "", "optic_ACO_grn", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_pilot", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "40Rnd_46x30SD_mas_can_mag", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellRed", "SmokeShellRed", "SmokeShellRed", "SmokeShell", "SmokeShell", "SmokeShell"};
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR"};
	respawnlinkedItems[] = {"cgqc_vest_mk1_black", "cgqc_helmet_heli_black", "G_mas_can_bala_b", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_L", "", "optic_ACO_grn", "", "", "", "", ""};
};
class CGQC_Soldat_Sniper : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Sniper";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_sniper";
	weapons[] = {"cgqc_gun_base_sniper", "cgqc_gun_p99_wood", "Laserdesignator_01_khk_F", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "ACE_Chemlight_HiRed", "ACE_Chemlight_IR", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellRed", "SmokeShellRed", "SmokeShellRed", "B_IR_Grenade", "B_IR_Grenade",  };
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" , "ACE_ATragMX", "ACE_Kestrel4500"};
	linkedItems[] = {"cgqc_vest_mk1_tan_ar", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "", "", "optic_LRPS", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_sniper", "cgqc_gun_p99_wood", "Laserdesignator_01_khk_F", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "7Rnd_mas_can_408_Mag", "ACE_Chemlight_HiRed", "ACE_Chemlight_IR", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShell", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellBlue", "SmokeShellRed", "SmokeShellRed", "SmokeShellRed", "B_IR_Grenade", "B_IR_Grenade",  };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" , "ACE_ATragMX", "ACE_Kestrel4500"};
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_ar", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "", "", "optic_LRPS", "", "", "", "", ""};
};
class CGQC_Soldat_Marksman : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Marksman";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_marksman";
	weapons[] = {"cgqc_gun_base_marksman", "cgqc_gun_p99_wood", "Laserdesignator_01_khk_F", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_Chemlight_HiRed", "ACE_Chemlight_IR" };
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" , "ACE_ATragMX", "ACE_Kestrel4500"};
	linkedItems[] = {"cgqc_vest_mk1_tan_ar", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_B", "ACE_acc_pointer_green", "optic_AMS", "bipod_01_F_blk", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_marksman", "cgqc_gun_p99_wood", "Laserdesignator_01_khk_F", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_20Rnd_762x51_M118LR_Mag", "ACE_Chemlight_HiRed", "ACE_Chemlight_IR" };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" , "ACE_ATragMX", "ACE_Kestrel4500"};
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_ar", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_B", "ACE_acc_pointer_green", "optic_AMS", "bipod_01_F_blk", "", "", "", ""};
};
class CGQC_Soldat_Javelin : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "AT (Javelin)";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_javelin";
	weapons[] = {"cgqc_gun_base_rifleman", "cgqc_gun_mk1_Javelin", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_rifleman", "cgqc_gun_mk1_Javelin", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag" };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_Grenadier : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Grenadier";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_grenadier";
	weapons[] = {"cgqc_gun_base_grenadier", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell" , "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell" };
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_grenadier", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell" , "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell" };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_LMG : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "LMG";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_lmg";
	weapons[] = {"cgqc_gun_base_lmg", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F" , "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_lmg", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F" , "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F", "200Rnd_mas_can_556x45_Drum_Mag_F"};
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_HMG : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "HMG";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_hmg";
	weapons[] = {"cgqc_gun_base_hmg", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	magazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag" , "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag"};
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_H_MG_blk_F", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnWeapons[] = {"cgqc_gun_base_hmg", "cgqc_gun_p99_wood", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag" , "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag", "150Rnd_mas_can_762x51_Mag"};
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_H_MG_blk_F", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};
class CGQC_Soldat_engineer : CGQC_Soldat_Base
{
	author = "silent1";
	faction = "CGQC";
	displayName = "Engineer";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	uniformClass = "cgqc_uniform_mk1";
	backpack = "cgqc_pack_mk1_engineer";
	weapons[] = {"cgqc_gun_base_rifleman", "ACE_VMM3", "Rangefinder", "Throw", "Put"};
	magazines[] = {"HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag" };
	items[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	linkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
	respawnweapons[] = {"cgqc_gun_base_rifleman", "ACE_VMM3", "Rangefinder", "Throw", "Put"};
	respawnmagazines[] = {"HandGrenade", "HandGrenade", "ACE_M84", "ACE_M84", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag" };
	respawnitems[] = {"ACRE_PRC343", "ACRE_PRC152", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_fieldDressing", "ACE_epinephrine", "ACE_epinephrine", "ACE_EarPlugs", "ACE_morphine", "ACE_morphine", "ACE_splint", "ACE_tourniquet", "ACE_tourniquet", "ACE_CableTie", "ACE_CableTie", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_microDAGR" };
	respawnlinkedItems[] = {"cgqc_vest_mk1_tan_lr", "cgqc_helmet_mk1", "G_mas_can_shemag_gog_l", "ItemMap", "ItemCompass", "ItemWatch", "ItemGPS", "NVGoggles_mas_can_hv", "muzzle_snds_M", "ACE_acc_pointer_green", "optic_Arco_blk_F", "", "", "", "", ""};
};