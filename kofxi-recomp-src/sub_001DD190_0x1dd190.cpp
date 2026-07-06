#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD190
// Address: 0x1dd190 - 0x1dd198
void sub_001DD190_0x1dd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD190_0x1dd190");
#endif

    ctx->pc = 0x1dd190u;

    // 0x1dd190: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD190u;
            // 0x1dd194: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD198u;
    ctx->pc = 0x1dd198u;
}
