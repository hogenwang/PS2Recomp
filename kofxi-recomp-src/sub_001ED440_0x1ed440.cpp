#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED440
// Address: 0x1ed440 - 0x1ed470
void sub_001ED440_0x1ed440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED440_0x1ed440");
#endif

    switch (ctx->pc) {
        case 0x1ed468u: goto label_1ed468;
        default: break;
    }

    ctx->pc = 0x1ed440u;

    // 0x1ed440: 0x24850098  addiu       $a1, $a0, 0x98
    ctx->pc = 0x1ed440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x1ed444: 0x2484090c  addiu       $a0, $a0, 0x90C
    ctx->pc = 0x1ed444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2316));
    // 0x1ed448: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ed448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ed44c: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x1ed44cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x1ed450: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ed450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ed454: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1ed454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x1ed458: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ed458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ed45c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED45Cu;
            // 0x1ed460: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED464u;
    // 0x1ed464: 0x0  nop
    ctx->pc = 0x1ed464u;
    // NOP
label_1ed468:
    // 0x1ed468: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED468u;
            // 0x1ed46c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED470u;
    ctx->pc = 0x1ed470u;
}
