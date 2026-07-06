#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2700
// Address: 0x1b2700 - 0x1b2718
void sub_001B2700_0x1b2700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2700_0x1b2700");
#endif

    ctx->pc = 0x1b2700u;

    // 0x1b2700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b270c: 0x80718fc  j           func_1C63F0
    ctx->pc = 0x1B270Cu;
    ctx->pc = 0x1B2710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B270Cu;
            // 0x1b2710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C63F0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C63F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B2714u;
    // 0x1b2714: 0x0  nop
    ctx->pc = 0x1b2714u;
    // NOP
    ctx->pc = 0x1b2718u;
}
