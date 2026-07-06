#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8700
// Address: 0x1f8700 - 0x1f8950
void sub_001F8700_0x1f8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8700_0x1f8700");
#endif

    switch (ctx->pc) {
        case 0x1f8770u: goto label_1f8770;
        case 0x1f87a8u: goto label_1f87a8;
        case 0x1f880cu: goto label_1f880c;
        case 0x1f8874u: goto label_1f8874;
        case 0x1f887cu: goto label_1f887c;
        case 0x1f8884u: goto label_1f8884;
        case 0x1f888cu: goto label_1f888c;
        case 0x1f8894u: goto label_1f8894;
        case 0x1f88a4u: goto label_1f88a4;
        case 0x1f88b4u: goto label_1f88b4;
        case 0x1f88c4u: goto label_1f88c4;
        case 0x1f88dcu: goto label_1f88dc;
        case 0x1f88ecu: goto label_1f88ec;
        case 0x1f8908u: goto label_1f8908;
        case 0x1f8910u: goto label_1f8910;
        case 0x1f8918u: goto label_1f8918;
        default: break;
    }

    ctx->pc = 0x1f8700u;

    // 0x1f8700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f8704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f870c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f870cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8710: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f8710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f8714: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f8714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f871c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8720: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f8720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f8724: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f8724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f8728: 0x8e470040  lw          $a3, 0x40($s2)
    ctx->pc = 0x1f8728u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f872c: 0x8e50003c  lw          $s0, 0x3C($s2)
    ctx->pc = 0x1f872cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1f8730: 0x1200007e  beqz        $s0, . + 4 + (0x7E << 2)
    ctx->pc = 0x1F8730u;
    {
        const bool branch_taken_0x1f8730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8730u;
            // 0x1f8734: 0x73082  srl         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8730) {
            ctx->pc = 0x1F892Cu;
            goto label_1f892c;
        }
    }
    ctx->pc = 0x1F8738u;
    // 0x1f8738: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x1f8738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1f873c: 0x2c637050  sltiu       $v1, $v1, 0x7050
    ctx->pc = 0x1f873cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28752) ? 1 : 0);
    // 0x1f8740: 0x5060007b  beql        $v1, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1F8740u;
    {
        const bool branch_taken_0x1f8740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8740) {
            ctx->pc = 0x1F8744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8740u;
            // 0x1f8744: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8930u;
            goto label_1f8930;
        }
    }
    ctx->pc = 0x1F8748u;
    // 0x1f8748: 0x3c080039  lui         $t0, 0x39
    ctx->pc = 0x1f8748u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)57 << 16));
    // 0x1f874c: 0x8d031790  lw          $v1, 0x1790($t0)
    ctx->pc = 0x1f874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 6032)));
    // 0x1f8750: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8750u;
    {
        const bool branch_taken_0x1f8750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8750u;
            // 0x1f8754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8750) {
            ctx->pc = 0x1F8764u;
            goto label_1f8764;
        }
    }
    ctx->pc = 0x1F8758u;
    // 0x1f8758: 0x54670075  bnel        $v1, $a3, . + 4 + (0x75 << 2)
    ctx->pc = 0x1F8758u;
    {
        const bool branch_taken_0x1f8758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f8758) {
            ctx->pc = 0x1F875Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8758u;
            // 0x1f875c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8930u;
            goto label_1f8930;
        }
    }
    ctx->pc = 0x1F8760u;
    // 0x1f8760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8764:
    // 0x1f8764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8768: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1F8768u;
    SET_GPR_U32(ctx, 31, 0x1F8770u);
    ctx->pc = 0x1F876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8768u;
            // 0x1f876c: 0xad071790  sw          $a3, 0x1790($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 6032), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (runtime->hasFunction(0x1D63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8770u; }
        if (ctx->pc != 0x1F8770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D63E8_0x1d63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8770u; }
        if (ctx->pc != 0x1F8770u) { return; }
    }
    ctx->pc = 0x1F8770u;
label_1f8770:
    // 0x1f8770: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f8774: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x1f8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1f8778: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x1f8778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x1f877c: 0x32450007  andi        $a1, $s2, 0x7
    ctx->pc = 0x1f877cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x1f8780: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x1f8784: 0x648824  and         $s1, $v1, $a0
    ctx->pc = 0x1f8784u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f8788: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f8788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f878c: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1f878cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x1f8790: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1f8790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1f8794: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f8794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8798: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x1f8798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x1f879c: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F879Cu;
    {
        const bool branch_taken_0x1f879c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F87A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F879Cu;
            // 0x1f87a0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f879c) {
            ctx->pc = 0x1F8808u;
            goto label_1f8808;
        }
    }
    ctx->pc = 0x1F87A4u;
    // 0x1f87a4: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1f87a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1f87a8:
    // 0x1f87a8: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x1f87a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f87ac: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x1f87acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f87b0: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1f87b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f87b4: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1f87b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f87b8: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x1f87b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f87bc: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x1f87bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f87c0: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x1f87c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f87c4: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x1f87c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f87c8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1f87c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87cc: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1f87ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87d0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x1f87d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87d4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x1f87d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87d8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x1f87d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87dc: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x1f87dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87e0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x1f87e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87e4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x1f87e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f87e8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f87ec: 0x0  nop
    ctx->pc = 0x1f87ecu;
    // NOP
    // 0x1f87f0: 0x0  nop
    ctx->pc = 0x1f87f0u;
    // NOP
    // 0x1f87f4: 0x1444ffec  bne         $v0, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F87F4u;
    {
        const bool branch_taken_0x1f87f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F87F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F87F4u;
            // 0x1f87f8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87f4) {
            ctx->pc = 0x1F87A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f87a8;
        }
    }
    ctx->pc = 0x1F87FCu;
    // 0x1f87fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F87FCu;
    {
        const bool branch_taken_0x1f87fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f87fc) {
            ctx->pc = 0x1F8840u;
            goto label_1f8840;
        }
    }
    ctx->pc = 0x1F8804u;
    // 0x1f8804: 0x0  nop
    ctx->pc = 0x1f8804u;
    // NOP
label_1f8808:
    // 0x1f8808: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1f8808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1f880c:
    // 0x1f880c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1f880cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8810: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1f8810u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f8814: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1f8814u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f8818: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1f8818u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f881c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1f881cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1f8820: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1f8820u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1f8824: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1f8824u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1f8828: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1f8828u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1f882c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f8830: 0x0  nop
    ctx->pc = 0x1f8830u;
    // NOP
    // 0x1f8834: 0x0  nop
    ctx->pc = 0x1f8834u;
    // NOP
    // 0x1f8838: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F8838u;
    {
        const bool branch_taken_0x1f8838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F883Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8838u;
            // 0x1f883c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8838) {
            ctx->pc = 0x1F880Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f880c;
        }
    }
    ctx->pc = 0x1F8840u;
label_1f8840:
    // 0x1f8840: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8844: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8848: 0x3c100039  lui         $s0, 0x39
    ctx->pc = 0x1f8848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)57 << 16));
    // 0x1f884c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f884cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1f8850: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x1f8854: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x1f8854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x1f8858: 0x26101540  addiu       $s0, $s0, 0x1540
    ctx->pc = 0x1f8858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5440));
    // 0x1f885c: 0xae330044  sw          $s3, 0x44($s1)
    ctx->pc = 0x1f885cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 19));
    // 0x1f8860: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1f8860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1f8864: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x1f8864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x1f8868: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1f8868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1f886c: 0xc07b288  jal         func_1ECA20
    ctx->pc = 0x1F886Cu;
    SET_GPR_U32(ctx, 31, 0x1F8874u);
    ctx->pc = 0x1F8870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F886Cu;
            // 0x1f8870: 0xae200060  sw          $zero, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA20u;
    if (runtime->hasFunction(0x1ECA20u)) {
        auto targetFn = runtime->lookupFunction(0x1ECA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8874u; }
        if (ctx->pc != 0x1F8874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECA20_0x1eca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8874u; }
        if (ctx->pc != 0x1F8874u) { return; }
    }
    ctx->pc = 0x1F8874u;
label_1f8874:
    // 0x1f8874: 0xc07e254  jal         func_1F8950
    ctx->pc = 0x1F8874u;
    SET_GPR_U32(ctx, 31, 0x1F887Cu);
    ctx->pc = 0x1F8878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8874u;
            // 0x1f8878: 0x2624090c  addiu       $a0, $s1, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2316));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8950u;
    if (runtime->hasFunction(0x1F8950u)) {
        auto targetFn = runtime->lookupFunction(0x1F8950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F887Cu; }
        if (ctx->pc != 0x1F887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8950_0x1f8950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F887Cu; }
        if (ctx->pc != 0x1F887Cu) { return; }
    }
    ctx->pc = 0x1F887Cu;
label_1f887c:
    // 0x1f887c: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x1F887Cu;
    SET_GPR_U32(ctx, 31, 0x1F8884u);
    ctx->pc = 0x1F8880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F887Cu;
            // 0x1f8880: 0x26240950  addiu       $a0, $s1, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (runtime->hasFunction(0x1F89B8u)) {
        auto targetFn = runtime->lookupFunction(0x1F89B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8884u; }
        if (ctx->pc != 0x1F8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F89B8_0x1f89b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8884u; }
        if (ctx->pc != 0x1F8884u) { return; }
    }
    ctx->pc = 0x1F8884u;
label_1f8884:
    // 0x1f8884: 0xc07e290  jal         func_1F8A40
    ctx->pc = 0x1F8884u;
    SET_GPR_U32(ctx, 31, 0x1F888Cu);
    ctx->pc = 0x1F8888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8884u;
            // 0x1f8888: 0x26243718  addiu       $a0, $s1, 0x3718 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A40u;
    if (runtime->hasFunction(0x1F8A40u)) {
        auto targetFn = runtime->lookupFunction(0x1F8A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F888Cu; }
        if (ctx->pc != 0x1F888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8A40_0x1f8a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F888Cu; }
        if (ctx->pc != 0x1F888Cu) { return; }
    }
    ctx->pc = 0x1F888Cu;
label_1f888c:
    // 0x1f888c: 0xc07b5ba  jal         func_1ED6E8
    ctx->pc = 0x1F888Cu;
    SET_GPR_U32(ctx, 31, 0x1F8894u);
    ctx->pc = 0x1F8890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F888Cu;
            // 0x1f8890: 0x262409f8  addiu       $a0, $s1, 0x9F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED6E8u;
    if (runtime->hasFunction(0x1ED6E8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED6E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8894u; }
        if (ctx->pc != 0x1F8894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED6E8_0x1ed6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8894u; }
        if (ctx->pc != 0x1F8894u) { return; }
    }
    ctx->pc = 0x1F8894u;
label_1f8894:
    // 0x1f8894: 0x26240a0c  addiu       $a0, $s1, 0xA0C
    ctx->pc = 0x1f8894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x1f8898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f889c: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1F889Cu;
    SET_GPR_U32(ctx, 31, 0x1F88A4u);
    ctx->pc = 0x1F88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F889Cu;
            // 0x1f88a0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88A4u; }
        if (ctx->pc != 0x1F88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88A4u; }
        if (ctx->pc != 0x1F88A4u) { return; }
    }
    ctx->pc = 0x1F88A4u;
label_1f88a4:
    // 0x1f88a4: 0x26240b9c  addiu       $a0, $s1, 0xB9C
    ctx->pc = 0x1f88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2972));
    // 0x1f88a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f88a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88ac: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1F88ACu;
    SET_GPR_U32(ctx, 31, 0x1F88B4u);
    ctx->pc = 0x1F88B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88ACu;
            // 0x1f88b0: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88B4u; }
        if (ctx->pc != 0x1F88B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88B4u; }
        if (ctx->pc != 0x1F88B4u) { return; }
    }
    ctx->pc = 0x1F88B4u;
label_1f88b4:
    // 0x1f88b4: 0x26240d2c  addiu       $a0, $s1, 0xD2C
    ctx->pc = 0x1f88b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3372));
    // 0x1f88b8: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x1f88b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1f88bc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1F88BCu;
    SET_GPR_U32(ctx, 31, 0x1F88C4u);
    ctx->pc = 0x1F88C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88BCu;
            // 0x1f88c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88C4u; }
        if (ctx->pc != 0x1F88C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88C4u; }
        if (ctx->pc != 0x1F88C4u) { return; }
    }
    ctx->pc = 0x1F88C4u;
label_1f88c4:
    // 0x1f88c4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1f88c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f88c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f88cc: 0x26250d88  addiu       $a1, $s1, 0xD88
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
    // 0x1f88d0: 0xae230d7c  sw          $v1, 0xD7C($s1)
    ctx->pc = 0x1f88d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3452), GPR_U32(ctx, 3));
    // 0x1f88d4: 0xc07ed3e  jal         func_1FB4F8
    ctx->pc = 0x1F88D4u;
    SET_GPR_U32(ctx, 31, 0x1F88DCu);
    ctx->pc = 0x1F88D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88D4u;
            // 0x1f88d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4F8u;
    if (runtime->hasFunction(0x1FB4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FB4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88DCu; }
        if (ctx->pc != 0x1F88DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB4F8_0x1fb4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88DCu; }
        if (ctx->pc != 0x1F88DCu) { return; }
    }
    ctx->pc = 0x1F88DCu;
label_1f88dc:
    // 0x1f88dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88e0: 0x26251368  addiu       $a1, $s1, 0x1368
    ctx->pc = 0x1f88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4968));
    // 0x1f88e4: 0xc07a7f4  jal         func_1E9FD0
    ctx->pc = 0x1F88E4u;
    SET_GPR_U32(ctx, 31, 0x1F88ECu);
    ctx->pc = 0x1F88E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88E4u;
            // 0x1f88e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9FD0u;
    if (runtime->hasFunction(0x1E9FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E9FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88ECu; }
        if (ctx->pc != 0x1F88ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9FD0_0x1e9fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F88ECu; }
        if (ctx->pc != 0x1F88ECu) { return; }
    }
    ctx->pc = 0x1F88ECu;
label_1f88ec:
    // 0x1f88ec: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F88ECu;
    {
        const bool branch_taken_0x1f88ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f88ec) {
            ctx->pc = 0x1F88F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F88ECu;
            // 0x1f88f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F892Cu;
            goto label_1f892c;
        }
    }
    ctx->pc = 0x1F88F4u;
    // 0x1f88f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f88f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88f8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f88f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f88fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f88fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8900: 0xc07f4e2  jal         func_1FD388
    ctx->pc = 0x1F8900u;
    SET_GPR_U32(ctx, 31, 0x1F8908u);
    ctx->pc = 0x1F8904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8900u;
            // 0x1f8904: 0x26251f88  addiu       $a1, $s1, 0x1F88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD388u;
    if (runtime->hasFunction(0x1FD388u)) {
        auto targetFn = runtime->lookupFunction(0x1FD388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8908u; }
        if (ctx->pc != 0x1F8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD388_0x1fd388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8908u; }
        if (ctx->pc != 0x1F8908u) { return; }
    }
    ctx->pc = 0x1F8908u;
label_1f8908:
    // 0x1f8908: 0xc07e7b8  jal         func_1F9EE0
    ctx->pc = 0x1F8908u;
    SET_GPR_U32(ctx, 31, 0x1F8910u);
    ctx->pc = 0x1F890Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8908u;
            // 0x1f890c: 0x26243708  addiu       $a0, $s1, 0x3708 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9EE0u;
    if (runtime->hasFunction(0x1F9EE0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8910u; }
        if (ctx->pc != 0x1F8910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9EE0_0x1f9ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8910u; }
        if (ctx->pc != 0x1F8910u) { return; }
    }
    ctx->pc = 0x1F8910u;
label_1f8910:
    // 0x1f8910: 0xc07e2ce  jal         func_1F8B38
    ctx->pc = 0x1F8910u;
    SET_GPR_U32(ctx, 31, 0x1F8918u);
    ctx->pc = 0x1F8914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8910u;
            // 0x1f8914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B38u;
    if (runtime->hasFunction(0x1F8B38u)) {
        auto targetFn = runtime->lookupFunction(0x1F8B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8918u; }
        if (ctx->pc != 0x1F8918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F8B38_0x1f8b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8918u; }
        if (ctx->pc != 0x1F8918u) { return; }
    }
    ctx->pc = 0x1F8918u;
label_1f8918:
    // 0x1f8918: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8918u;
    {
        const bool branch_taken_0x1f8918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F891Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8918u;
            // 0x1f891c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8918) {
            ctx->pc = 0x1F892Cu;
            goto label_1f892c;
        }
    }
    ctx->pc = 0x1F8920u;
    // 0x1f8920: 0xae330048  sw          $s3, 0x48($s1)
    ctx->pc = 0x1f8920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 19));
    // 0x1f8924: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f8924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8928: 0xae33004c  sw          $s3, 0x4C($s1)
    ctx->pc = 0x1f8928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 19));
label_1f892c:
    // 0x1f892c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f892cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8930:
    // 0x1f8930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8934: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8938: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f8938u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f893c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f893cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8940: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f8940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f8944: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8944u;
            // 0x1f8948: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F894Cu;
    // 0x1f894c: 0x0  nop
    ctx->pc = 0x1f894cu;
    // NOP
    ctx->pc = 0x1f8950u;
}
