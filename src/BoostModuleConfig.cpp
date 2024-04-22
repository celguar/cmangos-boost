#include "BoostModuleConfig.h"

namespace cmangos_module
{
    BoostModuleConfig::BoostModuleConfig()
    : ModuleConfig("boost.conf")
    , enabled(false)
    {
    
    }

    bool BoostModuleConfig::OnLoad()
    {
        enabled = config.GetBoolDefault("Boost.Enable", false);
        return true;
    }
}