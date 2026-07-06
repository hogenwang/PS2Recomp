#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017FED0
// Address: 0x17fed0 - 0x180070
void sub_0017FED0_0x17fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FED0_0x17fed0");
#endif

    switch (ctx->pc) {
        case 0x17ff08u: goto label_17ff08;
        case 0x17ff1cu: goto label_17ff1c;
        case 0x17ff44u: goto label_17ff44;
        case 0x17ff58u: goto label_17ff58;
        case 0x17ff60u: goto label_17ff60;
        case 0x17ff74u: goto label_17ff74;
        case 0x17ff7cu: goto label_17ff7c;
        case 0x17ff90u: goto label_17ff90;
        case 0x17ffbcu: goto label_17ffbc;
        default: break;
    }

    ctx->pc = 0x17fed0u;

    // 0x17fed0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17fed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17fed4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17fed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17fed8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17fedc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17fee0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fee4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fee8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17fee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17feec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17feecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fef0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x17fef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17fef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17fef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17fef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fefc: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x17fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x17ff00: 0xc062804  jal         func_18A010
    ctx->pc = 0x17FF00u;
    SET_GPR_U32(ctx, 31, 0x17FF08u);
    ctx->pc = 0x17FF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF00u;
            // 0x17ff04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF08u; }
        if (ctx->pc != 0x17FF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF08u; }
        if (ctx->pc != 0x17FF08u) { return; }
    }
    ctx->pc = 0x17FF08u;
label_17ff08:
    // 0x17ff08: 0x90540378  lbu         $s4, 0x378($v0)
    ctx->pc = 0x17ff08u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 888)));
    // 0x17ff0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x17ff0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff10: 0x962400ea  lhu         $a0, 0xEA($s1)
    ctx->pc = 0x17ff10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
    // 0x17ff14: 0xc063600  jal         func_18D800
    ctx->pc = 0x17FF14u;
    SET_GPR_U32(ctx, 31, 0x17FF1Cu);
    ctx->pc = 0x17FF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF14u;
            // 0x17ff18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D800u;
    if (runtime->hasFunction(0x18D800u)) {
        auto targetFn = runtime->lookupFunction(0x18D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF1Cu; }
        if (ctx->pc != 0x17FF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D800_0x18d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF1Cu; }
        if (ctx->pc != 0x17FF1Cu) { return; }
    }
    ctx->pc = 0x17FF1Cu;
label_17ff1c:
    // 0x17ff1c: 0x326400ff  andi        $a0, $s3, 0xFF
    ctx->pc = 0x17ff1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x17ff20: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x17ff24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ff28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17ff2c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x17ff2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff30: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x17ff30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17ff34: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x17ff34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17ff38: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x17ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x17ff3c: 0xc062b94  jal         func_18AE50
    ctx->pc = 0x17FF3Cu;
    SET_GPR_U32(ctx, 31, 0x17FF44u);
    ctx->pc = 0x17FF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF3Cu;
            // 0x17ff40: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE50u;
    if (runtime->hasFunction(0x18AE50u)) {
        auto targetFn = runtime->lookupFunction(0x18AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF44u; }
        if (ctx->pc != 0x17FF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE50_0x18ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF44u; }
        if (ctx->pc != 0x17FF44u) { return; }
    }
    ctx->pc = 0x17FF44u;
label_17ff44:
    // 0x17ff44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17ff48: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x17ff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x17ff4c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17ff4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17ff50: 0xc062ba8  jal         func_18AEA0
    ctx->pc = 0x17FF50u;
    SET_GPR_U32(ctx, 31, 0x17FF58u);
    ctx->pc = 0x17FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF50u;
            // 0x17ff54: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA0u;
    if (runtime->hasFunction(0x18AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF58u; }
        if (ctx->pc != 0x17FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEA0_0x18aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF58u; }
        if (ctx->pc != 0x17FF58u) { return; }
    }
    ctx->pc = 0x17FF58u;
label_17ff58:
    // 0x17ff58: 0xc062b78  jal         func_18ADE0
    ctx->pc = 0x17FF58u;
    SET_GPR_U32(ctx, 31, 0x17FF60u);
    ctx->pc = 0x17FF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF58u;
            // 0x17ff5c: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ADE0u;
    if (runtime->hasFunction(0x18ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF60u; }
        if (ctx->pc != 0x17FF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018ADE0_0x18ade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF60u; }
        if (ctx->pc != 0x17FF60u) { return; }
    }
    ctx->pc = 0x17FF60u;
label_17ff60:
    // 0x17ff60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17ff60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17ff64: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x17ff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x17ff68: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x17ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x17ff6c: 0xc062b84  jal         func_18AE10
    ctx->pc = 0x17FF6Cu;
    SET_GPR_U32(ctx, 31, 0x17FF74u);
    ctx->pc = 0x17FF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF6Cu;
            // 0x17ff70: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE10u;
    if (runtime->hasFunction(0x18AE10u)) {
        auto targetFn = runtime->lookupFunction(0x18AE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF74u; }
        if (ctx->pc != 0x17FF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE10_0x18ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF74u; }
        if (ctx->pc != 0x17FF74u) { return; }
    }
    ctx->pc = 0x17FF74u;
label_17ff74:
    // 0x17ff74: 0xc062b94  jal         func_18AE50
    ctx->pc = 0x17FF74u;
    SET_GPR_U32(ctx, 31, 0x17FF7Cu);
    ctx->pc = 0x17FF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF74u;
            // 0x17ff78: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AE50u;
    if (runtime->hasFunction(0x18AE50u)) {
        auto targetFn = runtime->lookupFunction(0x18AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF7Cu; }
        if (ctx->pc != 0x17FF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AE50_0x18ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF7Cu; }
        if (ctx->pc != 0x17FF7Cu) { return; }
    }
    ctx->pc = 0x17FF7Cu;
label_17ff7c:
    // 0x17ff7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17ff7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17ff80: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x17ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x17ff84: 0x3042ffe7  andi        $v0, $v0, 0xFFE7
    ctx->pc = 0x17ff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65511);
    // 0x17ff88: 0xc062ba8  jal         func_18AEA0
    ctx->pc = 0x17FF88u;
    SET_GPR_U32(ctx, 31, 0x17FF90u);
    ctx->pc = 0x17FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF88u;
            // 0x17ff8c: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEA0u;
    if (runtime->hasFunction(0x18AEA0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF90u; }
        if (ctx->pc != 0x17FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018AEA0_0x18aea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FF90u; }
        if (ctx->pc != 0x17FF90u) { return; }
    }
    ctx->pc = 0x17FF90u;
label_17ff90:
    // 0x17ff90: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x17ff90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x17ff94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x17ff94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x17ff98: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FF98u;
    {
        const bool branch_taken_0x17ff98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff98) {
            ctx->pc = 0x17FF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FF98u;
            // 0x17ff9c: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FFA8u;
            goto label_17ffa8;
        }
    }
    ctx->pc = 0x17FFA0u;
    // 0x17ffa0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17FFA0u;
    {
        const bool branch_taken_0x17ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFA0u;
            // 0x17ffa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffa0) {
            ctx->pc = 0x180040u;
            goto label_180040;
        }
    }
    ctx->pc = 0x17FFA8u;
label_17ffa8:
    // 0x17ffa8: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x17FFA8u;
    {
        const bool branch_taken_0x17ffa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ffa8) {
            ctx->pc = 0x17FFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFA8u;
            // 0x17ffac: 0x86620004  lh          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180040u;
            goto label_180040;
        }
    }
    ctx->pc = 0x17FFB0u;
    // 0x17ffb0: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x17ffb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x17ffb4: 0xc0ceaa8  jal         func_33AAA0
    ctx->pc = 0x17FFB4u;
    SET_GPR_U32(ctx, 31, 0x17FFBCu);
    ctx->pc = 0x17FFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFB4u;
            // 0x17ffb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33AAA0u;
    if (runtime->hasFunction(0x33AAA0u)) {
        auto targetFn = runtime->lookupFunction(0x33AAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFBCu; }
        if (ctx->pc != 0x17FFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033AAA0_0x33aaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FFBCu; }
        if (ctx->pc != 0x17FFBCu) { return; }
    }
    ctx->pc = 0x17FFBCu;
label_17ffbc:
    // 0x17ffbc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ffc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ffc4: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17FFC4u;
    {
        const bool branch_taken_0x17ffc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ffc4) {
            ctx->pc = 0x17FFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17FFC4u;
            // 0x17ffc8: 0x8ea50530  lw          $a1, 0x530($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FFE8u;
            goto label_17ffe8;
        }
    }
    ctx->pc = 0x17FFCCu;
    // 0x17ffcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17ffd0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17FFD0u;
    {
        const bool branch_taken_0x17ffd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17ffd0) {
            ctx->pc = 0x17FFE4u;
            goto label_17ffe4;
        }
    }
    ctx->pc = 0x17FFD8u;
    // 0x17ffd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17ffdc: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17FFDCu;
    {
        const bool branch_taken_0x17ffdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17ffdc) {
            ctx->pc = 0x18003Cu;
            goto label_18003c;
        }
    }
    ctx->pc = 0x17FFE4u;
label_17ffe4:
    // 0x17ffe4: 0x8ea50530  lw          $a1, 0x530($s5)
    ctx->pc = 0x17ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
label_17ffe8:
    // 0x17ffe8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x17ffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x17ffec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17fff0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17fff4: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x17fff8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x17fff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x17fffc: 0xaea40530  sw          $a0, 0x530($s5)
    ctx->pc = 0x17fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1328), GPR_U32(ctx, 4));
    // 0x180000: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x180000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x180004: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x180004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x180008: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x180008u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x18000c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18000cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x180010: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x180014: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x180014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180018: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x180018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18001c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18001cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x180020: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x180020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x180024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x180024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180028: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x180028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x18002c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18002cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x180030: 0x8e230494  lw          $v1, 0x494($s1)
    ctx->pc = 0x180030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1172)));
    // 0x180034: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x180034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x180038: 0xae220494  sw          $v0, 0x494($s1)
    ctx->pc = 0x180038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1172), GPR_U32(ctx, 2));
label_18003c:
    // 0x18003c: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x18003cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_180040:
    // 0x180040: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x180040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180044: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x180044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180048: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x180048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18004c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18004cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x180050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18005c: 0x3e00008  jr          $ra
    ctx->pc = 0x18005Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18005Cu;
            // 0x180060: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180064u;
    // 0x180064: 0x0  nop
    ctx->pc = 0x180064u;
    // NOP
    // 0x180068: 0x0  nop
    ctx->pc = 0x180068u;
    // NOP
    // 0x18006c: 0x0  nop
    ctx->pc = 0x18006cu;
    // NOP
    ctx->pc = 0x180070u;
}
