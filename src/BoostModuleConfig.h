#pragma once
#include "ModuleConfig.h"

namespace cmangos_module
{
    class BoostModuleConfig : public ModuleConfig
    {
    public:
        BoostModuleConfig();
        bool OnLoad() override;

    public:
        bool enabled;
        uint32 newRaceMinLevel;
        uint32 minLevelAlliance;
        uint32 minLevelHorde;
    };
}