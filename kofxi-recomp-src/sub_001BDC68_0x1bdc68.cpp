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

// Function: sub_001BDC68
// Address: 0x1bdc68 - 0x1bdcb8
void sub_001BDC68_0x1bdc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDC68_0x1bdc68");
#endif

    switch (ctx->pc) {
        case 0x1bdc98u: goto label_1bdc98;
        default: break;
    }

    ctx->pc = 0x1bdc68u;

    // 0x1bdc68: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bdc6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDC6Cu;
    {
        const bool branch_taken_0x1bdc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC6Cu;
        // 0x1bdc70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc6c) {
            ctx->pc = 0x1BDC90u;
            goto label_1bdc90;
        }
    }
    ctx->pc = 0x1BDC74u;
    // 0x1bdc74: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x1bdc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x1bdc78: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x1bdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x1bdc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdc80: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1bdc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x1bdc84: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1bdc84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1bdc88: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC88u;
        // 0x1bdc8c: 0xac870020  sw          $a3, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC90u;
label_1bdc90:
    // 0x1bdc90: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC90u;
        // 0x1bdc94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDC98u;
label_1bdc98:
    // 0x1bdc98: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bdc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bdc9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDC9Cu;
    {
        const bool branch_taken_0x1bdc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDC9Cu;
        // 0x1bdca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdc9c) {
            ctx->pc = 0x1BDCACu;
            goto label_1bdcac;
        }
    }
    ctx->pc = 0x1BDCA4u;
    // 0x1bdca4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1bdca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1bdca8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1bdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1bdcac:
    // 0x1bdcac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDCB4u;
    // 0x1bdcb4: 0x0  nop
    ctx->pc = 0x1bdcb4u;
    // NOP
    if (ctx->pc == 0x1bdcb4u) { ctx->pc = 0x1bdcb8u; }
}
