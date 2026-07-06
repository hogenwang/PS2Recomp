#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D9E8
// Address: 0x26d9e8 - 0x26dfb8
void sub_0026D9E8_0x26d9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D9E8_0x26d9e8");
#endif

    switch (ctx->pc) {
        case 0x26da48u: goto label_26da48;
        case 0x26da70u: goto label_26da70;
        case 0x26da8cu: goto label_26da8c;
        case 0x26daa4u: goto label_26daa4;
        case 0x26daf4u: goto label_26daf4;
        case 0x26db10u: goto label_26db10;
        case 0x26db34u: goto label_26db34;
        case 0x26db54u: goto label_26db54;
        case 0x26dbd8u: goto label_26dbd8;
        case 0x26dc4cu: goto label_26dc4c;
        case 0x26dc94u: goto label_26dc94;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dcc8u: goto label_26dcc8;
        case 0x26dd24u: goto label_26dd24;
        case 0x26dd7cu: goto label_26dd7c;
        case 0x26dda4u: goto label_26dda4;
        case 0x26ddbcu: goto label_26ddbc;
        case 0x26ddd4u: goto label_26ddd4;
        case 0x26de20u: goto label_26de20;
        case 0x26de28u: goto label_26de28;
        case 0x26de38u: goto label_26de38;
        case 0x26de80u: goto label_26de80;
        case 0x26de98u: goto label_26de98;
        case 0x26deb8u: goto label_26deb8;
        case 0x26dec4u: goto label_26dec4;
        case 0x26df28u: goto label_26df28;
        case 0x26df48u: goto label_26df48;
        case 0x26df7cu: goto label_26df7c;
        default: break;
    }

    ctx->pc = 0x26d9e8u;

    // 0x26d9e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26d9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26d9ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26d9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d9f0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x26d9f4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26d9f8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x26d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26d9fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26d9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da00: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26da04: 0x26b7006a  addiu       $s7, $s5, 0x6A
    ctx->pc = 0x26da04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 106));
    // 0x26da08: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26da08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26da0c: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x26da0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26da10: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26da10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26da14: 0x26b2004c  addiu       $s2, $s5, 0x4C
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
    // 0x26da18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26da18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26da1c: 0x26b10070  addiu       $s1, $s5, 0x70
    ctx->pc = 0x26da1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x26da20: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26da24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26da28: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x26da28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26da2c: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x26da2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26da30: 0x8ea201b8  lw          $v0, 0x1B8($s5)
    ctx->pc = 0x26da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 440)));
    // 0x26da34: 0x8ea6002c  lw          $a2, 0x2C($s5)
    ctx->pc = 0x26da34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x26da38: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x26da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x26da3c: 0x8c560014  lw          $s6, 0x14($v0)
    ctx->pc = 0x26da3cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26da40: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26DA40u;
    SET_GPR_U32(ctx, 31, 0x26DA48u);
    ctx->pc = 0x26DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA40u;
            // 0x26da44: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA48u; }
        if (ctx->pc != 0x26DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA48u; }
        if (ctx->pc != 0x26DA48u) { return; }
    }
    ctx->pc = 0x26DA48u;
label_26da48:
    // 0x26da48: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26da4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26da4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da50: 0xa0700000  sb          $s0, 0x0($v1)
    ctx->pc = 0x26da50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x26da54: 0x92a20068  lbu         $v0, 0x68($s5)
    ctx->pc = 0x26da54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x26da58: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x26da58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26da5c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x26da5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x26da60: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26da64: 0x92a20069  lbu         $v0, 0x69($s5)
    ctx->pc = 0x26da64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 105)));
    // 0x26da68: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26DA68u;
    SET_GPR_U32(ctx, 31, 0x26DA70u);
    ctx->pc = 0x26DA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA68u;
            // 0x26da6c: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (runtime->hasFunction(0x26D980u)) {
        auto targetFn = runtime->lookupFunction(0x26D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA70u; }
        if (ctx->pc != 0x26DA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D980_0x26d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA70u; }
        if (ctx->pc != 0x26DA70u) { return; }
    }
    ctx->pc = 0x26DA70u;
label_26da70:
    // 0x26da70: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26da74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26da74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26da78: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x26da78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x26da7c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26da80: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x26da80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26da84: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DA84u;
    SET_GPR_U32(ctx, 31, 0x26DA8Cu);
    ctx->pc = 0x26DA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA84u;
            // 0x26da88: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA8Cu; }
        if (ctx->pc != 0x26DA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DA8Cu; }
        if (ctx->pc != 0x26DA8Cu) { return; }
    }
    ctx->pc = 0x26DA8Cu;
label_26da8c:
    // 0x26da8c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26da90: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x26da90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26da94: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x26da94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x26da98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26da98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26da9c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DA9Cu;
    SET_GPR_U32(ctx, 31, 0x26DAA4u);
    ctx->pc = 0x26DAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA9Cu;
            // 0x26daa0: 0x248400ec  addiu       $a0, $a0, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAA4u; }
        if (ctx->pc != 0x26DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAA4u; }
        if (ctx->pc != 0x26DAA4u) { return; }
    }
    ctx->pc = 0x26DAA4u;
label_26daa4:
    // 0x26daa4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26daa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26daa8: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x26daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x26daac: 0xa08200f0  sb          $v0, 0xF0($a0)
    ctx->pc = 0x26daacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x26dab0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dab4: 0xa07000f1  sb          $s0, 0xF1($v1)
    ctx->pc = 0x26dab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 241), (uint8_t)GPR_U32(ctx, 16));
    // 0x26dab8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dabc: 0xa05000f2  sb          $s0, 0xF2($v0)
    ctx->pc = 0x26dabcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 242), (uint8_t)GPR_U32(ctx, 16));
    // 0x26dac0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x26dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26dac4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26DAC4u;
    {
        const bool branch_taken_0x26dac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAC4u;
            // 0x26dac8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dac4) {
            ctx->pc = 0x26DAF4u;
            goto label_26daf4;
        }
    }
    ctx->pc = 0x26DACCu;
    // 0x26dacc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26daccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dad0: 0x26a50074  addiu       $a1, $s5, 0x74
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
    // 0x26dad4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26dad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26dad8: 0xa06200f3  sb          $v0, 0xF3($v1)
    ctx->pc = 0x26dad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 243), (uint8_t)GPR_U32(ctx, 2));
    // 0x26dadc: 0x2413000d  addiu       $s3, $zero, 0xD
    ctx->pc = 0x26dadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26dae0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dae4: 0xa05400f4  sb          $s4, 0xF4($v0)
    ctx->pc = 0x26dae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 244), (uint8_t)GPR_U32(ctx, 20));
    // 0x26dae8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26daec: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DAECu;
    SET_GPR_U32(ctx, 31, 0x26DAF4u);
    ctx->pc = 0x26DAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAECu;
            // 0x26daf0: 0x248400f5  addiu       $a0, $a0, 0xF5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 245));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAF4u; }
        if (ctx->pc != 0x26DAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DAF4u; }
        if (ctx->pc != 0x26DAF4u) { return; }
    }
    ctx->pc = 0x26DAF4u;
label_26daf4:
    // 0x26daf4: 0x8ea20070  lw          $v0, 0x70($s5)
    ctx->pc = 0x26daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x26daf8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26DAF8u;
    {
        const bool branch_taken_0x26daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAF8u;
            // 0x26dafc: 0x26620006  addiu       $v0, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daf8) {
            ctx->pc = 0x26DB54u;
            goto label_26db54;
        }
    }
    ctx->pc = 0x26DB00u;
    // 0x26db00: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26db00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26db04: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26DB04u;
    {
        const bool branch_taken_0x26db04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB04u;
            // 0x26db08: 0x24030033  addiu       $v1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db04) {
            ctx->pc = 0x26DB54u;
            goto label_26db54;
        }
    }
    ctx->pc = 0x26DB0Cu;
    // 0x26db0c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_26db10:
    // 0x26db10: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26db14: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26db14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26db18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26db18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26db1c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26db20: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26db24: 0xa05400ec  sb          $s4, 0xEC($v0)
    ctx->pc = 0x26db24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 20));
    // 0x26db28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26db28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26db2c: 0xc08a254  jal         func_228950
    ctx->pc = 0x26DB2Cu;
    SET_GPR_U32(ctx, 31, 0x26DB34u);
    ctx->pc = 0x26DB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB2Cu;
            // 0x26db30: 0x8ea40070  lw          $a0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB34u; }
        if (ctx->pc != 0x26DB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB34u; }
        if (ctx->pc != 0x26DB34u) { return; }
    }
    ctx->pc = 0x26DB34u;
label_26db34:
    // 0x26db34: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26db34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26db38: 0x266400ec  addiu       $a0, $s3, 0xEC
    ctx->pc = 0x26db38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x26db3c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26db40: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x26db40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x26db44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x26db44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26db48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26db48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26db4c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DB4Cu;
    SET_GPR_U32(ctx, 31, 0x26DB54u);
    ctx->pc = 0x26DB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB4Cu;
            // 0x26db50: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB54u; }
        if (ctx->pc != 0x26DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB54u; }
        if (ctx->pc != 0x26DB54u) { return; }
    }
    ctx->pc = 0x26DB54u;
label_26db54:
    // 0x26db54: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x26db54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x26db58: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x26DB58u;
    {
        const bool branch_taken_0x26db58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26db58) {
            ctx->pc = 0x26DB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB58u;
            // 0x26db5c: 0x8e220110  lw          $v0, 0x110($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26DBE8u;
            goto label_26dbe8;
        }
    }
    ctx->pc = 0x26DB60u;
    // 0x26db60: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26db60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26db64: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26db64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x26db68: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x26db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x26db6c: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26db6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26db70: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26DB70u;
    {
        const bool branch_taken_0x26db70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB70u;
            // 0x26db74: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db70) {
            ctx->pc = 0x26DBE4u;
            goto label_26dbe4;
        }
    }
    ctx->pc = 0x26DB78u;
    // 0x26db78: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26db7c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26db80: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26db80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26db84: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26db84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26db88: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x26db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x26db8c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26db90: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x26db90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x26db94: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x26db98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26db98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26db9c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26db9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dba0: 0xa06200ec  sb          $v0, 0xEC($v1)
    ctx->pc = 0x26dba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 2));
    // 0x26dba4: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x26dba8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dbac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x26dbacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26dbb0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dbb4: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26dbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dbb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dbb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dbbc: 0x266300ec  addiu       $v1, $s3, 0xEC
    ctx->pc = 0x26dbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x26dbc0: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x26dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x26dbc4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dbc8: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x26dbc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26dbcc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dbd0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DBD0u;
    SET_GPR_U32(ctx, 31, 0x26DBD8u);
    ctx->pc = 0x26DBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBD0u;
            // 0x26dbd4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DBD8u; }
        if (ctx->pc != 0x26DBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DBD8u; }
        if (ctx->pc != 0x26DBD8u) { return; }
    }
    ctx->pc = 0x26DBD8u;
label_26dbd8:
    // 0x26dbd8: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x26dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x26dbdc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26dbdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26dbe0: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_26dbe4:
    // 0x26dbe4: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x26dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_26dbe8:
    // 0x26dbe8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26DBE8u;
    {
        const bool branch_taken_0x26dbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dbe8) {
            ctx->pc = 0x26DBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBE8u;
            // 0x26dbec: 0x26620004  addiu       $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26DC5Cu;
            goto label_26dc5c;
        }
    }
    ctx->pc = 0x26DBF0u;
    // 0x26dbf0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x26dbf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dbf4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26dbf8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x26dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x26dbfc: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26dbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26dc00: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26DC00u;
    {
        const bool branch_taken_0x26dc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC00u;
            // 0x26dc04: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc00) {
            ctx->pc = 0x26DC58u;
            goto label_26dc58;
        }
    }
    ctx->pc = 0x26DC08u;
    // 0x26dc08: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dc0c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dc10: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26dc10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dc14: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dc14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dc18: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x26dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x26dc1c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dc20: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x26dc20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dc24: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dc28: 0xa04400ec  sb          $a0, 0xEC($v0)
    ctx->pc = 0x26dc28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x26dc2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dc30: 0x266300ec  addiu       $v1, $s3, 0xEC
    ctx->pc = 0x26dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x26dc34: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x26dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x26dc38: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dc3c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x26dc3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26dc40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26dc44: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DC44u;
    SET_GPR_U32(ctx, 31, 0x26DC4Cu);
    ctx->pc = 0x26DC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC44u;
            // 0x26dc48: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC4Cu; }
        if (ctx->pc != 0x26DC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC4Cu; }
        if (ctx->pc != 0x26DC4Cu) { return; }
    }
    ctx->pc = 0x26DC4Cu;
label_26dc4c:
    // 0x26dc4c: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x26dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x26dc50: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26dc50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26dc54: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x26dc54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_26dc58:
    // 0x26dc58: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x26dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_26dc5c:
    // 0x26dc5c: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26dc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26dc60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DC60u;
    {
        const bool branch_taken_0x26dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC60u;
            // 0x26dc64: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc60) {
            ctx->pc = 0x26DCB4u;
            goto label_26dcb4;
        }
    }
    ctx->pc = 0x26DC68u;
    // 0x26dc68: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dc6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26dc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26dc70: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x26dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x26dc74: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dc78: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26dc78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dc7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dc7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dc80: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dc84: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dc88: 0xa04500ec  sb          $a1, 0xEC($v0)
    ctx->pc = 0x26dc88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 5));
    // 0x26dc8c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DC8Cu;
    SET_GPR_U32(ctx, 31, 0x26DC94u);
    ctx->pc = 0x26DC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DC8Cu;
            // 0x26dc90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC94u; }
        if (ctx->pc != 0x26DC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DC94u; }
        if (ctx->pc != 0x26DC94u) { return; }
    }
    ctx->pc = 0x26DC94u;
label_26dc94:
    // 0x26dc94: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x26dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dc98: 0x266400ec  addiu       $a0, $s3, 0xEC
    ctx->pc = 0x26dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x26dc9c: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x26dc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26dca0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26dca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dca4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x26dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26dca8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DCA8u;
    SET_GPR_U32(ctx, 31, 0x26DCB0u);
    ctx->pc = 0x26DCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCA8u;
            // 0x26dcac: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCB0u; }
        if (ctx->pc != 0x26DCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCB0u; }
        if (ctx->pc != 0x26DCB0u) { return; }
    }
    ctx->pc = 0x26DCB0u;
label_26dcb0:
    // 0x26dcb0: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x26dcb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_26dcb4:
    // 0x26dcb4: 0x92c26709  lbu         $v0, 0x6709($s6)
    ctx->pc = 0x26dcb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 26377)));
    // 0x26dcb8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26DCB8u;
    {
        const bool branch_taken_0x26dcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCB8u;
            // 0x26dcbc: 0x26d46709  addiu       $s4, $s6, 0x6709 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 26377));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcb8) {
            ctx->pc = 0x26DD24u;
            goto label_26dd24;
        }
    }
    ctx->pc = 0x26DCC0u;
    // 0x26dcc0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26DCC0u;
    SET_GPR_U32(ctx, 31, 0x26DCC8u);
    ctx->pc = 0x26DCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCC0u;
            // 0x26dcc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCC8u; }
        if (ctx->pc != 0x26DCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DCC8u; }
        if (ctx->pc != 0x26DCC8u) { return; }
    }
    ctx->pc = 0x26DCC8u;
label_26dcc8:
    // 0x26dcc8: 0x92c36809  lbu         $v1, 0x6809($s6)
    ctx->pc = 0x26dcc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 26633)));
    // 0x26dccc: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x26dcccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26dcd0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x26dcd0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x26dcd4: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x26dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x26dcd8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x26dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x26dcdc: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26dcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26dce0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26DCE0u;
    {
        const bool branch_taken_0x26dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DCE0u;
            // 0x26dce4: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dce0) {
            ctx->pc = 0x26DD24u;
            goto label_26dd24;
        }
    }
    ctx->pc = 0x26DCE8u;
    // 0x26dce8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dcec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26dcf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcf4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dcf8: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26dcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dcfc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dd00: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dd04: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dd08: 0xa05000ec  sb          $s0, 0xEC($v0)
    ctx->pc = 0x26dd08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 16));
    // 0x26dd0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dd0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dd10: 0x266200ec  addiu       $v0, $s3, 0xEC
    ctx->pc = 0x26dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x26dd14: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dd18: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x26dd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x26dd1c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DD1Cu;
    SET_GPR_U32(ctx, 31, 0x26DD24u);
    ctx->pc = 0x26DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD1Cu;
            // 0x26dd20: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD24u; }
        if (ctx->pc != 0x26DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD24u; }
        if (ctx->pc != 0x26DD24u) { return; }
    }
    ctx->pc = 0x26DD24u;
label_26dd24:
    // 0x26dd24: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x26dd24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26dd28: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26DD28u;
    {
        const bool branch_taken_0x26dd28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD28u;
            // 0x26dd2c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd28) {
            ctx->pc = 0x26DD84u;
            goto label_26dd84;
        }
    }
    ctx->pc = 0x26DD30u;
    // 0x26dd30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x26dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x26dd34: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26dd34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26dd38: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26DD38u;
    {
        const bool branch_taken_0x26dd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD38u;
            // 0x26dd3c: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd38) {
            ctx->pc = 0x26DD84u;
            goto label_26dd84;
        }
    }
    ctx->pc = 0x26DD40u;
    // 0x26dd40: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dd44: 0x2625000d  addiu       $a1, $s1, 0xD
    ctx->pc = 0x26dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
    // 0x26dd48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dd4c: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26dd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dd50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dd50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dd54: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dd58: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x26dd58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26dd5c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dd60: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26dd60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dd64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x26dd64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x26dd68: 0x266200ec  addiu       $v0, $s3, 0xEC
    ctx->pc = 0x26dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 236));
    // 0x26dd6c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x26dd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dd70: 0x9226000c  lbu         $a2, 0xC($s1)
    ctx->pc = 0x26dd70u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26dd74: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26DD74u;
    SET_GPR_U32(ctx, 31, 0x26DD7Cu);
    ctx->pc = 0x26DD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD74u;
            // 0x26dd78: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD7Cu; }
        if (ctx->pc != 0x26DD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DD7Cu; }
        if (ctx->pc != 0x26DD7Cu) { return; }
    }
    ctx->pc = 0x26DD7Cu;
label_26dd7c:
    // 0x26dd7c: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x26dd7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26dd80: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x26dd80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_26dd84:
    // 0x26dd84: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x26dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x26dd88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26dd8c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x26dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x26dd90: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x26dd90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26dd94: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dd98: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x26dd98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x26dd9c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DD9Cu;
    SET_GPR_U32(ctx, 31, 0x26DDA4u);
    ctx->pc = 0x26DDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD9Cu;
            // 0x26dda0: 0xa04300ec  sb          $v1, 0xEC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDA4u; }
        if (ctx->pc != 0x26DDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDA4u; }
        if (ctx->pc != 0x26DDA4u) { return; }
    }
    ctx->pc = 0x26DDA4u;
label_26dda4:
    // 0x26dda4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26dda4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26dda8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26ddac: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x26ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x26ddb0: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x26ddb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ddb4: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DDB4u;
    SET_GPR_U32(ctx, 31, 0x26DDBCu);
    ctx->pc = 0x26DDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDB4u;
            // 0x26ddb8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDBCu; }
        if (ctx->pc != 0x26DDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDBCu; }
        if (ctx->pc != 0x26DDBCu) { return; }
    }
    ctx->pc = 0x26DDBCu;
label_26ddbc:
    // 0x26ddbc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ddc0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26ddc4: 0x2404022c  addiu       $a0, $zero, 0x22C
    ctx->pc = 0x26ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x26ddc8: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26ddc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26ddcc: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DDCCu;
    SET_GPR_U32(ctx, 31, 0x26DDD4u);
    ctx->pc = 0x26DDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDCCu;
            // 0x26ddd0: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDD4u; }
        if (ctx->pc != 0x26DDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DDD4u; }
        if (ctx->pc != 0x26DDD4u) { return; }
    }
    ctx->pc = 0x26DDD4u;
label_26ddd4:
    // 0x26ddd4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26ddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ddd8: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x26ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26dddc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26dde0: 0xa0a40005  sb          $a0, 0x5($a1)
    ctx->pc = 0x26dde0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 4));
    // 0x26dde4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26dde8: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x26dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ddec: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x26ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x26ddf0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x26ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26ddf4: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x26ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x26ddf8: 0xa2400018  sb          $zero, 0x18($s2)
    ctx->pc = 0x26ddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ddfc: 0xa2510019  sb          $s1, 0x19($s2)
    ctx->pc = 0x26ddfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 25), (uint8_t)GPR_U32(ctx, 17));
    // 0x26de00: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x26de00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x26de04: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x26de04u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26de08: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x26de08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x26de0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26de10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26de10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26de14: 0xa642001a  sh          $v0, 0x1A($s2)
    ctx->pc = 0x26de14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x26de18: 0xa0600007  sb          $zero, 0x7($v1)
    ctx->pc = 0x26de18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x26de1c: 0xa0600006  sb          $zero, 0x6($v1)
    ctx->pc = 0x26de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
label_26de20:
    // 0x26de20: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26DE20u;
    SET_GPR_U32(ctx, 31, 0x26DE28u);
    ctx->pc = 0x26DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE20u;
            // 0x26de24: 0x9644001a  lhu         $a0, 0x1A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE28u; }
        if (ctx->pc != 0x26DE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE28u; }
        if (ctx->pc != 0x26DE28u) { return; }
    }
    ctx->pc = 0x26DE28u;
label_26de28:
    // 0x26de28: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26de28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26de2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de30: 0xc09adee  jal         func_26B7B8
    ctx->pc = 0x26DE30u;
    SET_GPR_U32(ctx, 31, 0x26DE38u);
    ctx->pc = 0x26DE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE30u;
            // 0x26de34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (runtime->hasFunction(0x26B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x26B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE38u; }
        if (ctx->pc != 0x26DE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B7B8_0x26b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE38u; }
        if (ctx->pc != 0x26DE38u) { return; }
    }
    ctx->pc = 0x26DE38u;
label_26de38:
    // 0x26de38: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x26de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x26de3c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26de3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26de40: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x26de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x26de44: 0xa0a30007  sb          $v1, 0x7($a1)
    ctx->pc = 0x26de44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26de48: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x26de48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26de4c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26de50: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26de50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26de54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x26de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x26de58: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x26de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x26de5c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x26de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26de60: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26de64: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x26de64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26de68: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x26de68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x26de6c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x26de6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x26de70: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x26de70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26de74: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26de74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26de78: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DE78u;
    SET_GPR_U32(ctx, 31, 0x26DE80u);
    ctx->pc = 0x26DE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE78u;
            // 0x26de7c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE80u; }
        if (ctx->pc != 0x26DE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE80u; }
        if (ctx->pc != 0x26DE80u) { return; }
    }
    ctx->pc = 0x26DE80u;
label_26de80:
    // 0x26de80: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x26de80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26de84: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26de84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26de88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26de88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de8c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26de8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26de90: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26DE90u;
    SET_GPR_U32(ctx, 31, 0x26DE98u);
    ctx->pc = 0x26DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE90u;
            // 0x26de94: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (runtime->hasFunction(0x26D980u)) {
        auto targetFn = runtime->lookupFunction(0x26D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE98u; }
        if (ctx->pc != 0x26DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D980_0x26d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DE98u; }
        if (ctx->pc != 0x26DE98u) { return; }
    }
    ctx->pc = 0x26DE98u;
label_26de98:
    // 0x26de98: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x26de9c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x26de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26dea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26dea4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x26dea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x26dea8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x26dea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x26deac: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x26deacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x26deb0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26deb0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26deb4: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x26deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_26deb8:
    // 0x26deb8: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x26deb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x26debc: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DEBCu;
    SET_GPR_U32(ctx, 31, 0x26DEC4u);
    ctx->pc = 0x26DEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEBCu;
            // 0x26dec0: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEC4u; }
        if (ctx->pc != 0x26DEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DEC4u; }
        if (ctx->pc != 0x26DEC4u) { return; }
    }
    ctx->pc = 0x26DEC4u;
label_26dec4:
    // 0x26dec4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x26dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26dec8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26decc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x26deccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26ded0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x26ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x26ded4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x26ded4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x26ded8: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x26ded8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dedc: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x26dedcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26dee0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x26dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26dee4: 0xa0450008  sb          $a1, 0x8($v0)
    ctx->pc = 0x26dee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x26dee8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26deec: 0xa0710009  sb          $s1, 0x9($v1)
    ctx->pc = 0x26deecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 17));
    // 0x26def0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x26def0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26def4: 0xa840000f  swl         $zero, 0xF($v0)
    ctx->pc = 0x26def4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26def8: 0xb840000c  swr         $zero, 0xC($v0)
    ctx->pc = 0x26def8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26defc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x26defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26df00: 0xa8660013  swl         $a2, 0x13($v1)
    ctx->pc = 0x26df00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26df04: 0xb8660010  swr         $a2, 0x10($v1)
    ctx->pc = 0x26df04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26df08: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x26df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26df0c: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x26df0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x26df10: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x26df10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x26df14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x26df14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26df18: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x26df18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26df1c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x26df1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x26df20: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x26DF20u;
    SET_GPR_U32(ctx, 31, 0x26DF28u);
    ctx->pc = 0x26DF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF20u;
            // 0x26df24: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (runtime->hasFunction(0x26B858u)) {
        auto targetFn = runtime->lookupFunction(0x26B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF28u; }
        if (ctx->pc != 0x26DF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B858_0x26b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF28u; }
        if (ctx->pc != 0x26DF28u) { return; }
    }
    ctx->pc = 0x26DF28u;
label_26df28:
    // 0x26df28: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x26df28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x26df2c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26df2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26df30: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x26df30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df34: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26df38: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x26df38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x26df3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26df3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df40: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x26df40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x26df44: 0x0  nop
    ctx->pc = 0x26df44u;
    // NOP
label_26df48:
    // 0x26df48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26df48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26df4c: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x26df4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x26df50: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26df54: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x26df54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x26df58: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26df58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26df5c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x26df5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26df60: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26df64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26df64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26df68: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x26df68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26df6c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26DF6Cu;
    {
        const bool branch_taken_0x26df6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF6Cu;
            // 0x26df70: 0xa0640006  sb          $a0, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df6c) {
            ctx->pc = 0x26DF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26df48;
        }
    }
    ctx->pc = 0x26DF74u;
    // 0x26df74: 0xc08a262  jal         func_228988
    ctx->pc = 0x26DF74u;
    SET_GPR_U32(ctx, 31, 0x26DF7Cu);
    ctx->pc = 0x26DF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF74u;
            // 0x26df78: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF7Cu; }
        if (ctx->pc != 0x26DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DF7Cu; }
        if (ctx->pc != 0x26DF7Cu) { return; }
    }
    ctx->pc = 0x26DF7Cu;
label_26df7c:
    // 0x26df7c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x26df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26df80: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26df80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26df84: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26df84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26df88: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x26df88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26df8c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26df8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26df90: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x26df90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26df94: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26df94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26df98: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26df98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26df9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26df9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26dfa0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26dfa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26dfa4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26dfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dfa8: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x26dfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x26dfac: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x26dfacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x26dfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x26DFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFB0u;
            // 0x26dfb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DFB8u;
    ctx->pc = 0x26dfb8u;
}
