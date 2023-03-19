// mk2 box 
_crate = _this select 0;

waitUntil {sleep 1; cgqc_mk2_arsenal_init_done};
if (!isNil "_crate") then {    
 	// Mk2 arsenal ---------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_5", "Arsenal: Complet", "cgqc_base\textures\icon_arsenal", {[0] execVM "\cgqc_base\functions\fnc_loadMk2.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
    // Mk1 Camo Switcher ---------------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_camo", "Camo", "CGQC_base\textures\icon_camo", {""}, {!cgqc_perks_ghillie_isOn} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Base/Training uniform 
    _action = [ "menu_mk2_camo_base", "Training - Vert", "", {["tan"] execVM "\CGQC_base\functions\fnc_camoSwitch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Desert uniform 
    _action = [ "menu_mk2_camo_desert", "Desert", "", {["desert"] execVM "\CGQC_base\functions\fnc_camoSwitch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Multicam uniform 
    _action = [ "menu_mk2_camo_multicam", "Multicam", "", {["mcam"] execVM "\CGQC_base\functions\fnc_camoSwitch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Woodland uniform 
    _action = [ "menu_mk2_camo_woodland", "Cadpat", "", {["cadpat"] execVM "\CGQC_base\functions\fnc_camoSwitch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Black uniform 
    _action = [ "menu_mk2_camo_black", "Black", "", {["black"] execVM "\CGQC_base\functions\fnc_camoSwitch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
    // Winter uniform 
    _action = [ "menu_mk2_camo_winter", "Winter", "", {["white"] execVM "\CGQC_base\functions\fnc_camoSwitch.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" , "menu_mk2_camo"], _action ] call ace_interact_menu_fnc_addActionToObject;
};