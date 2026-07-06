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

// Function: sub_001CA780
// Address: 0x1ca780 - 0x1ca7e8
void sub_001CA780_0x1ca780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA780_0x1ca780");
#endif

    switch (ctx->pc) {
        case 0x1ca7b8u: goto label_1ca7b8;
        default: break;
    }

    ctx->pc = 0x1ca780u;

    // 0x1ca780: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ca780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ca784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca788: 0x246386a8  addiu       $v1, $v1, -0x7958
    ctx->pc = 0x1ca788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936232));
    // 0x1ca78c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca794: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ca794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ca798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ca798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ca79c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA79Cu;
    {
        const bool branch_taken_0x1ca79c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA79Cu;
        // 0x1ca7a0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca79c) {
            ctx->pc = 0x1CA7ACu;
            goto label_1ca7ac;
        }
    }
    ctx->pc = 0x1CA7A4u;
    // 0x1ca7a4: 0x244286a0  addiu       $v0, $v0, -0x7960
    ctx->pc = 0x1ca7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936224));
    // 0x1ca7a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ca7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ca7ac:
    // 0x1ca7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA7B4u;
    // 0x1ca7b4: 0x0  nop
    ctx->pc = 0x1ca7b4u;
    // NOP
label_1ca7b8:
    // 0x1ca7b8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ca7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ca7bc: 0x244286a8  addiu       $v0, $v0, -0x7958
    ctx->pc = 0x1ca7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936232));
    // 0x1ca7c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ca7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca7c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ca7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ca7c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ca7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ca7cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ca7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca7d0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA7D0u;
    {
        const bool branch_taken_0x1ca7d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7D0u;
        // 0x1ca7d4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7d0) {
            ctx->pc = 0x1CA7E0u;
            goto label_1ca7e0;
        }
    }
    ctx->pc = 0x1CA7D8u;
    // 0x1ca7d8: 0x244286a0  addiu       $v0, $v0, -0x7960
    ctx->pc = 0x1ca7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936224));
    // 0x1ca7dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ca7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ca7e0:
    // 0x1ca7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA7E8u;
}
