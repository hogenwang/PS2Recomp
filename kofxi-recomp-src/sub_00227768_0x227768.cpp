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

// Function: sub_00227768
// Address: 0x227768 - 0x2278d8
void sub_00227768_0x227768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227768_0x227768");
#endif

    switch (ctx->pc) {
        case 0x227790u: goto label_227790;
        case 0x22779cu: goto label_22779c;
        case 0x2277c0u: goto label_2277c0;
        case 0x2277ecu: goto label_2277ec;
        case 0x227810u: goto label_227810;
        case 0x227818u: goto label_227818;
        case 0x22782cu: goto label_22782c;
        case 0x22784cu: goto label_22784c;
        case 0x227858u: goto label_227858;
        case 0x227868u: goto label_227868;
        default: break;
    }

    ctx->pc = 0x227768u;

    // 0x227768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22776c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x22776cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x227770: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x227770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x227774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x227778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22777c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22777cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227780: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x227780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x227784: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227788: 0xc0899d6  jal         func_226758
    ctx->pc = 0x227788u;
    SET_GPR_U32(ctx, 31, 0x227790u);
    ctx->pc = 0x22778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227788u;
    // 0x22778c: 0x8df0f1e0  lw          $s0, -0xE20($t7) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226758u, 0x227788u, 0x227790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227790u;
label_227790:
    // 0x227790: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227790u;
    {
        const bool branch_taken_0x227790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227790u;
        // 0x227794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227790) {
            ctx->pc = 0x2277B8u;
            goto label_2277b8;
        }
    }
    ctx->pc = 0x227798u;
    // 0x227798: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x227798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_22779c:
    // 0x22779c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22779cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2277a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2277a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2277a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2277a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2277a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2277a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2277ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2277acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2277b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2277B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2277B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277B0u;
        // 0x2277b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2277B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2277B8u;
label_2277b8:
    // 0x2277b8: 0xc0bd2ec  jal         func_2F4BB0
    ctx->pc = 0x2277B8u;
    SET_GPR_U32(ctx, 31, 0x2277C0u);
    ctx->pc = 0x2277BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277B8u;
    // 0x2277bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4BB0u, 0x2277B8u, 0x2277C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277C0u;
label_2277c0:
    // 0x2277c0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2277c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2277c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2277c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2277c8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2277C8u;
    {
        const bool branch_taken_0x2277c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2277CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277C8u;
        // 0x2277cc: 0xade2f1e4  sw          $v0, -0xE1C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277c8) {
            ctx->pc = 0x2277F4u;
            goto label_2277f4;
        }
    }
    ctx->pc = 0x2277D0u;
    // 0x2277d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2277d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2277d4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2277d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2277d8: 0x24844140  addiu       $a0, $a0, 0x4140
    ctx->pc = 0x2277d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16704));
    // 0x2277dc: 0x24e74150  addiu       $a3, $a3, 0x4150
    ctx->pc = 0x2277dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16720));
    // 0x2277e0: 0x24050318  addiu       $a1, $zero, 0x318
    ctx->pc = 0x2277e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 792));
    // 0x2277e4: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2277E4u;
    SET_GPR_U32(ctx, 31, 0x2277ECu);
    ctx->pc = 0x2277E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2277E4u;
    // 0x2277e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2277E4u, 0x2277ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2277ECu;
label_2277ec:
    // 0x2277ec: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x2277ECu;
    {
        const bool branch_taken_0x2277ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2277F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2277ECu;
        // 0x2277f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2277ec) {
            ctx->pc = 0x22779Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22779c;
        }
    }
    ctx->pc = 0x2277F4u;
label_2277f4:
    // 0x2277f4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2277f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2277f8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2277f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2277fc: 0x24844140  addiu       $a0, $a0, 0x4140
    ctx->pc = 0x2277fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16704));
    // 0x227800: 0x24e74170  addiu       $a3, $a3, 0x4170
    ctx->pc = 0x227800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16752));
    // 0x227804: 0x2405031d  addiu       $a1, $zero, 0x31D
    ctx->pc = 0x227804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 797));
    // 0x227808: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x227808u;
    SET_GPR_U32(ctx, 31, 0x227810u);
    ctx->pc = 0x22780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227808u;
    // 0x22780c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x227808u, 0x227810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227810u;
label_227810:
    // 0x227810: 0xc0bd610  jal         func_2F5840
    ctx->pc = 0x227810u;
    SET_GPR_U32(ctx, 31, 0x227818u);
    ctx->pc = 0x227814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227810u;
    // 0x227814: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5840u, 0x227810u, 0x227818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227818u;
label_227818:
    // 0x227818: 0x8e2f0010  lw          $t7, 0x10($s1)
    ctx->pc = 0x227818u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x22781c: 0x15e00020  bnez        $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x22781Cu;
    {
        const bool branch_taken_0x22781c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x227820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22781Cu;
        // 0x227820: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22781c) {
            ctx->pc = 0x2278A0u;
            goto label_2278a0;
        }
    }
    ctx->pc = 0x227824u;
    // 0x227824: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x227824u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x227828: 0x25e54198  addiu       $a1, $t7, 0x4198
    ctx->pc = 0x227828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 16792));
label_22782c:
    // 0x22782c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22782cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x227830: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x227830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x227834: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x227834u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x227838: 0x248441a0  addiu       $a0, $a0, 0x41A0
    ctx->pc = 0x227838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16800));
    // 0x22783c: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x22783cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x227840: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x227840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227844: 0xc043e52  jal         func_10F948
    ctx->pc = 0x227844u;
    SET_GPR_U32(ctx, 31, 0x22784Cu);
    ctx->pc = 0x227848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227844u;
    // 0x227848: 0x8e29000c  lw          $t1, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x227844u, 0x22784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22784Cu;
label_22784c:
    // 0x22784c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x22784cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x227850: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x227850u;
    {
        const bool branch_taken_0x227850 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227850u;
        // 0x227854: 0x3c12003f  lui         $s2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227850) {
            ctx->pc = 0x22787Cu;
            goto label_22787c;
        }
    }
    ctx->pc = 0x227858u;
label_227858:
    // 0x227858: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x227858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22785c: 0x264441e0  addiu       $a0, $s2, 0x41E0
    ctx->pc = 0x22785cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16864));
    // 0x227860: 0xc043e52  jal         func_10F948
    ctx->pc = 0x227860u;
    SET_GPR_U32(ctx, 31, 0x227868u);
    ctx->pc = 0x227864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227860u;
    // 0x227864: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x227860u, 0x227868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227868u;
label_227868:
    // 0x227868: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x227868u;
    {
        const bool branch_taken_0x227868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227868u;
        // 0x22786c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227868) {
            ctx->pc = 0x227874u;
            goto label_227874;
        }
    }
    ctx->pc = 0x227870u;
    // 0x227870: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x227870u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_227874:
    // 0x227874: 0x15e0fff8  bnez        $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x227874u;
    {
        const bool branch_taken_0x227874 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x227878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227874u;
        // 0x227878: 0x1e0802d  daddu       $s0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227874) {
            ctx->pc = 0x227858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_227858;
        }
    }
    ctx->pc = 0x22787Cu;
label_22787c:
    // 0x22787c: 0x8e2d0018  lw          $t5, 0x18($s1)
    ctx->pc = 0x22787cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x227880: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x227880u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227884: 0xde2c0020  ld          $t4, 0x20($s1)
    ctx->pc = 0x227884u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x227888: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x227888u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x22788c: 0xadeef1d8  sw          $t6, -0xE28($t7)
    ctx->pc = 0x22788cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294963672), GPR_U32(ctx, 14));
    // 0x227890: 0xc103c  dsll32      $v0, $t4, 0
    ctx->pc = 0x227890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
    // 0x227894: 0xae6d0000  sw          $t5, 0x0($s3)
    ctx->pc = 0x227894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 13));
    // 0x227898: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
    ctx->pc = 0x227898u;
    {
        const bool branch_taken_0x227898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227898u;
        // 0x22789c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227898) {
            ctx->pc = 0x22779Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22779c;
        }
    }
    ctx->pc = 0x2278A0u;
label_2278a0:
    // 0x2278a0: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x2278A0u;
    {
        const bool branch_taken_0x2278a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2278A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278A0u;
        // 0x2278a4: 0x25e54190  addiu       $a1, $t7, 0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 16784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2278a0) {
            ctx->pc = 0x22782Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22782c;
        }
    }
    ctx->pc = 0x2278A8u;
    // 0x2278a8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2278a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2278ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2278ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278ACu;
        // 0x2278b0: 0xade4f1f0  sw          $a0, -0xE10($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963696), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278B4u;
    // 0x2278b4: 0x0  nop
    ctx->pc = 0x2278b4u;
    // NOP
    // 0x2278b8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2278b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2278bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2278BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278BCu;
        // 0x2278c0: 0xade4f1f4  sw          $a0, -0xE0C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963700), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278C4u;
    // 0x2278c4: 0x0  nop
    ctx->pc = 0x2278c4u;
    // NOP
    // 0x2278c8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2278c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2278cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2278CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2278D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2278CCu;
        // 0x2278d0: 0xade4f1f8  sw          $a0, -0xE08($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294963704), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2278CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2278D4u;
    // 0x2278d4: 0x0  nop
    ctx->pc = 0x2278d4u;
    // NOP
}
