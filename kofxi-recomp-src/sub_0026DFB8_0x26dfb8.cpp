#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026DFB8
// Address: 0x26dfb8 - 0x26e6c0
void sub_0026DFB8_0x26dfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DFB8_0x26dfb8");
#endif

    switch (ctx->pc) {
        case 0x26e00cu: goto label_26e00c;
        case 0x26e038u: goto label_26e038;
        case 0x26e084u: goto label_26e084;
        case 0x26e09cu: goto label_26e09c;
        case 0x26e10cu: goto label_26e10c;
        case 0x26e150u: goto label_26e150;
        case 0x26e170u: goto label_26e170;
        case 0x26e180u: goto label_26e180;
        case 0x26e1f4u: goto label_26e1f4;
        case 0x26e228u: goto label_26e228;
        case 0x26e268u: goto label_26e268;
        case 0x26e2e0u: goto label_26e2e0;
        case 0x26e328u: goto label_26e328;
        case 0x26e344u: goto label_26e344;
        case 0x26e35cu: goto label_26e35c;
        case 0x26e3b8u: goto label_26e3b8;
        case 0x26e410u: goto label_26e410;
        case 0x26e444u: goto label_26e444;
        case 0x26e45cu: goto label_26e45c;
        case 0x26e474u: goto label_26e474;
        case 0x26e4e0u: goto label_26e4e0;
        case 0x26e4f8u: goto label_26e4f8;
        case 0x26e524u: goto label_26e524;
        case 0x26e5ecu: goto label_26e5ec;
        case 0x26e5fcu: goto label_26e5fc;
        case 0x26e62cu: goto label_26e62c;
        case 0x26e648u: goto label_26e648;
        case 0x26e67cu: goto label_26e67c;
        default: break;
    }

    ctx->pc = 0x26dfb8u;

    // 0x26dfb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26dfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x26dfbc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x26dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x26dfc0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26dfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26dfc4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x26dfc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfc8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26dfcc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x26dfccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x26dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x26dfd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26dfd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfd8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x26dfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x26dfdc: 0x26b1004c  addiu       $s1, $s5, 0x4C
    ctx->pc = 0x26dfdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
    // 0x26dfe0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x26dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x26dfe4: 0x26b30070  addiu       $s3, $s5, 0x70
    ctx->pc = 0x26dfe4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x26dfe8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x26dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26dfec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26dff0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26dff4: 0x8ea201b8  lw          $v0, 0x1B8($s5)
    ctx->pc = 0x26dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 440)));
    // 0x26dff8: 0x8ea6002c  lw          $a2, 0x2C($s5)
    ctx->pc = 0x26dff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x26dffc: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x26dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x26e000: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26e004: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26E004u;
    SET_GPR_U32(ctx, 31, 0x26E00Cu);
    ctx->pc = 0x26E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E004u;
            // 0x26e008: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E00Cu; }
        if (ctx->pc != 0x26E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E00Cu; }
        if (ctx->pc != 0x26E00Cu) { return; }
    }
    ctx->pc = 0x26E00Cu;
label_26e00c:
    // 0x26e00c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x26e00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e014: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e018: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x26e018u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e01c: 0x92a20068  lbu         $v0, 0x68($s5)
    ctx->pc = 0x26e01cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x26e020: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e024: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x26e024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e028: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x26e028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e02c: 0x92a20069  lbu         $v0, 0x69($s5)
    ctx->pc = 0x26e02cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 105)));
    // 0x26e030: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26E030u;
    SET_GPR_U32(ctx, 31, 0x26E038u);
    ctx->pc = 0x26E034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E030u;
            // 0x26e034: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (runtime->hasFunction(0x26D980u)) {
        auto targetFn = runtime->lookupFunction(0x26D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E038u; }
        if (ctx->pc != 0x26E038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D980_0x26d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E038u; }
        if (ctx->pc != 0x26E038u) { return; }
    }
    ctx->pc = 0x26E038u;
label_26e038:
    // 0x26e038: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e03c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e040: 0x16c40004  bne         $s6, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E040u;
    {
        const bool branch_taken_0x26e040 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x26E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E040u;
            // 0x26e044: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e040) {
            ctx->pc = 0x26E054u;
            goto label_26e054;
        }
    }
    ctx->pc = 0x26E048u;
    // 0x26e048: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e04c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E04Cu;
    {
        const bool branch_taken_0x26e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E04Cu;
            // 0x26e050: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e04c) {
            ctx->pc = 0x26E068u;
            goto label_26e068;
        }
    }
    ctx->pc = 0x26E054u;
label_26e054:
    // 0x26e054: 0x8ea20188  lw          $v0, 0x188($s5)
    ctx->pc = 0x26e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x26e058: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e05c: 0x88430010  lwl         $v1, 0x10($v0)
    ctx->pc = 0x26e05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x26e060: 0x9843000d  lwr         $v1, 0xD($v0)
    ctx->pc = 0x26e060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x26e064: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26e064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_26e068:
    // 0x26e068: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e06c: 0x26b7006a  addiu       $s7, $s5, 0x6A
    ctx->pc = 0x26e06cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 106));
    // 0x26e070: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26e070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e074: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x26e074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e078: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x26e078u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26e07c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E07Cu;
    SET_GPR_U32(ctx, 31, 0x26E084u);
    ctx->pc = 0x26E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E07Cu;
            // 0x26e080: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E084u; }
        if (ctx->pc != 0x26E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E084u; }
        if (ctx->pc != 0x26E084u) { return; }
    }
    ctx->pc = 0x26E084u;
label_26e084:
    // 0x26e084: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e088: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x26e088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x26e08c: 0x24a57ea0  addiu       $a1, $a1, 0x7EA0
    ctx->pc = 0x26e08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32416));
    // 0x26e090: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e094: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E094u;
    SET_GPR_U32(ctx, 31, 0x26E09Cu);
    ctx->pc = 0x26E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E094u;
            // 0x26e098: 0x248400ec  addiu       $a0, $a0, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E09Cu; }
        if (ctx->pc != 0x26E09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E09Cu; }
        if (ctx->pc != 0x26E09Cu) { return; }
    }
    ctx->pc = 0x26E09Cu;
label_26e09c:
    // 0x26e09c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e0a0: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x26e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x26e0a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e0a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e0ac: 0xa06200f0  sb          $v0, 0xF0($v1)
    ctx->pc = 0x26e0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 240), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e0b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x26e0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e0b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e0b8: 0xa04400f1  sb          $a0, 0xF1($v0)
    ctx->pc = 0x26e0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 241), (uint8_t)GPR_U32(ctx, 4));
    // 0x26e0bc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e0c0: 0x16c60012  bne         $s6, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E0C0u;
    {
        const bool branch_taken_0x26e0c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 6));
        ctx->pc = 0x26E0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0C0u;
            // 0x26e0c4: 0xa06500f2  sb          $a1, 0xF2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 242), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0c0) {
            ctx->pc = 0x26E10Cu;
            goto label_26e10c;
        }
    }
    ctx->pc = 0x26E0C8u;
    // 0x26e0c8: 0x8ea20188  lw          $v0, 0x188($s5)
    ctx->pc = 0x26e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x26e0cc: 0x88430010  lwl         $v1, 0x10($v0)
    ctx->pc = 0x26e0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x26e0d0: 0x9843000d  lwr         $v1, 0xD($v0)
    ctx->pc = 0x26e0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x26e0d4: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x26E0D4u;
    {
        const bool branch_taken_0x26e0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0D4u;
            // 0x26e0d8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0d4) {
            ctx->pc = 0x26E2E8u;
            goto label_26e2e8;
        }
    }
    ctx->pc = 0x26E0DCu;
    // 0x26e0dc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e0e0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e0e4: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26e0e8: 0xa08200f3  sb          $v0, 0xF3($a0)
    ctx->pc = 0x26e0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 243), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e0ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e0f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e0f4: 0xa06200f4  sb          $v0, 0xF4($v1)
    ctx->pc = 0x26e0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 244), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e0f8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e0fc: 0x8ea50188  lw          $a1, 0x188($s5)
    ctx->pc = 0x26e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x26e100: 0x248400f5  addiu       $a0, $a0, 0xF5
    ctx->pc = 0x26e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 245));
    // 0x26e104: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E104u;
    SET_GPR_U32(ctx, 31, 0x26E10Cu);
    ctx->pc = 0x26E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E104u;
            // 0x26e108: 0x24a5000d  addiu       $a1, $a1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E10Cu; }
        if (ctx->pc != 0x26E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E10Cu; }
        if (ctx->pc != 0x26E10Cu) { return; }
    }
    ctx->pc = 0x26E10Cu;
label_26e10c:
    // 0x26e10c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x26e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26e110: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26E110u;
    {
        const bool branch_taken_0x26e110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E110u;
            // 0x26e114: 0x26020006  addiu       $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e110) {
            ctx->pc = 0x26E170u;
            goto label_26e170;
        }
    }
    ctx->pc = 0x26E118u;
    // 0x26e118: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e11c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E11Cu;
    {
        const bool branch_taken_0x26e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E11Cu;
            // 0x26e120: 0x24030033  addiu       $v1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e11c) {
            ctx->pc = 0x26E170u;
            goto label_26e170;
        }
    }
    ctx->pc = 0x26E124u;
    // 0x26e124: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e128: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26e128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e12c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e130: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e134: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e138: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e13c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e140: 0xa04400ec  sb          $a0, 0xEC($v0)
    ctx->pc = 0x26e140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x26e144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e148: 0xc08a254  jal         func_228950
    ctx->pc = 0x26E148u;
    SET_GPR_U32(ctx, 31, 0x26E150u);
    ctx->pc = 0x26E14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E148u;
            // 0x26e14c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E150u; }
        if (ctx->pc != 0x26E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E150u; }
        if (ctx->pc != 0x26E150u) { return; }
    }
    ctx->pc = 0x26E150u;
label_26e150:
    // 0x26e150: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e154: 0x260400ec  addiu       $a0, $s0, 0xEC
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e158: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26e158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26e15c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x26e15cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x26e160: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x26e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e164: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e168: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E168u;
    SET_GPR_U32(ctx, 31, 0x26E170u);
    ctx->pc = 0x26E16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E168u;
            // 0x26e16c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E170u; }
        if (ctx->pc != 0x26E170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E170u; }
        if (ctx->pc != 0x26E170u) { return; }
    }
    ctx->pc = 0x26E170u;
label_26e170:
    // 0x26e170: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x26e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x26e174: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x26E174u;
    {
        const bool branch_taken_0x26e174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e174) {
            ctx->pc = 0x26E178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E174u;
            // 0x26e178: 0x8e620110  lw          $v0, 0x110($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E204u;
            goto label_26e204;
        }
    }
    ctx->pc = 0x26E17Cu;
    // 0x26e17c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x26e17cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_26e180:
    // 0x26e180: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x26e184: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26e184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26e188: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e18c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E18Cu;
    {
        const bool branch_taken_0x26e18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E18Cu;
            // 0x26e190: 0x2403003d  addiu       $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e18c) {
            ctx->pc = 0x26E200u;
            goto label_26e200;
        }
    }
    ctx->pc = 0x26E194u;
    // 0x26e194: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e198: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e19c: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e19cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e1a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e1a4: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x26e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x26e1a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e1ac: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x26e1acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x26e1b0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26e1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e1b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e1bc: 0xa06200ec  sb          $v0, 0xEC($v1)
    ctx->pc = 0x26e1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e1c0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x26e1c4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e1c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x26e1c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e1cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e1d0: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e1d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e1d8: 0x260300ec  addiu       $v1, $s0, 0xEC
    ctx->pc = 0x26e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e1dc: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x26e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x26e1e0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e1e4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x26e1e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x26e1e8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26e1ec: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E1ECu;
    SET_GPR_U32(ctx, 31, 0x26E1F4u);
    ctx->pc = 0x26E1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E1ECu;
            // 0x26e1f0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1F4u; }
        if (ctx->pc != 0x26E1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E1F4u; }
        if (ctx->pc != 0x26E1F4u) { return; }
    }
    ctx->pc = 0x26E1F4u;
label_26e1f4:
    // 0x26e1f4: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x26e1f8: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x26e1f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x26e1fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26e1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26e200:
    // 0x26e200: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x26e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_26e204:
    // 0x26e204: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x26E204u;
    {
        const bool branch_taken_0x26e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e204) {
            ctx->pc = 0x26E208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E204u;
            // 0x26e208: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E278u;
            goto label_26e278;
        }
    }
    ctx->pc = 0x26E20Cu;
    // 0x26e20c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x26e20cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e210: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x26e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x26e214: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26e218: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e21c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26E21Cu;
    {
        const bool branch_taken_0x26e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E21Cu;
            // 0x26e220: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e21c) {
            ctx->pc = 0x26E274u;
            goto label_26e274;
        }
    }
    ctx->pc = 0x26E224u;
    // 0x26e224: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_26e228:
    // 0x26e228: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e22c: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e22cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e230: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e234: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x26e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x26e238: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e23c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x26e23cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e240: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e244: 0xa04400ec  sb          $a0, 0xEC($v0)
    ctx->pc = 0x26e244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x26e248: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e24c: 0x260300ec  addiu       $v1, $s0, 0xEC
    ctx->pc = 0x26e24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e250: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x26e250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x26e254: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e258: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x26e258u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e25c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x26e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26e260: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E260u;
    SET_GPR_U32(ctx, 31, 0x26E268u);
    ctx->pc = 0x26E264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E260u;
            // 0x26e264: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E268u; }
        if (ctx->pc != 0x26E268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E268u; }
        if (ctx->pc != 0x26E268u) { return; }
    }
    ctx->pc = 0x26E268u;
label_26e268:
    // 0x26e268: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x26e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x26e26c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26e26cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e270: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x26e270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_26e274:
    // 0x26e274: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26e278:
    // 0x26e278: 0x16c2001d  bne         $s6, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26E278u;
    {
        const bool branch_taken_0x26e278 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E278u;
            // 0x26e27c: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e278) {
            ctx->pc = 0x26E2F0u;
            goto label_26e2f0;
        }
    }
    ctx->pc = 0x26E280u;
    // 0x26e280: 0x8ea20188  lw          $v0, 0x188($s5)
    ctx->pc = 0x26e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x26e284: 0x8c4303e8  lw          $v1, 0x3E8($v0)
    ctx->pc = 0x26e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1000)));
    // 0x26e288: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x26E288u;
    {
        const bool branch_taken_0x26e288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E288u;
            // 0x26e28c: 0x26020006  addiu       $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e288) {
            ctx->pc = 0x26E2E8u;
            goto label_26e2e8;
        }
    }
    ctx->pc = 0x26E290u;
    // 0x26e290: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e294: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E294u;
    {
        const bool branch_taken_0x26e294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E294u;
            // 0x26e298: 0x24030036  addiu       $v1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e294) {
            ctx->pc = 0x26E2E8u;
            goto label_26e2e8;
        }
    }
    ctx->pc = 0x26E29Cu;
    // 0x26e29c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e2a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x26e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e2a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26e2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26e2a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e2ac: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e2acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e2b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e2b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e2b8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e2bc: 0xa04400ec  sb          $a0, 0xEC($v0)
    ctx->pc = 0x26e2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 4));
    // 0x26e2c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e2c4: 0x260200ec  addiu       $v0, $s0, 0xEC
    ctx->pc = 0x26e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e2c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e2cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x26e2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x26e2d0: 0x8ea50188  lw          $a1, 0x188($s5)
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
    // 0x26e2d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x26e2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e2d8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E2D8u;
    SET_GPR_U32(ctx, 31, 0x26E2E0u);
    ctx->pc = 0x26E2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2D8u;
            // 0x26e2dc: 0x24a503e8  addiu       $a1, $a1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2E0u; }
        if (ctx->pc != 0x26E2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E2E0u; }
        if (ctx->pc != 0x26E2E0u) { return; }
    }
    ctx->pc = 0x26E2E0u;
label_26e2e0:
    // 0x26e2e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E2E0u;
    {
        const bool branch_taken_0x26e2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2E0u;
            // 0x26e2e4: 0x26020004  addiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2e0) {
            ctx->pc = 0x26E2F0u;
            goto label_26e2f0;
        }
    }
    ctx->pc = 0x26E2E8u;
label_26e2e8:
    // 0x26e2e8: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x26E2E8u;
    {
        const bool branch_taken_0x26e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2E8u;
            // 0x26e2ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2e8) {
            ctx->pc = 0x26E694u;
            goto label_26e694;
        }
    }
    ctx->pc = 0x26E2F0u;
label_26e2f0:
    // 0x26e2f0: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e2f4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E2F4u;
    {
        const bool branch_taken_0x26e2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E2F4u;
            // 0x26e2f8: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e2f4) {
            ctx->pc = 0x26E348u;
            goto label_26e348;
        }
    }
    ctx->pc = 0x26E2FCu;
    // 0x26e2fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e300: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e304: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x26e304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x26e308: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e30c: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e30cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e314: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e318: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e31c: 0xa04500ec  sb          $a1, 0xEC($v0)
    ctx->pc = 0x26e31cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e320: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E320u;
    SET_GPR_U32(ctx, 31, 0x26E328u);
    ctx->pc = 0x26E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E320u;
            // 0x26e324: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E328u; }
        if (ctx->pc != 0x26E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E328u; }
        if (ctx->pc != 0x26E328u) { return; }
    }
    ctx->pc = 0x26E328u;
label_26e328:
    // 0x26e328: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x26e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e32c: 0x260400ec  addiu       $a0, $s0, 0xEC
    ctx->pc = 0x26e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e330: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x26e330u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26e334: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26e334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e338: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x26e338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e33c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E33Cu;
    SET_GPR_U32(ctx, 31, 0x26E344u);
    ctx->pc = 0x26E340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E33Cu;
            // 0x26e340: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E344u; }
        if (ctx->pc != 0x26E344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E344u; }
        if (ctx->pc != 0x26E344u) { return; }
    }
    ctx->pc = 0x26E344u;
label_26e344:
    // 0x26e344: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x26e344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_26e348:
    // 0x26e348: 0x92426709  lbu         $v0, 0x6709($s2)
    ctx->pc = 0x26e348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26377)));
    // 0x26e34c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26E34Cu;
    {
        const bool branch_taken_0x26e34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E34Cu;
            // 0x26e350: 0x26546709  addiu       $s4, $s2, 0x6709 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 26377));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e34c) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E354u;
    // 0x26e354: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26E354u;
    SET_GPR_U32(ctx, 31, 0x26E35Cu);
    ctx->pc = 0x26E358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E354u;
            // 0x26e358: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E35Cu; }
        if (ctx->pc != 0x26E35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E35Cu; }
        if (ctx->pc != 0x26E35Cu) { return; }
    }
    ctx->pc = 0x26E35Cu;
label_26e35c:
    // 0x26e35c: 0x92436809  lbu         $v1, 0x6809($s2)
    ctx->pc = 0x26e35cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26633)));
    // 0x26e360: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e364: 0x43900a  movz        $s2, $v0, $v1
    ctx->pc = 0x26e364u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x26e368: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x26e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x26e36c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26e370: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e374: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26E374u;
    {
        const bool branch_taken_0x26e374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E374u;
            // 0x26e378: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e374) {
            ctx->pc = 0x26E3B8u;
            goto label_26e3b8;
        }
    }
    ctx->pc = 0x26E37Cu;
    // 0x26e37c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e380: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26e380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e384: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26e384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e388: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e38c: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e38cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e394: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e398: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e39c: 0xa05200ec  sb          $s2, 0xEC($v0)
    ctx->pc = 0x26e39cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 18));
    // 0x26e3a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e3a4: 0x260200ec  addiu       $v0, $s0, 0xEC
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e3a8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e3ac: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x26e3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x26e3b0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E3B0u;
    SET_GPR_U32(ctx, 31, 0x26E3B8u);
    ctx->pc = 0x26E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3B0u;
            // 0x26e3b4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E3B8u; }
        if (ctx->pc != 0x26E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E3B8u; }
        if (ctx->pc != 0x26E3B8u) { return; }
    }
    ctx->pc = 0x26E3B8u;
label_26e3b8:
    // 0x26e3b8: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x26e3b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e3bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26E3BCu;
    {
        const bool branch_taken_0x26e3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3BCu;
            // 0x26e3c0: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3bc) {
            ctx->pc = 0x26E418u;
            goto label_26e418;
        }
    }
    ctx->pc = 0x26E3C4u;
    // 0x26e3c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26e3c8: 0x28420138  slti        $v0, $v0, 0x138
    ctx->pc = 0x26e3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)312) ? 1 : 0);
    // 0x26e3cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E3CCu;
    {
        const bool branch_taken_0x26e3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3CCu;
            // 0x26e3d0: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3cc) {
            ctx->pc = 0x26E418u;
            goto label_26e418;
        }
    }
    ctx->pc = 0x26E3D4u;
    // 0x26e3d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e3d8: 0x2665000d  addiu       $a1, $s3, 0xD
    ctx->pc = 0x26e3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 13));
    // 0x26e3dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e3e0: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e3e8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e3ec: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x26e3ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e3f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e3f4: 0xa04300ec  sb          $v1, 0xEC($v0)
    ctx->pc = 0x26e3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e3f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e3fc: 0x260200ec  addiu       $v0, $s0, 0xEC
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    // 0x26e400: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x26e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e404: 0x9266000c  lbu         $a2, 0xC($s3)
    ctx->pc = 0x26e404u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e408: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26E408u;
    SET_GPR_U32(ctx, 31, 0x26E410u);
    ctx->pc = 0x26E40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E408u;
            // 0x26e40c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E410u; }
        if (ctx->pc != 0x26E410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E410u; }
        if (ctx->pc != 0x26E410u) { return; }
    }
    ctx->pc = 0x26E410u;
label_26e410:
    // 0x26e410: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x26e410u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x26e414: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x26e414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_26e418:
    // 0x26e418: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26e418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26e41c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e420: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x26e420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26e424: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x26e428: 0x16c40003  bne         $s6, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E428u;
    {
        const bool branch_taken_0x26e428 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        ctx->pc = 0x26E42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E428u;
            // 0x26e42c: 0xa04300ec  sb          $v1, 0xEC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 236), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e428) {
            ctx->pc = 0x26E438u;
            goto label_26e438;
        }
    }
    ctx->pc = 0x26E430u;
    // 0x26e430: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x26E430u;
    {
        const bool branch_taken_0x26e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E430u;
            // 0x26e434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e430) {
            ctx->pc = 0x26E694u;
            goto label_26e694;
        }
    }
    ctx->pc = 0x26E438u;
label_26e438:
    // 0x26e438: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x26e438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x26e43c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E43Cu;
    SET_GPR_U32(ctx, 31, 0x26E444u);
    ctx->pc = 0x26E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E43Cu;
            // 0x26e440: 0x24100011  addiu       $s0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E444u; }
        if (ctx->pc != 0x26E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E444u; }
        if (ctx->pc != 0x26E444u) { return; }
    }
    ctx->pc = 0x26E444u;
label_26e444:
    // 0x26e444: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e448: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e448u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e44c: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x26e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x26e450: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x26e450u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e454: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E454u;
    SET_GPR_U32(ctx, 31, 0x26E45Cu);
    ctx->pc = 0x26E458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E454u;
            // 0x26e458: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E45Cu; }
        if (ctx->pc != 0x26E45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E45Cu; }
        if (ctx->pc != 0x26E45Cu) { return; }
    }
    ctx->pc = 0x26E45Cu;
label_26e45c:
    // 0x26e45c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x26e45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e460: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e460u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e464: 0x2404022c  addiu       $a0, $zero, 0x22C
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    // 0x26e468: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26e468u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e46c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E46Cu;
    SET_GPR_U32(ctx, 31, 0x26E474u);
    ctx->pc = 0x26E470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E46Cu;
            // 0x26e470: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E474u; }
        if (ctx->pc != 0x26E474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E474u; }
        if (ctx->pc != 0x26E474u) { return; }
    }
    ctx->pc = 0x26E474u;
label_26e474:
    // 0x26e474: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x26e474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e478: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e478u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e47c: 0x24040240  addiu       $a0, $zero, 0x240
    ctx->pc = 0x26e47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x26e480: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x26e480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e484: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x26e484u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e488: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x26e488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e48c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x26e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e490: 0xa2300019  sb          $s0, 0x19($s1)
    ctx->pc = 0x26e490u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 16));
    // 0x26e494: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e498: 0x90620005  lbu         $v0, 0x5($v1)
    ctx->pc = 0x26e498u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x26e49c: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x26e49cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26e4a0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x26e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x26e4a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26e4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26e4a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26e4ac: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x26e4acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x26e4b0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x26e4b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26e4b4: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x26e4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x26e4b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x26e4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x26e4bc: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x26e4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e4c0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26e4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e4c4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x26e4c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26e4c8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x26e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x26e4cc: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x26e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x26e4d0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x26e4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e4d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x26e4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e4d8: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E4D8u;
    SET_GPR_U32(ctx, 31, 0x26E4E0u);
    ctx->pc = 0x26E4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4D8u;
            // 0x26e4dc: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4E0u; }
        if (ctx->pc != 0x26E4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4E0u; }
        if (ctx->pc != 0x26E4E0u) { return; }
    }
    ctx->pc = 0x26E4E0u;
label_26e4e0:
    // 0x26e4e0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26e4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e4e4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e4e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4ec: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x26e4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e4f0: 0xc09b660  jal         func_26D980
    ctx->pc = 0x26E4F0u;
    SET_GPR_U32(ctx, 31, 0x26E4F8u);
    ctx->pc = 0x26E4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4F0u;
            // 0x26e4f4: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D980u;
    if (runtime->hasFunction(0x26D980u)) {
        auto targetFn = runtime->lookupFunction(0x26D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4F8u; }
        if (ctx->pc != 0x26E4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D980_0x26d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E4F8u; }
        if (ctx->pc != 0x26E4F8u) { return; }
    }
    ctx->pc = 0x26E4F8u;
label_26e4f8:
    // 0x26e4f8: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x26e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x26e4fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e500: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26e500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26e504: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x26e504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x26e508: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x26e508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x26e50c: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x26e50cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x26e510: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26e510u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26e514: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x26e514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x26e518: 0xa0a20004  sb          $v0, 0x4($a1)
    ctx->pc = 0x26e518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e51c: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E51Cu;
    SET_GPR_U32(ctx, 31, 0x26E524u);
    ctx->pc = 0x26E520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E51Cu;
            // 0x26e520: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E524u; }
        if (ctx->pc != 0x26E524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E524u; }
        if (ctx->pc != 0x26E524u) { return; }
    }
    ctx->pc = 0x26E524u;
label_26e524:
    // 0x26e524: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x26e524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e528: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e52c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x26e52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26e530: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x26e530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e534: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x26e534u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e538: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x26e538u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e53c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e540: 0xa0450008  sb          $a1, 0x8($v0)
    ctx->pc = 0x26e540u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x26e544: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e548: 0x12c60006  beq         $s6, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E548u;
    {
        const bool branch_taken_0x26e548 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 6));
        ctx->pc = 0x26E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E548u;
            // 0x26e54c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e548) {
            ctx->pc = 0x26E564u;
            goto label_26e564;
        }
    }
    ctx->pc = 0x26E550u;
    // 0x26e550: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26e554: 0x52c20011  beql        $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x26E554u;
    {
        const bool branch_taken_0x26e554 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e554) {
            ctx->pc = 0x26E558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E554u;
            // 0x26e558: 0x8ea40188  lw          $a0, 0x188($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E59Cu;
            goto label_26e59c;
        }
    }
    ctx->pc = 0x26E55Cu;
    // 0x26e55c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26E55Cu;
    {
        const bool branch_taken_0x26e55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E55Cu;
            // 0x26e560: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e55c) {
            ctx->pc = 0x26E5D8u;
            goto label_26e5d8;
        }
    }
    ctx->pc = 0x26E564u;
label_26e564:
    // 0x26e564: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e568: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26e568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26e56c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x26e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x26e570: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26e570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26e574: 0xa840000f  swl         $zero, 0xF($v0)
    ctx->pc = 0x26e574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e578: 0xb840000c  swr         $zero, 0xC($v0)
    ctx->pc = 0x26e578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 0); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e57c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x26e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x26e580: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x26e580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x26e584: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x26e584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x26e588: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e58c: 0xa8440013  swl         $a0, 0x13($v0)
    ctx->pc = 0x26e58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e590: 0xb8440010  swr         $a0, 0x10($v0)
    ctx->pc = 0x26e590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e594: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26E594u;
    {
        const bool branch_taken_0x26e594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E594u;
            // 0x26e598: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e594) {
            ctx->pc = 0x26E5D8u;
            goto label_26e5d8;
        }
    }
    ctx->pc = 0x26E59Cu;
label_26e59c:
    // 0x26e59c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26e5a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e5a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26e5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26e5a8: 0x88820010  lwl         $v0, 0x10($a0)
    ctx->pc = 0x26e5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x26e5ac: 0x9882000d  lwr         $v0, 0xD($a0)
    ctx->pc = 0x26e5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x26e5b0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x26e5b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x26e5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x26e5b8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x26e5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x26e5bc: 0xa8a2000f  swl         $v0, 0xF($a1)
    ctx->pc = 0x26e5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e5c0: 0xb8a2000c  swr         $v0, 0xC($a1)
    ctx->pc = 0x26e5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e5c4: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x26e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x26e5c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e5cc: 0xa8460013  swl         $a2, 0x13($v0)
    ctx->pc = 0x26e5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e5d0: 0xb8460010  swr         $a2, 0x10($v0)
    ctx->pc = 0x26e5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x26e5d4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x26e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_26e5d8:
    // 0x26e5d8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x26e5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x26e5dc: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x26e5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e5e0: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x26e5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e5e4: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x26E5E4u;
    SET_GPR_U32(ctx, 31, 0x26E5ECu);
    ctx->pc = 0x26E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5E4u;
            // 0x26e5e8: 0x9624001a  lhu         $a0, 0x1A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5ECu; }
        if (ctx->pc != 0x26E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5ECu; }
        if (ctx->pc != 0x26E5ECu) { return; }
    }
    ctx->pc = 0x26E5ECu;
label_26e5ec:
    // 0x26e5ec: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x26e5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5f4: 0xc09adee  jal         func_26B7B8
    ctx->pc = 0x26E5F4u;
    SET_GPR_U32(ctx, 31, 0x26E5FCu);
    ctx->pc = 0x26E5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E5F4u;
            // 0x26e5f8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B7B8u;
    if (runtime->hasFunction(0x26B7B8u)) {
        auto targetFn = runtime->lookupFunction(0x26B7B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5FCu; }
        if (ctx->pc != 0x26E5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B7B8_0x26b7b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E5FCu; }
        if (ctx->pc != 0x26E5FCu) { return; }
    }
    ctx->pc = 0x26E5FCu;
label_26e5fc:
    // 0x26e5fc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x26e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x26e600: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e600u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e604: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x26e604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e608: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x26e608u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e60c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e610: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x26e610u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e614: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x26e614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e618: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x26e618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e61c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x26e61cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26e620: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x26e620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x26e624: 0xc09ae16  jal         func_26B858
    ctx->pc = 0x26E624u;
    SET_GPR_U32(ctx, 31, 0x26E62Cu);
    ctx->pc = 0x26E628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E624u;
            // 0x26e628: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B858u;
    if (runtime->hasFunction(0x26B858u)) {
        auto targetFn = runtime->lookupFunction(0x26B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E62Cu; }
        if (ctx->pc != 0x26E62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B858_0x26b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E62Cu; }
        if (ctx->pc != 0x26E62Cu) { return; }
    }
    ctx->pc = 0x26E62Cu;
label_26e62c:
    // 0x26e62c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x26e62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e630: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x26e630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x26e634: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x26e634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e638: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x26e638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26e63c: 0xa083000b  sb          $v1, 0xB($a0)
    ctx->pc = 0x26e63cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26e640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e644: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x26e644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
label_26e648:
    // 0x26e648: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x26e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e64c: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x26e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x26e650: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26e654: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x26e654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x26e658: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26e658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e65c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x26e65cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26e660: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x26e660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x26e664: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26e664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26e668: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x26e668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x26e66c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26E66Cu;
    {
        const bool branch_taken_0x26e66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E66Cu;
            // 0x26e670: 0xa0640006  sb          $a0, 0x6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e66c) {
            ctx->pc = 0x26E648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26e648;
        }
    }
    ctx->pc = 0x26E674u;
    // 0x26e674: 0xc08a262  jal         func_228988
    ctx->pc = 0x26E674u;
    SET_GPR_U32(ctx, 31, 0x26E67Cu);
    ctx->pc = 0x26E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E674u;
            // 0x26e678: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E67Cu; }
        if (ctx->pc != 0x26E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E67Cu; }
        if (ctx->pc != 0x26E67Cu) { return; }
    }
    ctx->pc = 0x26E67Cu;
label_26e67c:
    // 0x26e67c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e680: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26e684: 0x51a02  srl         $v1, $a1, 8
    ctx->pc = 0x26e684u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x26e688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e68c: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x26e68cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e690: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x26e690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
label_26e694:
    // 0x26e694: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x26e694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26e698: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x26e698u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26e69c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x26e69cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26e6a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x26e6a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e6a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26e6a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e6a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26e6a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e6ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26e6acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e6b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26e6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e6b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26e6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x26E6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E6B8u;
            // 0x26e6bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E6C0u;
    ctx->pc = 0x26e6c0u;
}
