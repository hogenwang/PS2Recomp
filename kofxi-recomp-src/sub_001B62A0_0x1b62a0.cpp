#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B62A0
// Address: 0x1b62a0 - 0x1b62d0
void sub_001B62A0_0x1b62a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B62A0_0x1b62a0");
#endif

    switch (ctx->pc) {
        case 0x1b62b8u: goto label_1b62b8;
        default: break;
    }

    ctx->pc = 0x1b62a0u;

    // 0x1b62a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b62a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b62a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b62a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b62a8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b62ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b62acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62b0: 0x806ae7e  j           func_1AB9F8
    ctx->pc = 0x1B62B0u;
    ctx->pc = 0x1B62B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62B0u;
            // 0x1b62b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB9F8u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B62B8u;
label_1b62b8:
    // 0x1b62b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b62bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b62bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b62c0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1b62c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b62c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b62c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62c8: 0x806ae80  j           func_1ABA00
    ctx->pc = 0x1B62C8u;
    ctx->pc = 0x1B62CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B62C8u;
            // 0x1b62cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABA00u;
    {
        auto targetFn = runtime->lookupFunction(0x1ABA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B62D0u;
    ctx->pc = 0x1b62d0u;
}
