#include "BoostModuleConfig.h"

namespace cmangos_module
{
    BoostModuleConfig::BoostModuleConfig()
    : ModuleConfig("boost.conf")
    , enabled(false)
    , minLevelAlliance(1)
    , minLevelHorde(1)
    , newRaceMinLevel(1)
    {
    
    }

    bool BoostModuleConfig::OnLoad()
    {
        enabled = config.GetBoolDefault("Boost.Enable", false);
        minLevelAlliance = config.GetIntDefault("Boost.MinLevelAlliance", 1);
        minLevelHorde = config.GetIntDefault("Boost.MinLevelHorde", 1);
        newRaceMinLevel = config.GetIntDefault("Boost.MinLevelNewRace", 1);
        return true;
    }
}