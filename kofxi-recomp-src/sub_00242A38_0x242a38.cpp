#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242A38
// Address: 0x242a38 - 0x242c18
void sub_00242A38_0x242a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242A38_0x242a38");
#endif

    switch (ctx->pc) {
        case 0x242aa0u: goto label_242aa0;
        case 0x242adcu: goto label_242adc;
        case 0x242afcu: goto label_242afc;
        case 0x242b20u: goto label_242b20;
        case 0x242b40u: goto label_242b40;
        case 0x242b50u: goto label_242b50;
        case 0x242b6cu: goto label_242b6c;
        case 0x242b9cu: goto label_242b9c;
        case 0x242bacu: goto label_242bac;
        case 0x242bccu: goto label_242bcc;
        case 0x242be0u: goto label_242be0;
        case 0x242c10u: goto label_242c10;
        default: break;
    }

    ctx->pc = 0x242a38u;

    // 0x242a38: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x242a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x242a3c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x242a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x242a40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x242a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x242a44: 0xffa500d8  sd          $a1, 0xD8($sp)
    ctx->pc = 0x242a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 5));
    // 0x242a48: 0xffa600e0  sd          $a2, 0xE0($sp)
    ctx->pc = 0x242a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 6));
    // 0x242a4c: 0xffa700e8  sd          $a3, 0xE8($sp)
    ctx->pc = 0x242a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 7));
    // 0x242a50: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x242a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x242a54: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x242a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x242a58: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x242a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x242a5c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x242a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x242a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x242a64: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x242a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x242a68: 0x8c51fed8  lw          $s1, -0x128($v0)
    ctx->pc = 0x242a68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967000)));
    // 0x242a6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x242a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a70: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x242a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x242a74: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x242a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x242a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x242a7c: 0x8fb500d8  lw          $s5, 0xD8($sp)
    ctx->pc = 0x242a7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x242a80: 0x8fb400e0  lw          $s4, 0xE0($sp)
    ctx->pc = 0x242a80u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x242a84: 0x8fb700e8  lw          $s7, 0xE8($sp)
    ctx->pc = 0x242a84u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x242a88: 0xffa800f0  sd          $t0, 0xF0($sp)
    ctx->pc = 0x242a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 8));
    // 0x242a8c: 0xffa900f8  sd          $t1, 0xF8($sp)
    ctx->pc = 0x242a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 9));
    // 0x242a90: 0xffaa0100  sd          $t2, 0x100($sp)
    ctx->pc = 0x242a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 10));
    // 0x242a94: 0x1220003a  beqz        $s1, . + 4 + (0x3A << 2)
    ctx->pc = 0x242A94u;
    {
        const bool branch_taken_0x242a94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242A94u;
            // 0x242a98: 0xffab0108  sd          $t3, 0x108($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a94) {
            ctx->pc = 0x242B80u;
            goto label_242b80;
        }
    }
    ctx->pc = 0x242A9Cu;
    // 0x242a9c: 0x96230014  lhu         $v1, 0x14($s1)
    ctx->pc = 0x242a9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
label_242aa0:
    // 0x242aa0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x242aa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x242aa4: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x242AA4u;
    {
        const bool branch_taken_0x242aa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242aa4) {
            ctx->pc = 0x242AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242AA4u;
            // 0x242aa8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B78u;
            goto label_242b78;
        }
    }
    ctx->pc = 0x242AACu;
    // 0x242aac: 0x96230016  lhu         $v1, 0x16($s1)
    ctx->pc = 0x242aacu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x242ab0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x242AB0u;
    {
        const bool branch_taken_0x242ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ab0) {
            ctx->pc = 0x242AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242AB0u;
            // 0x242ab4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242AC8u;
            goto label_242ac8;
        }
    }
    ctx->pc = 0x242AB8u;
    // 0x242ab8: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x242ab8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x242abc: 0x5462002e  bnel        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x242ABCu;
    {
        const bool branch_taken_0x242abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x242abc) {
            ctx->pc = 0x242AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242ABCu;
            // 0x242ac0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B78u;
            goto label_242b78;
        }
    }
    ctx->pc = 0x242AC4u;
    // 0x242ac4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x242ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_242ac8:
    // 0x242ac8: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x242AC8u;
    {
        const bool branch_taken_0x242ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ac8) {
            ctx->pc = 0x242ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242AC8u;
            // 0x242acc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242AE8u;
            goto label_242ae8;
        }
    }
    ctx->pc = 0x242AD0u;
    // 0x242ad0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x242ad0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242ad4: 0xc048c5e  jal         func_123178
    ctx->pc = 0x242AD4u;
    SET_GPR_U32(ctx, 31, 0x242ADCu);
    ctx->pc = 0x242AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242AD4u;
            // 0x242ad8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242ADCu; }
        if (ctx->pc != 0x242ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242ADCu; }
        if (ctx->pc != 0x242ADCu) { return; }
    }
    ctx->pc = 0x242ADCu;
label_242adc:
    // 0x242adc: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x242ADCu;
    {
        const bool branch_taken_0x242adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242adc) {
            ctx->pc = 0x242AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242ADCu;
            // 0x242ae0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B78u;
            goto label_242b78;
        }
    }
    ctx->pc = 0x242AE4u;
    // 0x242ae4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x242ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_242ae8:
    // 0x242ae8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x242AE8u;
    {
        const bool branch_taken_0x242ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242ae8) {
            ctx->pc = 0x242B04u;
            goto label_242b04;
        }
    }
    ctx->pc = 0x242AF0u;
    // 0x242af0: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x242af0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242af4: 0xc048c5e  jal         func_123178
    ctx->pc = 0x242AF4u;
    SET_GPR_U32(ctx, 31, 0x242AFCu);
    ctx->pc = 0x242AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242AF4u;
            // 0x242af8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AFCu; }
        if (ctx->pc != 0x242AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242AFCu; }
        if (ctx->pc != 0x242AFCu) { return; }
    }
    ctx->pc = 0x242AFCu;
label_242afc:
    // 0x242afc: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x242AFCu;
    {
        const bool branch_taken_0x242afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242afc) {
            ctx->pc = 0x242B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242AFCu;
            // 0x242b00: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B78u;
            goto label_242b78;
        }
    }
    ctx->pc = 0x242B04u;
label_242b04:
    // 0x242b04: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x242B04u;
    {
        const bool branch_taken_0x242b04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B04u;
            // 0x242b08: 0x3c063b9a  lui         $a2, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b04) {
            ctx->pc = 0x242B70u;
            goto label_242b70;
        }
    }
    ctx->pc = 0x242B0Cu;
    // 0x242b0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b14: 0x34c6ca00  ori         $a2, $a2, 0xCA00
    ctx->pc = 0x242b14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51712);
    // 0x242b18: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x242B18u;
    SET_GPR_U32(ctx, 31, 0x242B20u);
    ctx->pc = 0x242B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B18u;
            // 0x242b1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (runtime->hasFunction(0x22A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x22A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B20u; }
        if (ctx->pc != 0x242B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A9A0_0x22a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B20u; }
        if (ctx->pc != 0x242B20u) { return; }
    }
    ctx->pc = 0x242B20u;
label_242b20:
    // 0x242b20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b24: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x242B24u;
    {
        const bool branch_taken_0x242b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B24u;
            // 0x242b28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b24) {
            ctx->pc = 0x242B70u;
            goto label_242b70;
        }
    }
    ctx->pc = 0x242B2Cu;
    // 0x242b2c: 0x26720048  addiu       $s2, $s3, 0x48
    ctx->pc = 0x242b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
    // 0x242b30: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x242b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x242b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b38: 0xc08c330  jal         func_230CC0
    ctx->pc = 0x242B38u;
    SET_GPR_U32(ctx, 31, 0x242B40u);
    ctx->pc = 0x242B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B38u;
            // 0x242b3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230CC0u;
    if (runtime->hasFunction(0x230CC0u)) {
        auto targetFn = runtime->lookupFunction(0x230CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B40u; }
        if (ctx->pc != 0x242B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230CC0_0x230cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B40u; }
        if (ctx->pc != 0x242B40u) { return; }
    }
    ctx->pc = 0x242B40u;
label_242b40:
    // 0x242b40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x242B40u;
    {
        const bool branch_taken_0x242b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242b40) {
            ctx->pc = 0x242B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242B40u;
            // 0x242b44: 0x96620078  lhu         $v0, 0x78($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242B58u;
            goto label_242b58;
        }
    }
    ctx->pc = 0x242B48u;
    // 0x242b48: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x242B48u;
    SET_GPR_U32(ctx, 31, 0x242B50u);
    ctx->pc = 0x242B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B48u;
            // 0x242b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B50u; }
        if (ctx->pc != 0x242B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B50u; }
        if (ctx->pc != 0x242B50u) { return; }
    }
    ctx->pc = 0x242B50u;
label_242b50:
    // 0x242b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x242B50u;
    {
        const bool branch_taken_0x242b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B50u;
            // 0x242b54: 0x8e330008  lw          $s3, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b50) {
            ctx->pc = 0x242B74u;
            goto label_242b74;
        }
    }
    ctx->pc = 0x242B58u;
label_242b58:
    // 0x242b58: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x242b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x242b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242B5Cu;
    {
        const bool branch_taken_0x242b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B5Cu;
            // 0x242b60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b5c) {
            ctx->pc = 0x242B70u;
            goto label_242b70;
        }
    }
    ctx->pc = 0x242B64u;
    // 0x242b64: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x242B64u;
    SET_GPR_U32(ctx, 31, 0x242B6Cu);
    ctx->pc = 0x242B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B64u;
            // 0x242b68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B6Cu; }
        if (ctx->pc != 0x242B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B6Cu; }
        if (ctx->pc != 0x242B6Cu) { return; }
    }
    ctx->pc = 0x242B6Cu;
label_242b6c:
    // 0x242b6c: 0x0  nop
    ctx->pc = 0x242b6cu;
    // NOP
label_242b70:
    // 0x242b70: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x242b70u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_242b74:
    // 0x242b74: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x242b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_242b78:
    // 0x242b78: 0x5620ffc9  bnel        $s1, $zero, . + 4 + (-0x37 << 2)
    ctx->pc = 0x242B78u;
    {
        const bool branch_taken_0x242b78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x242b78) {
            ctx->pc = 0x242B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242B78u;
            // 0x242b7c: 0x96230014  lhu         $v1, 0x14($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242AA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242aa0;
        }
    }
    ctx->pc = 0x242B80u;
label_242b80:
    // 0x242b80: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x242B80u;
    {
        const bool branch_taken_0x242b80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242B80u;
            // 0x242b84: 0x26700048  addiu       $s0, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b80) {
            ctx->pc = 0x242BD8u;
            goto label_242bd8;
        }
    }
    ctx->pc = 0x242B88u;
    // 0x242b88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x242b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x242b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b94: 0xc08c330  jal         func_230CC0
    ctx->pc = 0x242B94u;
    SET_GPR_U32(ctx, 31, 0x242B9Cu);
    ctx->pc = 0x242B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242B94u;
            // 0x242b98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230CC0u;
    if (runtime->hasFunction(0x230CC0u)) {
        auto targetFn = runtime->lookupFunction(0x230CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B9Cu; }
        if (ctx->pc != 0x242B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230CC0_0x230cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242B9Cu; }
        if (ctx->pc != 0x242B9Cu) { return; }
    }
    ctx->pc = 0x242B9Cu;
label_242b9c:
    // 0x242b9c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x242B9Cu;
    {
        const bool branch_taken_0x242b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242b9c) {
            ctx->pc = 0x242BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242B9Cu;
            // 0x242ba0: 0x96620078  lhu         $v0, 0x78($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242BB4u;
            goto label_242bb4;
        }
    }
    ctx->pc = 0x242BA4u;
    // 0x242ba4: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x242BA4u;
    SET_GPR_U32(ctx, 31, 0x242BACu);
    ctx->pc = 0x242BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242BA4u;
            // 0x242ba8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BACu; }
        if (ctx->pc != 0x242BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BACu; }
        if (ctx->pc != 0x242BACu) { return; }
    }
    ctx->pc = 0x242BACu;
label_242bac:
    // 0x242bac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x242BACu;
    {
        const bool branch_taken_0x242bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242BACu;
            // 0x242bb0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bac) {
            ctx->pc = 0x242BE4u;
            goto label_242be4;
        }
    }
    ctx->pc = 0x242BB4u;
label_242bb4:
    // 0x242bb4: 0x3042003c  andi        $v0, $v0, 0x3C
    ctx->pc = 0x242bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)60);
    // 0x242bb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x242BB8u;
    {
        const bool branch_taken_0x242bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242BB8u;
            // 0x242bbc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bb8) {
            ctx->pc = 0x242BE4u;
            goto label_242be4;
        }
    }
    ctx->pc = 0x242BC0u;
    // 0x242bc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242bc4: 0xc08c23c  jal         func_2308F0
    ctx->pc = 0x242BC4u;
    SET_GPR_U32(ctx, 31, 0x242BCCu);
    ctx->pc = 0x242BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242BC4u;
            // 0x242bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2308F0u;
    if (runtime->hasFunction(0x2308F0u)) {
        auto targetFn = runtime->lookupFunction(0x2308F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BCCu; }
        if (ctx->pc != 0x242BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002308F0_0x2308f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BCCu; }
        if (ctx->pc != 0x242BCCu) { return; }
    }
    ctx->pc = 0x242BCCu;
label_242bcc:
    // 0x242bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242BCCu;
    {
        const bool branch_taken_0x242bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242BCCu;
            // 0x242bd0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242bcc) {
            ctx->pc = 0x242BE4u;
            goto label_242be4;
        }
    }
    ctx->pc = 0x242BD4u;
    // 0x242bd4: 0x0  nop
    ctx->pc = 0x242bd4u;
    // NOP
label_242bd8:
    // 0x242bd8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x242BD8u;
    SET_GPR_U32(ctx, 31, 0x242BE0u);
    ctx->pc = 0x242BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242BD8u;
            // 0x242bdc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BE0u; }
        if (ctx->pc != 0x242BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242BE0u; }
        if (ctx->pc != 0x242BE0u) { return; }
    }
    ctx->pc = 0x242BE0u;
label_242be0:
    // 0x242be0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x242be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_242be4:
    // 0x242be4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x242be4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242be8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x242be8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x242bec: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x242becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242bf0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x242bf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242bf4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x242bf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242bf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x242bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242bfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x242bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242c04: 0x3e00008  jr          $ra
    ctx->pc = 0x242C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C04u;
            // 0x242c08: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242C0Cu;
    // 0x242c0c: 0x0  nop
    ctx->pc = 0x242c0cu;
    // NOP
label_242c10:
    // 0x242c10: 0x3e00008  jr          $ra
    ctx->pc = 0x242C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242C10u;
            // 0x242c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242C18u;
    ctx->pc = 0x242c18u;
}
