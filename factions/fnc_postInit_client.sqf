// --- postInit_client ----------------------------------------------------------
// Start everything player related

// Player identification --------------------------------------------------------------------------------------------
//Get some player info
cgqc_player_name = name player;
cgqc_player_steamid = getPlayerUID player;
cgqc_player_steamName = profileNameSteam;

// --- findRank ----------------------------------------------------------
// Match name with ranks
// Find rank prefix
_prefix = toLower (cgqc_player_name select[0, 4]);
_player_rank = 0;
_player_rank_name = "Unknown";

switch (true) do {
	case (_prefix find "sdt" == 0): {
		_player_rank = 1;
		_player_rank_name = "Soldat";
	};
	case (_prefix find "cpl" == 0):{
		if (_prefix find "cplc" == 0) then {
			_player_rank = 3;
			_player_rank_name = "Caporal Chef";
		}else{
			_player_rank = 2;
			_player_rank_name = "Caporal";
		};
	};
	case (_prefix find "sgt" == 0):{
		_player_rank = 4;
		_player_rank_name = "Sergent";
	};
	case (_prefix find "adju" == 0):{
		_player_rank = 5;
		_player_rank_name = "Adjudent";
	};
	case (_prefix find "slt" == 0):{
		_player_rank = 6;
		_player_rank_name = "Sous-Lieutenant";
	};
	case (_prefix find "lt" == 0):{
		_player_rank = 7;
		_player_rank_name = "Lieutenant";
	};
	case (_prefix find "capt" == 0):{
		_player_rank = 8;
		_player_rank_name = "Capitaine";
	};
	case (_prefix find "maj" == 0):{
		_player_rank = 9;
		_player_rank_name = "Major";
	};
	case (_prefix find "lcol" == 0):{
		_player_rank_name = "Lieutenant Colonel";
		_player_rank = 10;
	};
	case (_prefix find "col" == 0):{
		_player_rank = 11;
		_player_rank_name = "Colonel";
	};
	default
	{
		cgqc_player_known = false;
		_player_rank = 0;
		_player_rank_name = "Unknown";
	};
};

//CGQC Player found
if (cgqc_player_known) then {
	// Set the variable
	cgqc_player_rank_found = true;
	cgqc_player_rank = _player_rank;
	cgqc_player_rank_name = _player_rank_name;

	// Find patch
	switch (cgqc_player_steamid) do {
		case "76561198129263895" : {cgqc_player_patch = "cgqc_patch_audi";};
		case "76561198846742913" : {cgqc_player_patch = "cgqc_patch_braddock";};
		case "76561198024730191" : {cgqc_player_patch = "cgqc_patch_cloutier"; cgqc_player_max = true;};
		case "76561199227907428" : {cgqc_player_patch = "cgqc_patch_comeau";};
		case "76561198117404775" : {cgqc_player_patch = "cgqc_patch_fortin";};
		case "76561198057658135" : {cgqc_player_patch = "cgqc_patch_frechette";};
		case "76561198964313408" : {cgqc_player_patch = "cgqc_patch_genest";};
		case "76561198249898654" : {cgqc_player_patch = "cgqc_patch_laforest";};
		case "76561198087933626" : {cgqc_player_patch = "cgqc_patch_pinard";};
		case "76561197981463935" : {cgqc_player_patch = "cgqc_patch_tremblay";};
		case "76561198065449719" : {cgqc_player_patch = "cgqc_patch_villeneuve";};
		case "76561198255907431" : {cgqc_player_patch = "cgqc_patch_turcotte";};
		default	{
			// Patch par défaut: CGQC logo
			cgqc_player_patch = "cgqc_patch_logo";
		};
	};
	cgqc_player_patch_found = true;

	//Find beret
	switch (cgqc_player_rank) do {
		case 1: {  // Sdt
			cgqc_player_rank_beret = "cgqc_beret_yellow"; // Subalternes
		};
		case 2: { // Cpl
			cgqc_player_rank_beret = "cgqc_beret_vanilla";
		};
		case 3: { // CplC
			cgqc_player_rank_beret = "cgqc_beret_green"; 
		};
		case 4: { // Sgt
			cgqc_player_rank_beret = "cgqc_beret_gray"; // Sous-Officiers
		};
		case 5: { // Adju
			cgqc_player_rank_beret = "cgqc_beret_gray"; 
		};
		case 6: { // SLdt
			cgqc_player_rank_beret = "cgqc_beret_blue";// Officiers
		};
		case 7: { // Lieutenant
			cgqc_player_rank_beret = "cgqc_beret_blue";
		};
		case 8: { // Capitaine
			cgqc_player_rank_beret = "cgqc_beret_blue";
		};
		case 9: { // Major
			cgqc_player_rank_beret = "cgqc_beret_red";
		};
		case 10: { // L-Col
			cgqc_player_rank_beret = "cgqc_beret_red";
		};
		case 11: { // Colonel
			cgqc_player_rank_beret = "cgqc_beret_red";
		};
		default	{
			hint "Rank not detected";
			cgqc_player_rank_beret = "cgqc_beret_vanilla"; 
		};
	};
	// Set and keep patch 
	_set = [] spawn CGQC_fnc_setPatch;
};

//Switch beret to ready when getting inside vehicle
player addEventHandler ["GetInMan", {
	params ["_unit", "_role", "_vehicle", "_turret"];
	["ready", false] spawn CGQC_fnc_perksBasic;
}];

// Ace self interaction perks
_perks = [] spawn CGQC_fnc_addPerks; 

cgqc_postInitClient_done = true;