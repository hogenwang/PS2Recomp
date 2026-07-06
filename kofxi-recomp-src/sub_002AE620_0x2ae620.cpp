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

// Function: sub_002AE620
// Address: 0x2ae620 - 0x2ae678
void sub_002AE620_0x2ae620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE620_0x2ae620");
#endif

    switch (ctx->pc) {
        case 0x2ae644u: goto label_2ae644;
        case 0x2ae664u: goto label_2ae664;
        default: break;
    }

    ctx->pc = 0x2ae620u;

    // 0x2ae620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ae620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ae624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ae628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ae62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae630: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ae630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae634: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x2ae634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2ae638: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x2ae638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x2ae63c: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE63Cu;
    SET_GPR_U32(ctx, 31, 0x2AE644u);
    ctx->pc = 0x2AE640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE63Cu;
    // 0x2ae640: 0x8c650104  lw          $a1, 0x104($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE63Cu, 0x2AE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE644u;
label_2ae644:
    // 0x2ae644: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE644u;
    {
        const bool branch_taken_0x2ae644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae644) {
            ctx->pc = 0x2AE648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE644u;
            // 0x2ae648: 0x8e0200dc  lw          $v0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE654u;
            goto label_2ae654;
        }
    }
    ctx->pc = 0x2AE64Cu;
    // 0x2ae64c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE64Cu;
    {
        const bool branch_taken_0x2ae64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE64Cu;
        // 0x2ae650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae64c) {
            ctx->pc = 0x2AE668u;
            goto label_2ae668;
        }
    }
    ctx->pc = 0x2AE654u;
label_2ae654:
    // 0x2ae654: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ae654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae658: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x2ae658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x2ae65c: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE65Cu;
    SET_GPR_U32(ctx, 31, 0x2AE664u);
    ctx->pc = 0x2AE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE65Cu;
    // 0x2ae660: 0x8c6400fc  lw          $a0, 0xFC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE65Cu, 0x2AE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE664u;
label_2ae664:
    // 0x2ae664: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ae664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ae668:
    // 0x2ae668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ae668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae670: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE670u;
        // 0x2ae674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE678u;
}
