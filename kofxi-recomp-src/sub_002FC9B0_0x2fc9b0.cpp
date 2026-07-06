#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC9B0
// Address: 0x2fc9b0 - 0x2fcaf0
void sub_002FC9B0_0x2fc9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC9B0_0x2fc9b0");
#endif

    switch (ctx->pc) {
        case 0x2fc9d4u: goto label_2fc9d4;
        case 0x2fc9f0u: goto label_2fc9f0;
        case 0x2fca00u: goto label_2fca00;
        case 0x2fca08u: goto label_2fca08;
        case 0x2fca20u: goto label_2fca20;
        case 0x2fca50u: goto label_2fca50;
        case 0x2fca70u: goto label_2fca70;
        case 0x2fca80u: goto label_2fca80;
        case 0x2fca98u: goto label_2fca98;
        case 0x2fcab0u: goto label_2fcab0;
        case 0x2fcac0u: goto label_2fcac0;
        case 0x2fcad8u: goto label_2fcad8;
        default: break;
    }

    ctx->pc = 0x2fc9b0u;

label_2fc9b0:
    // 0x2fc9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc9b4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fc9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2fc9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc9bc: 0x806206b0  lb          $v0, 0x6B0($v1)
    ctx->pc = 0x2fc9bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1712)));
    // 0x2fc9c0: 0x247006b0  addiu       $s0, $v1, 0x6B0
    ctx->pc = 0x2fc9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
    // 0x2fc9c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC9C4u;
    {
        const bool branch_taken_0x2fc9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9C4u;
            // 0x2fc9c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc9c4) {
            ctx->pc = 0x2FC9D4u;
            goto label_2fc9d4;
        }
    }
    ctx->pc = 0x2FC9CCu;
    // 0x2fc9cc: 0xc0bf250  jal         func_2FC940
    ctx->pc = 0x2FC9CCu;
    SET_GPR_U32(ctx, 31, 0x2FC9D4u);
    ctx->pc = 0x2FC940u;
    if (runtime->hasFunction(0x2FC940u)) {
        auto targetFn = runtime->lookupFunction(0x2FC940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC9D4u; }
        if (ctx->pc != 0x2FC9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC940_0x2fc940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC9D4u; }
        if (ctx->pc != 0x2FC9D4u) { return; }
    }
    ctx->pc = 0x2FC9D4u;
label_2fc9d4:
    // 0x2fc9d4: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x2fc9d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fc9d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc9dc: 0x38420054  xori        $v0, $v0, 0x54
    ctx->pc = 0x2fc9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)84);
    // 0x2fc9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc9e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2fc9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fc9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9E8u;
            // 0x2fc9ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC9F0u;
label_2fc9f0:
    // 0x2fc9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc9f8: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FC9F8u;
    SET_GPR_U32(ctx, 31, 0x2FCA00u);
    ctx->pc = 0x2FC9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC9F8u;
            // 0x2fc9fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (runtime->hasFunction(0x10CD10u)) {
        auto targetFn = runtime->lookupFunction(0x10CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA00u; }
        if (ctx->pc != 0x2FCA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD10_0x10cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA00u; }
        if (ctx->pc != 0x2FCA00u) { return; }
    }
    ctx->pc = 0x2FCA00u;
label_2fca00:
    // 0x2fca00: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCA00u;
    SET_GPR_U32(ctx, 31, 0x2FCA08u);
    ctx->pc = 0x2FC9B0u;
    goto label_2fc9b0;
    ctx->pc = 0x2FCA08u;
label_2fca08:
    // 0x2fca08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA08u;
    {
        const bool branch_taken_0x2fca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA08u;
            // 0x2fca0c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca08) {
            ctx->pc = 0x2FCA18u;
            goto label_2fca18;
        }
    }
    ctx->pc = 0x2FCA10u;
    // 0x2fca10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2FCA10u;
    {
        const bool branch_taken_0x2fca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA10u;
            // 0x2fca14: 0x904206ac  lbu         $v0, 0x6AC($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca10) {
            ctx->pc = 0x2FCA44u;
            goto label_2fca44;
        }
    }
    ctx->pc = 0x2FCA18u;
label_2fca18:
    // 0x2fca18: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCA18u;
    SET_GPR_U32(ctx, 31, 0x2FCA20u);
    ctx->pc = 0x2FCA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA18u;
            // 0x2fca1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (runtime->hasFunction(0x10CD10u)) {
        auto targetFn = runtime->lookupFunction(0x10CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA20u; }
        if (ctx->pc != 0x2FCA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD10_0x10cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA20u; }
        if (ctx->pc != 0x2FCA20u) { return; }
    }
    ctx->pc = 0x2FCA20u;
label_2fca20:
    // 0x2fca20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2fca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fca24: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x2fca24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x2fca28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2fca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2fca2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCA2Cu;
    {
        const bool branch_taken_0x2fca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fca2c) {
            ctx->pc = 0x2FCA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA2Cu;
            // 0x2fca30: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCA40u;
            goto label_2fca40;
        }
    }
    ctx->pc = 0x2FCA34u;
    // 0x2fca34: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2fca34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2fca38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FCA38u;
    {
        const bool branch_taken_0x2fca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA38u;
            // 0x2fca3c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca38) {
            ctx->pc = 0x2FCA44u;
            goto label_2fca44;
        }
    }
    ctx->pc = 0x2FCA40u;
label_2fca40:
    // 0x2fca40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2fca40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_2fca44:
    // 0x2fca44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fca44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fca48: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCA48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA48u;
            // 0x2fca4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCA50u;
label_2fca50:
    // 0x2fca50: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fca50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2fca54: 0x244706a8  addiu       $a3, $v0, 0x6A8
    ctx->pc = 0x2fca54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1704));
    // 0x2fca58: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x2fca58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2fca5c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x2fca5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2fca60: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x2fca60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2fca64: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA64u;
            // 0x2fca68: 0xb4e30000  sdr         $v1, 0x0($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCA6Cu;
    // 0x2fca6c: 0x0  nop
    ctx->pc = 0x2fca6cu;
    // NOP
label_2fca70:
    // 0x2fca70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fca70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fca74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fca78: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCA78u;
    SET_GPR_U32(ctx, 31, 0x2FCA80u);
    ctx->pc = 0x2FC9B0u;
    goto label_2fc9b0;
    ctx->pc = 0x2FCA80u;
label_2fca80:
    // 0x2fca80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCA80u;
    {
        const bool branch_taken_0x2fca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA80u;
            // 0x2fca84: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca80) {
            ctx->pc = 0x2FCA90u;
            goto label_2fca90;
        }
    }
    ctx->pc = 0x2FCA88u;
    // 0x2fca88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCA88u;
    {
        const bool branch_taken_0x2fca88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA88u;
            // 0x2fca8c: 0x906206aa  lbu         $v0, 0x6AA($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1706)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fca88) {
            ctx->pc = 0x2FCAA4u;
            goto label_2fcaa4;
        }
    }
    ctx->pc = 0x2FCA90u;
label_2fca90:
    // 0x2fca90: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCA90u;
    SET_GPR_U32(ctx, 31, 0x2FCA98u);
    ctx->pc = 0x2FCA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCA90u;
            // 0x2fca94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (runtime->hasFunction(0x10CD10u)) {
        auto targetFn = runtime->lookupFunction(0x10CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA98u; }
        if (ctx->pc != 0x2FCA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD10_0x10cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCA98u; }
        if (ctx->pc != 0x2FCA98u) { return; }
    }
    ctx->pc = 0x2FCA98u;
label_2fca98:
    // 0x2fca98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fca9c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2fca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2fcaa0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2fcaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2fcaa4:
    // 0x2fcaa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAA8u;
            // 0x2fcaac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCAB0u;
label_2fcab0:
    // 0x2fcab0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcab8: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCAB8u;
    SET_GPR_U32(ctx, 31, 0x2FCAC0u);
    ctx->pc = 0x2FC9B0u;
    goto label_2fc9b0;
    ctx->pc = 0x2FCAC0u;
label_2fcac0:
    // 0x2fcac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCAC0u;
    {
        const bool branch_taken_0x2fcac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAC0u;
            // 0x2fcac4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcac0) {
            ctx->pc = 0x2FCAD0u;
            goto label_2fcad0;
        }
    }
    ctx->pc = 0x2FCAC8u;
    // 0x2fcac8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FCAC8u;
    {
        const bool branch_taken_0x2fcac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAC8u;
            // 0x2fcacc: 0x906206ad  lbu         $v0, 0x6AD($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1709)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcac8) {
            ctx->pc = 0x2FCAE0u;
            goto label_2fcae0;
        }
    }
    ctx->pc = 0x2FCAD0u;
label_2fcad0:
    // 0x2fcad0: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCAD0u;
    SET_GPR_U32(ctx, 31, 0x2FCAD8u);
    ctx->pc = 0x2FCAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAD0u;
            // 0x2fcad4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (runtime->hasFunction(0x10CD10u)) {
        auto targetFn = runtime->lookupFunction(0x10CD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCAD8u; }
        if (ctx->pc != 0x2FCAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CD10_0x10cd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCAD8u; }
        if (ctx->pc != 0x2FCAD8u) { return; }
    }
    ctx->pc = 0x2FCAD8u;
label_2fcad8:
    // 0x2fcad8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcadc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fcadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2fcae0:
    // 0x2fcae0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCAE4u;
            // 0x2fcae8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCAECu;
    // 0x2fcaec: 0x0  nop
    ctx->pc = 0x2fcaecu;
    // NOP
    ctx->pc = 0x2fcaf0u;
}
