#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00204480
// Address: 0x204480 - 0x204490
void sub_00204480_0x204480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204480_0x204480");
#endif

    ctx->pc = 0x204480u;

    // 0x204480: 0x8082e38  j           func_20B8E0
    ctx->pc = 0x204480u;
    ctx->pc = 0x204484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204480u;
            // 0x204484: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B8E0u;
    {
        auto targetFn = runtime->lookupFunction(0x20B8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x204488u;
    // 0x204488: 0x0  nop
    ctx->pc = 0x204488u;
    // NOP
    // 0x20448c: 0x0  nop
    ctx->pc = 0x20448cu;
    // NOP
    ctx->pc = 0x204490u;
}
