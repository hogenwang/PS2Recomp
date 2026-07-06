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

// Function: sub_001AED68
// Address: 0x1aed68 - 0x1aee18
void sub_001AED68_0x1aed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AED68_0x1aed68");
#endif

    switch (ctx->pc) {
        case 0x1aeda0u: goto label_1aeda0;
        case 0x1aeddcu: goto label_1aeddc;
        case 0x1aedf0u: goto label_1aedf0;
        case 0x1aedf8u: goto label_1aedf8;
        default: break;
    }

    ctx->pc = 0x1aed68u;

    // 0x1aed68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aed68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aed6c: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x1aed6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1aed70: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AED70u;
    {
        const bool branch_taken_0x1aed70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED70u;
        // 0x1aed74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed70) {
            ctx->pc = 0x1AED88u;
            goto label_1aed88;
        }
    }
    ctx->pc = 0x1AED78u;
    // 0x1aed78: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1aed78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1aed7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AED7Cu;
    {
        const bool branch_taken_0x1aed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED7Cu;
        // 0x1aed80: 0x248473d8  addiu       $a0, $a0, 0x73D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed7c) {
            ctx->pc = 0x1AED98u;
            goto label_1aed98;
        }
    }
    ctx->pc = 0x1AED84u;
    // 0x1aed84: 0x0  nop
    ctx->pc = 0x1aed84u;
    // NOP
label_1aed88:
    // 0x1aed88: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AED88u;
    {
        const bool branch_taken_0x1aed88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AED88u;
        // 0x1aed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aed88) {
            ctx->pc = 0x1AEDA4u;
            goto label_1aeda4;
        }
    }
    ctx->pc = 0x1AED90u;
    // 0x1aed90: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1aed90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1aed94: 0x24847410  addiu       $a0, $a0, 0x7410
    ctx->pc = 0x1aed94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29712));
label_1aed98:
    // 0x1aed98: 0xc06ba0a  jal         func_1AE828
    ctx->pc = 0x1AED98u;
    SET_GPR_U32(ctx, 31, 0x1AEDA0u);
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x1AED98u, 0x1AEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDA0u;
label_1aeda0:
    // 0x1aeda0: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1aeda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1aeda4:
    // 0x1aeda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aeda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aeda8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDA8u;
        // 0x1aedac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEDB0u;
    // 0x1aedb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aedb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aedb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aedb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aedb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aedbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aedc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aedc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aedc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aedc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1aedc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aedccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aedd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aedd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aedd4: 0xc06c6ac  jal         func_1B1AB0
    ctx->pc = 0x1AEDD4u;
    SET_GPR_U32(ctx, 31, 0x1AEDDCu);
    ctx->pc = 0x1AEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDD4u;
    // 0x1aedd8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AB0u, 0x1AEDD4u, 0x1AEDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDDCu;
label_1aeddc:
    // 0x1aeddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aeddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aede0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aede0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aede4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aede4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aede8: 0xc06bb86  jal         func_1AEE18
    ctx->pc = 0x1AEDE8u;
    SET_GPR_U32(ctx, 31, 0x1AEDF0u);
    ctx->pc = 0x1AEDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDE8u;
    // 0x1aedec: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE18u, 0x1AEDE8u, 0x1AEDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDF0u;
label_1aedf0:
    // 0x1aedf0: 0xc06c6b2  jal         func_1B1AC8
    ctx->pc = 0x1AEDF0u;
    SET_GPR_U32(ctx, 31, 0x1AEDF8u);
    ctx->pc = 0x1AEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDF0u;
    // 0x1aedf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1AC8u, 0x1AEDF0u, 0x1AEDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDF8u;
label_1aedf8:
    // 0x1aedf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aedf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aedfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aedfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aee00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aee04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aee04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aee08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aee08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aee0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aee10: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE10u;
        // 0x1aee14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEE18u;
}
