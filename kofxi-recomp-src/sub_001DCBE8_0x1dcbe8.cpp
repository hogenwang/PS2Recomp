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

// Function: sub_001DCBE8
// Address: 0x1dcbe8 - 0x1dcd60
void sub_001DCBE8_0x1dcbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCBE8_0x1dcbe8");
#endif

    switch (ctx->pc) {
        case 0x1dcc1cu: goto label_1dcc1c;
        case 0x1dcc24u: goto label_1dcc24;
        case 0x1dcc44u: goto label_1dcc44;
        case 0x1dcc60u: goto label_1dcc60;
        case 0x1dcc7cu: goto label_1dcc7c;
        case 0x1dcc90u: goto label_1dcc90;
        case 0x1dccacu: goto label_1dccac;
        case 0x1dccc4u: goto label_1dccc4;
        case 0x1dcd04u: goto label_1dcd04;
        case 0x1dcd10u: goto label_1dcd10;
        case 0x1dcd28u: goto label_1dcd28;
        default: break;
    }

    ctx->pc = 0x1dcbe8u;

    // 0x1dcbe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dcbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dcbec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dcbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dcbf0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dcbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbf4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dcbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dcbf8: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1dcbfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dcbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dcc00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dcc00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dcc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1dcc08: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1dcc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1dcc0c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1dcc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1dcc10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dcc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dcc14: 0xc07724e  jal         func_1DC938
    ctx->pc = 0x1DCC14u;
    SET_GPR_U32(ctx, 31, 0x1DCC1Cu);
    ctx->pc = 0x1DCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC14u;
    // 0x1dcc18: 0x2655000a  addiu       $s5, $s2, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC938u, 0x1DCC14u, 0x1DCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC1Cu;
label_1dcc1c:
    // 0x1dcc1c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x1DCC1Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC24u);
    ctx->pc = 0x1DCC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC1Cu;
    // 0x1dcc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1DCC1Cu, 0x1DCC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC24u;
label_1dcc24:
    // 0x1dcc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc28: 0x27b40002  addiu       $s4, $sp, 0x2
    ctx->pc = 0x1dcc28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
    // 0x1dcc2c: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x1dcc2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1dcc30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dcc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dcc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc38: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1dcc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc3c: 0xc07725e  jal         func_1DC978
    ctx->pc = 0x1DCC3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC44u);
    ctx->pc = 0x1DCC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC3Cu;
    // 0x1dcc40: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC978u, 0x1DCC3Cu, 0x1DCC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC44u;
label_1dcc44:
    // 0x1dcc44: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1dcc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc48: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x1dcc48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc4c: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x1dcc4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x1dcc50: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1dcc50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dcc54: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x1dcc54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dcc58: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x1dcc58u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1dcc5c: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x1dcc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
label_1dcc60:
    // 0x1dcc60: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1dcc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1dcc64: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1dcc64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1dcc68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dcc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dcc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc70: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dcc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc74: 0xc0772e8  jal         func_1DCBA0
    ctx->pc = 0x1DCC74u;
    SET_GPR_U32(ctx, 31, 0x1DCC7Cu);
    ctx->pc = 0x1DCC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC74u;
    // 0x1dcc78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBA0u, 0x1DCC74u, 0x1DCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC7Cu;
label_1dcc7c:
    // 0x1dcc7c: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x1dcc7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc80: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DCC80u;
    {
        const bool branch_taken_0x1dcc80 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1DCC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC80u;
        // 0x1dcc84: 0xa6440004  sh          $a0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc80) {
            ctx->pc = 0x1DCC60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcc60;
        }
    }
    ctx->pc = 0x1DCC88u;
    // 0x1dcc88: 0x26b00040  addiu       $s0, $s5, 0x40
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1dcc8c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1dcc8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1dcc90:
    // 0x1dcc90: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x1dcc90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x1dcc94: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1dcc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1dcc98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dcc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dcc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcca0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dcca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcca4: 0xc0772e8  jal         func_1DCBA0
    ctx->pc = 0x1DCCA4u;
    SET_GPR_U32(ctx, 31, 0x1DCCACu);
    ctx->pc = 0x1DCCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCA4u;
    // 0x1dcca8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBA0u, 0x1DCCA4u, 0x1DCCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCACu;
label_1dccac:
    // 0x1dccac: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x1dccacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dccb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccb4: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DCCB4u;
    {
        const bool branch_taken_0x1dccb4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1DCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCB4u;
        // 0x1dccb8: 0xa6440004  sh          $a0, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccb4) {
            ctx->pc = 0x1DCC90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dcc90;
        }
    }
    ctx->pc = 0x1DCCBCu;
    // 0x1dccbc: 0xc077256  jal         func_1DC958
    ctx->pc = 0x1DCCBCu;
    SET_GPR_U32(ctx, 31, 0x1DCCC4u);
    ctx->pc = 0x1DC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC958u, 0x1DCCBCu, 0x1DCCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCC4u;
label_1dccc4:
    // 0x1dccc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dccc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dccc8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dccc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcccc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dccccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dccd0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dccd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dccd4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dccd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dccd8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dccd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dccdc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dccdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCE0u;
        // 0x1dcce4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCCE8u;
    // 0x1dcce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dccec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dccecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dccf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dccf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dccf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dccfc: 0xc07736c  jal         func_1DCDB0
    ctx->pc = 0x1DCCFCu;
    SET_GPR_U32(ctx, 31, 0x1DCD04u);
    ctx->pc = 0x1DCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCFCu;
    // 0x1dcd00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCDB0u, 0x1DCCFCu, 0x1DCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD04u;
label_1dcd04:
    // 0x1dcd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd08: 0xc0773a6  jal         func_1DCE98
    ctx->pc = 0x1DCD08u;
    SET_GPR_U32(ctx, 31, 0x1DCD10u);
    ctx->pc = 0x1DCD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD08u;
    // 0x1dcd0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE98u, 0x1DCD08u, 0x1DCD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD10u;
label_1dcd10:
    // 0x1dcd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dcd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcd18: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCD18u;
    {
        const bool branch_taken_0x1dcd18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DCD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD18u;
        // 0x1dcd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd18) {
            ctx->pc = 0x1DCD2Cu;
            goto label_1dcd2c;
        }
    }
    ctx->pc = 0x1DCD20u;
    // 0x1dcd20: 0xc07736c  jal         func_1DCDB0
    ctx->pc = 0x1DCD20u;
    SET_GPR_U32(ctx, 31, 0x1DCD28u);
    ctx->pc = 0x1DCDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCDB0u, 0x1DCD20u, 0x1DCD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD28u;
label_1dcd28:
    // 0x1dcd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcd2c:
    // 0x1dcd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dcd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcd38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcd3c: 0x8077352  j           func_1DCD48
    ctx->pc = 0x1DCD3Cu;
    ctx->pc = 0x1DCD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD3Cu;
    // 0x1dcd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD48u;
    goto label_1dcd48;
    ctx->pc = 0x1DCD44u;
    // 0x1dcd44: 0x0  nop
    ctx->pc = 0x1dcd44u;
    // NOP
label_1dcd48:
    // 0x1dcd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcd4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcd54: 0x8077358  j           func_1DCD60
    ctx->pc = 0x1DCD54u;
    ctx->pc = 0x1DCD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD54u;
    // 0x1dcd58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD60u;
    sub_001DCD60_0x1dcd60(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCD5Cu;
    // 0x1dcd5c: 0x0  nop
    ctx->pc = 0x1dcd5cu;
    // NOP
    if (ctx->pc == 0x1dcd5cu) { ctx->pc = 0x1dcd60u; }
}
