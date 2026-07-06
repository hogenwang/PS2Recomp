#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DFCA8
// Address: 0x2dfca8 - 0x2dfdf8
void sub_002DFCA8_0x2dfca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFCA8_0x2dfca8");
#endif

    switch (ctx->pc) {
        case 0x2dfd18u: goto label_2dfd18;
        case 0x2dfd2cu: goto label_2dfd2c;
        case 0x2dfd48u: goto label_2dfd48;
        case 0x2dfd64u: goto label_2dfd64;
        case 0x2dfd78u: goto label_2dfd78;
        case 0x2dfd90u: goto label_2dfd90;
        case 0x2dfda4u: goto label_2dfda4;
        case 0x2dfdbcu: goto label_2dfdbc;
        case 0x2dfdc0u: goto label_2dfdc0;
        default: break;
    }

    ctx->pc = 0x2dfca8u;

    // 0x2dfca8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2dfcac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dfcb0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2dfcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2dfcb4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2dfcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcb8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2dfcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2dfcbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dfcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcc0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2dfcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2dfcc4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2dfcc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcc8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2dfcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2dfccc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2dfcccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcd0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2dfcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2dfcd4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2dfcd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcd8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2dfcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2dfcdc: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2dfcdcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2dfce0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2dfce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2dfce4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2dfce4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfce8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2dfce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2dfcec: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x2dfcecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfcf0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2dfcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2dfcf4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2dfcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2dfcf8: 0x2446f100  addiu       $a2, $v0, -0xF00
    ctx->pc = 0x2dfcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
    // 0x2dfcfc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x2dfcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dfd00: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x2dfd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dfd04: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2dfd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfd08: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2dfd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dfd0c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2dfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2dfd10: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2DFD10u;
    {
        const bool branch_taken_0x2dfd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD10u;
            // 0x2dfd14: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd10) {
            ctx->pc = 0x2DFD70u;
            goto label_2dfd70;
        }
    }
    ctx->pc = 0x2DFD18u;
label_2dfd18:
    // 0x2dfd18: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2dfd1c: 0xafb40018  sw          $s4, 0x18($sp)
    ctx->pc = 0x2dfd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 20));
    // 0x2dfd20: 0xafb5001c  sw          $s5, 0x1C($sp)
    ctx->pc = 0x2dfd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 21));
    // 0x2dfd24: 0xc0b7d40  jal         func_2DF500
    ctx->pc = 0x2DFD24u;
    SET_GPR_U32(ctx, 31, 0x2DFD2Cu);
    ctx->pc = 0x2DFD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD24u;
            // 0x2dfd28: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF500u;
    if (runtime->hasFunction(0x2DF500u)) {
        auto targetFn = runtime->lookupFunction(0x2DF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD2Cu; }
        if (ctx->pc != 0x2DFD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF500_0x2df500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD2Cu; }
        if (ctx->pc != 0x2DFD2Cu) { return; }
    }
    ctx->pc = 0x2DFD2Cu;
label_2dfd2c:
    // 0x2dfd2c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2dfd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2dfd30: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2dfd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2dfd34: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2dfd34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dfd38: 0x24657e58  addiu       $a1, $v1, 0x7E58
    ctx->pc = 0x2dfd38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32344));
    // 0x2dfd3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2dfd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2dfd40: 0xc0b22b6  jal         func_2C8AD8
    ctx->pc = 0x2DFD40u;
    SET_GPR_U32(ctx, 31, 0x2DFD48u);
    ctx->pc = 0x2DFD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD40u;
            // 0x2dfd44: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8AD8u;
    if (runtime->hasFunction(0x2C8AD8u)) {
        auto targetFn = runtime->lookupFunction(0x2C8AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD48u; }
        if (ctx->pc != 0x2DFD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8AD8_0x2c8ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD48u; }
        if (ctx->pc != 0x2DFD48u) { return; }
    }
    ctx->pc = 0x2DFD48u;
label_2dfd48:
    // 0x2dfd48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfd48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd4c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2dfd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd50: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DFD50u;
    {
        const bool branch_taken_0x2dfd50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD50u;
            // 0x2dfd54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd50) {
            ctx->pc = 0x2DFDB4u;
            goto label_2dfdb4;
        }
    }
    ctx->pc = 0x2DFD58u;
    // 0x2dfd58: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2dfd5c: 0xc0b55d6  jal         func_2D5758
    ctx->pc = 0x2DFD5Cu;
    SET_GPR_U32(ctx, 31, 0x2DFD64u);
    ctx->pc = 0x2DFD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD5Cu;
            // 0x2dfd60: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5758u;
    if (runtime->hasFunction(0x2D5758u)) {
        auto targetFn = runtime->lookupFunction(0x2D5758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD64u; }
        if (ctx->pc != 0x2DFD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5758_0x2d5758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD64u; }
        if (ctx->pc != 0x2DFD64u) { return; }
    }
    ctx->pc = 0x2DFD64u;
label_2dfd64:
    // 0x2dfd64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DFD64u;
    {
        const bool branch_taken_0x2dfd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD64u;
            // 0x2dfd68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd64) {
            ctx->pc = 0x2DFDB4u;
            goto label_2dfdb4;
        }
    }
    ctx->pc = 0x2DFD6Cu;
    // 0x2dfd6c: 0x0  nop
    ctx->pc = 0x2dfd6cu;
    // NOP
label_2dfd70:
    // 0x2dfd70: 0xc0b5940  jal         func_2D6500
    ctx->pc = 0x2DFD70u;
    SET_GPR_U32(ctx, 31, 0x2DFD78u);
    ctx->pc = 0x2DFD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD70u;
            // 0x2dfd74: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6500u;
    if (runtime->hasFunction(0x2D6500u)) {
        auto targetFn = runtime->lookupFunction(0x2D6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD78u; }
        if (ctx->pc != 0x2DFD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6500_0x2d6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD78u; }
        if (ctx->pc != 0x2DFD78u) { return; }
    }
    ctx->pc = 0x2DFD78u;
label_2dfd78:
    // 0x2dfd78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dfd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd80: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DFD80u;
    {
        const bool branch_taken_0x2dfd80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD80u;
            // 0x2dfd84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd80) {
            ctx->pc = 0x2DFDB4u;
            goto label_2dfdb4;
        }
    }
    ctx->pc = 0x2DFD88u;
    // 0x2dfd88: 0xc0b597c  jal         func_2D65F0
    ctx->pc = 0x2DFD88u;
    SET_GPR_U32(ctx, 31, 0x2DFD90u);
    ctx->pc = 0x2DFD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD88u;
            // 0x2dfd8c: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F0u;
    if (runtime->hasFunction(0x2D65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD90u; }
        if (ctx->pc != 0x2DFD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D65F0_0x2d65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFD90u; }
        if (ctx->pc != 0x2DFD90u) { return; }
    }
    ctx->pc = 0x2DFD90u;
label_2dfd90:
    // 0x2dfd90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfd94: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DFD94u;
    {
        const bool branch_taken_0x2dfd94 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFD94u;
            // 0x2dfd98: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfd94) {
            ctx->pc = 0x2DFDB4u;
            goto label_2dfdb4;
        }
    }
    ctx->pc = 0x2DFD9Cu;
    // 0x2dfd9c: 0xc0b226a  jal         func_2C89A8
    ctx->pc = 0x2DFD9Cu;
    SET_GPR_U32(ctx, 31, 0x2DFDA4u);
    ctx->pc = 0x2C89A8u;
    if (runtime->hasFunction(0x2C89A8u)) {
        auto targetFn = runtime->lookupFunction(0x2C89A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDA4u; }
        if (ctx->pc != 0x2DFDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C89A8_0x2c89a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDA4u; }
        if (ctx->pc != 0x2DFDA4u) { return; }
    }
    ctx->pc = 0x2DFDA4u;
label_2dfda4:
    // 0x2dfda4: 0x26c4e120  addiu       $a0, $s6, -0x1EE0
    ctx->pc = 0x2dfda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959392));
    // 0x2dfda8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dfda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfdac: 0x1200ffda  beqz        $s0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2DFDACu;
    {
        const bool branch_taken_0x2dfdac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDACu;
            // 0x2dfdb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfdac) {
            ctx->pc = 0x2DFD18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dfd18;
        }
    }
    ctx->pc = 0x2DFDB4u;
label_2dfdb4:
    // 0x2dfdb4: 0xc0b5962  jal         func_2D6588
    ctx->pc = 0x2DFDB4u;
    SET_GPR_U32(ctx, 31, 0x2DFDBCu);
    ctx->pc = 0x2DFDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDB4u;
            // 0x2dfdb8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6588u;
    if (runtime->hasFunction(0x2D6588u)) {
        auto targetFn = runtime->lookupFunction(0x2D6588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDBCu; }
        if (ctx->pc != 0x2DFDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6588_0x2d6588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFDBCu; }
        if (ctx->pc != 0x2DFDBCu) { return; }
    }
    ctx->pc = 0x2DFDBCu;
label_2dfdbc:
    // 0x2dfdbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dfdbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dfdc0:
    // 0x2dfdc0: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x2dfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2dfdc4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2dfdc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dfdc8: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2dfdcc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2dfdccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfdd0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2dfdd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dfdd4: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2dfdd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dfdd8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2dfdd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dfddc: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2dfddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dfde0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2dfde0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dfde4: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2dfde4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2dfde8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2dfde8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2dfdec: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2dfdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2dfdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFDF0u;
            // 0x2dfdf4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DFDF8u;
    ctx->pc = 0x2dfdf8u;
}
