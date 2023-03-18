// --- perksBasic ----------------------------------------------------------
// Perks for the everyman
params ["_type", "_fromLoadout"];
//Make sure the call is local
waitUntil {!isNil "cgqc_player_patch_found"};
waitUntil {cgqc_player_rank_found};
switch (_type) do {
    case "chill":
    {
        if !(cgqc_player_chill) then {
            _new_face = "";
            // Send facestuff to backpack
            cgqc_player_oldFace = goggles player;
            player addItemToBackpack cgqc_player_oldFace;
            [player] call GRAD_slingHelmet_fnc_actionSling;
            removeGoggles player;
            // set hat
            player addHeadgear cgqc_player_rank_beret;
            // set glasses 
            player addGoggles _new_face;
            // Holster all weapons
            player action ['SwitchWeapon', player, player, 250];
            if (cgqc_player_max) then {
                player linkItem "immersion_cigs_cigar0_nv";
                player addGoggles "G_Aviator";
            };
            cgqc_player_chill = true;
            // Set radio left/right if this is from init 
            if !(_fromLoadout) then {
                _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Au Repos...</t><br/>");
                [_text, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
            };
        };
    };
    case "ready":
    {
        if (cgqc_player_chill) then {
            removeHeadgear player; // Get rid of beret
            [player] call GRAD_slingHelmet_fnc_actionUnSling;  // Unsling helmet
            player removeItemFromBackpack cgqc_player_oldFace; // Get back facestuff to backpack
            player addGoggles cgqc_player_oldFace;
            //player removeItemFromBackpack cgqc_player_oldNvg; // Get back nvg's from backpack
            //player linkItem cgqc_player_oldNvg;
            cgqc_player_chill = false; // All done
            if !(_fromLoadout) then {
                _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Prêt au combat</t><br/>");
                [_text, 0, 0, 2, 2] spawn BIS_fnc_dynamicText;
            };
        };
    };
};

