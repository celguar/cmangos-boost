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
        uint32 starterGold;
        bool enableBoost58;
        bool enableBoost60;
        bool enableBoost70;
        bool enableLevel58;
        bool enableLevel60;
        bool enableLevel70;
        bool enableTaxi;
        bool enableBags;
        bool enableFirstAid;
        bool enableSpells;
        bool enableMounts;
        bool enablePet;
        bool enableAmmo;
        bool enableResetTalents;
        bool enableResetInstances;
        bool enableUntrainPet;
        bool enableFoodRegs;
        bool enableGearBlue58;
        bool enableBoost60Bis;
        bool enableBoost70Bis;
        bool enableTeleports;
    };
}