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

// Function: sub_001E4620
// Address: 0x1e4620 - 0x1e4680
void sub_001E4620_0x1e4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4620_0x1e4620");
#endif

    switch (ctx->pc) {
        case 0x1e4638u: goto label_1e4638;
        case 0x1e4650u: goto label_1e4650;
        case 0x1e4664u: goto label_1e4664;
        case 0x1e466cu: goto label_1e466c;
        default: break;
    }

    ctx->pc = 0x1e4620u;

    // 0x1e4620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e4624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e462c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1e4630: 0xc07917e  jal         func_1E45F8
    ctx->pc = 0x1E4630u;
    SET_GPR_U32(ctx, 31, 0x1E4638u);
    ctx->pc = 0x1E4634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4630u;
    // 0x1e4634: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E45F8u, 0x1E4630u, 0x1E4638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4638u;
label_1e4638:
    // 0x1e4638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e463c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E463Cu;
    {
        const bool branch_taken_0x1e463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E463Cu;
        // 0x1e4640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e463c) {
            ctx->pc = 0x1E466Cu;
            goto label_1e466c;
        }
    }
    ctx->pc = 0x1E4644u;
    // 0x1e4644: 0x8e040384  lw          $a0, 0x384($s0)
    ctx->pc = 0x1e4644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 900)));
    // 0x1e4648: 0xc072cec  jal         func_1CB3B0
    ctx->pc = 0x1E4648u;
    SET_GPR_U32(ctx, 31, 0x1E4650u);
    ctx->pc = 0x1E464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4648u;
    // 0x1e464c: 0x8e050388  lw          $a1, 0x388($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB3B0u, 0x1E4648u, 0x1E4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4650u;
label_1e4650:
    // 0x1e4650: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e4650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e4654: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4654u;
    {
        const bool branch_taken_0x1e4654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4654u;
        // 0x1e4658: 0x2484deb0  addiu       $a0, $a0, -0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4654) {
            ctx->pc = 0x1E4670u;
            goto label_1e4670;
        }
    }
    ctx->pc = 0x1E465Cu;
    // 0x1e465c: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E465Cu;
    SET_GPR_U32(ctx, 31, 0x1E4664u);
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E465Cu, 0x1E4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4664u;
label_1e4664:
    // 0x1e4664: 0xc0779e8  jal         func_1DE7A0
    ctx->pc = 0x1E4664u;
    SET_GPR_U32(ctx, 31, 0x1E466Cu);
    ctx->pc = 0x1E4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4664u;
    // 0x1e4668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7A0u, 0x1E4664u, 0x1E466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E466Cu;
label_1e466c:
    // 0x1e466c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e466cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4670:
    // 0x1e4670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4674: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e4674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4678: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4678u;
        // 0x1e467c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4680u;
}
