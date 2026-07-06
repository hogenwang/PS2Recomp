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

// Function: sub_001226F0
// Address: 0x1226f0 - 0x122918
void sub_001226F0_0x1226f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001226F0_0x1226f0");
#endif

    switch (ctx->pc) {
        case 0x12273cu: goto label_12273c;
        case 0x1227ccu: goto label_1227cc;
        case 0x1227f8u: goto label_1227f8;
        case 0x122814u: goto label_122814;
        case 0x122840u: goto label_122840;
        case 0x122860u: goto label_122860;
        case 0x1228a4u: goto label_1228a4;
        default: break;
    }

    ctx->pc = 0x1226f0u;

    // 0x1226f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x1226f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1226f4: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x1226f4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1226f8: 0x15e00067  bnez        $t7, . + 4 + (0x67 << 2)
    ctx->pc = 0x1226F8u;
    {
        const bool branch_taken_0x1226f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1226FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226F8u;
        // 0x1226fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226f8) {
            ctx->pc = 0x122898u;
            goto label_122898;
        }
    }
    ctx->pc = 0x122700u;
    // 0x122700: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x122700u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122704: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x122704u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122708: 0x15e00063  bnez        $t7, . + 4 + (0x63 << 2)
    ctx->pc = 0x122708u;
    {
        const bool branch_taken_0x122708 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122708u;
        // 0x12270c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122708) {
            ctx->pc = 0x122898u;
            goto label_122898;
        }
    }
    ctx->pc = 0x122710u;
    // 0x122710: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x122710u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x122714: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x122714u;
    {
        const bool branch_taken_0x122714 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122714u;
        // 0x122718: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122714) {
            ctx->pc = 0x122744u;
            goto label_122744;
        }
    }
    ctx->pc = 0x12271Cu;
    // 0x12271c: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12271Cu;
    {
        const bool branch_taken_0x12271c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12271c) {
            ctx->pc = 0x12273Cu;
            goto label_12273c;
        }
    }
    ctx->pc = 0x122724u;
    // 0x122724: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x122724u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122728: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x122728u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12272c: 0x11ee0003  beq         $t7, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12272Cu;
    {
        const bool branch_taken_0x12272c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x122730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12272Cu;
        // 0x122730: 0x3c0f003e  lui         $t7, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12272c) {
            ctx->pc = 0x12273Cu;
            goto label_12273c;
        }
    }
    ctx->pc = 0x122734u;
    // 0x122734: 0x3e00008  jr          $ra
    ctx->pc = 0x122734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122734u;
        // 0x122738: 0x25e2b730  addiu       $v0, $t7, -0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12273Cu;
label_12273c:
    // 0x12273c: 0x3e00008  jr          $ra
    ctx->pc = 0x12273Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12273Cu;
        // 0x122740: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12273Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122744u;
label_122744:
    // 0x122744: 0x11e00054  beqz        $t7, . + 4 + (0x54 << 2)
    ctx->pc = 0x122744u;
    {
        const bool branch_taken_0x122744 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122744u;
        // 0x122748: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122744) {
            ctx->pc = 0x122898u;
            goto label_122898;
        }
    }
    ctx->pc = 0x12274Cu;
    // 0x12274c: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x12274cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x122750: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x122750u;
    {
        const bool branch_taken_0x122750 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x122754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122750u;
        // 0x122754: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122750) {
            ctx->pc = 0x122790u;
            goto label_122790;
        }
    }
    ctx->pc = 0x122758u;
    // 0x122758: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x122758u;
    {
        const bool branch_taken_0x122758 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x122758) {
            ctx->pc = 0x12273Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12273c;
        }
    }
    ctx->pc = 0x122760u;
    // 0x122760: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x122760u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122764: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x122764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122768: 0xfcce0000  sd          $t6, 0x0($a2)
    ctx->pc = 0x122768u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 14));
    // 0x12276c: 0xdc8f0008  ld          $t7, 0x8($a0)
    ctx->pc = 0x12276cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x122770: 0xfccf0008  sd          $t7, 0x8($a2)
    ctx->pc = 0x122770u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 15));
    // 0x122774: 0xdc8e0010  ld          $t6, 0x10($a0)
    ctx->pc = 0x122774u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x122778: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x122778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x12277c: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12277cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x122780: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x122780u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122784: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x122784u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x122788: 0x3e00008  jr          $ra
    ctx->pc = 0x122788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122788u;
        // 0x12278c: 0xaccf0004  sw          $t7, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122790u;
label_122790:
    // 0x122790: 0x11e00041  beqz        $t7, . + 4 + (0x41 << 2)
    ctx->pc = 0x122790u;
    {
        const bool branch_taken_0x122790 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122790u;
        // 0x122794: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122790) {
            ctx->pc = 0x122898u;
            goto label_122898;
        }
    }
    ctx->pc = 0x122798u;
    // 0x122798: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x122798u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12279c: 0x8cac0008  lw          $t4, 0x8($a1)
    ctx->pc = 0x12279cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1227a0: 0xdc8b0010  ld          $t3, 0x10($a0)
    ctx->pc = 0x1227a0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1227a4: 0x12c7823  subu        $t7, $t1, $t4
    ctx->pc = 0x1227a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x1227a8: 0x5e20001  bltzl       $t7, . + 4 + (0x1 << 2)
    ctx->pc = 0x1227A8u;
    {
        const bool branch_taken_0x1227a8 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x1227a8) {
            ctx->pc = 0x1227ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1227A8u;
            // 0x1227ac: 0xf7823  negu        $t7, $t7 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1227B0u;
            goto label_1227b0;
        }
    }
    ctx->pc = 0x1227B0u;
label_1227b0:
    // 0x1227b0: 0x29ef0040  slti        $t7, $t7, 0x40
    ctx->pc = 0x1227b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1227b4: 0x11e00050  beqz        $t7, . + 4 + (0x50 << 2)
    ctx->pc = 0x1227B4u;
    {
        const bool branch_taken_0x1227b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227B4u;
        // 0x1227b8: 0xdcaa0010  ld          $t2, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227b4) {
            ctx->pc = 0x1228F8u;
            goto label_1228f8;
        }
    }
    ctx->pc = 0x1227BCu;
    // 0x1227bc: 0x189782a  slt         $t7, $t4, $t1
    ctx->pc = 0x1227bcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1227c0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1227C0u;
    {
        const bool branch_taken_0x1227c0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227C0u;
        // 0x1227c4: 0x12c782a  slt         $t7, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227c0) {
            ctx->pc = 0x1227F0u;
            goto label_1227f0;
        }
    }
    ctx->pc = 0x1227C8u;
    // 0x1227c8: 0x12c6023  subu        $t4, $t1, $t4
    ctx->pc = 0x1227c8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_1227cc:
    // 0x1227cc: 0xa707a  dsrl        $t6, $t2, 1
    ctx->pc = 0x1227ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) >> 1);
    // 0x1227d0: 0x314f0001  andi        $t7, $t2, 0x1
    ctx->pc = 0x1227d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x1227d4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x1227d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1227d8: 0x0  nop
    ctx->pc = 0x1227d8u;
    // NOP
    // 0x1227dc: 0x0  nop
    ctx->pc = 0x1227dcu;
    // NOP
    // 0x1227e0: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1227E0u;
    {
        const bool branch_taken_0x1227e0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1227E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1227E0u;
        // 0x1227e4: 0x1ee5025  or          $t2, $t7, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1227e0) {
            ctx->pc = 0x1227CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1227cc;
        }
    }
    ctx->pc = 0x1227E8u;
    // 0x1227e8: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x1227e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1227ec: 0x12c782a  slt         $t7, $t1, $t4
    ctx->pc = 0x1227ecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_1227f0:
    // 0x1227f0: 0x51e00009  beql        $t7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1227F0u;
    {
        const bool branch_taken_0x1227f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227f0) {
            ctx->pc = 0x1227F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1227F0u;
            // 0x1227f4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122818u;
            goto label_122818;
        }
    }
    ctx->pc = 0x1227F8u;
label_1227f8:
    // 0x1227f8: 0xb787a  dsrl        $t7, $t3, 1
    ctx->pc = 0x1227f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) >> 1);
    // 0x1227fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x122800: 0x316e0001  andi        $t6, $t3, 0x1
    ctx->pc = 0x122800u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x122804: 0x12c682a  slt         $t5, $t1, $t4
    ctx->pc = 0x122804u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x122808: 0x0  nop
    ctx->pc = 0x122808u;
    // NOP
    // 0x12280c: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12280Cu;
    {
        const bool branch_taken_0x12280c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x122810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12280Cu;
        // 0x122810: 0x1cf5825  or          $t3, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12280c) {
            ctx->pc = 0x1227F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1227f8;
        }
    }
    ctx->pc = 0x122814u;
label_122814:
    // 0x122814: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x122814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_122818:
    // 0x122818: 0x8caf0004  lw          $t7, 0x4($a1)
    ctx->pc = 0x122818u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12281c: 0x108f0030  beq         $a0, $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x12281Cu;
    {
        const bool branch_taken_0x12281c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x122820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12281Cu;
        // 0x122820: 0x16a782f  dsubu       $t7, $t3, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) - GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12281c) {
            ctx->pc = 0x1228E0u;
            goto label_1228e0;
        }
    }
    ctx->pc = 0x122824u;
    // 0x122824: 0x14b702f  dsubu       $t6, $t2, $t3
    ctx->pc = 0x122824u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) - GPR_U64(ctx, 11));
    // 0x122828: 0x1e4700a  movz        $t6, $t7, $a0
    ctx->pc = 0x122828u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 15));
    // 0x12282c: 0x5c20027  bltzl       $t6, . + 4 + (0x27 << 2)
    ctx->pc = 0x12282Cu;
    {
        const bool branch_taken_0x12282c = (GPR_S32(ctx, 14) < 0);
        if (branch_taken_0x12282c) {
            ctx->pc = 0x122830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12282Cu;
            // 0x122830: 0xe702f  dsubu       $t6, $zero, $t6 (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1228CCu;
            goto label_1228cc;
        }
    }
    ctx->pc = 0x122834u;
    // 0x122834: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x122834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x122838: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x122838u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x12283c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x12283cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_122840:
    // 0x122840: 0xdccc0010  ld          $t4, 0x10($a2)
    ctx->pc = 0x122840u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x122844: 0x240fffe0  addiu       $t7, $zero, -0x20
    ctx->pc = 0x122844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x122848: 0x240bffe0  addiu       $t3, $zero, -0x20
    ctx->pc = 0x122848u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x12284c: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x12284cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x122850: 0x658effff  daddiu      $t6, $t4, -0x1
    ctx->pc = 0x122850u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4294967295);
    // 0x122854: 0x1ee782b  sltu        $t7, $t7, $t6
    ctx->pc = 0x122854u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x122858: 0x11e00011  beqz        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x122858u;
    {
        const bool branch_taken_0x122858 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122858u;
        // 0x12285c: 0xb593a  dsrl        $t3, $t3, 4 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122858) {
            ctx->pc = 0x1228A0u;
            goto label_1228a0;
        }
    }
    ctx->pc = 0x122860u;
label_122860:
    // 0x122860: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x122860u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122864: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x122864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x122868: 0xf78fa  dsrl        $t7, $t7, 3
    ctx->pc = 0x122868u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 3);
    // 0x12286c: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12286cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x122870: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x122870u;
    {
        const bool branch_taken_0x122870 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x122874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122870u;
        // 0x122874: 0xacce0000  sw          $t6, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122870) {
            ctx->pc = 0x122894u;
            goto label_122894;
        }
    }
    ctx->pc = 0x122878u;
    // 0x122878: 0x8ccf0008  lw          $t7, 0x8($a2)
    ctx->pc = 0x122878u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x12287c: 0xc687a  dsrl        $t5, $t4, 1
    ctx->pc = 0x12287cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) >> 1);
    // 0x122880: 0x318e0001  andi        $t6, $t4, 0x1
    ctx->pc = 0x122880u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x122884: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x122884u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x122888: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x122888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12288c: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x12288cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x122890: 0xaccf0008  sw          $t7, 0x8($a2)
    ctx->pc = 0x122890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 15));
label_122894:
    // 0x122894: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x122894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122898:
    // 0x122898: 0x3e00008  jr          $ra
    ctx->pc = 0x122898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1228A0u;
label_1228a0:
    // 0x1228a0: 0x8cce0008  lw          $t6, 0x8($a2)
    ctx->pc = 0x1228a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1228a4:
    // 0x1228a4: 0xc6878  dsll        $t5, $t4, 1
    ctx->pc = 0x1228a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << 1);
    // 0x1228a8: 0x65afffff  daddiu      $t7, $t5, -0x1
    ctx->pc = 0x1228a8u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 13) + (int64_t)(int32_t)4294967295);
    // 0x1228ac: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x1228acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x1228b0: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1228b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1228b4: 0x16f782b  sltu        $t7, $t3, $t7
    ctx->pc = 0x1228b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x1228b8: 0xacce0008  sw          $t6, 0x8($a2)
    ctx->pc = 0x1228b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 14));
    // 0x1228bc: 0x15e0ffe8  bnez        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1228BCu;
    {
        const bool branch_taken_0x1228bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228BCu;
        // 0x1228c0: 0x1a0602d  daddu       $t4, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228bc) {
            ctx->pc = 0x122860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122860;
        }
    }
    ctx->pc = 0x1228C4u;
    // 0x1228c4: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1228C4u;
    {
        const bool branch_taken_0x1228c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228C4u;
        // 0x1228c8: 0x8cce0008  lw          $t6, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228c4) {
            ctx->pc = 0x1228A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1228a4;
        }
    }
    ctx->pc = 0x1228CCu;
label_1228cc:
    // 0x1228cc: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x1228ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x1228d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1228d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1228d4: 0xfcce0010  sd          $t6, 0x10($a2)
    ctx->pc = 0x1228d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 14));
    // 0x1228d8: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x1228D8u;
    {
        const bool branch_taken_0x1228d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228D8u;
        // 0x1228dc: 0xaccf0004  sw          $t7, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228d8) {
            ctx->pc = 0x122840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122840;
        }
    }
    ctx->pc = 0x1228E0u;
label_1228e0:
    // 0x1228e0: 0x16a782d  daddu       $t7, $t3, $t2
    ctx->pc = 0x1228e0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 10));
    // 0x1228e4: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1228e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1228e8: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x1228e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x1228ec: 0x1e0602d  daddu       $t4, $t7, $zero
    ctx->pc = 0x1228ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1228f0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1228F0u;
    {
        const bool branch_taken_0x1228f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228F0u;
        // 0x1228f4: 0xfccf0010  sd          $t7, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228f0) {
            ctx->pc = 0x122860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122860;
        }
    }
    ctx->pc = 0x1228F8u;
label_1228f8:
    // 0x1228f8: 0x189782a  slt         $t7, $t4, $t1
    ctx->pc = 0x1228f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1228fc: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1228FCu;
    {
        const bool branch_taken_0x1228fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228fc) {
            ctx->pc = 0x122900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1228FCu;
            // 0x122900: 0x180482d  daddu       $t1, $t4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12290Cu;
            goto label_12290c;
        }
    }
    ctx->pc = 0x122904u;
    // 0x122904: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x122904u;
    {
        const bool branch_taken_0x122904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122904u;
        // 0x122908: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122904) {
            ctx->pc = 0x122814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122814;
        }
    }
    ctx->pc = 0x12290Cu;
label_12290c:
    // 0x12290c: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x12290Cu;
    {
        const bool branch_taken_0x12290c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12290Cu;
        // 0x122910: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12290c) {
            ctx->pc = 0x122814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_122814;
        }
    }
    ctx->pc = 0x122914u;
    // 0x122914: 0x0  nop
    ctx->pc = 0x122914u;
    // NOP
    if (ctx->pc == 0x122914u) { ctx->pc = 0x122918u; }
}
