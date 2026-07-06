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

// Function: sub_00252508
// Address: 0x252508 - 0x252658
void sub_00252508_0x252508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252508_0x252508");
#endif

    switch (ctx->pc) {
        case 0x252534u: goto label_252534;
        case 0x2525b0u: goto label_2525b0;
        default: break;
    }

    ctx->pc = 0x252508u;

    // 0x252508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25250c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252510: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x252510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252514: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x252514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25251c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25251cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252520: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x252520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252524: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252528: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25252c: 0xc08a922  jal         func_22A488
    ctx->pc = 0x25252Cu;
    SET_GPR_U32(ctx, 31, 0x252534u);
    ctx->pc = 0x252530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25252Cu;
    // 0x252530: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A488u, 0x25252Cu, 0x252534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252534u;
label_252534:
    // 0x252534: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x252534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252538: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x252538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25253c: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x25253Cu;
    {
        const bool branch_taken_0x25253c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25253Cu;
        // 0x252540: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25253c) {
            ctx->pc = 0x25263Cu;
            goto label_25263c;
        }
    }
    ctx->pc = 0x252544u;
    // 0x252544: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x252544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x252548: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252548u;
    {
        const bool branch_taken_0x252548 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x25254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252548u;
        // 0x25254c: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252548) {
            ctx->pc = 0x252574u;
            goto label_252574;
        }
    }
    ctx->pc = 0x252550u;
    // 0x252550: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x252550u;
    {
        const bool branch_taken_0x252550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252550u;
        // 0x252554: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252550) {
            ctx->pc = 0x25263Cu;
            goto label_25263c;
        }
    }
    ctx->pc = 0x252558u;
    // 0x252558: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x252558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25255c: 0x1222002a  beq         $s1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x25255Cu;
    {
        const bool branch_taken_0x25255c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x252560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25255Cu;
        // 0x252560: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25255c) {
            ctx->pc = 0x252608u;
            goto label_252608;
        }
    }
    ctx->pc = 0x252564u;
    // 0x252564: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x252564u;
    {
        const bool branch_taken_0x252564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x252568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252564u;
        // 0x252568: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252564) {
            ctx->pc = 0x252620u;
            goto label_252620;
        }
    }
    ctx->pc = 0x25256Cu;
    // 0x25256c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25256Cu;
    {
        const bool branch_taken_0x25256c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25256Cu;
        // 0x252570: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25256c) {
            ctx->pc = 0x252640u;
            goto label_252640;
        }
    }
    ctx->pc = 0x252574u;
label_252574:
    // 0x252574: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x252574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252578: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x252578u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x25257c: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x25257Cu;
    {
        const bool branch_taken_0x25257c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x252580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25257Cu;
        // 0x252580: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25257c) {
            ctx->pc = 0x2525E8u;
            goto label_2525e8;
        }
    }
    ctx->pc = 0x252584u;
    // 0x252584: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x252584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x252588: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x252588u;
    {
        const bool branch_taken_0x252588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252588) {
            ctx->pc = 0x25258Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252588u;
            // 0x25258c: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x252590u;
    // 0x252590: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x252590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x252594: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x252594u;
    {
        const bool branch_taken_0x252594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x252598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252594u;
        // 0x252598: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252594) {
            ctx->pc = 0x2525E8u;
            goto label_2525e8;
        }
    }
    ctx->pc = 0x25259Cu;
    // 0x25259c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x25259cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2525a0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2525a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2525a4: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2525A4u;
    {
        const bool branch_taken_0x2525a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2525a4) {
            ctx->pc = 0x2525C8u;
            goto label_2525c8;
        }
    }
    ctx->pc = 0x2525ACu;
    // 0x2525ac: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2525acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2525b0:
    // 0x2525b0: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2525B0u;
    {
        const bool branch_taken_0x2525b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525B0u;
        // 0x2525b4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525b0) {
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x2525B8u;
    // 0x2525b8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2525b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2525bc: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2525bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2525c0: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2525C0u;
    {
        const bool branch_taken_0x2525c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2525c0) {
            ctx->pc = 0x2525C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2525C0u;
            // 0x2525c4: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2525B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2525b0;
        }
    }
    ctx->pc = 0x2525C8u;
label_2525c8:
    // 0x2525c8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2525C8u;
    {
        const bool branch_taken_0x2525c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525C8u;
        // 0x2525cc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525c8) {
            ctx->pc = 0x2525ECu;
            goto label_2525ec;
        }
    }
    ctx->pc = 0x2525D0u;
    // 0x2525d0: 0x88a20063  lwl         $v0, 0x63($a1)
    ctx->pc = 0x2525d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2525d4: 0x98a20060  lwr         $v0, 0x60($a1)
    ctx->pc = 0x2525d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2525d8: 0xa8c20003  swl         $v0, 0x3($a2)
    ctx->pc = 0x2525d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2525dc: 0xb8c20000  swr         $v0, 0x0($a2)
    ctx->pc = 0x2525dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2525e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2525E0u;
    {
        const bool branch_taken_0x2525e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525E0u;
        // 0x2525e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525e0) {
            ctx->pc = 0x25263Cu;
            goto label_25263c;
        }
    }
    ctx->pc = 0x2525E8u;
label_2525e8:
    // 0x2525e8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2525e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2525ec:
    // 0x2525ec: 0x244701d0  addiu       $a3, $v0, 0x1D0
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x2525f0: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x2525f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2525f4: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x2525f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2525f8: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x2525f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2525fc: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x2525fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252600: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x252600u;
    {
        const bool branch_taken_0x252600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252600u;
        // 0x252604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252600) {
            ctx->pc = 0x25263Cu;
            goto label_25263c;
        }
    }
    ctx->pc = 0x252608u;
label_252608:
    // 0x252608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25260c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x25260cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x252610: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x252610u;
    {
        const bool branch_taken_0x252610 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x252614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252610u;
        // 0x252614: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252610) {
            ctx->pc = 0x252634u;
            goto label_252634;
        }
    }
    ctx->pc = 0x252618u;
    // 0x252618: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x252618u;
    {
        const bool branch_taken_0x252618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252618u;
        // 0x25261c: 0x92420004  lbu         $v0, 0x4($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252618) {
            ctx->pc = 0x252634u;
            goto label_252634;
        }
    }
    ctx->pc = 0x252620u;
label_252620:
    // 0x252620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252624: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x252624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x252628: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x252628u;
    {
        const bool branch_taken_0x252628 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252628u;
        // 0x25262c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252628) {
            ctx->pc = 0x252634u;
            goto label_252634;
        }
    }
    ctx->pc = 0x252630u;
    // 0x252630: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x252630u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_252634:
    // 0x252634: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x252634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x252638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x252638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25263c:
    // 0x25263c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_252640:
    // 0x252640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25264c: 0x3e00008  jr          $ra
    ctx->pc = 0x25264Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25264Cu;
        // 0x252650: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25264Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252654u;
    // 0x252654: 0x0  nop
    ctx->pc = 0x252654u;
    // NOP
}
