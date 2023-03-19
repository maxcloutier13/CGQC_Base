// --- loadMk2 ----------------------------------------------------------
// Open up the arsenal according to rank
_type = _this select 0;
//param [0, objNull, [objNull]];

[_type] spawn { 

	params ["_type"];
	if (isNil "loadMk2_lastRun") then {
		loadMk2_lastRun = 25;
	};
	loadMk2_firstRun = true;
	_zeus = false;
	_items = cgqc_mk2_arsenal_base;
	_found = false;
	switch (_type) do {
		case 0: { 
			hint "Arsenal: Base";
			_items = cgqc_mk2_arsenal_base;
			_found = true;
		};
		default	{
			hintc "fnc_loadMk2 fucked up. ";
		};
	};
	if (!_zeus) then {
		//hintc "Not Zeus: Pop box";
		waitUntil {_found}; 
		// Init crate
		[player, _items] call ace_arsenal_fnc_initBox;
		// Open arsenal
		[player, player, false] call ace_arsenal_fnc_openBox;
	};
};






