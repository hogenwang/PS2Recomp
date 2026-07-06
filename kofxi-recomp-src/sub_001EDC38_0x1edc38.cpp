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

// Function: sub_001EDC38
// Address: 0x1edc38 - 0x1edcf0
void sub_001EDC38_0x1edc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDC38_0x1edc38");
#endif

    switch (ctx->pc) {
        case 0x1edc50u: goto label_1edc50;
        case 0x1edc90u: goto label_1edc90;
        case 0x1edcb0u: goto label_1edcb0;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcd4u: goto label_1edcd4;
        default: break;
    }

    ctx->pc = 0x1edc38u;

    // 0x1edc38: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC38u;
        // 0x1edc3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC40u;
    // 0x1edc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edc48: 0xc07619e  jal         func_1D8678
    ctx->pc = 0x1EDC48u;
    SET_GPR_U32(ctx, 31, 0x1EDC50u);
    ctx->pc = 0x1D8678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8678u, 0x1EDC48u, 0x1EDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC50u;
label_1edc50:
    // 0x1edc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edc54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1edc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc58: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC58u;
        // 0x1edc5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDC60u;
    // 0x1edc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edc6c: 0x807b71e  j           func_1EDC78
    ctx->pc = 0x1EDC6Cu;
    ctx->pc = 0x1EDC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC6Cu;
    // 0x1edc70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC78u;
    goto label_1edc78;
    ctx->pc = 0x1EDC74u;
    // 0x1edc74: 0x0  nop
    ctx->pc = 0x1edc74u;
    // NOP
label_1edc78:
    // 0x1edc78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1edc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1edc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1edc80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1edc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1edc84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1edc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1edc88: 0xc07bb88  jal         func_1EEE20
    ctx->pc = 0x1EDC88u;
    SET_GPR_U32(ctx, 31, 0x1EDC90u);
    ctx->pc = 0x1EDC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDC88u;
    // 0x1edc8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEE20u, 0x1EDC88u, 0x1EDC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC90u;
label_1edc90:
    // 0x1edc90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edc94: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDC94u;
    {
        const bool branch_taken_0x1edc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC94u;
        // 0x1edc98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc94) {
            ctx->pc = 0x1EDCA8u;
            goto label_1edca8;
        }
    }
    ctx->pc = 0x1EDC9Cu;
    // 0x1edc9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EDC9Cu;
    {
        const bool branch_taken_0x1edc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDC9Cu;
        // 0x1edca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edc9c) {
            ctx->pc = 0x1EDCD8u;
            goto label_1edcd8;
        }
    }
    ctx->pc = 0x1EDCA4u;
    // 0x1edca4: 0x0  nop
    ctx->pc = 0x1edca4u;
    // NOP
label_1edca8:
    // 0x1edca8: 0xc07b73c  jal         func_1EDCF0
    ctx->pc = 0x1EDCA8u;
    SET_GPR_U32(ctx, 31, 0x1EDCB0u);
    ctx->pc = 0x1EDCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDCF0u, 0x1EDCA8u, 0x1EDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCB0u;
label_1edcb0:
    // 0x1edcb0: 0xc07b746  jal         func_1EDD18
    ctx->pc = 0x1EDCB0u;
    SET_GPR_U32(ctx, 31, 0x1EDCB8u);
    ctx->pc = 0x1EDCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDCB0u;
    // 0x1edcb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDD18u, 0x1EDCB0u, 0x1EDCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCB8u;
label_1edcb8:
    // 0x1edcb8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1edcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1edcbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1edcbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edcc0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1edcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1edcc4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDCC4u;
    {
        const bool branch_taken_0x1edcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCC4u;
        // 0x1edcc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edcc4) {
            ctx->pc = 0x1EDCD4u;
            goto label_1edcd4;
        }
    }
    ctx->pc = 0x1EDCCCu;
    // 0x1edccc: 0xc07bc32  jal         func_1EF0C8
    ctx->pc = 0x1EDCCCu;
    SET_GPR_U32(ctx, 31, 0x1EDCD4u);
    ctx->pc = 0x1EF0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF0C8u, 0x1EDCCCu, 0x1EDCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCD4u;
label_1edcd4:
    // 0x1edcd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1edcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1edcd8:
    // 0x1edcd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1edcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edcdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1edcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1edce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1edce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDCE4u;
        // 0x1edce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDCECu;
    // 0x1edcec: 0x0  nop
    ctx->pc = 0x1edcecu;
    // NOP
    if (ctx->pc == 0x1edcecu) { ctx->pc = 0x1edcf0u; }
}
