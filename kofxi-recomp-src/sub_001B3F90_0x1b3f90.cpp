#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3F90
// Address: 0x1b3f90 - 0x1b3fa8
void sub_001B3F90_0x1b3f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3F90_0x1b3f90");
#endif

    ctx->pc = 0x1b3f90u;

    // 0x1b3f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3f9c: 0x806cf9a  j           func_1B3E68
    ctx->pc = 0x1B3F9Cu;
    ctx->pc = 0x1B3FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3F9Cu;
            // 0x1b3fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3E68u;
    {
        auto targetFn = runtime->lookupFunction(0x1B3E68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B3FA4u;
    // 0x1b3fa4: 0x0  nop
    ctx->pc = 0x1b3fa4u;
    // NOP
    ctx->pc = 0x1b3fa8u;
}
