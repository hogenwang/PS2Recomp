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

// Function: sub_001CA6F0
// Address: 0x1ca6f0 - 0x1ca750
void sub_001CA6F0_0x1ca6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA6F0_0x1ca6f0");
#endif

    ctx->pc = 0x1ca6f0u;

    // 0x1ca6f0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1ca6f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca6f8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1ca6fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ca6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca700: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA700u;
    {
        const bool branch_taken_0x1ca700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA700u;
        // 0x1ca704: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca700) {
            ctx->pc = 0x1CA718u;
            goto label_1ca718;
        }
    }
    ctx->pc = 0x1CA708u;
    // 0x1ca708: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1ca70c: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
    // 0x1ca710: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA710u;
    {
        const bool branch_taken_0x1ca710 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA710u;
        // 0x1ca714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca710) {
            ctx->pc = 0x1CA724u;
            goto label_1ca724;
        }
    }
    ctx->pc = 0x1CA718u;
label_1ca718:
    // 0x1ca718: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1ca71c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ca71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ca720: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ca720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ca724:
    // 0x1ca724: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA72Cu;
    // 0x1ca72c: 0x0  nop
    ctx->pc = 0x1ca72cu;
    // NOP
    // 0x1ca730: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ca730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ca734: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA734u;
        // 0x1ca738: 0xac408698  sw          $zero, -0x7968($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA73Cu;
    // 0x1ca73c: 0x0  nop
    ctx->pc = 0x1ca73cu;
    // NOP
    // 0x1ca740: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ca740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ca744: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA744u;
        // 0x1ca748: 0xac408698  sw          $zero, -0x7968($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA74Cu;
    // 0x1ca74c: 0x0  nop
    ctx->pc = 0x1ca74cu;
    // NOP
}
