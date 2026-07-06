#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E9190
// Address: 0x1e9190 - 0x1e9348
void sub_001E9190_0x1e9190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9190_0x1e9190");
#endif

    switch (ctx->pc) {
        case 0x1e91d8u: goto label_1e91d8;
        case 0x1e926cu: goto label_1e926c;
        case 0x1e9280u: goto label_1e9280;
        case 0x1e9294u: goto label_1e9294;
        case 0x1e92a8u: goto label_1e92a8;
        case 0x1e92b8u: goto label_1e92b8;
        case 0x1e92c4u: goto label_1e92c4;
        case 0x1e92d0u: goto label_1e92d0;
        case 0x1e92dcu: goto label_1e92dc;
        case 0x1e92e8u: goto label_1e92e8;
        case 0x1e92f4u: goto label_1e92f4;
        case 0x1e9300u: goto label_1e9300;
        case 0x1e930cu: goto label_1e930c;
        case 0x1e9318u: goto label_1e9318;
        case 0x1e9324u: goto label_1e9324;
        case 0x1e932cu: goto label_1e932c;
        default: break;
    }

    ctx->pc = 0x1e9190u;

    // 0x1e9190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e9194: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e9194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e9198: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1e9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1e919c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e919cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1e91a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1e91a4: 0x24483c90  addiu       $t0, $v0, 0x3C90
    ctx->pc = 0x1e91a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 15504));
    // 0x1e91a8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1e91a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1e91ac: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1e91acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e91b0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1e91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1e91b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e91b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e91b8: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1e91b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1e91bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E91BCu;
    {
        const bool branch_taken_0x1e91bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91BCu;
            // 0x1e91c0: 0x34a50c06  ori         $a1, $a1, 0xC06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3078);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91bc) {
            ctx->pc = 0x1E91D0u;
            goto label_1e91d0;
        }
    }
    ctx->pc = 0x1E91C4u;
    // 0x1e91c4: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x1e91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1e91c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E91C8u;
    {
        const bool branch_taken_0x1e91c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91C8u;
            // 0x1e91cc: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91c8) {
            ctx->pc = 0x1E91E0u;
            goto label_1e91e0;
        }
    }
    ctx->pc = 0x1E91D0u;
label_1e91d0:
    // 0x1e91d0: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1E91D0u;
    SET_GPR_U32(ctx, 31, 0x1E91D8u);
    ctx->pc = 0x1E91D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91D0u;
            // 0x1e91d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91D8u; }
        if (ctx->pc != 0x1E91D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED700_0x1ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E91D8u; }
        if (ctx->pc != 0x1E91D8u) { return; }
    }
    ctx->pc = 0x1E91D8u;
label_1e91d8:
    // 0x1e91d8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1E91D8u;
    {
        const bool branch_taken_0x1e91d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E91DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E91D8u;
            // 0x1e91dc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e91d8) {
            ctx->pc = 0x1E9334u;
            goto label_1e9334;
        }
    }
    ctx->pc = 0x1E91E0u;
label_1e91e0:
    // 0x1e91e0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1e91e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e91e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e91e8: 0x24428410  addiu       $v0, $v0, -0x7BF0
    ctx->pc = 0x1e91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935568));
    // 0x1e91ec: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1e91ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e91f0: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1e91f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e91f4: 0x6909000f  ldl         $t1, 0xF($t0)
    ctx->pc = 0x1e91f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1e91f8: 0x6d090008  ldr         $t1, 0x8($t0)
    ctx->pc = 0x1e91f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1e91fc: 0x690a0017  ldl         $t2, 0x17($t0)
    ctx->pc = 0x1e91fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1e9200: 0x6d0a0010  ldr         $t2, 0x10($t0)
    ctx->pc = 0x1e9200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1e9204: 0x8d0b0018  lw          $t3, 0x18($t0)
    ctx->pc = 0x1e9204u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1e9208: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x1e9208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e920c: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x1e920cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9210: 0xb0e90017  sdl         $t1, 0x17($a3)
    ctx->pc = 0x1e9210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9214: 0xb4e90010  sdr         $t1, 0x10($a3)
    ctx->pc = 0x1e9214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9218: 0xb0ea001f  sdl         $t2, 0x1F($a3)
    ctx->pc = 0x1e9218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e921c: 0xb4ea0018  sdr         $t2, 0x18($a3)
    ctx->pc = 0x1e921cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9220: 0xaceb0020  sw          $t3, 0x20($a3)
    ctx->pc = 0x1e9220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 11));
    // 0x1e9224: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1e9224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e9228: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x1e9228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x1e922c: 0x3c11000f  lui         $s1, 0xF
    ctx->pc = 0x1e922cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)15 << 16));
    // 0x1e9230: 0x36314240  ori         $s1, $s1, 0x4240
    ctx->pc = 0x1e9230u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16960);
    // 0x1e9234: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x1e9234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
    // 0x1e9238: 0x26501078  addiu       $s0, $s2, 0x1078
    ctx->pc = 0x1e9238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4216));
    // 0x1e923c: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x1e923cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x1e9240: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x1e9240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x1e9244: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1e9244u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1e9248: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1e9248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1e924c: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1e924cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
    // 0x1e9250: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1e9250u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x1e9254: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x1e9254u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x1e9258: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x1e9258u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x1e925c: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x1e925cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x1e9260: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x1e9260u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x1e9264: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9264u;
    SET_GPR_U32(ctx, 31, 0x1E926Cu);
    ctx->pc = 0x1E9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9264u;
            // 0x1e9268: 0xace00048  sw          $zero, 0x48($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E926Cu; }
        if (ctx->pc != 0x1E926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E926Cu; }
        if (ctx->pc != 0x1E926Cu) { return; }
    }
    ctx->pc = 0x1E926Cu;
label_1e926c:
    // 0x1e926c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9270: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e9270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e9274: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e9274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e9278: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9278u;
    SET_GPR_U32(ctx, 31, 0x1E9280u);
    ctx->pc = 0x1E927Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9278u;
            // 0x1e927c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9280u; }
        if (ctx->pc != 0x1E9280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9280u; }
        if (ctx->pc != 0x1E9280u) { return; }
    }
    ctx->pc = 0x1E9280u;
label_1e9280:
    // 0x1e9280: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9284: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1e9284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1e9288: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1e9288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1e928c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E928Cu;
    SET_GPR_U32(ctx, 31, 0x1E9294u);
    ctx->pc = 0x1E9290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E928Cu;
            // 0x1e9290: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9294u; }
        if (ctx->pc != 0x1E9294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9294u; }
        if (ctx->pc != 0x1E9294u) { return; }
    }
    ctx->pc = 0x1E9294u;
label_1e9294:
    // 0x1e9294: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1e9294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e9298: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e929c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1e929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x1e92a0: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E92A0u;
    SET_GPR_U32(ctx, 31, 0x1E92A8u);
    ctx->pc = 0x1E92A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92A0u;
            // 0x1e92a4: 0xffb10028  sd          $s1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92A8u; }
        if (ctx->pc != 0x1E92A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92A8u; }
        if (ctx->pc != 0x1E92A8u) { return; }
    }
    ctx->pc = 0x1E92A8u;
label_1e92a8:
    // 0x1e92a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e92a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92ac: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x1e92acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x1e92b0: 0xc07f696  jal         func_1FDA58
    ctx->pc = 0x1E92B0u;
    SET_GPR_U32(ctx, 31, 0x1E92B8u);
    ctx->pc = 0x1E92B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92B0u;
            // 0x1e92b4: 0xffb10038  sd          $s1, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA58u;
    if (runtime->hasFunction(0x1FDA58u)) {
        auto targetFn = runtime->lookupFunction(0x1FDA58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92B8u; }
        if (ctx->pc != 0x1E92B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDA58_0x1fda58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92B8u; }
        if (ctx->pc != 0x1E92B8u) { return; }
    }
    ctx->pc = 0x1E92B8u;
label_1e92b8:
    // 0x1e92b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92bc: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E92BCu;
    SET_GPR_U32(ctx, 31, 0x1E92C4u);
    ctx->pc = 0x1E92C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92BCu;
            // 0x1e92c0: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92C4u; }
        if (ctx->pc != 0x1E92C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92C4u; }
        if (ctx->pc != 0x1E92C4u) { return; }
    }
    ctx->pc = 0x1E92C4u;
label_1e92c4:
    // 0x1e92c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e92c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92c8: 0xc07f6de  jal         func_1FDB78
    ctx->pc = 0x1E92C8u;
    SET_GPR_U32(ctx, 31, 0x1E92D0u);
    ctx->pc = 0x1E92CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92C8u;
            // 0x1e92cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB78u;
    if (runtime->hasFunction(0x1FDB78u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92D0u; }
        if (ctx->pc != 0x1E92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB78_0x1fdb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92D0u; }
        if (ctx->pc != 0x1E92D0u) { return; }
    }
    ctx->pc = 0x1E92D0u;
label_1e92d0:
    // 0x1e92d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e92d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92d4: 0xc07f6e0  jal         func_1FDB80
    ctx->pc = 0x1E92D4u;
    SET_GPR_U32(ctx, 31, 0x1E92DCu);
    ctx->pc = 0x1E92D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92D4u;
            // 0x1e92d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB80u;
    if (runtime->hasFunction(0x1FDB80u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92DCu; }
        if (ctx->pc != 0x1E92DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB80_0x1fdb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92DCu; }
        if (ctx->pc != 0x1E92DCu) { return; }
    }
    ctx->pc = 0x1E92DCu;
label_1e92dc:
    // 0x1e92dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e92dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92e0: 0xc07f6e6  jal         func_1FDB98
    ctx->pc = 0x1E92E0u;
    SET_GPR_U32(ctx, 31, 0x1E92E8u);
    ctx->pc = 0x1E92E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92E0u;
            // 0x1e92e4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB98u;
    if (runtime->hasFunction(0x1FDB98u)) {
        auto targetFn = runtime->lookupFunction(0x1FDB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92E8u; }
        if (ctx->pc != 0x1E92E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDB98_0x1fdb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92E8u; }
        if (ctx->pc != 0x1E92E8u) { return; }
    }
    ctx->pc = 0x1E92E8u;
label_1e92e8:
    // 0x1e92e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e92e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92ec: 0xc07f6ec  jal         func_1FDBB0
    ctx->pc = 0x1E92ECu;
    SET_GPR_U32(ctx, 31, 0x1E92F4u);
    ctx->pc = 0x1E92F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92ECu;
            // 0x1e92f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBB0u;
    if (runtime->hasFunction(0x1FDBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FDBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92F4u; }
        if (ctx->pc != 0x1E92F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDBB0_0x1fdbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E92F4u; }
        if (ctx->pc != 0x1E92F4u) { return; }
    }
    ctx->pc = 0x1E92F4u;
label_1e92f4:
    // 0x1e92f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e92f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e92f8: 0xc07f6f2  jal         func_1FDBC8
    ctx->pc = 0x1E92F8u;
    SET_GPR_U32(ctx, 31, 0x1E9300u);
    ctx->pc = 0x1E92FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E92F8u;
            // 0x1e92fc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBC8u;
    if (runtime->hasFunction(0x1FDBC8u)) {
        auto targetFn = runtime->lookupFunction(0x1FDBC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9300u; }
        if (ctx->pc != 0x1E9300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDBC8_0x1fdbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9300u; }
        if (ctx->pc != 0x1E9300u) { return; }
    }
    ctx->pc = 0x1E9300u;
label_1e9300:
    // 0x1e9300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9304: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E9304u;
    SET_GPR_U32(ctx, 31, 0x1E930Cu);
    ctx->pc = 0x1E9308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9304u;
            // 0x1e9308: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E930Cu; }
        if (ctx->pc != 0x1E930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E930Cu; }
        if (ctx->pc != 0x1E930Cu) { return; }
    }
    ctx->pc = 0x1E930Cu;
label_1e930c:
    // 0x1e930c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9310: 0xc07f6f8  jal         func_1FDBE0
    ctx->pc = 0x1E9310u;
    SET_GPR_U32(ctx, 31, 0x1E9318u);
    ctx->pc = 0x1E9314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9310u;
            // 0x1e9314: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDBE0u;
    if (runtime->hasFunction(0x1FDBE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FDBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9318u; }
        if (ctx->pc != 0x1E9318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDBE0_0x1fdbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9318u; }
        if (ctx->pc != 0x1E9318u) { return; }
    }
    ctx->pc = 0x1E9318u;
label_1e9318:
    // 0x1e9318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e931c: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1E931Cu;
    SET_GPR_U32(ctx, 31, 0x1E9324u);
    ctx->pc = 0x1E9320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E931Cu;
            // 0x1e9320: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9324u; }
        if (ctx->pc != 0x1E9324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9324u; }
        if (ctx->pc != 0x1E9324u) { return; }
    }
    ctx->pc = 0x1E9324u;
label_1e9324:
    // 0x1e9324: 0xc080d14  jal         func_203450
    ctx->pc = 0x1E9324u;
    SET_GPR_U32(ctx, 31, 0x1E932Cu);
    ctx->pc = 0x1E9328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9324u;
            // 0x1e9328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203450u;
    if (runtime->hasFunction(0x203450u)) {
        auto targetFn = runtime->lookupFunction(0x203450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E932Cu; }
        if (ctx->pc != 0x1E932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203450_0x203450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E932Cu; }
        if (ctx->pc != 0x1E932Cu) { return; }
    }
    ctx->pc = 0x1E932Cu;
label_1e932c:
    // 0x1e932c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e932cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9330: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1e9330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9334:
    // 0x1e9334: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1e9334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e9338: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1e9338u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e933c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1e933cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e9340: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9340u;
            // 0x1e9344: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9348u;
    ctx->pc = 0x1e9348u;
}
