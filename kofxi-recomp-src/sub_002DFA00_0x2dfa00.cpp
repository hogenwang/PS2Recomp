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

// Function: sub_002DFA00
// Address: 0x2dfa00 - 0x2dfb90
void sub_002DFA00_0x2dfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFA00_0x2dfa00");
#endif

    switch (ctx->pc) {
        case 0x2dfa88u: goto label_2dfa88;
        case 0x2dfab0u: goto label_2dfab0;
        case 0x2dfad8u: goto label_2dfad8;
        case 0x2dfb14u: goto label_2dfb14;
        case 0x2dfb24u: goto label_2dfb24;
        case 0x2dfb38u: goto label_2dfb38;
        case 0x2dfb48u: goto label_2dfb48;
        case 0x2dfb50u: goto label_2dfb50;
        default: break;
    }

    ctx->pc = 0x2dfa00u;

    // 0x2dfa00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dfa04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dfa08: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2dfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2dfa0c: 0x27ab0040  addiu       $t3, $sp, 0x40
    ctx->pc = 0x2dfa0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dfa10: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2dfa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2dfa14: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2dfa14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dfa18: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2dfa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2dfa1c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2dfa1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa20: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2dfa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2dfa24: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2dfa24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2dfa28: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2dfa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2dfa2c: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2dfa2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2dfa30: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2dfa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2dfa34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dfa34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa38: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2dfa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2dfa3c: 0x244ef0e0  addiu       $t6, $v0, -0xF20
    ctx->pc = 0x2dfa3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963424));
    // 0x2dfa40: 0x69ca0007  ldl         $t2, 0x7($t6)
    ctx->pc = 0x2dfa40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2dfa44: 0x6dca0000  ldr         $t2, 0x0($t6)
    ctx->pc = 0x2dfa44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2dfa48: 0x8dcc0008  lw          $t4, 0x8($t6)
    ctx->pc = 0x2dfa48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2dfa4c: 0xb3aa0007  sdl         $t2, 0x7($sp)
    ctx->pc = 0x2dfa4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfa50: 0xb7aa0000  sdr         $t2, 0x0($sp)
    ctx->pc = 0x2dfa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfa54: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x2dfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x2dfa58: 0x246df0f0  addiu       $t5, $v1, -0xF10
    ctx->pc = 0x2dfa58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963440));
    // 0x2dfa5c: 0x69a20007  ldl         $v0, 0x7($t5)
    ctx->pc = 0x2dfa5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dfa60: 0x6da20000  ldr         $v0, 0x0($t5)
    ctx->pc = 0x2dfa60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dfa64: 0xb1620007  sdl         $v0, 0x7($t3)
    ctx->pc = 0x2dfa64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfa68: 0xb5620000  sdr         $v0, 0x0($t3)
    ctx->pc = 0x2dfa68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfa6c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2dfa6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfa70: 0x2524f0f8  addiu       $a0, $t1, -0xF08
    ctx->pc = 0x2dfa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963448));
    // 0x2dfa74: 0x688e0007  ldl         $t6, 0x7($a0)
    ctx->pc = 0x2dfa74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2dfa78: 0x6c8e0000  ldr         $t6, 0x0($a0)
    ctx->pc = 0x2dfa78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2dfa7c: 0xb28e0007  sdl         $t6, 0x7($s4)
    ctx->pc = 0x2dfa7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfa80: 0xb68e0000  sdr         $t6, 0x0($s4)
    ctx->pc = 0x2dfa80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfa84: 0x0  nop
    ctx->pc = 0x2dfa84u;
    // NOP
label_2dfa88:
    // 0x2dfa88: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x2dfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2dfa8c: 0x2482021  addu        $a0, $s2, $t0
    ctx->pc = 0x2dfa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x2dfa90: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2dfa90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dfa94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dfa94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dfa98: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x2dfa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2dfa9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DFA9Cu;
    {
        const bool branch_taken_0x2dfa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFA9Cu;
        // 0x2dfaa0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfa9c) {
            ctx->pc = 0x2DFA88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfa88;
        }
    }
    ctx->pc = 0x2DFAA4u;
    // 0x2dfaa4: 0x27a90018  addiu       $t1, $sp, 0x18
    ctx->pc = 0x2dfaa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2dfaa8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dfaa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfaac: 0x0  nop
    ctx->pc = 0x2dfaacu;
    // NOP
label_2dfab0:
    // 0x2dfab0: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x2dfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2dfab4: 0x1282021  addu        $a0, $t1, $t0
    ctx->pc = 0x2dfab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2dfab8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2dfab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dfabc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dfabcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dfac0: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x2dfac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2dfac4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DFAC4u;
    {
        const bool branch_taken_0x2dfac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAC4u;
        // 0x2dfac8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfac4) {
            ctx->pc = 0x2DFAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfab0;
        }
    }
    ctx->pc = 0x2DFACCu;
    // 0x2dfacc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2dfaccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dfad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dfad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfad4: 0x0  nop
    ctx->pc = 0x2dfad4u;
    // NOP
label_2dfad8:
    // 0x2dfad8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2dfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2dfadc: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x2dfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2dfae0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2dfae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dfae4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2dfae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2dfae8: 0x28a20008  slti        $v0, $a1, 0x8
    ctx->pc = 0x2dfae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2dfaec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DFAECu;
    {
        const bool branch_taken_0x2dfaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFAECu;
        // 0x2dfaf0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfaec) {
            ctx->pc = 0x2DFAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfad8;
        }
    }
    ctx->pc = 0x2DFAF4u;
    // 0x2dfaf4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2dfaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2dfaf8: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x2dfaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfafc: 0x2610e120  addiu       $s0, $s0, -0x1EE0
    ctx->pc = 0x2dfafcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959392));
    // 0x2dfb00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2dfb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dfb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb08: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2dfb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2dfb0c: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFB0Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB14u);
    ctx->pc = 0x2DFB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB0Cu;
    // 0x2dfb10: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DFB0Cu, 0x2DFB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB14u;
label_2dfb14:
    // 0x2dfb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dfb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2dfb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb1c: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFB1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB24u);
    ctx->pc = 0x2DFB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB1Cu;
    // 0x2dfb20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF500u, 0x2DFB1Cu, 0x2DFB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB24u;
label_2dfb24:
    // 0x2dfb24: 0x3c09002d  lui         $t1, 0x2D
    ctx->pc = 0x2dfb24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)45 << 16));
    // 0x2dfb28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2dfb28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2dfb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb34: 0x25296708  addiu       $t1, $t1, 0x6708
    ctx->pc = 0x2dfb34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26376));
label_2dfb38:
    // 0x2dfb38: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2dfb38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dfb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfb40: 0xc0b7d50  jal         func_2DF540
    ctx->pc = 0x2DFB40u;
    SET_GPR_U32(ctx, 31, 0x2DFB48u);
    ctx->pc = 0x2DFB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFB40u;
    // 0x2dfb44: 0x27a80030  addiu       $t0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF540u, 0x2DFB40u, 0x2DFB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFB48u;
label_2dfb48:
    // 0x2dfb48: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2dfb48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2dfb4c: 0x27a30027  addiu       $v1, $sp, 0x27
    ctx->pc = 0x2dfb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 39));
label_2dfb50:
    // 0x2dfb50: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2dfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2dfb54: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2dfb54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dfb58: 0x0  nop
    ctx->pc = 0x2dfb58u;
    // NOP
    // 0x2dfb5c: 0x0  nop
    ctx->pc = 0x2dfb5cu;
    // NOP
    // 0x2dfb60: 0x0  nop
    ctx->pc = 0x2dfb60u;
    // NOP
    // 0x2dfb64: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DFB64u;
    {
        const bool branch_taken_0x2dfb64 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2DFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB64u;
        // 0x2dfb68: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb64) {
            ctx->pc = 0x2DFB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfb50;
        }
    }
    ctx->pc = 0x2DFB6Cu;
    // 0x2dfb6c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2dfb6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfb70: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2dfb70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dfb74: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2dfb74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfb78: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2dfb78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2dfb7c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2dfb7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfb80: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2dfb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2dfb84: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFB84u;
        // 0x2dfb88: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFB8Cu;
    // 0x2dfb8c: 0x0  nop
    ctx->pc = 0x2dfb8cu;
    // NOP
}
