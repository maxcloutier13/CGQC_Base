_type = _this select 0;
//hintc format ["TransitionType:%1", _type];sleep 1;
_text = "";
_text_insert = "";
if (cgqc_setting_show_transition) then {

    switch (_type) do {
        case "role":{ 
            _text_insert = cgqc_mk2_role;
            _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Role: %1</t><br/>");
            
        };
        case "camo":{ 
            _text_insert = "camo";
            _text = ("<br/>" + "<br/>" + "<br/>" +"<t size='2' >Changement de %1</t><br/>");
        };
    };
    //Pop le texte
    _text = format [_text, _text_insert];
    [_text, 0, 0, 3, 2] spawn BIS_fnc_dynamicText;
    titleFadeOut 2;
    // Wake up with blur
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    titleCut ["", "BLACK IN", 2];
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 2;
};

