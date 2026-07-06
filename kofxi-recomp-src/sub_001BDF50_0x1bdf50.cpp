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

// Function: sub_001BDF50
// Address: 0x1bdf50 - 0x1be060
void sub_001BDF50_0x1bdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDF50_0x1bdf50");
#endif

    switch (ctx->pc) {
        case 0x1bdf80u: goto label_1bdf80;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be03cu: goto label_1be03c;
        default: break;
    }

    ctx->pc = 0x1bdf50u;

    // 0x1bdf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bdf54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bdf58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bdf58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdf60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bdf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bdf64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bdf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1bdf68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bdf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bdf6c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1bdf6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bdf70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BDF70u;
    {
        const bool branch_taken_0x1bdf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF70u;
        // 0x1bdf74: 0x3c1301bf  lui         $s3, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf70) {
            ctx->pc = 0x1BDF88u;
            goto label_1bdf88;
        }
    }
    ctx->pc = 0x1BDF78u;
    // 0x1bdf78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BDF78u;
    {
        const bool branch_taken_0x1bdf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF78u;
        // 0x1bdf7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf78) {
            ctx->pc = 0x1BDFCCu;
            goto label_1bdfcc;
        }
    }
    ctx->pc = 0x1BDF80u;
label_1bdf80:
    // 0x1bdf80: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1BDF80u;
    {
        const bool branch_taken_0x1bdf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF80u;
        // 0x1bdf84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf80) {
            ctx->pc = 0x1BDFCCu;
            goto label_1bdfcc;
        }
    }
    ctx->pc = 0x1BDF88u;
label_1bdf88:
    // 0x1bdf88: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1bdf8c: 0x8e635348  lw          $v1, 0x5348($s3)
    ctx->pc = 0x1bdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21320)));
    // 0x1bdf90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bdf90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf94: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BDF94u;
    {
        const bool branch_taken_0x1bdf94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF94u;
        // 0x1bdf98: 0x8c505344  lw          $s0, 0x5344($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf94) {
            ctx->pc = 0x1BDFC8u;
            goto label_1bdfc8;
        }
    }
    ctx->pc = 0x1BDF9Cu;
    // 0x1bdf9c: 0x0  nop
    ctx->pc = 0x1bdf9cu;
    // NOP
label_1bdfa0:
    // 0x1bdfa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bdfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfa8: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x1BDFA8u;
    SET_GPR_U32(ctx, 31, 0x1BDFB0u);
    ctx->pc = 0x1BDFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDFA8u;
    // 0x1bdfac: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1BDFA8u, 0x1BDFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDFB0u;
label_1bdfb0:
    // 0x1bdfb0: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BDFB0u;
    {
        const bool branch_taken_0x1bdfb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFB0u;
        // 0x1bdfb4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfb0) {
            ctx->pc = 0x1BDF80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bdf80;
        }
    }
    ctx->pc = 0x1BDFB8u;
    // 0x1bdfb8: 0x8e625348  lw          $v0, 0x5348($s3)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21320)));
    // 0x1bdfbc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1bdfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bdfc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BDFC0u;
    {
        const bool branch_taken_0x1bdfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFC0u;
        // 0x1bdfc4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfc0) {
            ctx->pc = 0x1BDFA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bdfa0;
        }
    }
    ctx->pc = 0x1BDFC8u;
label_1bdfc8:
    // 0x1bdfc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bdfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bdfcc:
    // 0x1bdfcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdfd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdfd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdfd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bdfd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdfd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bdfd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bdfdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bdfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bdfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDFE0u;
        // 0x1bdfe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDFE8u;
    // 0x1bdfe8: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1bdfec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdfecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdff0: 0x8c435344  lw          $v1, 0x5344($v0)
    ctx->pc = 0x1bdff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21316)));
    // 0x1bdff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bdff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bdff8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bdff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bdffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bdffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be000: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1be004: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1be004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be00c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BE00Cu;
    {
        const bool branch_taken_0x1be00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE00Cu;
        // 0x1be010: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be00c) {
            ctx->pc = 0x1BE044u;
            goto label_1be044;
        }
    }
    ctx->pc = 0x1BE014u;
    // 0x1be014: 0xc06f7c0  jal         func_1BDF00
    ctx->pc = 0x1BE014u;
    SET_GPR_U32(ctx, 31, 0x1BE01Cu);
    ctx->pc = 0x1BDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDF00u, 0x1BE014u, 0x1BE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE01Cu;
label_1be01c:
    // 0x1be01c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1be01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1be020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be024: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1be028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be02c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE02Cu;
    {
        const bool branch_taken_0x1be02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE02Cu;
        // 0x1be030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be02c) {
            ctx->pc = 0x1BE044u;
            goto label_1be044;
        }
    }
    ctx->pc = 0x1BE034u;
    // 0x1be034: 0xc04a966  jal         func_12A598
    ctx->pc = 0x1BE034u;
    SET_GPR_U32(ctx, 31, 0x1BE03Cu);
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x1BE034u, 0x1BE03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE03Cu;
label_1be03c:
    // 0x1be03c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1be03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be040: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x1be040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_1be044:
    // 0x1be044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be04c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be04cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be050: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1be050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1be054: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE054u;
        // 0x1be058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE05Cu;
    // 0x1be05c: 0x0  nop
    ctx->pc = 0x1be05cu;
    // NOP
}
