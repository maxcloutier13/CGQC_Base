class B_Soldier_f;
// Basic soldier --------------------------------
class CGQC_Soldat_Base : B_Soldier_f
{
	author = "silent1";
	faction = "CGQC";
	editorSubcategory = "EdSubcat_cgqc_Training";
	side = 1;
	displayName = "Soldat";
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