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

// Function: sub_00268620
// Address: 0x268620 - 0x2686a8
void sub_00268620_0x268620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268620_0x268620");
#endif

    switch (ctx->pc) {
        case 0x26864cu: goto label_26864c;
        case 0x268660u: goto label_268660;
        case 0x268688u: goto label_268688;
        default: break;
    }

    ctx->pc = 0x268620u;

    // 0x268620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x268620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x268624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x268624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268628: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x268628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x26862c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26862cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x268630: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268634: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x268634u;
    {
        const bool branch_taken_0x268634 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x268638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268634u;
        // 0x268638: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268634) {
            ctx->pc = 0x268690u;
            goto label_268690;
        }
    }
    ctx->pc = 0x26863Cu;
    // 0x26863c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268644: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268644u;
    SET_GPR_U32(ctx, 31, 0x26864Cu);
    ctx->pc = 0x268648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268644u;
    // 0x268648: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x268644u, 0x26864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26864Cu;
label_26864c:
    // 0x26864c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x26864cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268650: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268658: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x268658u;
    SET_GPR_U32(ctx, 31, 0x268660u);
    ctx->pc = 0x26865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268658u;
    // 0x26865c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x268658u, 0x268660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268660u;
label_268660:
    // 0x268660: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x268660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x268664: 0xa3b10001  sb          $s1, 0x1($sp)
    ctx->pc = 0x268664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x268668: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x268668u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26866c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26866cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268670: 0xa3b10011  sb          $s1, 0x11($sp)
    ctx->pc = 0x268670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 17));
    // 0x268674: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x268674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x268678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26867c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26867cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268680: 0xc09a0dc  jal         func_268370
    ctx->pc = 0x268680u;
    SET_GPR_U32(ctx, 31, 0x268688u);
    ctx->pc = 0x268684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268680u;
    // 0x268684: 0x24080802  addiu       $t0, $zero, 0x802 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268370u, 0x268680u, 0x268688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268688u;
label_268688:
    // 0x268688: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x268688u;
    {
        const bool branch_taken_0x268688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268688u;
        // 0x26868c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268688) {
            ctx->pc = 0x268698u;
            goto label_268698;
        }
    }
    ctx->pc = 0x268690u;
label_268690:
    // 0x268690: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x268690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268694: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x268694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_268698:
    // 0x268698: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x268698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26869c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x26869cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2686a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2686A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2686A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686A0u;
        // 0x2686a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2686A8u;
}
