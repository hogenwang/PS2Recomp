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

// Function: sub_0024C760
// Address: 0x24c760 - 0x24c8d0
void sub_0024C760_0x24c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C760_0x24c760");
#endif

    switch (ctx->pc) {
        case 0x24c794u: goto label_24c794;
        case 0x24c7a0u: goto label_24c7a0;
        case 0x24c7d0u: goto label_24c7d0;
        case 0x24c804u: goto label_24c804;
        case 0x24c810u: goto label_24c810;
        case 0x24c838u: goto label_24c838;
        default: break;
    }

    ctx->pc = 0x24c760u;

    // 0x24c760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x24c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24c764: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x24c768: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x24c76c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x24c770: 0x30d2ffff  andi        $s2, $a2, 0xFFFF
    ctx->pc = 0x24c770u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x24c774: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x24c778: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c77c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x24c77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24c780: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24c780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24c784: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24c784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x24c788: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x24c788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c78c: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C78Cu;
    SET_GPR_U32(ctx, 31, 0x24C794u);
    ctx->pc = 0x24C790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C78Cu;
    // 0x24c790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C78Cu, 0x24C794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C794u;
label_24c794:
    // 0x24c794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c798: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C798u;
    SET_GPR_U32(ctx, 31, 0x24C7A0u);
    ctx->pc = 0x24C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C798u;
    // 0x24c79c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C798u, 0x24C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C7A0u;
label_24c7a0:
    // 0x24c7a0: 0x8e340008  lw          $s4, 0x8($s1)
    ctx->pc = 0x24c7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24c7a4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24c7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c7a8: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x24c7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24c7ac: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x24c7acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x24c7b0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24c7b4: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x24c7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x24c7b8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24c7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c7bc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x24C7BCu;
    {
        const bool branch_taken_0x24c7bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C7BCu;
        // 0x24c7c0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c7bc) {
            ctx->pc = 0x24C7F0u;
            goto label_24c7f0;
        }
    }
    ctx->pc = 0x24C7C4u;
    // 0x24c7c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c7c8: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x24c7c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x24c7cc: 0x0  nop
    ctx->pc = 0x24c7ccu;
    // NOP
label_24c7d0:
    // 0x24c7d0: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C7D0u;
    {
        const bool branch_taken_0x24c7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24c7d0) {
            ctx->pc = 0x24C7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7D0u;
            // 0x24c7d4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7E8u;
            goto label_24c7e8;
        }
    }
    ctx->pc = 0x24C7D8u;
    // 0x24c7d8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x24c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x24c7dc: 0x10440022  beq         $v0, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24C7DCu;
    {
        const bool branch_taken_0x24c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c7dc) {
            ctx->pc = 0x24C868u;
            goto label_24c868;
        }
    }
    ctx->pc = 0x24C7E4u;
    // 0x24c7e4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x24c7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24c7e8:
    // 0x24c7e8: 0x54a0fff9  bnel        $a1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24C7E8u;
    {
        const bool branch_taken_0x24c7e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c7e8) {
            ctx->pc = 0x24C7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C7E8u;
            // 0x24c7ec: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C7D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c7d0;
        }
    }
    ctx->pc = 0x24C7F0u;
label_24c7f0:
    // 0x24c7f0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x24c7f4: 0x245301d0  addiu       $s3, $v0, 0x1D0
    ctx->pc = 0x24c7f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x24c7f8: 0x8a640003  lwl         $a0, 0x3($s3)
    ctx->pc = 0x24c7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x24c7fc: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C7FCu;
    SET_GPR_U32(ctx, 31, 0x24C804u);
    ctx->pc = 0x24C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C7FCu;
    // 0x24c800: 0x9a640000  lwr         $a0, 0x0($s3) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C7FCu, 0x24C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C804u;
label_24c804:
    // 0x24c804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c808: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C808u;
    SET_GPR_U32(ctx, 31, 0x24C810u);
    ctx->pc = 0x24C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C808u;
    // 0x24c80c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C808u, 0x24C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C810u;
label_24c810:
    // 0x24c810: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24c810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24c814: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x24c814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x24c818: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c818u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24c81c: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x24c81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x24c820: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c824: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x24C824u;
    {
        const bool branch_taken_0x24c824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C824u;
        // 0x24c828: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c824) {
            ctx->pc = 0x24C860u;
            goto label_24c860;
        }
    }
    ctx->pc = 0x24C82Cu;
    // 0x24c82c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24c82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c830: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x24c830u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x24c834: 0x0  nop
    ctx->pc = 0x24c834u;
    // NOP
label_24c838:
    // 0x24c838: 0x54520007  bnel        $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C838u;
    {
        const bool branch_taken_0x24c838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24c838) {
            ctx->pc = 0x24C83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C838u;
            // 0x24c83c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C858u;
            goto label_24c858;
        }
    }
    ctx->pc = 0x24C840u;
    // 0x24c840: 0x88830003  lwl         $v1, 0x3($a0)
    ctx->pc = 0x24c840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24c844: 0x98830000  lwr         $v1, 0x0($a0)
    ctx->pc = 0x24c844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x24c848: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x24c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x24c84c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C84Cu;
    {
        const bool branch_taken_0x24c84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24c84c) {
            ctx->pc = 0x24C868u;
            goto label_24c868;
        }
    }
    ctx->pc = 0x24C854u;
    // 0x24c854: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x24c854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24c858:
    // 0x24c858: 0x54a0fff7  bnel        $a1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24C858u;
    {
        const bool branch_taken_0x24c858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c858) {
            ctx->pc = 0x24C85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C858u;
            // 0x24c85c: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c838;
        }
    }
    ctx->pc = 0x24C860u;
label_24c860:
    // 0x24c860: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24C860u;
    {
        const bool branch_taken_0x24c860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C860u;
        // 0x24c864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c860) {
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C868u;
label_24c868:
    // 0x24c868: 0x10a70010  beq         $a1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C868u;
    {
        const bool branch_taken_0x24c868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x24C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C868u;
        // 0x24c86c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c868) {
            ctx->pc = 0x24C8ACu;
            goto label_24c8ac;
        }
    }
    ctx->pc = 0x24C870u;
    // 0x24c870: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c874: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C874u;
    {
        const bool branch_taken_0x24c874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C874u;
        // 0x24c878: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c874) {
            ctx->pc = 0x24C888u;
            goto label_24c888;
        }
    }
    ctx->pc = 0x24C87Cu;
    // 0x24c87c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24c880: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c884: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x24c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24c888:
    // 0x24c888: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24c88c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c890: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C890u;
    {
        const bool branch_taken_0x24c890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C890u;
        // 0x24c894: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c890) {
            ctx->pc = 0x24C8A0u;
            goto label_24c8a0;
        }
    }
    ctx->pc = 0x24C898u;
    // 0x24c898: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c89c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x24c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_24c8a0:
    // 0x24c8a0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x24c8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x24c8a4: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x24c8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x24c8a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24c8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c8ac:
    // 0x24c8ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c8b0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24c8b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c8b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24c8b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c8b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24c8b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c8bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24c8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c8c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24c8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C8C4u;
        // 0x24c8c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C8CCu;
    // 0x24c8cc: 0x0  nop
    ctx->pc = 0x24c8ccu;
    // NOP
    if (ctx->pc == 0x24c8ccu) { ctx->pc = 0x24c8d0u; }
}
