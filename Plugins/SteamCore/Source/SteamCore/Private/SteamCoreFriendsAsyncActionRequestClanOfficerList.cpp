#include "SteamCoreFriendsAsyncActionRequestClanOfficerList.h"

class USteamCoreFriendsAsyncActionRequestClanOfficerList;
class UObject;

USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID SteamIDClan, float Timeout) {
    return NULL;
}

void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const FClanOfficerListResponse& Data, bool bWasSuccessful) {
}

USteamCoreFriendsAsyncActionRequestClanOfficerList::USteamCoreFriendsAsyncActionRequestClanOfficerList() {
}
