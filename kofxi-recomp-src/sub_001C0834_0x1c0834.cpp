#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0834
// Address: 0x1c0834 - 0x1c0838
void sub_001C0834_0x1c0834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0834_0x1c0834");
#endif

    ctx->pc = 0x1c0834u;

    // 0x1c0834: 0x0  nop
    ctx->pc = 0x1c0834u;
    // NOP
    if (ctx->pc == 0x1c0834u) { ctx->pc = 0x1c0838u; }
}
