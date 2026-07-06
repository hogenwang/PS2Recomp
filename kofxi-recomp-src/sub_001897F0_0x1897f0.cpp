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

// Function: sub_001897F0
// Address: 0x1897f0 - 0x189990
void sub_001897F0_0x1897f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001897F0_0x1897f0");
#endif

    switch (ctx->pc) {
        case 0x189838u: goto label_189838;
        case 0x189850u: goto label_189850;
        case 0x189868u: goto label_189868;
        case 0x189880u: goto label_189880;
        case 0x189898u: goto label_189898;
        case 0x1898b0u: goto label_1898b0;
        case 0x1898c8u: goto label_1898c8;
        case 0x1898e0u: goto label_1898e0;
        case 0x1898f8u: goto label_1898f8;
        case 0x189910u: goto label_189910;
        case 0x189928u: goto label_189928;
        case 0x189940u: goto label_189940;
        case 0x189958u: goto label_189958;
        case 0x189978u: goto label_189978;
        default: break;
    }

    ctx->pc = 0x1897f0u;

    // 0x1897f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1897f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1897f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1897f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1897f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1897f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1897fc: 0x948304f8  lhu         $v1, 0x4F8($a0)
    ctx->pc = 0x1897fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1272)));
    // 0x189800: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x189800u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x189804: 0x10200054  beqz        $at, . + 4 + (0x54 << 2)
    ctx->pc = 0x189804u;
    {
        const bool branch_taken_0x189804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x189808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189804u;
        // 0x189808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189804) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x18980Cu;
    // 0x18980c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x18980cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x189810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x189810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x189814: 0x2484e7e0  addiu       $a0, $a0, -0x1820
    ctx->pc = 0x189814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961120));
    // 0x189818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18981c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189820: 0x600008  jr          $v1
    ctx->pc = 0x189820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189828u: goto label_189828;
            case 0x189840u: goto label_189840;
            case 0x189858u: goto label_189858;
            case 0x189870u: goto label_189870;
            case 0x189888u: goto label_189888;
            case 0x1898A0u: goto label_1898a0;
            case 0x1898B8u: goto label_1898b8;
            case 0x1898D0u: goto label_1898d0;
            case 0x1898E8u: goto label_1898e8;
            case 0x189900u: goto label_189900;
            case 0x189918u: goto label_189918;
            case 0x189930u: goto label_189930;
            case 0x189948u: goto label_189948;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x189828u;
label_189828:
    // 0x189828: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x18982c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189830: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189830u;
    SET_GPR_U32(ctx, 31, 0x189838u);
    ctx->pc = 0x189834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189830u;
    // 0x189834: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189830u, 0x189838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189838u;
label_189838:
    // 0x189838: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x189838u;
    {
        const bool branch_taken_0x189838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189838u;
        // 0x18983c: 0x860304f6  lh          $v1, 0x4F6($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1270)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189838) {
            ctx->pc = 0x18995Cu;
            goto label_18995c;
        }
    }
    ctx->pc = 0x189840u;
label_189840:
    // 0x189840: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x189844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189848: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189848u;
    SET_GPR_U32(ctx, 31, 0x189850u);
    ctx->pc = 0x18984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189848u;
    // 0x18984c: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189848u, 0x189850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189850u;
label_189850:
    // 0x189850: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x189850u;
    {
        const bool branch_taken_0x189850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189850) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189858u;
label_189858:
    // 0x189858: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x18985c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189860: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189860u;
    SET_GPR_U32(ctx, 31, 0x189868u);
    ctx->pc = 0x189864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189860u;
    // 0x189864: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189860u, 0x189868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189868u;
label_189868:
    // 0x189868: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x189868u;
    {
        const bool branch_taken_0x189868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189868) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189870u;
label_189870:
    // 0x189870: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x189874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189878: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189878u;
    SET_GPR_U32(ctx, 31, 0x189880u);
    ctx->pc = 0x18987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189878u;
    // 0x18987c: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189878u, 0x189880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189880u;
label_189880:
    // 0x189880: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x189880u;
    {
        const bool branch_taken_0x189880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189880) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189888u;
label_189888:
    // 0x189888: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x18988c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189890: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189890u;
    SET_GPR_U32(ctx, 31, 0x189898u);
    ctx->pc = 0x189894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189890u;
    // 0x189894: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189890u, 0x189898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189898u;
label_189898:
    // 0x189898: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x189898u;
    {
        const bool branch_taken_0x189898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189898) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x1898A0u;
label_1898a0:
    // 0x1898a0: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x1898a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1898a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1898a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1898a8: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1898A8u;
    SET_GPR_U32(ctx, 31, 0x1898B0u);
    ctx->pc = 0x1898ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898A8u;
    // 0x1898ac: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x1898A8u, 0x1898B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898B0u;
label_1898b0:
    // 0x1898b0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1898B0u;
    {
        const bool branch_taken_0x1898b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898b0) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x1898B8u;
label_1898b8:
    // 0x1898b8: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1898bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1898bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1898c0: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1898C0u;
    SET_GPR_U32(ctx, 31, 0x1898C8u);
    ctx->pc = 0x1898C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898C0u;
    // 0x1898c4: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x1898C0u, 0x1898C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898C8u;
label_1898c8:
    // 0x1898c8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1898C8u;
    {
        const bool branch_taken_0x1898c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898c8) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x1898D0u;
label_1898d0:
    // 0x1898d0: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x1898d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1898d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1898d8: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1898D8u;
    SET_GPR_U32(ctx, 31, 0x1898E0u);
    ctx->pc = 0x1898DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898D8u;
    // 0x1898dc: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x1898D8u, 0x1898E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898E0u;
label_1898e0:
    // 0x1898e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1898E0u;
    {
        const bool branch_taken_0x1898e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898e0) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x1898E8u;
label_1898e8:
    // 0x1898e8: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x1898ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1898ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1898f0: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x1898F0u;
    SET_GPR_U32(ctx, 31, 0x1898F8u);
    ctx->pc = 0x1898F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1898F0u;
    // 0x1898f4: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x1898F0u, 0x1898F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1898F8u;
label_1898f8:
    // 0x1898f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1898F8u;
    {
        const bool branch_taken_0x1898f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898f8) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189900u;
label_189900:
    // 0x189900: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x189904: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189908: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189908u;
    SET_GPR_U32(ctx, 31, 0x189910u);
    ctx->pc = 0x18990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189908u;
    // 0x18990c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189908u, 0x189910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189910u;
label_189910:
    // 0x189910: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x189910u;
    {
        const bool branch_taken_0x189910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189910) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189918u;
label_189918:
    // 0x189918: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x18991c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189920: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189920u;
    SET_GPR_U32(ctx, 31, 0x189928u);
    ctx->pc = 0x189924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189920u;
    // 0x189924: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189920u, 0x189928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189928u;
label_189928:
    // 0x189928: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189928u;
    {
        const bool branch_taken_0x189928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189928) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189930u;
label_189930:
    // 0x189930: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x189934: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189938: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189938u;
    SET_GPR_U32(ctx, 31, 0x189940u);
    ctx->pc = 0x18993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189938u;
    // 0x18993c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189938u, 0x189940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189940u;
label_189940:
    // 0x189940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x189940u;
    {
        const bool branch_taken_0x189940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189940) {
            ctx->pc = 0x189958u;
            goto label_189958;
        }
    }
    ctx->pc = 0x189948u;
label_189948:
    // 0x189948: 0x2604028c  addiu       $a0, $s0, 0x28C
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x18994c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18994cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189950: 0xc04bbe8  jal         func_12EFA0
    ctx->pc = 0x189950u;
    SET_GPR_U32(ctx, 31, 0x189958u);
    ctx->pc = 0x189954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189950u;
    // 0x189954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFA0u, 0x189950u, 0x189958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189958u;
label_189958:
    // 0x189958: 0x860304f6  lh          $v1, 0x4F6($s0)
    ctx->pc = 0x189958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1270)));
label_18995c:
    // 0x18995c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18995Cu;
    {
        const bool branch_taken_0x18995c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18995c) {
            ctx->pc = 0x189960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18995Cu;
            // 0x189960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x189970u;
            goto label_189970;
        }
    }
    ctx->pc = 0x189964u;
    // 0x189964: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x189964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x189968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189968u;
    {
        const bool branch_taken_0x189968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189968u;
        // 0x18996c: 0xa60304f6  sh          $v1, 0x4F6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1270), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189968) {
            ctx->pc = 0x189978u;
            goto label_189978;
        }
    }
    ctx->pc = 0x189970u;
label_189970:
    // 0x189970: 0xc062668  jal         func_1899A0
    ctx->pc = 0x189970u;
    SET_GPR_U32(ctx, 31, 0x189978u);
    ctx->pc = 0x1899A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1899A0u, 0x189970u, 0x189978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189978u;
label_189978:
    // 0x189978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18997c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18997cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189980: 0x3e00008  jr          $ra
    ctx->pc = 0x189980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189980u;
        // 0x189984: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189988u;
    // 0x189988: 0x0  nop
    ctx->pc = 0x189988u;
    // NOP
    // 0x18998c: 0x0  nop
    ctx->pc = 0x18998cu;
    // NOP
}
