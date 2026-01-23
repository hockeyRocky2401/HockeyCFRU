// #ifndef DEBUG_AI_H
// #define DEBUG_AI_H

#include "mgba.h"
#include "gba/types.h"


static inline void DebugAI_OpenMgba(void)
{
#ifdef DEBUG_AI
    static bool8 opened = FALSE;
    if (!opened)
    {
        MgbaOpen();
        opened = TRUE;
    }
#else
    (void)0;
#endif
}

#ifdef DEBUG_AI

// Non-format log (safe)
#define AI_LOG(msg) \
    do { DebugAI_OpenMgba(); MgbaPrintf(MGBA_LOG_INFO, "[AI] %s", (msg)); } while (0)

// Format log (only use when you have args)
#define AI_LOGF(fmt, ...) \
    do { DebugAI_OpenMgba(); MgbaPrintf(MGBA_LOG_INFO, "[AI] " fmt, __VA_ARGS__); } while (0)

#else

#define AI_LOG(...)  ((void)0)
#define AI_LOGF(...) ((void)0)

#endif // DEBUG_AI
