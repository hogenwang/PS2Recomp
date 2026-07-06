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

// Function: sub_00140434
// Address: 0x140434 - 0x140580
void sub_00140434_0x140434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140434_0x140434");
#endif

    switch (ctx->pc) {
        case 0x140464u: goto label_140464;
        case 0x140470u: goto label_140470;
        case 0x140480u: goto label_140480;
        case 0x140488u: goto label_140488;
        case 0x1404acu: goto label_1404ac;
        case 0x1404b0u: goto label_1404b0;
        case 0x1404d0u: goto label_1404d0;
        case 0x140504u: goto label_140504;
        case 0x140518u: goto label_140518;
        case 0x140564u: goto label_140564;
        default: break;
    }

    ctx->pc = 0x140434u;

    // 0x140434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140438: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x140438u;
    {
        const bool branch_taken_0x140438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140438) {
            ctx->pc = 0x14046Cu;
            goto label_14046c;
        }
    }
    ctx->pc = 0x140440u;
    // 0x140440: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x140440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x140444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x140448: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x140448u;
    {
        const bool branch_taken_0x140448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140448) {
            ctx->pc = 0x14046Cu;
            goto label_14046c;
        }
    }
    ctx->pc = 0x140450u;
    // 0x140450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140454: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x140454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x140458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14045c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x14045Cu;
    SET_GPR_U32(ctx, 31, 0x140464u);
    ctx->pc = 0x140460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14045Cu;
    // 0x140460: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x14045Cu, 0x140464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140464u;
label_140464:
    // 0x140464: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x140464u;
    {
        const bool branch_taken_0x140464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140464) {
            ctx->pc = 0x1404ACu;
            goto label_1404ac;
        }
    }
    ctx->pc = 0x14046Cu;
label_14046c:
    // 0x14046c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140470:
    // 0x140470: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x140470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x140474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140478: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140478u;
    SET_GPR_U32(ctx, 31, 0x140480u);
    ctx->pc = 0x14047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140478u;
    // 0x14047c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140478u, 0x140480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140480u;
label_140480:
    // 0x140480: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x140480u;
    {
        const bool branch_taken_0x140480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140480) {
            ctx->pc = 0x1404ACu;
            goto label_1404ac;
        }
    }
    ctx->pc = 0x140488u;
label_140488:
    // 0x140488: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x140488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14048c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14048cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140490: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140490u;
    {
        const bool branch_taken_0x140490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140490) {
            ctx->pc = 0x1404ACu;
            goto label_1404ac;
        }
    }
    ctx->pc = 0x140498u;
    // 0x140498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14049c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x14049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1404a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1404a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1404a4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1404A4u;
    SET_GPR_U32(ctx, 31, 0x1404ACu);
    ctx->pc = 0x1404A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404A4u;
    // 0x1404a8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1404A4u, 0x1404ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1404ACu;
label_1404ac:
    // 0x1404ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1404acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1404b0:
    // 0x1404b0: 0xa643020c  sh          $v1, 0x20C($s2)
    ctx->pc = 0x1404b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x1404b4: 0xae400214  sw          $zero, 0x214($s2)
    ctx->pc = 0x1404b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 0));
    // 0x1404b8: 0xae400238  sw          $zero, 0x238($s2)
    ctx->pc = 0x1404b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 0));
    // 0x1404bc: 0xae400220  sw          $zero, 0x220($s2)
    ctx->pc = 0x1404bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 0));
    // 0x1404c0: 0x86430228  lh          $v1, 0x228($s2)
    ctx->pc = 0x1404c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x1404c4: 0xa643022a  sh          $v1, 0x22A($s2)
    ctx->pc = 0x1404c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x1404c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1404C8u;
    {
        const bool branch_taken_0x1404c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404C8u;
        // 0x1404cc: 0xa6400228  sh          $zero, 0x228($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 552), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404c8) {
            ctx->pc = 0x140564u;
            goto label_140564;
        }
    }
    ctx->pc = 0x1404D0u;
label_1404d0:
    // 0x1404d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1404d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1404d4: 0x52030012  beql        $s0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1404D4u;
    {
        const bool branch_taken_0x1404d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1404d4) {
            ctx->pc = 0x1404D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1404D4u;
            // 0x1404d8: 0x8e44048c  lw          $a0, 0x48C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140520u;
            goto label_140520;
        }
    }
    ctx->pc = 0x1404DCu;
    // 0x1404dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1404dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1404e0: 0x5207000a  beql        $s0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1404E0u;
    {
        const bool branch_taken_0x1404e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x1404e0) {
            ctx->pc = 0x1404E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1404E0u;
            // 0x1404e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14050Cu;
            goto label_14050c;
        }
    }
    ctx->pc = 0x1404E8u;
    // 0x1404e8: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1404E8u;
    {
        const bool branch_taken_0x1404e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1404e8) {
            ctx->pc = 0x1404ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1404E8u;
            // 0x1404ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1404F8u;
            goto label_1404f8;
        }
    }
    ctx->pc = 0x1404F0u;
    // 0x1404f0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1404F0u;
    {
        const bool branch_taken_0x1404f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404F0u;
        // 0x1404f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404f0) {
            ctx->pc = 0x140568u;
            goto label_140568;
        }
    }
    ctx->pc = 0x1404F8u;
label_1404f8:
    // 0x1404f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1404f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1404fc: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1404FCu;
    SET_GPR_U32(ctx, 31, 0x140504u);
    ctx->pc = 0x140500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1404FCu;
    // 0x140500: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x1404FCu, 0x140504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140504u;
label_140504:
    // 0x140504: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x140504u;
    {
        const bool branch_taken_0x140504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140504) {
            ctx->pc = 0x140564u;
            goto label_140564;
        }
    }
    ctx->pc = 0x14050Cu;
label_14050c:
    // 0x14050c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x14050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x140510: 0xc05a888  jal         func_16A220
    ctx->pc = 0x140510u;
    SET_GPR_U32(ctx, 31, 0x140518u);
    ctx->pc = 0x140514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140510u;
    // 0x140514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x140510u, 0x140518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140518u;
label_140518:
    // 0x140518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x140518u;
    {
        const bool branch_taken_0x140518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140518) {
            ctx->pc = 0x140564u;
            goto label_140564;
        }
    }
    ctx->pc = 0x140520u;
label_140520:
    // 0x140520: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x140520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x140524: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140528: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x140528u;
    {
        const bool branch_taken_0x140528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140528) {
            ctx->pc = 0x14052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140528u;
            // 0x14052c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140554u;
            goto label_140554;
        }
    }
    ctx->pc = 0x140530u;
    // 0x140530: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x140530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x140534: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140538: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140538u;
    {
        const bool branch_taken_0x140538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140538) {
            ctx->pc = 0x140550u;
            goto label_140550;
        }
    }
    ctx->pc = 0x140540u;
    // 0x140540: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x140540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x140544: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x140544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x140548: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140548u;
    {
        const bool branch_taken_0x140548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140548) {
            ctx->pc = 0x140564u;
            goto label_140564;
        }
    }
    ctx->pc = 0x140550u;
label_140550:
    // 0x140550: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_140554:
    // 0x140554: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x140554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x140558: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x140558u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14055c: 0xc05a888  jal         func_16A220
    ctx->pc = 0x14055Cu;
    SET_GPR_U32(ctx, 31, 0x140564u);
    ctx->pc = 0x140560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14055Cu;
    // 0x140560: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A220u, 0x14055Cu, 0x140564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140564u;
label_140564:
    // 0x140564: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x140564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_140568:
    // 0x140568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x140568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14056c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14056cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140574: 0x3e00008  jr          $ra
    ctx->pc = 0x140574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140574u;
        // 0x140578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14057Cu;
    // 0x14057c: 0x0  nop
    ctx->pc = 0x14057cu;
    // NOP
}
