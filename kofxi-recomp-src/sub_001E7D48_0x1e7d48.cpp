#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7D48
// Address: 0x1e7d48 - 0x1e7d60
void sub_001E7D48_0x1e7d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D48_0x1e7d48");
#endif

    ctx->pc = 0x1e7d48u;

    // 0x1e7d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d54: 0x806db16  j           func_1B6C58
    ctx->pc = 0x1E7D54u;
    ctx->pc = 0x1E7D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D54u;
            // 0x1e7d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C58u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E7D5Cu;
    // 0x1e7d5c: 0x0  nop
    ctx->pc = 0x1e7d5cu;
    // NOP
    ctx->pc = 0x1e7d60u;
}
