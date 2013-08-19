#ifndef _INCLUDE_NATIVES_H_
#define _INCLUDE_NATIVES_H_

#include "extension.h"
#include "vhook.h"

extern bool g_bAllowGamerules;
extern HandleType_t g_HookSetupHandle;
extern HandleType_t g_HookParamsHandle;
extern HandleType_t g_HookReturnHandle;
extern CUtlVector<DHooksManager *> g_pHooks;
#endif
