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



cgqc_preInit_done = true;