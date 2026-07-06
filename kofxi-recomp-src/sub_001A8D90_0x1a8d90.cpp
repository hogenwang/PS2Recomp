#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8D90
// Address: 0x1a8d90 - 0x1a8e40
void sub_001A8D90_0x1a8d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8D90_0x1a8d90");
#endif

    switch (ctx->pc) {
        case 0x1a8dd8u: goto label_1a8dd8;
        case 0x1a8e18u: goto label_1a8e18;
        case 0x1a8e28u: goto label_1a8e28;
        default: break;
    }

    ctx->pc = 0x1a8d90u;

    // 0x1a8d90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a8d94: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x1a8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x1a8d98: 0x24428d20  addiu       $v0, $v0, -0x72E0
    ctx->pc = 0x1a8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937888));
    // 0x1a8d9c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1a8d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1a8da0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1a8da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1a8da4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a8da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8da8: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x1a8dac: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1a8dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1a8db0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a8db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a8db4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a8db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a8db8: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x1a8db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x1a8dbc: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x1a8dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dc0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x1a8dc4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a8dc8: 0x244269d0  addiu       $v0, $v0, 0x69D0
    ctx->pc = 0x1a8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27088));
    // 0x1a8dcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a8dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dd0: 0xc043298  jal         func_10CA60
    ctx->pc = 0x1A8DD0u;
    SET_GPR_U32(ctx, 31, 0x1A8DD8u);
    ctx->pc = 0x1A8DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DD0u;
            // 0x1a8dd4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DD8u; }
        if (ctx->pc != 0x1A8DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DD8u; }
        if (ctx->pc != 0x1A8DD8u) { return; }
    }
    ctx->pc = 0x1A8DD8u;
label_1a8dd8:
    // 0x1a8dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a8dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ddc: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A8DDCu;
    {
        const bool branch_taken_0x1a8ddc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1A8DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DDCu;
            // 0x1a8de0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ddc) {
            ctx->pc = 0x1A8E2Cu;
            goto label_1a8e2c;
        }
    }
    ctx->pc = 0x1A8DE4u;
    // 0x1a8de4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1a8de8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dec: 0x24485280  addiu       $t0, $v0, 0x5280
    ctx->pc = 0x1a8decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x1a8df0: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x1a8df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a8df4: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x1a8df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a8df8: 0x6a26000f  ldl         $a2, 0xF($s1)
    ctx->pc = 0x1a8df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a8dfc: 0x6e260008  ldr         $a2, 0x8($s1)
    ctx->pc = 0x1a8dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a8e00: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x1a8e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8e04: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x1a8e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8e08: 0xb106000f  sdl         $a2, 0xF($t0)
    ctx->pc = 0x1a8e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8e0c: 0xb5060008  sdr         $a2, 0x8($t0)
    ctx->pc = 0x1a8e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a8e10: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x1A8E10u;
    SET_GPR_U32(ctx, 31, 0x1A8E18u);
    ctx->pc = 0x1A8E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E10u;
            // 0x1a8e14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E18u; }
        if (ctx->pc != 0x1A8E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E18u; }
        if (ctx->pc != 0x1A8E18u) { return; }
    }
    ctx->pc = 0x1A8E18u;
label_1a8e18:
    // 0x1a8e18: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8E18u;
    {
        const bool branch_taken_0x1a8e18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1A8E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E18u;
            // 0x1a8e1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e18) {
            ctx->pc = 0x1A8E2Cu;
            goto label_1a8e2c;
        }
    }
    ctx->pc = 0x1A8E20u;
    // 0x1a8e20: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x1A8E20u;
    SET_GPR_U32(ctx, 31, 0x1A8E28u);
    ctx->pc = 0x1A8E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E20u;
            // 0x1a8e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E28u; }
        if (ctx->pc != 0x1A8E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E28u; }
        if (ctx->pc != 0x1A8E28u) { return; }
    }
    ctx->pc = 0x1A8E28u;
label_1a8e28:
    // 0x1a8e28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a8e2c:
    // 0x1a8e2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a8e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8e30: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x1a8e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8e34: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E38u;
            // 0x1a8e3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8E40u;
    ctx->pc = 0x1a8e40u;
}
