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

// Function: sub_0015C5B0
// Address: 0x15c5b0 - 0x15c5c0
void sub_0015C5B0_0x15c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C5B0_0x15c5b0");
#endif

    ctx->pc = 0x15c5b0u;

    // 0x15c5b0: 0x8057170  j           func_15C5C0
    ctx->pc = 0x15C5B0u;
    ctx->pc = 0x15C5C0u;
    sub_0015C5C0_0x15c5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x15C5B8u;
    // 0x15c5b8: 0x0  nop
    ctx->pc = 0x15c5b8u;
    // NOP
    // 0x15c5bc: 0x0  nop
    ctx->pc = 0x15c5bcu;
    // NOP
}
