_camo = _this select 0;
// Fade to black  
cutText ["", "BLACK FADED", 999];
titleText ["", "PLAIN"];
// Fade to black transition
["camo"] execVM "\CGQC_base\functions\fnc_transition.sqf";
//disableUserInput true;

// Check if player in chill mode
if (cgqc_player_chill) then {
    ["ready", true] call CGQC_fnc_perksBasic;
    waitUntil {!cgqc_player_chill};
};

sleep 1;

// Init new variables
_helmet_new = "";
_uniform_new = "";
_vest_new = "";
cgqc_backpack_new = "";
_items_uniform = [];
_items_vest = [];
_items_pack = [];
// Current soldier equipment
cgqc_helmet_old = headgear player;
cgqc_uniform_old = uniform player;
cgqc_vest_old = vest player;
cgqc_backpack_old = backpack player;

// Save inventory 
_items_uniform = uniformItems player;
_items_vest = vestItems player;
_items_pack = backpackItems player;

// Delete old stuff 
removeHeadgear player;
removeUniform player;
removeVest player;
removeBackpack player;

// Backpack type first
cgqc_backpack_new = "cgqc_pack_mk1";
// Check backpack variant 
cgqc_backpack_old = toLower cgqc_backpack_old;
if ((cgqc_backpack_old find["radiobag", 0]) > 0) then {cgqc_backpack_new = cgqc_backpack_new + "_radiobag";};
if ((cgqc_backpack_old find["_tl", 0]) > 0) then {cgqc_backpack_new = cgqc_backpack_new + "_radiobag";cgqc_backpack_old = "cgqc_pack_mk1_radiobag";};
if ((cgqc_backpack_old find["assault", 0]) > 0) then {cgqc_backpack_new = cgqc_backpack_new + "_assault";}; 
if ((cgqc_backpack_old find["_rifleman", 0]) > 0) then {cgqc_backpack_new = cgqc_backpack_new + "_assault";cgqc_backpack_old = "cgqc_pack_mk1_assault";}; 
if ((cgqc_backpack_old find["_grenadier", 0]) > 0) then {cgqc_backpack_new = cgqc_backpack_new + "_assault";cgqc_backpack_old = "cgqc_pack_mk1_assault";}; 
if ((cgqc_backpack_old find["carryall", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_carryall";};
if ((cgqc_backpack_old find["_engineer", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_carryall";cgqc_backpack_old = "cgqc_pack_mk1_carryall";};
if ((cgqc_backpack_old find["_sniper", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_carryall";cgqc_backpack_old = "cgqc_pack_mk1_carryall";};
if ((cgqc_backpack_old find["kitbag", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";};
if ((cgqc_backpack_old find["_medic", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";cgqc_backpack_old = "cgqc_pack_mk1_kitbag";};
if ((cgqc_backpack_old find["_marksman", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";cgqc_backpack_old = "cgqc_pack_mk1_kitbag";};
if ((cgqc_backpack_old find["_javelin", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";cgqc_backpack_old = "cgqc_pack_mk1_kitbag";};
if ((cgqc_backpack_old find["_maaws", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";cgqc_backpack_old = "cgqc_pack_mk1_kitbag";};
if ((cgqc_backpack_old find["_lmg", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";cgqc_backpack_old = "cgqc_pack_mk1_kitbag";};
if ((cgqc_backpack_old find["_hmg", 0]) > 0) then {	cgqc_backpack_new = cgqc_backpack_new + "_kitbag";cgqc_backpack_old = "cgqc_pack_mk1_kitbag";};
// Sets base names 
if (_camo == "tan") then {
	_helmet_new = "cgqc_helmet_mk1";
	_uniform_new = "cgqc_uniform_mk1";
	_vest_new = "cgqc_vest_mk1_" + _camo;
} else {
	_helmet_new = "cgqc_helmet_mk1_" + _camo;
	_uniform_new = "cgqc_uniform_mk1_" + _camo;
	_vest_new = "cgqc_vest_mk1_" + _camo;
	cgqc_backpack_new = cgqc_backpack_new + "_" + _camo;
};

if ((cgqc_backpack_old find["magic", 0]) > 0) then {cgqc_backpack_new = "cgqc_pack_mk1_magic";};
if ((cgqc_backpack_old find["_tank_driver", 0]) > 0) then {cgqc_backpack_new = "cgqc_pack_mk1_magic";};


// ------- Helmet -------------------------------------------------------------------------------
if ((cgqc_helmet_old find["_medic", 0]) > 0) then {
	_helmet_new = _helmet_new + "_medic";
};
// ------- vest -------------------------------------------------------------------------------
if ((cgqc_vest_old find["_ar", 0]) > 0) then {
	_vest_new = _vest_new + "_ar";
};
if ((cgqc_vest_old find["_lr", 0]) > 0) then {
	_vest_new = _vest_new + "_lr";
};
if ((cgqc_vest_old find["_rf", 0]) > 0) then {
	_vest_new = _vest_new + "_rf";
};

// ------- Add stuff ----------------------------------------------------------------------------
// Add selected uniform
player addHeadgear _helmet_new;
player forceAddUniform _uniform_new;
player addVest _vest_new;
player addBackpack cgqc_backpack_new;

// Check that equiment switch worked
check_helmet = headgear player;
check_uniform = uniform player;
check_vest = vest player;
check_backpack = backpack player;
if (check_helmet == "") then {
	player addHeadgear cgqc_helmet_old;
};
if (check_uniform == "") then {
	player forceAddUniform cgqc_uniform_old;
};
if (check_vest == "") then {
	player addVest cgqc_vest_old;
};
if (check_backpack == "") then {
	player addBackpack cgqc_backpack_old;
};

// Flush potential leftovers 
clearAllItemsFromBackpack player;

// load items in new uniform
{
	player addItemToUniform _x
} forEach _items_uniform;
{
	player addItemToVest _x
} forEach _items_vest;
{
	player addItemToBackpack _x
} forEach _items_pack;
// Return control to player
//disableUserInput false;

// Set back patch
player setVariable ["BIS_fnc_setUnitInsignia_class", nil]; //Remove patch
[ player, cgqc_player_patch ] call BIS_fnc_setUnitInsignia;