#include "BoostModuleConfig.h"

namespace cmangos_module
{
    BoostModuleConfig::BoostModuleConfig()
    : ModuleConfig("boost.conf")
    , enabled(false)
    , cost(0U)
    {
    
    }

    bool BoostModuleConfig::OnLoad()
    {
        enabled = config.GetBoolDefault("Boost.Enable", false);
        cost = config.GetIntDefault("Boost.Cost", 10000U);
        return true;
    }
}