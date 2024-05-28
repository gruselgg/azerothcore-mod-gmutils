/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 * Copyright (C) 2024+ Grusel <www.github.com/gruselgg>
 */

// From SC
void AddGMUtilsScripts();

// Add all
// cf. the naming convention https://github.com/azerothcore/azerothcore-wotlk/blob/master/doc/changelog/master.md#how-to-upgrade-4
// additionally replace all '-' in the module folder name with '_' here
void Addazerothcore_mod_gmutilsScripts()
{
    AddGMUtilsScripts();
}

void Addmod_gmutilsScripts()
{
    AddGMUtilsScripts();
}
