// --- preInit ----------------------------------------------------------
// Set everything that needs to be there before editor/menu/briefing

// CGQC Variables ===================================================================================================
// *** Init **********************
cgqc_preInit_done = false;
cgqc_postInitClient_done = false;
cgqc_postInitServer_done = false;
cgqc_intro_running = false;
// *** Player **********************
cgqc_player_known = true;
cgqc_player_patch = "";
cgqc_player_patch_found = false;
cgqc_custom_playername = "";
cgqc_player_rank = 0;
cgqc_player_rank_name = "";
cgqc_player_rank_found = false;
cgqc_player_rank_unknown = false;
cgqc_player_rank_beret = "";
cgqc_player_role = "";
cgqc_player_chill = false;
cgqc_player_oldNvg = "";
cgqc_player_oldFace = "";
cgqc_player_slinged_helmet = "";
cgqc_player_max = false;
cgqc_player_23rd = false;
// *** DLC stuff *******************
cgqc_player_ownedDLCs = [];
cgqc_player_hasContact = false;
// *** Perks **********************
cgqc_perks_basic = false;
cgqc_perks_recon = false;
cgqc_perks_pilot = false;
cgqc_perks_driver = false;
cgqc_perks_pilot_hasCrew = false;
cgqc_perks_driver_hasDriver = false;
cgqc_perks_eng = false;
cgqc_perks_medic = false;
// Advanced perks 
cgqc_perks_ghillie_isOn = false;
cgqc_perks_ghillie_uniform = "";
cgqc_perk_player_stash_on = false;
// Zeus perks
cgqc_zeus_crate = false;
cgqc_zeus_cargo = false;
// *** Mk2 **********************
cgqc_mk2_arsenal_init_done = false;
cgqc_mk2_arsenal_locked = true;
cgqc_mk2_animation_locked = false;
// *** Refueling *****************
cgqc_flag_supply = false;
cgqc_flag_supply_rapide = false;
// *** Settings *****************
cgqc_setting_show_transition = true;

cgqc_preInit_done = true;