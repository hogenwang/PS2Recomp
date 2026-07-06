#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00266348
// Address: 0x266348 - 0x266400
void sub_00266348_0x266348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266348_0x266348");
#endif

    switch (ctx->pc) {
        case 0x26635cu: goto label_26635c;
        case 0x266364u: goto label_266364;
        case 0x266390u: goto label_266390;
        default: break;
    }

    ctx->pc = 0x266348u;

    // 0x266348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26634c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26634cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266354: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x266354u;
    SET_GPR_U32(ctx, 31, 0x26635Cu);
    ctx->pc = 0x266358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266354u;
            // 0x266358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26635Cu; }
        if (ctx->pc != 0x26635Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26635Cu; }
        if (ctx->pc != 0x26635Cu) { return; }
    }
    ctx->pc = 0x26635Cu;
label_26635c:
    // 0x26635c: 0xc097242  jal         func_25C908
    ctx->pc = 0x26635Cu;
    SET_GPR_U32(ctx, 31, 0x266364u);
    ctx->pc = 0x266360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26635Cu;
            // 0x266360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C908u;
    if (runtime->hasFunction(0x25C908u)) {
        auto targetFn = runtime->lookupFunction(0x25C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266364u; }
        if (ctx->pc != 0x266364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025C908_0x25c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266364u; }
        if (ctx->pc != 0x266364u) { return; }
    }
    ctx->pc = 0x266364u;
label_266364:
    // 0x266364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x266364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266368: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x266368u;
    {
        const bool branch_taken_0x266368 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x266368) {
            ctx->pc = 0x26636Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x266368u;
            // 0x26636c: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x266378u;
            goto label_266378;
        }
    }
    ctx->pc = 0x266370u;
    // 0x266370: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x266370u;
    {
        const bool branch_taken_0x266370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266370u;
            // 0x266374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266370) {
            ctx->pc = 0x2663F0u;
            goto label_2663f0;
        }
    }
    ctx->pc = 0x266378u;
label_266378:
    // 0x266378: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26637c: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x26637Cu;
    {
        const bool branch_taken_0x26637c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x266380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26637Cu;
            // 0x266380: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26637c) {
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x266384u;
    // 0x266384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x266384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266388: 0x8c870050  lw          $a3, 0x50($a0)
    ctx->pc = 0x266388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x26638c: 0x0  nop
    ctx->pc = 0x26638cu;
    // NOP
label_266390:
    // 0x266390: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x266390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x266394: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x266394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x266398: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x266398u;
    {
        const bool branch_taken_0x266398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266398u;
            // 0x26639c: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266398) {
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x2663A0u;
    // 0x2663a0: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x2663a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2663a4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2663a8: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x2663a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2663ac: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x2663acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2663b0: 0x5464fff7  bnel        $v1, $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2663B0u;
    {
        const bool branch_taken_0x2663b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2663b0) {
            ctx->pc = 0x2663B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2663B0u;
            // 0x2663b4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x266390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266390;
        }
    }
    ctx->pc = 0x2663B8u;
    // 0x2663b8: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2663b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2663bc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2663bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2663c0: 0x5462fff3  bnel        $v1, $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2663C0u;
    {
        const bool branch_taken_0x2663c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2663c0) {
            ctx->pc = 0x2663C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2663C0u;
            // 0x2663c4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x266390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266390;
        }
    }
    ctx->pc = 0x2663C8u;
    // 0x2663c8: 0x88a30007  lwl         $v1, 0x7($a1)
    ctx->pc = 0x2663c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2663cc: 0x98a30004  lwr         $v1, 0x4($a1)
    ctx->pc = 0x2663ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2663d0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2663D0u;
    {
        const bool branch_taken_0x2663d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2663d0) {
            ctx->pc = 0x2663D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2663D0u;
            // 0x2663d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2663ECu;
            goto label_2663ec;
        }
    }
    ctx->pc = 0x2663D8u;
    // 0x2663d8: 0x8a020007  lwl         $v0, 0x7($s0)
    ctx->pc = 0x2663d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2663dc: 0x9a020004  lwr         $v0, 0x4($s0)
    ctx->pc = 0x2663dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2663e0: 0x5462ffeb  bnel        $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2663E0u;
    {
        const bool branch_taken_0x2663e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2663e0) {
            ctx->pc = 0x2663E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2663E0u;
            // 0x2663e4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x266390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266390;
        }
    }
    ctx->pc = 0x2663E8u;
    // 0x2663e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2663e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2663ec:
    // 0x2663ec: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x2663ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2663f0:
    // 0x2663f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2663f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2663f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2663f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2663f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2663F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2663FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2663F8u;
            // 0x2663fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266400u;
    ctx->pc = 0x266400u;
}
