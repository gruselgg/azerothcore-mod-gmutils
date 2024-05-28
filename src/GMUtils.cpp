/*
 * Copyright (C) 2016+ AzerothCore <www.azerothcore.org>, released under GNU AGPL v3 license: https://github.com/azerothcore/azerothcore-wotlk/blob/master/LICENSE-AGPL3
 * Copyright (C) 2024+ Grusel <www.github.com/gruselgg>
 */

#include "ScriptMgr.h"
#include "Player.h"
#include "Config.h"
#include "Chat.h"

enum GMUtilsAcoreString
{
    HELLO_WORLD = 35410
};

// Add player scripts
class GMUtils : public PlayerScript
{
public:
    GMUtils() : PlayerScript("GMUtils") { }

    void OnLogin(Player* player) override
    {
        if (sConfigMgr->GetOption<bool>("GMUtils.Enable", false))
        {
            ChatHandler(player->GetSession()).PSendSysMessage("This server is running the GMUtils module.");
            ChatHandler(player->GetSession()).PSendSysMessage(HELLO_WORLD);
        }
    }
};

// Add all scripts in one
void AddGMUtilsScripts()
{
    new GMUtils();
}
