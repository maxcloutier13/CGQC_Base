class Extended_PreInit_EventHandlers
{
    class CGQC_base
    {
        init = "execVM '\cgqc_base\factions\fnc_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers
{
    class CGQC_base
    {
        clientInit = "execVM '\cgqc_base\factions\fnc_postInit_client.sqf'";
    };
};

class Extended_PreStart_EventHandlers
{
    class CGQC_base
    {};
};