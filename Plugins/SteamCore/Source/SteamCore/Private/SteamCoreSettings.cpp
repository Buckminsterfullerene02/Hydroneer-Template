#include "SteamCoreSettings.h"

USteamCoreSettings::USteamCoreSettings() {
    this->DisabledSubsystems = 0;
    this->bEnabled = true;
    this->bRelaunchInSteam = false;
    this->bVACEnabled = true;
    this->bAllowP2PPacketRelay = true;
    this->P2PConnectionTimeout = 90;
    this->SteamAppId = 1106840;
    this->SteamDevAppId = 1106840;
    this->Port = 7777;
    this->GameServerQueryPort = 27015;
    this->GameVersion = TEXT("1.0.0.0");
}

