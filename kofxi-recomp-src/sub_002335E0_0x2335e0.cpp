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

// Function: sub_002335E0
// Address: 0x2335e0 - 0x2336a8
void sub_002335E0_0x2335e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002335E0_0x2335e0");
#endif

    switch (ctx->pc) {
        case 0x233610u: goto label_233610;
        case 0x233648u: goto label_233648;
        case 0x233664u: goto label_233664;
        case 0x233680u: goto label_233680;
        default: break;
    }

    ctx->pc = 0x2335e0u;

    // 0x2335e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2335e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2335e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2335e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2335e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2335e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2335ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2335ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2335f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2335f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2335f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2335f8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2335f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2335fc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2335fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233600: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x233600u;
    {
        const bool branch_taken_0x233600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x233604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233600u;
        // 0x233604: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233600) {
            ctx->pc = 0x233634u;
            goto label_233634;
        }
    }
    ctx->pc = 0x233608u;
    // 0x233608: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x233608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23360c: 0x0  nop
    ctx->pc = 0x23360cu;
    // NOP
label_233610:
    // 0x233610: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x233610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x233614: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x233614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x233618: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x233618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23361c: 0x0  nop
    ctx->pc = 0x23361cu;
    // NOP
    // 0x233620: 0x0  nop
    ctx->pc = 0x233620u;
    // NOP
    // 0x233624: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x233624u;
    {
        const bool branch_taken_0x233624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x233624) {
            ctx->pc = 0x233610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233610;
        }
    }
    ctx->pc = 0x23362Cu;
    // 0x23362c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23362Cu;
    {
        const bool branch_taken_0x23362c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23362Cu;
        // 0x233630: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23362c) {
            ctx->pc = 0x23363Cu;
            goto label_23363c;
        }
    }
    ctx->pc = 0x233634u;
label_233634:
    // 0x233634: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x233634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x233638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23363c:
    // 0x23363c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23363Cu;
    {
        const bool branch_taken_0x23363c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23363Cu;
        // 0x233640: 0x3c130023  lui         $s3, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23363c) {
            ctx->pc = 0x23368Cu;
            goto label_23368c;
        }
    }
    ctx->pc = 0x233644u;
    // 0x233644: 0xde020030  ld          $v0, 0x30($s0)
    ctx->pc = 0x233644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
label_233648:
    // 0x233648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23364c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x23364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x233650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x233650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233654: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x233654u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x233658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x233658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23365c: 0xc08cf60  jal         func_233D80
    ctx->pc = 0x23365Cu;
    SET_GPR_U32(ctx, 31, 0x233664u);
    ctx->pc = 0x233660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23365Cu;
    // 0x233660: 0xfe020030  sd          $v0, 0x30($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D80u, 0x23365Cu, 0x233664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233664u;
label_233664:
    // 0x233664: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233664u;
    {
        const bool branch_taken_0x233664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233664u;
        // 0x233668: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233664) {
            ctx->pc = 0x233680u;
            goto label_233680;
        }
    }
    ctx->pc = 0x23366Cu;
    // 0x23366c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233670: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233674: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x233674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233678: 0xc08cdaa  jal         func_2336A8
    ctx->pc = 0x233678u;
    SET_GPR_U32(ctx, 31, 0x233680u);
    ctx->pc = 0x23367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233678u;
    // 0x23367c: 0x26683540  addiu       $t0, $s3, 0x3540 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 13632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2336A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2336A8u, 0x233678u, 0x233680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233680u;
label_233680:
    // 0x233680: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x233680u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x233684: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x233684u;
    {
        const bool branch_taken_0x233684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x233684) {
            ctx->pc = 0x233688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233684u;
            // 0x233688: 0xde020030  ld          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233648;
        }
    }
    ctx->pc = 0x23368Cu;
label_23368c:
    // 0x23368c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23368cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x233690: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x233690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x233694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x233694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x233698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23369c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23369cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2336a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2336A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2336A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336A0u;
        // 0x2336a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2336A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2336A8u;
}
