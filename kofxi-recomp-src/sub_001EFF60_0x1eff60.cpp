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

// Function: sub_001EFF60
// Address: 0x1eff60 - 0x1effd8
void sub_001EFF60_0x1eff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFF60_0x1eff60");
#endif

    switch (ctx->pc) {
        case 0x1eff98u: goto label_1eff98;
        case 0x1effacu: goto label_1effac;
        default: break;
    }

    ctx->pc = 0x1eff60u;

    // 0x1eff60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eff64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1eff68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eff6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eff70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eff74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eff78: 0x8c822018  lw          $v0, 0x2018($a0)
    ctx->pc = 0x1eff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8216)));
    // 0x1eff7c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1eff7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eff80: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1EFF80u;
    {
        const bool branch_taken_0x1eff80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF80u;
        // 0x1eff84: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff80) {
            ctx->pc = 0x1EFFB8u;
            goto label_1effb8;
        }
    }
    ctx->pc = 0x1EFF88u;
    // 0x1eff88: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1EFF88u;
    {
        const bool branch_taken_0x1eff88 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1EFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF88u;
        // 0x1eff8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff88) {
            ctx->pc = 0x1EFFB8u;
            goto label_1effb8;
        }
    }
    ctx->pc = 0x1EFF90u;
    // 0x1eff90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1eff90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eff98:
    // 0x1eff98: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1eff98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1eff9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effa0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1effa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1effa4: 0xc077080  jal         func_1DC200
    ctx->pc = 0x1EFFA4u;
    SET_GPR_U32(ctx, 31, 0x1EFFACu);
    ctx->pc = 0x1EFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFA4u;
    // 0x1effa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC200u, 0x1EFFA4u, 0x1EFFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFACu;
label_1effac:
    // 0x1effac: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x1effacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1effb0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EFFB0u;
    {
        const bool branch_taken_0x1effb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1effb0) {
            ctx->pc = 0x1EFFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFFB0u;
            // 0x1effb4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFF98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1eff98;
        }
    }
    ctx->pc = 0x1EFFB8u;
label_1effb8:
    // 0x1effb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1effb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1effbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1effbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1effc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1effc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1effc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1effc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1effc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1effc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1effcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFCCu;
        // 0x1effd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFFD4u;
    // 0x1effd4: 0x0  nop
    ctx->pc = 0x1effd4u;
    // NOP
}
