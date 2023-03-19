// mk2 box 
_crate = _this select 0;

waitUntil {sleep 1; cgqc_mk2_arsenal_init_done};
if (!isNil "_crate") then {    
 	// Mk2 arsenal ---------------------------------------------------------------------------------------------------
    _action = [ "menu_mk2_5", "Arsenal: Complet", "cgqc_base\textures\icon_arsenal", {[0] execVM "\cgqc_base\functions\fnc_loadMk2.sqf"}, {true} ] call ace_interact_menu_fnc_createAction;
    _adding = [ _crate, 0, ["ACE_MainActions" ], _action ] call  ace_interact_menu_fnc_addActionToObject;
};