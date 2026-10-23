/* steam_stub.c - stub out steam_api imports (Goldberg-equivalent, no Steam on Android) */
#include "port_prelude.h"

/* The decompiled code calls SteamAPI_* functions; provide inert implementations.
   Steam API C ABI (x86): steam callbacks etc. For port purposes all return 0/false. */

int  SteamAPI_Init(void) { return 0; }
void SteamAPI_Shutdown(void) {}
void SteamAPI_RunCallbacks(void) {}
int  SteamAPI_RestartAppIfNecessary(uint32_t appId) { return 0; }
const char *SteamAPI_GetSteamInstallPath(void) { return ""; }
int  SteamAPI_IsSteamRunning(void) { return 0; }
void SteamAPI_SetMiniDumpComment(const char *c) {}
void SteamAPI_WriteMiniDump(uint32_t a, void *b, uint32_t c) {}
int  SteamUser_GetSteamID(void *self) { return 0; }
int  SteamUser_BLoggedOn(void *self) { return 0; }
int  SteamUtils_GetAppID(void *self) { return 476530; }
int  SteamRemoteStorage_GetFileCount(void *self) { return 0; }
int  SteamRemoteStorage_GetFileSize(void *self, const char *name) { return 0; }
int  SteamRemoteStorage_FileExists(void *self, const char *name) { return 0; }
int  SteamRemoteStorage_FileRead(void *self, const char *name, void *buf, int size) { return 0; }
int  SteamRemoteStorage_FileWrite(void *self, const char *name, const void *buf, int size) { return 1; }
int  SteamRemoteStorage_FileDelete(void *self, const char *name) { return 1; }
int  SteamUserStats_RequestCurrentStats(void *self) { return 0; }
int  SteamUserStats_GetAchievement(void *self, const char *name, int *ach) { *ach = 0; return 0; }
int  SteamUserStats_SetAchievement(void *self, const char *name) { return 0; }
int  SteamUserStats_StoreStats(void *self) { return 0; }
