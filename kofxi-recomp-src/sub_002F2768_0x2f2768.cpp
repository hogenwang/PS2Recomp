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

// Function: sub_002F2768
// Address: 0x2f2768 - 0x2f2968
void sub_002F2768_0x2f2768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2768_0x2f2768");
#endif

    switch (ctx->pc) {
        case 0x2f27c0u: goto label_2f27c0;
        case 0x2f27e0u: goto label_2f27e0;
        case 0x2f2800u: goto label_2f2800;
        case 0x2f282cu: goto label_2f282c;
        case 0x2f2848u: goto label_2f2848;
        case 0x2f28b0u: goto label_2f28b0;
        case 0x2f28c8u: goto label_2f28c8;
        case 0x2f28e4u: goto label_2f28e4;
        case 0x2f2904u: goto label_2f2904;
        case 0x2f2918u: goto label_2f2918;
        case 0x2f2928u: goto label_2f2928;
        case 0x2f2930u: goto label_2f2930;
        default: break;
    }

    ctx->pc = 0x2f2768u;

    // 0x2f2768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f2768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f276c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f2770: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f2770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f2774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2778: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f2778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f277c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f2780: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f2780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f2784: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f2784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f2788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f278c: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x2f278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x2f2790: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x2f2790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f2794: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2794u;
    {
        const bool branch_taken_0x2f2794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2794u;
        // 0x2f2798: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2794) {
            ctx->pc = 0x2F27A8u;
            goto label_2f27a8;
        }
    }
    ctx->pc = 0x2F279Cu;
    // 0x2f279c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2F279Cu;
    {
        const bool branch_taken_0x2f279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F279Cu;
        // 0x2f27a0: 0x2402fc14  addiu       $v0, $zero, -0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f279c) {
            ctx->pc = 0x2F2938u;
            goto label_2f2938;
        }
    }
    ctx->pc = 0x2F27A4u;
    // 0x2f27a4: 0x0  nop
    ctx->pc = 0x2f27a4u;
    // NOP
label_2f27a8:
    // 0x2f27a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2f27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2f27ac: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2f27acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2f27b0: 0x24420228  addiu       $v0, $v0, 0x228
    ctx->pc = 0x2f27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 552));
    // 0x2f27b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f27b8: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F27B8u;
    SET_GPR_U32(ctx, 31, 0x2F27C0u);
    ctx->pc = 0x2F27BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27B8u;
    // 0x2f27bc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F27B8u, 0x2F27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27C0u;
label_2f27c0:
    // 0x2f27c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f27c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f27c4: 0x1240005c  beqz        $s2, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F27C4u;
    {
        const bool branch_taken_0x2f27c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F27C4u;
        // 0x2f27c8: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f27c4) {
            ctx->pc = 0x2F2938u;
            goto label_2f2938;
        }
    }
    ctx->pc = 0x2F27CCu;
    // 0x2f27cc: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f27d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f27d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f27d4: 0x24a51d00  addiu       $a1, $a1, 0x1D00
    ctx->pc = 0x2f27d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7424));
    // 0x2f27d8: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F27D8u;
    SET_GPR_U32(ctx, 31, 0x2F27E0u);
    ctx->pc = 0x2F27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27D8u;
    // 0x2f27dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F27D8u, 0x2F27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F27E0u;
label_2f27e0:
    // 0x2f27e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F27E0u;
    {
        const bool branch_taken_0x2f27e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f27e0) {
            ctx->pc = 0x2F27E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F27E0u;
            // 0x2f27e4: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F27F8u;
            goto label_2f27f8;
        }
    }
    ctx->pc = 0x2F27E8u;
    // 0x2f27e8: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x2f27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2f27ec: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F27ECu;
    {
        const bool branch_taken_0x2f27ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f27ec) {
            ctx->pc = 0x2F2840u;
            goto label_2f2840;
        }
    }
    ctx->pc = 0x2F27F4u;
    // 0x2f27f4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_2f27f8:
    // 0x2f27f8: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F27F8u;
    SET_GPR_U32(ctx, 31, 0x2F2800u);
    ctx->pc = 0x2F27FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F27F8u;
    // 0x2f27fc: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F27F8u, 0x2F2800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2800u;
label_2f2800:
    // 0x2f2800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2804: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2F2804u;
    {
        const bool branch_taken_0x2f2804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2804u;
        // 0x2f2808: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2804) {
            ctx->pc = 0x2F2938u;
            goto label_2f2938;
        }
    }
    ctx->pc = 0x2F280Cu;
    // 0x2f280c: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x2f280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f2810: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2f2810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2f2814: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2814u;
    {
        const bool branch_taken_0x2f2814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2814u;
        // 0x2f2818: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2814) {
            ctx->pc = 0x2F284Cu;
            goto label_2f284c;
        }
    }
    ctx->pc = 0x2F281Cu;
    // 0x2f281c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f281cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2f2820: 0x24a51d08  addiu       $a1, $a1, 0x1D08
    ctx->pc = 0x2f2820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7432));
    // 0x2f2824: 0xc0bd9b0  jal         func_2F66C0
    ctx->pc = 0x2F2824u;
    SET_GPR_U32(ctx, 31, 0x2F282Cu);
    ctx->pc = 0x2F2828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2824u;
    // 0x2f2828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F66C0u, 0x2F2824u, 0x2F282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F282Cu;
label_2f282c:
    // 0x2f282c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f282cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2830: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F2830u;
    {
        const bool branch_taken_0x2f2830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2830u;
        // 0x2f2834: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2830) {
            ctx->pc = 0x2F2938u;
            goto label_2f2938;
        }
    }
    ctx->pc = 0x2F2838u;
    // 0x2f2838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2838u;
    {
        const bool branch_taken_0x2f2838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2838u;
        // 0x2f283c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2838) {
            ctx->pc = 0x2F284Cu;
            goto label_2f284c;
        }
    }
    ctx->pc = 0x2F2840u;
label_2f2840:
    // 0x2f2840: 0xc0bd476  jal         func_2F51D8
    ctx->pc = 0x2F2840u;
    SET_GPR_U32(ctx, 31, 0x2F2848u);
    ctx->pc = 0x2F2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2840u;
    // 0x2f2844: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D8u, 0x2F2840u, 0x2F2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2848u;
label_2f2848:
    // 0x2f2848: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f2848u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f284c:
    // 0x2f284c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2850: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2f2850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2f2854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f2854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2858: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2858u;
    {
        const bool branch_taken_0x2f2858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2858u;
        // 0x2f285c: 0x24451d10  addiu       $a1, $v0, 0x1D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2858) {
            ctx->pc = 0x2F286Cu;
            goto label_2f286c;
        }
    }
    ctx->pc = 0x2F2860u;
    // 0x2f2860: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f2860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2864u;
    {
        const bool branch_taken_0x2f2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2864u;
        // 0x2f2868: 0x24481d18  addiu       $t0, $v0, 0x1D18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2864) {
            ctx->pc = 0x2F2874u;
            goto label_2f2874;
        }
    }
    ctx->pc = 0x2F286Cu;
label_2f286c:
    // 0x2f286c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2870: 0x24481d20  addiu       $t0, $v0, 0x1D20
    ctx->pc = 0x2f2870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7456));
label_2f2874:
    // 0x2f2874: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2f2874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2f2878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f287c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F287Cu;
    {
        const bool branch_taken_0x2f287c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F287Cu;
        // 0x2f2880: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f287c) {
            ctx->pc = 0x2F2890u;
            goto label_2f2890;
        }
    }
    ctx->pc = 0x2F2884u;
    // 0x2f2884: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f2884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2f2888: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F2888u;
    {
        const bool branch_taken_0x2f2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2888u;
        // 0x2f288c: 0x24491d28  addiu       $t1, $v0, 0x1D28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 7464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2888) {
            ctx->pc = 0x2F2894u;
            goto label_2f2894;
        }
    }
    ctx->pc = 0x2F2890u;
label_2f2890:
    // 0x2f2890: 0x24491d30  addiu       $t1, $v0, 0x1D30
    ctx->pc = 0x2f2890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 7472));
label_2f2894:
    // 0x2f2894: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x2f2894u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x2f2898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f2898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f289c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f289cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28a0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2f28a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28a4: 0x26aa1bc8  addiu       $t2, $s5, 0x1BC8
    ctx->pc = 0x2f28a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 7112));
    // 0x2f28a8: 0xc0bd9b0  jal         func_2F66C0
    ctx->pc = 0x2F28A8u;
    SET_GPR_U32(ctx, 31, 0x2F28B0u);
    ctx->pc = 0x2F28ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28A8u;
    // 0x2f28ac: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F66C0u, 0x2F28A8u, 0x2F28B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28B0u;
label_2f28b0:
    // 0x2f28b0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F28B0u;
    {
        const bool branch_taken_0x2f28b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f28b0) {
            ctx->pc = 0x2F2920u;
            goto label_2f2920;
        }
    }
    ctx->pc = 0x2F28B8u;
    // 0x2f28b8: 0x8e3000bc  lw          $s0, 0xBC($s1)
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x2f28bc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F28BCu;
    {
        const bool branch_taken_0x2f28bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28BCu;
        // 0x2f28c0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28bc) {
            ctx->pc = 0x2F28F8u;
            goto label_2f28f8;
        }
    }
    ctx->pc = 0x2F28C4u;
    // 0x2f28c4: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2f28c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_2f28c8:
    // 0x2f28c8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2f28c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f28cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f28ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28d0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2f28d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f28d4: 0x26661d38  addiu       $a2, $s3, 0x1D38
    ctx->pc = 0x2f28d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 7480));
    // 0x2f28d8: 0x26a81bc8  addiu       $t0, $s5, 0x1BC8
    ctx->pc = 0x2f28d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 7112));
    // 0x2f28dc: 0xc0bd9b0  jal         func_2F66C0
    ctx->pc = 0x2F28DCu;
    SET_GPR_U32(ctx, 31, 0x2F28E4u);
    ctx->pc = 0x2F28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28DCu;
    // 0x2f28e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F66C0u, 0x2F28DCu, 0x2F28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28E4u;
label_2f28e4:
    // 0x2f28e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F28E4u;
    {
        const bool branch_taken_0x2f28e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f28e4) {
            ctx->pc = 0x2F2920u;
            goto label_2f2920;
        }
    }
    ctx->pc = 0x2F28ECu;
    // 0x2f28ec: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2f28ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f28f0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F28F0u;
    {
        const bool branch_taken_0x2f28f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F28F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28F0u;
        // 0x2f28f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28f0) {
            ctx->pc = 0x2F28C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f28c8;
        }
    }
    ctx->pc = 0x2F28F8u;
label_2f28f8:
    // 0x2f28f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f28f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28fc: 0xc0bd97e  jal         func_2F65F8
    ctx->pc = 0x2F28FCu;
    SET_GPR_U32(ctx, 31, 0x2F2904u);
    ctx->pc = 0x2F2900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28FCu;
    // 0x2f2900: 0x26a51bc8  addiu       $a1, $s5, 0x1BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 7112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F65F8u, 0x2F28FCu, 0x2F2904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2904u;
label_2f2904:
    // 0x2f2904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2904u;
    {
        const bool branch_taken_0x2f2904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f2904) {
            ctx->pc = 0x2F2920u;
            goto label_2f2920;
        }
    }
    ctx->pc = 0x2F290Cu;
    // 0x2f290c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f290cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2910: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2910u;
    SET_GPR_U32(ctx, 31, 0x2F2918u);
    ctx->pc = 0x2F2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2910u;
    // 0x2f2914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F2910u, 0x2F2918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2918u;
label_2f2918:
    // 0x2f2918: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2918u;
    {
        const bool branch_taken_0x2f2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2918u;
        // 0x2f291c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2918) {
            ctx->pc = 0x2F2940u;
            goto label_2f2940;
        }
    }
    ctx->pc = 0x2F2920u;
label_2f2920:
    // 0x2f2920: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2920u;
    SET_GPR_U32(ctx, 31, 0x2F2928u);
    ctx->pc = 0x2F2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2920u;
    // 0x2f2924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F2920u, 0x2F2928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2928u;
label_2f2928:
    // 0x2f2928: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F2928u;
    SET_GPR_U32(ctx, 31, 0x2F2930u);
    ctx->pc = 0x2F292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2928u;
    // 0x2f292c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F2928u, 0x2F2930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2930u;
label_2f2930:
    // 0x2f2930: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f2930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
    // 0x2f2934: 0x0  nop
    ctx->pc = 0x2f2934u;
    // NOP
label_2f2938:
    // 0x2f2938: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2f2938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x2f293c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f293cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2940:
    // 0x2f2940: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f2940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2944: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f2944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2948: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f294c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f294cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2950: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f2950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2954: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f295c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F295Cu;
        // 0x2f2960: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2964u;
    // 0x2f2964: 0x0  nop
    ctx->pc = 0x2f2964u;
    // NOP
    if (ctx->pc == 0x2f2964u) { ctx->pc = 0x2f2968u; }
}
