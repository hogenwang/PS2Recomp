#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EAE0
// Address: 0x19eae0 - 0x19eaf0
void sub_0019EAE0_0x19eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EAE0_0x19eae0");
#endif

    ctx->pc = 0x19eae0u;

    // 0x19eae0: 0x3e00008  jr          $ra
    ctx->pc = 0x19EAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EAE8u;
    // 0x19eae8: 0x0  nop
    ctx->pc = 0x19eae8u;
    // NOP
    // 0x19eaec: 0x0  nop
    ctx->pc = 0x19eaecu;
    // NOP
    ctx->pc = 0x19eaf0u;
}
