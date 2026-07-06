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

// Function: sub_002BFC00
// Address: 0x2bfc00 - 0x2bfce8
void sub_002BFC00_0x2bfc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFC00_0x2bfc00");
#endif

    switch (ctx->pc) {
        case 0x2bfc40u: goto label_2bfc40;
        case 0x2bfc50u: goto label_2bfc50;
        case 0x2bfc80u: goto label_2bfc80;
        case 0x2bfcbcu: goto label_2bfcbc;
        default: break;
    }

    ctx->pc = 0x2bfc00u;

    // 0x2bfc00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2bfc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2bfc04: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2bfc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2bfc08: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2bfc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2bfc0c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2bfc0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc10: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2bfc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2bfc14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bfc14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc18: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2bfc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2bfc1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bfc1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc20: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bfc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2bfc24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bfc24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2bfc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2bfc2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bfc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2bfc30: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2bfc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2bfc34: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x2bfc34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bfc38: 0xc0aff3a  jal         func_2BFCE8
    ctx->pc = 0x2BFC38u;
    SET_GPR_U32(ctx, 31, 0x2BFC40u);
    ctx->pc = 0x2BFC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC38u;
    // 0x2bfc3c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFCE8u, 0x2BFC38u, 0x2BFC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC40u;
label_2bfc40:
    // 0x2bfc40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2bfc40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc44: 0x56200018  bnel        $s1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BFC44u;
    {
        const bool branch_taken_0x2bfc44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc44) {
            ctx->pc = 0x2BFC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC44u;
            // 0x2bfc48: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFCA8u;
            goto label_2bfca8;
        }
    }
    ctx->pc = 0x2BFC4Cu;
    // 0x2bfc4c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2bfc50:
    // 0x2bfc50: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2bfc54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2bfc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfc58: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2bfc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bfc5c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BFC5Cu;
    {
        const bool branch_taken_0x2bfc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC5Cu;
        // 0x2bfc60: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc5c) {
            ctx->pc = 0x2BFC94u;
            goto label_2bfc94;
        }
    }
    ctx->pc = 0x2BFC64u;
    // 0x2bfc64: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2bfc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2bfc68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bfc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2bfc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfc74: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2bfc74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc78: 0xc0afe22  jal         func_2BF888
    ctx->pc = 0x2BFC78u;
    SET_GPR_U32(ctx, 31, 0x2BFC80u);
    ctx->pc = 0x2BFC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC78u;
    // 0x2bfc7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF888u, 0x2BFC78u, 0x2BFC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC80u;
label_2bfc80:
    // 0x2bfc80: 0x442000f  bltzl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BFC80u;
    {
        const bool branch_taken_0x2bfc80 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2bfc80) {
            ctx->pc = 0x2BFC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFC80u;
            // 0x2bfc84: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFCC0u;
            goto label_2bfcc0;
        }
    }
    ctx->pc = 0x2BFC88u;
    // 0x2bfc88: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2BFC88u;
    {
        const bool branch_taken_0x2bfc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC88u;
        // 0x2bfc8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc88) {
            ctx->pc = 0x2BFC50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2bfc50;
        }
    }
    ctx->pc = 0x2BFC90u;
    // 0x2bfc90: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x2bfc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bfc94:
    // 0x2bfc94: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFC94u;
    {
        const bool branch_taken_0x2bfc94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC94u;
        // 0x2bfc98: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc94) {
            ctx->pc = 0x2BFCA4u;
            goto label_2bfca4;
        }
    }
    ctx->pc = 0x2BFC9Cu;
    // 0x2bfc9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFC9Cu;
    {
        const bool branch_taken_0x2bfc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC9Cu;
        // 0x2bfca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc9c) {
            ctx->pc = 0x2BFCC0u;
            goto label_2bfcc0;
        }
    }
    ctx->pc = 0x2BFCA4u;
label_2bfca4:
    // 0x2bfca4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bfca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2bfca8:
    // 0x2bfca8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bfca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfcac: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x2bfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x2bfcb0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bfcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bfcb4: 0xc0afef0  jal         func_2BFBC0
    ctx->pc = 0x2BFCB4u;
    SET_GPR_U32(ctx, 31, 0x2BFCBCu);
    ctx->pc = 0x2BFCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFCB4u;
    // 0x2bfcb8: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFBC0u, 0x2BFCB4u, 0x2BFCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCBCu;
label_2bfcbc:
    // 0x2bfcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfcc0:
    // 0x2bfcc0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2bfcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bfcc4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2bfcc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfcc8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2bfcc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfccc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2bfcccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfcd0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2bfcd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bfcd4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2bfcd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bfcd8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bfcd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bfcdc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bfcdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bfce0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCE0u;
        // 0x2bfce4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFCE8u;
}
