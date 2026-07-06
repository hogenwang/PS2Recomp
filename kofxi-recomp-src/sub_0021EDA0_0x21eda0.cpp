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

// Function: sub_0021EDA0
// Address: 0x21eda0 - 0x21ee90
void sub_0021EDA0_0x21eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EDA0_0x21eda0");
#endif

    switch (ctx->pc) {
        case 0x21ede8u: goto label_21ede8;
        case 0x21edecu: goto label_21edec;
        case 0x21ee2cu: goto label_21ee2c;
        case 0x21ee3cu: goto label_21ee3c;
        case 0x21ee4cu: goto label_21ee4c;
        case 0x21ee58u: goto label_21ee58;
        case 0x21ee60u: goto label_21ee60;
        case 0x21ee84u: goto label_21ee84;
        default: break;
    }

    ctx->pc = 0x21eda0u;

    // 0x21eda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21eda4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21eda8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21edac: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x21edacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x21edb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21edb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21edb4: 0x8e68c25c  lw          $t0, -0x3DA4($s3)
    ctx->pc = 0x21edb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951516)));
    // 0x21edb8: 0x24120012  addiu       $s2, $zero, 0x12
    ctx->pc = 0x21edb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x21edbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21edc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21edc4: 0x15120010  bne         $t0, $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x21EDC4u;
    {
        const bool branch_taken_0x21edc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 18));
        ctx->pc = 0x21EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDC4u;
        // 0x21edc8: 0x250ffff0  addiu       $t7, $t0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edc4) {
            ctx->pc = 0x21EE08u;
            goto label_21ee08;
        }
    }
    ctx->pc = 0x21EDCCu;
    // 0x21edcc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21edccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21edd0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21edd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21edd4: 0x24841f38  addiu       $a0, $a0, 0x1F38
    ctx->pc = 0x21edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7992));
    // 0x21edd8: 0x24e71f48  addiu       $a3, $a3, 0x1F48
    ctx->pc = 0x21edd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8008));
    // 0x21eddc: 0x2405029f  addiu       $a1, $zero, 0x29F
    ctx->pc = 0x21eddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 671));
    // 0x21ede0: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EDE0u;
    SET_GPR_U32(ctx, 31, 0x21EDE8u);
    ctx->pc = 0x21EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDE0u;
    // 0x21ede4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21EDE0u, 0x21EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDE8u;
label_21ede8:
    // 0x21ede8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21edec:
    // 0x21edec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21edecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21edf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21edf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21edf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21edf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21edf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21edf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21edfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x21EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE00u;
        // 0x21ee04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EE08u;
label_21ee08:
    // 0x21ee08: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x21ee08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21ee0c: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EE0Cu;
    {
        const bool branch_taken_0x21ee0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE0Cu;
        // 0x21ee10: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee0c) {
            ctx->pc = 0x21EE34u;
            goto label_21ee34;
        }
    }
    ctx->pc = 0x21EE14u;
    // 0x21ee14: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ee14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ee18: 0x24841f38  addiu       $a0, $a0, 0x1F38
    ctx->pc = 0x21ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7992));
    // 0x21ee1c: 0x24e71f78  addiu       $a3, $a3, 0x1F78
    ctx->pc = 0x21ee1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8056));
    // 0x21ee20: 0x240502a5  addiu       $a1, $zero, 0x2A5
    ctx->pc = 0x21ee20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
    // 0x21ee24: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EE24u;
    SET_GPR_U32(ctx, 31, 0x21EE2Cu);
    ctx->pc = 0x21EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE24u;
    // 0x21ee28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21EE24u, 0x21EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE2Cu;
label_21ee2c:
    // 0x21ee2c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x21EE2Cu;
    {
        const bool branch_taken_0x21ee2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE2Cu;
        // 0x21ee30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee2c) {
            ctx->pc = 0x21EDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21edec;
        }
    }
    ctx->pc = 0x21EE34u;
label_21ee34:
    // 0x21ee34: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x21EE34u;
    SET_GPR_U32(ctx, 31, 0x21EE3Cu);
    ctx->pc = 0x21EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE34u;
    // 0x21ee38: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x21EE34u, 0x21EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE3Cu;
label_21ee3c:
    // 0x21ee3c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21ee3cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21ee40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21ee40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee44: 0xc089b32  jal         func_226CC8
    ctx->pc = 0x21EE44u;
    SET_GPR_U32(ctx, 31, 0x21EE4Cu);
    ctx->pc = 0x21EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE44u;
    // 0x21ee48: 0xade2c260  sw          $v0, -0x3DA0($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294951520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CC8u, 0x21EE44u, 0x21EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE4Cu;
label_21ee4c:
    // 0x21ee4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21ee4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee50: 0xc0897be  jal         func_225EF8
    ctx->pc = 0x21EE50u;
    SET_GPR_U32(ctx, 31, 0x21EE58u);
    ctx->pc = 0x21EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE50u;
    // 0x21ee54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225EF8u, 0x21EE50u, 0x21EE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE58u;
label_21ee58:
    // 0x21ee58: 0xc087bcc  jal         func_21EF30
    ctx->pc = 0x21EE58u;
    SET_GPR_U32(ctx, 31, 0x21EE60u);
    ctx->pc = 0x21EF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EF30u, 0x21EE58u, 0x21EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE60u;
label_21ee60:
    // 0x21ee60: 0xae72c25c  sw          $s2, -0x3DA4($s3)
    ctx->pc = 0x21ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294951516), GPR_U32(ctx, 18));
    // 0x21ee64: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21ee68: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x21ee68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x21ee6c: 0x24841f38  addiu       $a0, $a0, 0x1F38
    ctx->pc = 0x21ee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7992));
    // 0x21ee70: 0x24e71fa8  addiu       $a3, $a3, 0x1FA8
    ctx->pc = 0x21ee70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8104));
    // 0x21ee74: 0x240502c3  addiu       $a1, $zero, 0x2C3
    ctx->pc = 0x21ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 707));
    // 0x21ee78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21ee78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee7c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x21EE7Cu;
    SET_GPR_U32(ctx, 31, 0x21EE84u);
    ctx->pc = 0x21EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE7Cu;
    // 0x21ee80: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x21EE7Cu, 0x21EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE84u;
label_21ee84:
    // 0x21ee84: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x21EE84u;
    {
        const bool branch_taken_0x21ee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE84u;
        // 0x21ee88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee84) {
            ctx->pc = 0x21EDECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21edec;
        }
    }
    ctx->pc = 0x21EE8Cu;
    // 0x21ee8c: 0x0  nop
    ctx->pc = 0x21ee8cu;
    // NOP
}
