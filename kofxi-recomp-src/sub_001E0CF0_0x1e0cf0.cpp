#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0CF0
// Address: 0x1e0cf0 - 0x1e0d98
void sub_001E0CF0_0x1e0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0CF0_0x1e0cf0");
#endif

    switch (ctx->pc) {
        case 0x1e0d24u: goto label_1e0d24;
        case 0x1e0d3cu: goto label_1e0d3c;
        case 0x1e0d50u: goto label_1e0d50;
        case 0x1e0d60u: goto label_1e0d60;
        case 0x1e0d78u: goto label_1e0d78;
        case 0x1e0d88u: goto label_1e0d88;
        default: break;
    }

    ctx->pc = 0x1e0cf0u;

    // 0x1e0cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0cf4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1e0cf8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1e0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1e0cfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0d00: 0x2448cd60  addiu       $t0, $v0, -0x32A0
    ctx->pc = 0x1e0d00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954336));
    // 0x1e0d04: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x1e0d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e0d08: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x1e0d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e0d0c: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1e0d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0d10: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1e0d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e0d14: 0x24053808  addiu       $a1, $zero, 0x3808
    ctx->pc = 0x1e0d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14344));
    // 0x1e0d18: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1e0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x1e0d1c: 0xc07b538  jal         func_1ED4E0
    ctx->pc = 0x1E0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1E0D24u);
    ctx->pc = 0x1E0D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D1Cu;
            // 0x1e0d20: 0x2464ce28  addiu       $a0, $v1, -0x31D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED4E0u;
    if (runtime->hasFunction(0x1ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D24u; }
        if (ctx->pc != 0x1E0D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED4E0_0x1ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D24u; }
        if (ctx->pc != 0x1E0D24u) { return; }
    }
    ctx->pc = 0x1E0D24u;
label_1e0d24:
    // 0x1e0d24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0d28: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0D28u;
    {
        const bool branch_taken_0x1e0d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E0D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D28u;
            // 0x1e0d2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d28) {
            ctx->pc = 0x1E0D48u;
            goto label_1e0d48;
        }
    }
    ctx->pc = 0x1E0D30u;
    // 0x1e0d30: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e0d34: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E0D34u;
    SET_GPR_U32(ctx, 31, 0x1E0D3Cu);
    ctx->pc = 0x1E0D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D34u;
            // 0x1e0d38: 0x2484ce30  addiu       $a0, $a0, -0x31D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (runtime->hasFunction(0x1E6BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1E6BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D3Cu; }
        if (ctx->pc != 0x1E0D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6BE8_0x1e6be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D3Cu; }
        if (ctx->pc != 0x1E0D3Cu) { return; }
    }
    ctx->pc = 0x1E0D3Cu;
label_1e0d3c:
    // 0x1e0d3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0D3Cu;
    {
        const bool branch_taken_0x1e0d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D3Cu;
            // 0x1e0d40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d3c) {
            ctx->pc = 0x1E0D88u;
            goto label_1e0d88;
        }
    }
    ctx->pc = 0x1E0D44u;
    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
label_1e0d48:
    // 0x1e0d48: 0xc07b53c  jal         func_1ED4F0
    ctx->pc = 0x1E0D48u;
    SET_GPR_U32(ctx, 31, 0x1E0D50u);
    ctx->pc = 0x1ED4F0u;
    if (runtime->hasFunction(0x1ED4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D50u; }
        if (ctx->pc != 0x1E0D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED4F0_0x1ed4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D50u; }
        if (ctx->pc != 0x1E0D50u) { return; }
    }
    ctx->pc = 0x1E0D50u;
label_1e0d50:
    // 0x1e0d50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D50u;
            // 0x1e0d54: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D68u;
            goto label_1e0d68;
        }
    }
    ctx->pc = 0x1E0D58u;
    // 0x1e0d58: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E0D58u;
    SET_GPR_U32(ctx, 31, 0x1E0D60u);
    ctx->pc = 0x1E0D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D58u;
            // 0x1e0d5c: 0x2404fed3  addiu       $a0, $zero, -0x12D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966995));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0CA0u;
    if (runtime->hasFunction(0x1E0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D60u; }
        if (ctx->pc != 0x1E0D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CA0_0x1e0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D60u; }
        if (ctx->pc != 0x1E0D60u) { return; }
    }
    ctx->pc = 0x1E0D60u;
label_1e0d60:
    // 0x1e0d60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E0D60u;
    {
        const bool branch_taken_0x1e0d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D60u;
            // 0x1e0d64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d60) {
            ctx->pc = 0x1E0D8Cu;
            goto label_1e0d8c;
        }
    }
    ctx->pc = 0x1E0D68u;
label_1e0d68:
    // 0x1e0d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d6c: 0x24a50db8  addiu       $a1, $a1, 0xDB8
    ctx->pc = 0x1e0d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3512));
    // 0x1e0d70: 0xc07b5ec  jal         func_1ED7B0
    ctx->pc = 0x1E0D70u;
    SET_GPR_U32(ctx, 31, 0x1E0D78u);
    ctx->pc = 0x1E0D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D70u;
            // 0x1e0d74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7B0u;
    if (runtime->hasFunction(0x1ED7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D78u; }
        if (ctx->pc != 0x1E0D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED7B0_0x1ed7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D78u; }
        if (ctx->pc != 0x1E0D78u) { return; }
    }
    ctx->pc = 0x1E0D78u;
label_1e0d78:
    // 0x1e0d78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D78u;
    {
        const bool branch_taken_0x1e0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D78u;
            // 0x1e0d7c: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d78) {
            ctx->pc = 0x1E0D88u;
            goto label_1e0d88;
        }
    }
    ctx->pc = 0x1E0D80u;
    // 0x1e0d80: 0xc078328  jal         func_1E0CA0
    ctx->pc = 0x1E0D80u;
    SET_GPR_U32(ctx, 31, 0x1E0D88u);
    ctx->pc = 0x1E0CA0u;
    if (runtime->hasFunction(0x1E0CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1E0CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D88u; }
        if (ctx->pc != 0x1E0D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0CA0_0x1e0ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D88u; }
        if (ctx->pc != 0x1E0D88u) { return; }
    }
    ctx->pc = 0x1E0D88u;
label_1e0d88:
    // 0x1e0d88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0d8c:
    // 0x1e0d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D8Cu;
            // 0x1e0d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0D94u;
    // 0x1e0d94: 0x0  nop
    ctx->pc = 0x1e0d94u;
    // NOP
    ctx->pc = 0x1e0d98u;
}
