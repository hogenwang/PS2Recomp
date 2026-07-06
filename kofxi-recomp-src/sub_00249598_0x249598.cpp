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

// Function: sub_00249598
// Address: 0x249598 - 0x2495d8
void sub_00249598_0x249598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249598_0x249598");
#endif

    switch (ctx->pc) {
        case 0x2495b0u: goto label_2495b0;
        default: break;
    }

    ctx->pc = 0x249598u;

    // 0x249598: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x249598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24959c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x24959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2495a0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2495a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2495a4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2495a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2495a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2495ac: 0x0  nop
    ctx->pc = 0x2495acu;
    // NOP
label_2495b0:
    // 0x2495b0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2495b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2495b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2495B4u;
    {
        const bool branch_taken_0x2495b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2495B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495B4u;
        // 0x2495b8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495b4) {
            ctx->pc = 0x2495CCu;
            goto label_2495cc;
        }
    }
    ctx->pc = 0x2495BCu;
    // 0x2495bc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2495bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2495c0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2495C0u;
    {
        const bool branch_taken_0x2495c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495C0u;
        // 0x2495c4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495c0) {
            ctx->pc = 0x2495B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2495b0;
        }
    }
    ctx->pc = 0x2495C8u;
    // 0x2495c8: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x2495c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
label_2495cc:
    // 0x2495cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2495CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2495CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2495D4u;
    // 0x2495d4: 0x0  nop
    ctx->pc = 0x2495d4u;
    // NOP
    if (ctx->pc == 0x2495d4u) { ctx->pc = 0x2495d8u; }
}
