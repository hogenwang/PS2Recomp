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

// Function: sub_00309770
// Address: 0x309770 - 0x3098c0
void sub_00309770_0x309770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309770_0x309770");
#endif

    switch (ctx->pc) {
        case 0x3097d4u: goto label_3097d4;
        case 0x3097f4u: goto label_3097f4;
        case 0x309800u: goto label_309800;
        case 0x309820u: goto label_309820;
        case 0x309830u: goto label_309830;
        case 0x30985cu: goto label_30985c;
        case 0x309868u: goto label_309868;
        case 0x309888u: goto label_309888;
        default: break;
    }

    ctx->pc = 0x309770u;

    // 0x309770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x309770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x309774: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309778: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x309778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30977c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x309780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x309780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x309784: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x309784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x309788: 0x8c920060  lw          $s2, 0x60($a0)
    ctx->pc = 0x309788u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x30978c: 0x52430046  beql        $s2, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x30978Cu;
    {
        const bool branch_taken_0x30978c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x30978c) {
            ctx->pc = 0x309790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30978Cu;
            // 0x309790: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3098A8u;
            goto label_3098a8;
        }
    }
    ctx->pc = 0x309794u;
    // 0x309794: 0x2e430007  sltiu       $v1, $s2, 0x7
    ctx->pc = 0x309794u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x309798: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x309798u;
    {
        const bool branch_taken_0x309798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x309798) {
            ctx->pc = 0x3098A4u;
            goto label_3098a4;
        }
    }
    ctx->pc = 0x3097A0u;
    // 0x3097a0: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x3097a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x3097a4: 0x8c631e68  lw          $v1, 0x1E68($v1)
    ctx->pc = 0x3097a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7784)));
    // 0x3097a8: 0x1243003e  beq         $s2, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x3097A8u;
    {
        const bool branch_taken_0x3097a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3097a8) {
            ctx->pc = 0x3098A4u;
            goto label_3098a4;
        }
    }
    ctx->pc = 0x3097B0u;
    // 0x3097b0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x3097b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x3097b4: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x3097b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3097b8: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x3097b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
    // 0x3097bc: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3097bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3097c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3097c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3097c4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3097C4u;
    {
        const bool branch_taken_0x3097c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3097c4) {
            ctx->pc = 0x3097C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3097C4u;
            // 0x3097c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309828u;
            goto label_309828;
        }
    }
    ctx->pc = 0x3097CCu;
    // 0x3097cc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3097CCu;
    SET_GPR_U32(ctx, 31, 0x3097D4u);
    ctx->pc = 0x3097D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097CCu;
    // 0x3097d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3097CCu, 0x3097D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097D4u;
label_3097d4:
    // 0x3097d4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x3097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3097d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3097d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3097dc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3097dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3097e0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x3097e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x3097e4: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x3097e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x3097e8: 0x38140  sll         $s0, $v1, 5
    ctx->pc = 0x3097e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3097ec: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3097ECu;
    SET_GPR_U32(ctx, 31, 0x3097F4u);
    ctx->pc = 0x3097F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097ECu;
    // 0x3097f0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3097ECu, 0x3097F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3097F4u;
label_3097f4:
    // 0x3097f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3097f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3097f8: 0xc040454  jal         func_101150
    ctx->pc = 0x3097F8u;
    SET_GPR_U32(ctx, 31, 0x309800u);
    ctx->pc = 0x3097FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3097F8u;
    // 0x3097fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3097F8u, 0x309800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309800u;
label_309800:
    // 0x309800: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309804: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309808: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x309808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
    // 0x30980c: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x30980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
    // 0x309810: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x309810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x309814: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x309814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309818: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309818u;
    SET_GPR_U32(ctx, 31, 0x309820u);
    ctx->pc = 0x30981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309818u;
    // 0x30981c: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x309818u, 0x309820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309820u;
label_309820:
    // 0x309820: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x309820u;
    {
        const bool branch_taken_0x309820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309820) {
            ctx->pc = 0x309888u;
            goto label_309888;
        }
    }
    ctx->pc = 0x309828u;
label_309828:
    // 0x309828: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x309828u;
    SET_GPR_U32(ctx, 31, 0x309830u);
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x309828u, 0x309830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309830u;
label_309830:
    // 0x309830: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x309830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x309834: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x309834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309838: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x309838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30983c: 0x24632da0  addiu       $v1, $v1, 0x2DA0
    ctx->pc = 0x30983cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11680));
    // 0x309840: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309844: 0x48140  sll         $s0, $a0, 5
    ctx->pc = 0x309844u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x309848: 0x24423b20  addiu       $v0, $v0, 0x3B20
    ctx->pc = 0x309848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15136));
    // 0x30984c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x309850: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x309850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309854: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309854u;
    SET_GPR_U32(ctx, 31, 0x30985Cu);
    ctx->pc = 0x309858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309854u;
    // 0x309858: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x309854u, 0x30985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30985Cu;
label_30985c:
    // 0x30985c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309860: 0xc040454  jal         func_101150
    ctx->pc = 0x309860u;
    SET_GPR_U32(ctx, 31, 0x309868u);
    ctx->pc = 0x309864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309860u;
    // 0x309864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x309860u, 0x309868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309868u;
label_309868:
    // 0x309868: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30986c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30986cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309870: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x309870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
    // 0x309874: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x309874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
    // 0x309878: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x309878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30987c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x309880: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x309880u;
    SET_GPR_U32(ctx, 31, 0x309888u);
    ctx->pc = 0x309884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309880u;
    // 0x309884: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x309880u, 0x309888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309888u;
label_309888:
    // 0x309888: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x309888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x30988c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30988cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x309890: 0x8c841e28  lw          $a0, 0x1E28($a0)
    ctx->pc = 0x309890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7720)));
    // 0x309894: 0xac721e68  sw          $s2, 0x1E68($v1)
    ctx->pc = 0x309894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7784), GPR_U32(ctx, 18));
    // 0x309898: 0x3c0301d2  lui         $v1, 0x1D2
    ctx->pc = 0x309898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)466 << 16));
    // 0x30989c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x30989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3098a0: 0xac641e28  sw          $a0, 0x1E28($v1)
    ctx->pc = 0x3098a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7720), GPR_U32(ctx, 4));
label_3098a4:
    // 0x3098a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3098a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3098a8:
    // 0x3098a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3098a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3098ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3098acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3098b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3098b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3098b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3098B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3098B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3098B4u;
        // 0x3098b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3098B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3098BCu;
    // 0x3098bc: 0x0  nop
    ctx->pc = 0x3098bcu;
    // NOP
    if (ctx->pc == 0x3098bcu) { ctx->pc = 0x3098c0u; }
}
