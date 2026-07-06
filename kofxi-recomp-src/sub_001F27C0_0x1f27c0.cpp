#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F27C0
// Address: 0x1f27c0 - 0x1f28a0
void sub_001F27C0_0x1f27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F27C0_0x1f27c0");
#endif

    switch (ctx->pc) {
        case 0x1f2834u: goto label_1f2834;
        default: break;
    }

    ctx->pc = 0x1f27c0u;

    // 0x1f27c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f27c4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f27c8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f27cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f27ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f27d4: 0x26300dc4  addiu       $s0, $s1, 0xDC4
    ctx->pc = 0x1f27d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3524));
    // 0x1f27d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f27dc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F27DCu;
    {
        const bool branch_taken_0x1f27dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F27E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F27DCu;
            // 0x1f27e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27dc) {
            ctx->pc = 0x1F288Cu;
            goto label_1f288c;
        }
    }
    ctx->pc = 0x1F27E4u;
    // 0x1f27e4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f27e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f27e8: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x1f27ec: 0x6a220dab  ldl         $v0, 0xDAB($s1)
    ctx->pc = 0x1f27ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f27f0: 0x6e220da4  ldr         $v0, 0xDA4($s1)
    ctx->pc = 0x1f27f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f27f4: 0x6a230db3  ldl         $v1, 0xDB3($s1)
    ctx->pc = 0x1f27f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1f27f8: 0x6e230dac  ldr         $v1, 0xDAC($s1)
    ctx->pc = 0x1f27f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3500); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1f27fc: 0x6a270dbb  ldl         $a3, 0xDBB($s1)
    ctx->pc = 0x1f27fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f2800: 0x6e270db4  ldr         $a3, 0xDB4($s1)
    ctx->pc = 0x1f2800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3508); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f2804: 0x6a280dc3  ldl         $t0, 0xDC3($s1)
    ctx->pc = 0x1f2804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3523); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f2808: 0x6e280dbc  ldr         $t0, 0xDBC($s1)
    ctx->pc = 0x1f2808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f280c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1f280cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2810: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1f2810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2814: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x1f2814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2818: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x1f2818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f281c: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1f281cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2820: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1f2820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2824: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x1f2824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2828: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x1f2828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f282c: 0xc07f146  jal         func_1FC518
    ctx->pc = 0x1F282Cu;
    SET_GPR_U32(ctx, 31, 0x1F2834u);
    ctx->pc = 0x1F2830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F282Cu;
            // 0x1f2830: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC518u;
    if (runtime->hasFunction(0x1FC518u)) {
        auto targetFn = runtime->lookupFunction(0x1FC518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2834u; }
        if (ctx->pc != 0x1F2834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC518_0x1fc518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2834u; }
        if (ctx->pc != 0x1F2834u) { return; }
    }
    ctx->pc = 0x1F2834u;
label_1f2834:
    // 0x1f2834: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f2834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f2838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f283c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1f2840: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x1f2840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1f2844: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x1f2844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1f2848: 0x6ba6000f  ldl         $a2, 0xF($sp)
    ctx->pc = 0x1f2848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f284c: 0x6fa60008  ldr         $a2, 0x8($sp)
    ctx->pc = 0x1f284cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f2850: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x1f2850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f2854: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x1f2854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f2858: 0x6ba8001f  ldl         $t0, 0x1F($sp)
    ctx->pc = 0x1f2858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f285c: 0x6fa80018  ldr         $t0, 0x18($sp)
    ctx->pc = 0x1f285cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f2860: 0xb2250dcf  sdl         $a1, 0xDCF($s1)
    ctx->pc = 0x1f2860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2864: 0xb6250dc8  sdr         $a1, 0xDC8($s1)
    ctx->pc = 0x1f2864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2868: 0xb2260dd7  sdl         $a2, 0xDD7($s1)
    ctx->pc = 0x1f2868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f286c: 0xb6260dd0  sdr         $a2, 0xDD0($s1)
    ctx->pc = 0x1f286cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2870: 0xb2270ddf  sdl         $a3, 0xDDF($s1)
    ctx->pc = 0x1f2870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2874: 0xb6270dd8  sdr         $a3, 0xDD8($s1)
    ctx->pc = 0x1f2874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3544); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2878: 0xb2280de7  sdl         $t0, 0xDE7($s1)
    ctx->pc = 0x1f2878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3559); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f287c: 0xb6280de0  sdr         $t0, 0xDE0($s1)
    ctx->pc = 0x1f287cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f2880: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1f2880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1f2884: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1f2884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1f2888: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1f2888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_1f288c:
    // 0x1f288c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f288cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f2890: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f2890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f2894: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2898: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2898u;
            // 0x1f289c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F28A0u;
    ctx->pc = 0x1f28a0u;
}
