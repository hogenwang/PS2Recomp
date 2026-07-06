#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA728
// Address: 0x1ea728 - 0x1ea7c8
void sub_001EA728_0x1ea728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA728_0x1ea728");
#endif

    switch (ctx->pc) {
        case 0x1ea758u: goto label_1ea758;
        case 0x1ea794u: goto label_1ea794;
        case 0x1ea7a4u: goto label_1ea7a4;
        case 0x1ea7acu: goto label_1ea7ac;
        default: break;
    }

    ctx->pc = 0x1ea728u;

    // 0x1ea728: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ea72c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ea72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ea730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea734: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ea734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ea738: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ea738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea73c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ea73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ea740: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ea740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ea744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea748: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ea748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ea74c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ea74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ea750: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1EA750u;
    SET_GPR_U32(ctx, 31, 0x1EA758u);
    ctx->pc = 0x1EA754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA750u;
            // 0x1ea754: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA758u; }
        if (ctx->pc != 0x1EA758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA758u; }
        if (ctx->pc != 0x1EA758u) { return; }
    }
    ctx->pc = 0x1EA758u;
label_1ea758:
    // 0x1ea758: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1ea758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1ea75c: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1ea75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1ea760: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x1ea760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ea764: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x1ea764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ea768: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x1ea768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1ea76c: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x1ea76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1ea770: 0x6a650017  ldl         $a1, 0x17($s3)
    ctx->pc = 0x1ea770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1ea774: 0x6e650010  ldr         $a1, 0x10($s3)
    ctx->pc = 0x1ea774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1ea778: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1ea778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea77c: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1ea77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea780: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x1ea780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea784: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x1ea784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea788: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x1ea788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ea78c: 0xc07a9f2  jal         func_1EA7C8
    ctx->pc = 0x1EA78Cu;
    SET_GPR_U32(ctx, 31, 0x1EA794u);
    ctx->pc = 0x1EA790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA78Cu;
            // 0x1ea790: 0xb6050010  sdr         $a1, 0x10($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA7C8u;
    if (runtime->hasFunction(0x1EA7C8u)) {
        auto targetFn = runtime->lookupFunction(0x1EA7C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA794u; }
        if (ctx->pc != 0x1EA794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA7C8_0x1ea7c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA794u; }
        if (ctx->pc != 0x1EA794u) { return; }
    }
    ctx->pc = 0x1EA794u;
label_1ea794:
    // 0x1ea794: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1ea794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1ea798: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ea798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ea79c: 0xc07e6a0  jal         func_1F9A80
    ctx->pc = 0x1EA79Cu;
    SET_GPR_U32(ctx, 31, 0x1EA7A4u);
    ctx->pc = 0x1EA7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA79Cu;
            // 0x1ea7a0: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A80u;
    if (runtime->hasFunction(0x1F9A80u)) {
        auto targetFn = runtime->lookupFunction(0x1F9A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7A4u; }
        if (ctx->pc != 0x1EA7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9A80_0x1f9a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7A4u; }
        if (ctx->pc != 0x1EA7A4u) { return; }
    }
    ctx->pc = 0x1EA7A4u;
label_1ea7a4:
    // 0x1ea7a4: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1EA7A4u;
    SET_GPR_U32(ctx, 31, 0x1EA7ACu);
    ctx->pc = 0x1EA7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7A4u;
            // 0x1ea7a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7ACu; }
        if (ctx->pc != 0x1EA7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA7ACu; }
        if (ctx->pc != 0x1EA7ACu) { return; }
    }
    ctx->pc = 0x1EA7ACu;
label_1ea7ac:
    // 0x1ea7ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ea7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea7b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ea7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea7b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea7b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ea7b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ea7bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ea7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA7C0u;
            // 0x1ea7c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA7C8u;
    ctx->pc = 0x1ea7c8u;
}
