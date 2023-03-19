// Mod info -----------------------------------------------------------------------------------------
#include "cfg_patches.cpp"
// Faction
class cfgFactionClasses {
	#include "cfg_factions.cpp"
};

// Heads/Faces --------------------------------------------------------------------------------------
class CfgFaces {
	#include "cfg_heads.cpp"
};

// Guns and equipment
class cfgWeapons {
	#include "cfg_uniforms.cpp"
	#include "cfg_guns.cpp"
	#include "cfg_helmets.cpp"
	#include "cfg_vests.cpp"
};

// Patches
class cfgUnitInsignia {
	#include "cfg_insignas.cpp"
};

// Editor categories
class CfgEditorSubcategories {
	class EdSubcat_cgqc_Training {
		displayName = "Men (Base)";
	};
};

// Units, backpacks, flags
class cfgVehicles {
	#include "cfg_flags.cpp"
	#include "cfg_units.cpp"
	#include "cfg_backpacks.cpp"
	#include "cfg_items.cpp"
};

// Custom functions
class cfgFunctions {
	#include "cfg_functions.cpp"
};

// Custom events
#include "cfg_eventhandlers.cpp"