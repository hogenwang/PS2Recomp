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

// Function: sub_00225B28
// Address: 0x225b28 - 0x225e50
void sub_00225B28_0x225b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B28_0x225b28");
#endif

    switch (ctx->pc) {
        case 0x225b4cu: goto label_225b4c;
        case 0x225b60u: goto label_225b60;
        case 0x225b6cu: goto label_225b6c;
        case 0x225bc4u: goto label_225bc4;
        case 0x225bd8u: goto label_225bd8;
        case 0x225c04u: goto label_225c04;
        case 0x225c54u: goto label_225c54;
        case 0x225d54u: goto label_225d54;
        case 0x225de4u: goto label_225de4;
        default: break;
    }

    ctx->pc = 0x225b28u;

    // 0x225b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225b30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225b34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225b38: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x225b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225b40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b44: 0xc08949c  jal         func_225270
    ctx->pc = 0x225B44u;
    SET_GPR_U32(ctx, 31, 0x225B4Cu);
    ctx->pc = 0x225B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B44u;
    // 0x225b48: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225270u, 0x225B44u, 0x225B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B4Cu;
label_225b4c:
    // 0x225b4c: 0x260e0007  addiu       $t6, $s0, 0x7
    ctx->pc = 0x225b4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x225b50: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x225b50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x225b54: 0x1cf8024  and         $s0, $t6, $t7
    ctx->pc = 0x225b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x225b58: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x225B58u;
    {
        const bool branch_taken_0x225b58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x225b58) {
            ctx->pc = 0x225B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225B58u;
            // 0x225b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B7Cu;
            goto label_225b7c;
        }
    }
    ctx->pc = 0x225B60u;
label_225b60:
    // 0x225b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b64: 0xc089522  jal         func_225488
    ctx->pc = 0x225B64u;
    SET_GPR_U32(ctx, 31, 0x225B6Cu);
    ctx->pc = 0x225B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B64u;
    // 0x225b68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225488u, 0x225B64u, 0x225B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B6Cu;
label_225b6c:
    // 0x225b6c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x225b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x225b70: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x225B70u;
    {
        const bool branch_taken_0x225b70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B70u;
        // 0x225b74: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b70) {
            ctx->pc = 0x225B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225b60;
        }
    }
    ctx->pc = 0x225B78u;
    // 0x225b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225b7c:
    // 0x225b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x225B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B8Cu;
        // 0x225b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B94u;
    // 0x225b94: 0x0  nop
    ctx->pc = 0x225b94u;
    // NOP
    // 0x225b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225b9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x225b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x225ba0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x225ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x225ba4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x225ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x225ba8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x225ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x225bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x225bb0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x225bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x225bb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x225bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bbc: 0xc08949c  jal         func_225270
    ctx->pc = 0x225BBCu;
    SET_GPR_U32(ctx, 31, 0x225BC4u);
    ctx->pc = 0x225BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225BBCu;
    // 0x225bc0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225270u, 0x225BBCu, 0x225BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225BC4u;
label_225bc4:
    // 0x225bc4: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x225BC4u;
    {
        const bool branch_taken_0x225bc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x225BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BC4u;
        // 0x225bc8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bc4) {
            ctx->pc = 0x225D40u;
            goto label_225d40;
        }
    }
    ctx->pc = 0x225BCCu;
    // 0x225bcc: 0x126f0009  beq         $s3, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x225BCCu;
    {
        const bool branch_taken_0x225bcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x225BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BCCu;
        // 0x225bd0: 0x264e0007  addiu       $t6, $s2, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225bcc) {
            ctx->pc = 0x225BF4u;
            goto label_225bf4;
        }
    }
    ctx->pc = 0x225BD4u;
    // 0x225bd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x225bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225bd8:
    // 0x225bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225bdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x225bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225be0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x225be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225be4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x225be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225be8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x225be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225bec: 0x3e00008  jr          $ra
    ctx->pc = 0x225BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225BECu;
        // 0x225bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225BF4u;
label_225bf4:
    // 0x225bf4: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x225bf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x225bf8: 0x1cf9024  and         $s2, $t6, $t7
    ctx->pc = 0x225bf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x225bfc: 0x5240fff6  beql        $s2, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x225BFCu;
    {
        const bool branch_taken_0x225bfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x225bfc) {
            ctx->pc = 0x225C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225BFCu;
            // 0x225c00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225bd8;
        }
    }
    ctx->pc = 0x225C04u;
label_225c04:
    // 0x225c04: 0x92090001  lbu         $t1, 0x1($s0)
    ctx->pc = 0x225c04u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x225c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225c0c: 0x920a0002  lbu         $t2, 0x2($s0)
    ctx->pc = 0x225c0cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x225c10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225c14: 0x920f0003  lbu         $t7, 0x3($s0)
    ctx->pc = 0x225c14u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x225c18: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x225c18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x225c1c: 0x920e0004  lbu         $t6, 0x4($s0)
    ctx->pc = 0x225c1cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x225c20: 0x920d0005  lbu         $t5, 0x5($s0)
    ctx->pc = 0x225c20u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x225c24: 0x920c0006  lbu         $t4, 0x6($s0)
    ctx->pc = 0x225c24u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x225c28: 0x920b0007  lbu         $t3, 0x7($s0)
    ctx->pc = 0x225c28u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x225c2c: 0x92080000  lbu         $t0, 0x0($s0)
    ctx->pc = 0x225c2cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225c30: 0xa3a90001  sb          $t1, 0x1($sp)
    ctx->pc = 0x225c30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x225c34: 0xa3aa0002  sb          $t2, 0x2($sp)
    ctx->pc = 0x225c34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 10));
    // 0x225c38: 0xa3af0003  sb          $t7, 0x3($sp)
    ctx->pc = 0x225c38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x225c3c: 0xa3ae0004  sb          $t6, 0x4($sp)
    ctx->pc = 0x225c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 14));
    // 0x225c40: 0xa3ad0005  sb          $t5, 0x5($sp)
    ctx->pc = 0x225c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 13));
    // 0x225c44: 0xa3ac0006  sb          $t4, 0x6($sp)
    ctx->pc = 0x225c44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 12));
    // 0x225c48: 0xa3ab0007  sb          $t3, 0x7($sp)
    ctx->pc = 0x225c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 11));
    // 0x225c4c: 0xc089522  jal         func_225488
    ctx->pc = 0x225C4Cu;
    SET_GPR_U32(ctx, 31, 0x225C54u);
    ctx->pc = 0x225C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225C4Cu;
    // 0x225c50: 0xa3a80000  sb          $t0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225488u, 0x225C4Cu, 0x225C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225C54u;
label_225c54:
    // 0x225c54: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225c54u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225c58: 0x922e0000  lbu         $t6, 0x0($s1)
    ctx->pc = 0x225c58u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225c5c: 0x93aa0000  lbu         $t2, 0x0($sp)
    ctx->pc = 0x225c5cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225c60: 0x93a90001  lbu         $t1, 0x1($sp)
    ctx->pc = 0x225c60u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x225c64: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225c64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225c68: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225c68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225c6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225c70: 0x922e0001  lbu         $t6, 0x1($s1)
    ctx->pc = 0x225c70u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x225c74: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225c74u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225c78: 0x93ab0002  lbu         $t3, 0x2($sp)
    ctx->pc = 0x225c78u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x225c7c: 0x93ac0003  lbu         $t4, 0x3($sp)
    ctx->pc = 0x225c7cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x225c80: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225c80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225c84: 0x93ad0004  lbu         $t5, 0x4($sp)
    ctx->pc = 0x225c84u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x225c88: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225c8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225c90: 0x922e0002  lbu         $t6, 0x2($s1)
    ctx->pc = 0x225c90u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x225c94: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225c94u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225c98: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225c98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225c9c: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225ca0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225ca4: 0x922e0003  lbu         $t6, 0x3($s1)
    ctx->pc = 0x225ca4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x225ca8: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225ca8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225cac: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225cacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225cb0: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225cb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225cb8: 0x922e0004  lbu         $t6, 0x4($s1)
    ctx->pc = 0x225cb8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x225cbc: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225cbcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225cc0: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225cc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225cc4: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225cc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225ccc: 0x922e0005  lbu         $t6, 0x5($s1)
    ctx->pc = 0x225cccu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x225cd0: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225cd0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225cd4: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225cd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225cd8: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225cdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225ce0: 0x922e0006  lbu         $t6, 0x6($s1)
    ctx->pc = 0x225ce0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x225ce4: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225ce4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225ce8: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225ce8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225cec: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225cf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225cf4: 0x922e0007  lbu         $t6, 0x7($s1)
    ctx->pc = 0x225cf4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x225cf8: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225cf8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225cfc: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x225cfcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x225d00: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225d04: 0xa22a0000  sb          $t2, 0x0($s1)
    ctx->pc = 0x225d04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x225d08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225d0c: 0xa2290001  sb          $t1, 0x1($s1)
    ctx->pc = 0x225d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x225d10: 0xa22b0002  sb          $t3, 0x2($s1)
    ctx->pc = 0x225d10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 11));
    // 0x225d14: 0xa22c0003  sb          $t4, 0x3($s1)
    ctx->pc = 0x225d14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x225d18: 0xa22d0004  sb          $t5, 0x4($s1)
    ctx->pc = 0x225d18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 13));
    // 0x225d1c: 0x93af0005  lbu         $t7, 0x5($sp)
    ctx->pc = 0x225d1cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x225d20: 0xa22f0005  sb          $t7, 0x5($s1)
    ctx->pc = 0x225d20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 15));
    // 0x225d24: 0x93ae0006  lbu         $t6, 0x6($sp)
    ctx->pc = 0x225d24u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x225d28: 0xa22e0006  sb          $t6, 0x6($s1)
    ctx->pc = 0x225d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 14));
    // 0x225d2c: 0x93af0007  lbu         $t7, 0x7($sp)
    ctx->pc = 0x225d2cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 7)));
    // 0x225d30: 0x1640ffb4  bnez        $s2, . + 4 + (-0x4C << 2)
    ctx->pc = 0x225D30u;
    {
        const bool branch_taken_0x225d30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x225D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D30u;
        // 0x225d34: 0xa22f0007  sb          $t7, 0x7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d30) {
            ctx->pc = 0x225C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225c04;
        }
    }
    ctx->pc = 0x225D38u;
    // 0x225d38: 0x1000ffa7  b           . + 4 + (-0x59 << 2)
    ctx->pc = 0x225D38u;
    {
        const bool branch_taken_0x225d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D38u;
        // 0x225d3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d38) {
            ctx->pc = 0x225BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225bd8;
        }
    }
    ctx->pc = 0x225D40u;
label_225d40:
    // 0x225d40: 0x264e0007  addiu       $t6, $s2, 0x7
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x225d44: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x225d48: 0x1cf9024  and         $s2, $t6, $t7
    ctx->pc = 0x225d48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x225d4c: 0x5240ffa2  beql        $s2, $zero, . + 4 + (-0x5E << 2)
    ctx->pc = 0x225D4Cu;
    {
        const bool branch_taken_0x225d4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x225d4c) {
            ctx->pc = 0x225D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225D4Cu;
            // 0x225d50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225bd8;
        }
    }
    ctx->pc = 0x225D54u;
label_225d54:
    // 0x225d54: 0x922c0000  lbu         $t4, 0x0($s1)
    ctx->pc = 0x225d54u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x225d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d5c: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225d5cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d64: 0x920e0001  lbu         $t6, 0x1($s0)
    ctx->pc = 0x225d64u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x225d68: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x225d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x225d6c: 0x1ec7826  xor         $t7, $t7, $t4
    ctx->pc = 0x225d6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 12));
    // 0x225d70: 0x920d0002  lbu         $t5, 0x2($s0)
    ctx->pc = 0x225d70u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x225d74: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x225d74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225d78: 0x920c0003  lbu         $t4, 0x3($s0)
    ctx->pc = 0x225d78u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x225d7c: 0x922f0001  lbu         $t7, 0x1($s1)
    ctx->pc = 0x225d7cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x225d80: 0x920b0004  lbu         $t3, 0x4($s0)
    ctx->pc = 0x225d80u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x225d84: 0x1cf7026  xor         $t6, $t6, $t7
    ctx->pc = 0x225d84u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 15));
    // 0x225d88: 0x920a0005  lbu         $t2, 0x5($s0)
    ctx->pc = 0x225d88u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x225d8c: 0xa20e0001  sb          $t6, 0x1($s0)
    ctx->pc = 0x225d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 14));
    // 0x225d90: 0x92090006  lbu         $t1, 0x6($s0)
    ctx->pc = 0x225d90u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x225d94: 0x922f0002  lbu         $t7, 0x2($s1)
    ctx->pc = 0x225d94u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x225d98: 0x920e0007  lbu         $t6, 0x7($s0)
    ctx->pc = 0x225d98u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x225d9c: 0x1af6826  xor         $t5, $t5, $t7
    ctx->pc = 0x225d9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 15));
    // 0x225da0: 0xa20d0002  sb          $t5, 0x2($s0)
    ctx->pc = 0x225da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 13));
    // 0x225da4: 0x922f0003  lbu         $t7, 0x3($s1)
    ctx->pc = 0x225da4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x225da8: 0x18f6026  xor         $t4, $t4, $t7
    ctx->pc = 0x225da8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) ^ GPR_U64(ctx, 15));
    // 0x225dac: 0xa20c0003  sb          $t4, 0x3($s0)
    ctx->pc = 0x225dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 12));
    // 0x225db0: 0x922f0004  lbu         $t7, 0x4($s1)
    ctx->pc = 0x225db0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x225db4: 0x16f5826  xor         $t3, $t3, $t7
    ctx->pc = 0x225db4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 15));
    // 0x225db8: 0xa20b0004  sb          $t3, 0x4($s0)
    ctx->pc = 0x225db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 11));
    // 0x225dbc: 0x922f0005  lbu         $t7, 0x5($s1)
    ctx->pc = 0x225dbcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x225dc0: 0x14f5026  xor         $t2, $t2, $t7
    ctx->pc = 0x225dc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 15));
    // 0x225dc4: 0xa20a0005  sb          $t2, 0x5($s0)
    ctx->pc = 0x225dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 10));
    // 0x225dc8: 0x922f0006  lbu         $t7, 0x6($s1)
    ctx->pc = 0x225dc8u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x225dcc: 0x12f4826  xor         $t1, $t1, $t7
    ctx->pc = 0x225dccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 15));
    // 0x225dd0: 0xa2090006  sb          $t1, 0x6($s0)
    ctx->pc = 0x225dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 9));
    // 0x225dd4: 0x922f0007  lbu         $t7, 0x7($s1)
    ctx->pc = 0x225dd4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x225dd8: 0x1cf7026  xor         $t6, $t6, $t7
    ctx->pc = 0x225dd8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 15));
    // 0x225ddc: 0xc089522  jal         func_225488
    ctx->pc = 0x225DDCu;
    SET_GPR_U32(ctx, 31, 0x225DE4u);
    ctx->pc = 0x225DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225DDCu;
    // 0x225de0: 0xa20e0007  sb          $t6, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225488u, 0x225DDCu, 0x225DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DE4u;
label_225de4:
    // 0x225de4: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225de4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225de8: 0xa22f0000  sb          $t7, 0x0($s1)
    ctx->pc = 0x225de8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x225dec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225df0: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225df0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225df4: 0xa22f0001  sb          $t7, 0x1($s1)
    ctx->pc = 0x225df4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x225df8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225dfc: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225dfcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e00: 0xa22f0002  sb          $t7, 0x2($s1)
    ctx->pc = 0x225e00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 15));
    // 0x225e04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225e08: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225e08u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e0c: 0xa22f0003  sb          $t7, 0x3($s1)
    ctx->pc = 0x225e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 15));
    // 0x225e10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225e14: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225e14u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e18: 0xa22f0004  sb          $t7, 0x4($s1)
    ctx->pc = 0x225e18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 15));
    // 0x225e1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225e20: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225e20u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e24: 0xa22f0005  sb          $t7, 0x5($s1)
    ctx->pc = 0x225e24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 15));
    // 0x225e28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225e2c: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225e2cu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e30: 0xa22f0006  sb          $t7, 0x6($s1)
    ctx->pc = 0x225e30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 15));
    // 0x225e34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225e38: 0x920f0000  lbu         $t7, 0x0($s0)
    ctx->pc = 0x225e38u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225e3c: 0xa22f0007  sb          $t7, 0x7($s1)
    ctx->pc = 0x225e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 15));
    // 0x225e40: 0x1640ffc4  bnez        $s2, . + 4 + (-0x3C << 2)
    ctx->pc = 0x225E40u;
    {
        const bool branch_taken_0x225e40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x225E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E40u;
        // 0x225e44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e40) {
            ctx->pc = 0x225D54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225d54;
        }
    }
    ctx->pc = 0x225E48u;
    // 0x225e48: 0x1000ff63  b           . + 4 + (-0x9D << 2)
    ctx->pc = 0x225E48u;
    {
        const bool branch_taken_0x225e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E48u;
        // 0x225e4c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e48) {
            ctx->pc = 0x225BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225bd8;
        }
    }
    ctx->pc = 0x225E50u;
}
