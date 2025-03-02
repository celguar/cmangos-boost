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
        starterGold = config.GetIntDefault("Boost.StarterGold", 1000000);
        enableBags = config.GetBoolDefault("Boost.Bags", true);
        enableBoost58 = config.GetBoolDefault("Boost.Boost58", true);
        enableBoost60 = config.GetBoolDefault("Boost.Boost60", true);
        enableBoost70 = config.GetBoolDefault("Boost.Boost70", true);
        enableLevel58 = config.GetBoolDefault("Boost.Level58", true);
        enableLevel60 = config.GetBoolDefault("Boost.Level60", true);
        enableLevel70 = config.GetBoolDefault("Boost.Level70", true);
        enableFoodRegs = config.GetBoolDefault("Boost.FoodRegs", true);
        enablePet = config.GetBoolDefault("Boost.Pet", true);
        enableAmmo = config.GetBoolDefault("Boost.Ammo", true);
        enableResetTalents = config.GetBoolDefault("Boost.ResetTalents", true);
        enableResetInstances = config.GetBoolDefault("Boost.ResetInstances", true);
        enableUntrainPet = config.GetBoolDefault("Boost.UntrainPet", true);
        enableMounts = config.GetBoolDefault("Boost.Mounts", true);
        enableTaxi = config.GetBoolDefault("Boost.Taxi", true);
        enableFirstAid = config.GetBoolDefault("Boost.FirstAid", true);
        enableSpells = config.GetBoolDefault("Boost.Spells", true);
        enableGearBlue58 = config.GetBoolDefault("Boost.GearBlue58", true);
        enableBoost60Bis = config.GetBoolDefault("Boost.Level60Bis", true);
        enableBoost70Bis = config.GetBoolDefault("Boost.Level70Bis", true);
        enableTeleports = config.GetBoolDefault("Boost.Teleports", true);
        return true;
    }
}