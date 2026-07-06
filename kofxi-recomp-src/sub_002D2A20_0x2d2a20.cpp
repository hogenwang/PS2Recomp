#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2A20
// Address: 0x2d2a20 - 0x2d2cf0
void sub_002D2A20_0x2d2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2A20_0x2d2a20");
#endif

    switch (ctx->pc) {
        case 0x2d2a58u: goto label_2d2a58;
        case 0x2d2a64u: goto label_2d2a64;
        case 0x2d2a70u: goto label_2d2a70;
        case 0x2d2a78u: goto label_2d2a78;
        case 0x2d2a88u: goto label_2d2a88;
        case 0x2d2a98u: goto label_2d2a98;
        case 0x2d2ab8u: goto label_2d2ab8;
        case 0x2d2ad8u: goto label_2d2ad8;
        case 0x2d2af0u: goto label_2d2af0;
        case 0x2d2b08u: goto label_2d2b08;
        case 0x2d2b20u: goto label_2d2b20;
        case 0x2d2b40u: goto label_2d2b40;
        case 0x2d2b50u: goto label_2d2b50;
        case 0x2d2b58u: goto label_2d2b58;
        case 0x2d2b6cu: goto label_2d2b6c;
        case 0x2d2b8cu: goto label_2d2b8c;
        case 0x2d2bacu: goto label_2d2bac;
        case 0x2d2bc0u: goto label_2d2bc0;
        case 0x2d2be4u: goto label_2d2be4;
        case 0x2d2c0cu: goto label_2d2c0c;
        case 0x2d2c18u: goto label_2d2c18;
        case 0x2d2c24u: goto label_2d2c24;
        case 0x2d2c30u: goto label_2d2c30;
        case 0x2d2c44u: goto label_2d2c44;
        case 0x2d2c58u: goto label_2d2c58;
        case 0x2d2c6cu: goto label_2d2c6c;
        case 0x2d2c80u: goto label_2d2c80;
        case 0x2d2ca8u: goto label_2d2ca8;
        case 0x2d2cbcu: goto label_2d2cbc;
        case 0x2d2cc4u: goto label_2d2cc4;
        default: break;
    }

    ctx->pc = 0x2d2a20u;

    // 0x2d2a20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d2a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d2a24: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d2a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d2a28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d2a28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d2a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a30: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d2a34: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d2a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d2a38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d2a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a3c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2d2a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d2a40: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d2a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d2a44: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2d2a48: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2d2a4c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2d2a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2d2a50: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D2A50u;
    SET_GPR_U32(ctx, 31, 0x2D2A58u);
    ctx->pc = 0x2D2A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A50u;
            // 0x2d2a54: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A58u; }
        if (ctx->pc != 0x2D2A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A58u; }
        if (ctx->pc != 0x2D2A58u) { return; }
    }
    ctx->pc = 0x2D2A58u;
label_2d2a58:
    // 0x2d2a58: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x2d2a58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d2a5c: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D2A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A64u);
    ctx->pc = 0x2D2A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A5Cu;
            // 0x2d2a60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A64u; }
        if (ctx->pc != 0x2D2A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A64u; }
        if (ctx->pc != 0x2D2A64u) { return; }
    }
    ctx->pc = 0x2D2A64u;
label_2d2a64:
    // 0x2d2a64: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2D2A64u;
    {
        const bool branch_taken_0x2d2a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A64u;
            // 0x2d2a68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a64) {
            ctx->pc = 0x2D2C50u;
            goto label_2d2c50;
        }
    }
    ctx->pc = 0x2D2A6Cu;
    // 0x2d2a6c: 0x0  nop
    ctx->pc = 0x2d2a6cu;
    // NOP
label_2d2a70:
    // 0x2d2a70: 0xc0b511c  jal         func_2D4470
    ctx->pc = 0x2D2A70u;
    SET_GPR_U32(ctx, 31, 0x2D2A78u);
    ctx->pc = 0x2D2A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A70u;
            // 0x2d2a74: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4470u;
    if (runtime->hasFunction(0x2D4470u)) {
        auto targetFn = runtime->lookupFunction(0x2D4470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A78u; }
        if (ctx->pc != 0x2D2A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4470_0x2d4470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A78u; }
        if (ctx->pc != 0x2D2A78u) { return; }
    }
    ctx->pc = 0x2D2A78u;
label_2d2a78:
    // 0x2d2a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a7c: 0x1600008d  bnez        $s0, . + 4 + (0x8D << 2)
    ctx->pc = 0x2D2A7Cu;
    {
        const bool branch_taken_0x2d2a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2a7c) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2A84u;
    // 0x2d2a84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d2a88:
    // 0x2d2a88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a8c: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x2d2a8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2d2a90: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D2A90u;
    SET_GPR_U32(ctx, 31, 0x2D2A98u);
    ctx->pc = 0x2D2A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A90u;
            // 0x2d2a94: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A98u; }
        if (ctx->pc != 0x2D2A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2A98u; }
        if (ctx->pc != 0x2D2A98u) { return; }
    }
    ctx->pc = 0x2D2A98u;
label_2d2a98:
    // 0x2d2a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a9c: 0x16000085  bnez        $s0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2D2A9Cu;
    {
        const bool branch_taken_0x2d2a9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A9Cu;
            // 0x2d2aa0: 0x2b3102a  slt         $v0, $s5, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a9c) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2AA4u;
    // 0x2d2aa4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2AA4u;
    {
        const bool branch_taken_0x2d2aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AA4u;
            // 0x2d2aa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2aa4) {
            ctx->pc = 0x2D2AD0u;
            goto label_2d2ad0;
        }
    }
    ctx->pc = 0x2D2AACu;
    // 0x2d2aac: 0x2752023  subu        $a0, $s3, $s5
    ctx->pc = 0x2d2aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x2d2ab0: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D2AB0u;
    SET_GPR_U32(ctx, 31, 0x2D2AB8u);
    ctx->pc = 0x2D2AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AB0u;
            // 0x2d2ab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (runtime->hasFunction(0x2D45E8u)) {
        auto targetFn = runtime->lookupFunction(0x2D45E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AB8u; }
        if (ctx->pc != 0x2D2AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D45E8_0x2d45e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AB8u; }
        if (ctx->pc != 0x2D2AB8u) { return; }
    }
    ctx->pc = 0x2D2AB8u;
label_2d2ab8:
    // 0x2d2ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2abc: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2ABCu;
    {
        const bool branch_taken_0x2d2abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2abc) {
            ctx->pc = 0x2D2AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2ABCu;
            // 0x2d2ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2AE8u;
            goto label_2d2ae8;
        }
    }
    ctx->pc = 0x2D2AC4u;
    // 0x2d2ac4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2D2AC4u;
    {
        const bool branch_taken_0x2d2ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ac4) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2ACCu;
    // 0x2d2acc: 0x0  nop
    ctx->pc = 0x2d2accu;
    // NOP
label_2d2ad0:
    // 0x2d2ad0: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2AD0u;
    SET_GPR_U32(ctx, 31, 0x2D2AD8u);
    ctx->pc = 0x2D2AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AD0u;
            // 0x2d2ad4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AD8u; }
        if (ctx->pc != 0x2D2AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AD8u; }
        if (ctx->pc != 0x2D2AD8u) { return; }
    }
    ctx->pc = 0x2D2AD8u;
label_2d2ad8:
    // 0x2d2ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2adc: 0x16000075  bnez        $s0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2D2ADCu;
    {
        const bool branch_taken_0x2d2adc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2adc) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2AE4u;
    // 0x2d2ae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d2ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d2ae8:
    // 0x2d2ae8: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D2AE8u;
    SET_GPR_U32(ctx, 31, 0x2D2AF0u);
    ctx->pc = 0x2D2AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2AE8u;
            // 0x2d2aec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AF0u; }
        if (ctx->pc != 0x2D2AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2AF0u; }
        if (ctx->pc != 0x2D2AF0u) { return; }
    }
    ctx->pc = 0x2D2AF0u;
label_2d2af0:
    // 0x2d2af0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2af4: 0x1600006f  bnez        $s0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2D2AF4u;
    {
        const bool branch_taken_0x2d2af4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2af4) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2AFCu;
    // 0x2d2afc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2b00: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D2B00u;
    SET_GPR_U32(ctx, 31, 0x2D2B08u);
    ctx->pc = 0x2D2B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B00u;
            // 0x2d2b04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B08u; }
        if (ctx->pc != 0x2D2B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B08u; }
        if (ctx->pc != 0x2D2B08u) { return; }
    }
    ctx->pc = 0x2D2B08u;
label_2d2b08:
    // 0x2d2b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b0c: 0x16000069  bnez        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D2B0Cu;
    {
        const bool branch_taken_0x2d2b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B0Cu;
            // 0x2d2b10: 0x2751023  subu        $v0, $s3, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b0c) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2B14u;
    // 0x2d2b14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2D2B14u;
    {
        const bool branch_taken_0x2d2b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B14u;
            // 0x2d2b18: 0x2453ffff  addiu       $s3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b14) {
            ctx->pc = 0x2D2B98u;
            goto label_2d2b98;
        }
    }
    ctx->pc = 0x2D2B1Cu;
    // 0x2d2b1c: 0x0  nop
    ctx->pc = 0x2d2b1cu;
    // NOP
label_2d2b20:
    // 0x2d2b20: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2d2b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d2b24: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D2B24u;
    {
        const bool branch_taken_0x2d2b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b24) {
            ctx->pc = 0x2D2B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B24u;
            // 0x2d2b28: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B98u;
            goto label_2d2b98;
        }
    }
    ctx->pc = 0x2D2B2Cu;
    // 0x2d2b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b34: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d2b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b38: 0xc0b4b6a  jal         func_2D2DA8
    ctx->pc = 0x2D2B38u;
    SET_GPR_U32(ctx, 31, 0x2D2B40u);
    ctx->pc = 0x2D2B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B38u;
            // 0x2d2b3c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DA8u;
    if (runtime->hasFunction(0x2D2DA8u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B40u; }
        if (ctx->pc != 0x2D2B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DA8_0x2d2da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B40u; }
        if (ctx->pc != 0x2D2B40u) { return; }
    }
    ctx->pc = 0x2D2B40u;
label_2d2b40:
    // 0x2d2b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b44: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D2B44u;
    {
        const bool branch_taken_0x2d2b44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b44) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2B4Cu;
    // 0x2d2b4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d2b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d2b50:
    // 0x2d2b50: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2B50u;
    SET_GPR_U32(ctx, 31, 0x2D2B58u);
    ctx->pc = 0x2D2B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B50u;
            // 0x2d2b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B58u; }
        if (ctx->pc != 0x2D2B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B58u; }
        if (ctx->pc != 0x2D2B58u) { return; }
    }
    ctx->pc = 0x2D2B58u;
label_2d2b58:
    // 0x2d2b58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b5c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2B5Cu;
    {
        const bool branch_taken_0x2d2b5c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D2B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B5Cu;
            // 0x2d2b60: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b5c) {
            ctx->pc = 0x2D2B78u;
            goto label_2d2b78;
        }
    }
    ctx->pc = 0x2D2B64u;
    // 0x2d2b64: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2B64u;
    SET_GPR_U32(ctx, 31, 0x2D2B6Cu);
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B6Cu; }
        if (ctx->pc != 0x2D2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B6Cu; }
        if (ctx->pc != 0x2D2B6Cu) { return; }
    }
    ctx->pc = 0x2D2B6Cu;
label_2d2b6c:
    // 0x2d2b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b70: 0x1200fff7  beqz        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D2B70u;
    {
        const bool branch_taken_0x2d2b70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B70u;
            // 0x2d2b74: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b70) {
            ctx->pc = 0x2D2B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2b50;
        }
    }
    ctx->pc = 0x2D2B78u;
label_2d2b78:
    // 0x2d2b78: 0x1600004e  bnez        $s0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2D2B78u;
    {
        const bool branch_taken_0x2d2b78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b78) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2B80u;
    // 0x2d2b80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d2b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b84: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2B84u;
    SET_GPR_U32(ctx, 31, 0x2D2B8Cu);
    ctx->pc = 0x2D2B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B84u;
            // 0x2d2b88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B8Cu; }
        if (ctx->pc != 0x2D2B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B8Cu; }
        if (ctx->pc != 0x2D2B8Cu) { return; }
    }
    ctx->pc = 0x2D2B8Cu;
label_2d2b8c:
    // 0x2d2b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b90: 0x16000048  bnez        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2D2B90u;
    {
        const bool branch_taken_0x2d2b90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2B90u;
            // 0x2d2b94: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b90) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2B98u;
label_2d2b98:
    // 0x2d2b98: 0x6600015  bltz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D2B98u;
    {
        const bool branch_taken_0x2d2b98 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2d2b98) {
            ctx->pc = 0x2D2BF0u;
            goto label_2d2bf0;
        }
    }
    ctx->pc = 0x2D2BA0u;
    // 0x2d2ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2ba4: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2BA4u;
    SET_GPR_U32(ctx, 31, 0x2D2BACu);
    ctx->pc = 0x2D2BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BA4u;
            // 0x2d2ba8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BACu; }
        if (ctx->pc != 0x2D2BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BACu; }
        if (ctx->pc != 0x2D2BACu) { return; }
    }
    ctx->pc = 0x2D2BACu;
label_2d2bac:
    // 0x2d2bac: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2BACu;
    {
        const bool branch_taken_0x2d2bac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d2bac) {
            ctx->pc = 0x2D2BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BACu;
            // 0x2d2bb0: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2BD0u;
            goto label_2d2bd0;
        }
    }
    ctx->pc = 0x2D2BB4u;
    // 0x2d2bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2bb8: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2BB8u;
    SET_GPR_U32(ctx, 31, 0x2D2BC0u);
    ctx->pc = 0x2D2BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BB8u;
            // 0x2d2bbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BC0u; }
        if (ctx->pc != 0x2D2BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BC0u; }
        if (ctx->pc != 0x2D2BC0u) { return; }
    }
    ctx->pc = 0x2D2BC0u;
label_2d2bc0:
    // 0x2d2bc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2bc4: 0x1600003b  bnez        $s0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D2BC4u;
    {
        const bool branch_taken_0x2d2bc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bc4) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2BCCu;
    // 0x2d2bcc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x2d2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2d2bd0:
    // 0x2d2bd0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2d2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d2bd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2bdc: 0xc0b4b3c  jal         func_2D2CF0
    ctx->pc = 0x2D2BDCu;
    SET_GPR_U32(ctx, 31, 0x2D2BE4u);
    ctx->pc = 0x2D2BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BDCu;
            // 0x2d2be0: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BE4u; }
        if (ctx->pc != 0x2D2BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2BE4u; }
        if (ctx->pc != 0x2D2BE4u) { return; }
    }
    ctx->pc = 0x2D2BE4u;
label_2d2be4:
    // 0x2d2be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2be8: 0x5200ffcd  beql        $s0, $zero, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2D2BE8u;
    {
        const bool branch_taken_0x2d2be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2be8) {
            ctx->pc = 0x2D2BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BE8u;
            // 0x2d2bec: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2b20;
        }
    }
    ctx->pc = 0x2D2BF0u;
label_2d2bf0:
    // 0x2d2bf0: 0x16000030  bnez        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D2BF0u;
    {
        const bool branch_taken_0x2d2bf0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2bf0) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2BF8u;
    // 0x2d2bf8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2bfc: 0x5880000a  blezl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2BFCu;
    {
        const bool branch_taken_0x2d2bfc = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d2bfc) {
            ctx->pc = 0x2D2C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2BFCu;
            // 0x2d2c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2C28u;
            goto label_2d2c28;
        }
    }
    ctx->pc = 0x2D2C04u;
    // 0x2d2c04: 0xc0b5190  jal         func_2D4640
    ctx->pc = 0x2D2C04u;
    SET_GPR_U32(ctx, 31, 0x2D2C0Cu);
    ctx->pc = 0x2D2C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C04u;
            // 0x2d2c08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4640u;
    if (runtime->hasFunction(0x2D4640u)) {
        auto targetFn = runtime->lookupFunction(0x2D4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C0Cu; }
        if (ctx->pc != 0x2D2C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4640_0x2d4640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C0Cu; }
        if (ctx->pc != 0x2D2C0Cu) { return; }
    }
    ctx->pc = 0x2D2C0Cu;
label_2d2c0c:
    // 0x2d2c0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d2c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c10: 0xc0b5190  jal         func_2D4640
    ctx->pc = 0x2D2C10u;
    SET_GPR_U32(ctx, 31, 0x2D2C18u);
    ctx->pc = 0x2D2C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C10u;
            // 0x2d2c14: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4640u;
    if (runtime->hasFunction(0x2D4640u)) {
        auto targetFn = runtime->lookupFunction(0x2D4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C18u; }
        if (ctx->pc != 0x2D2C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4640_0x2d4640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C18u; }
        if (ctx->pc != 0x2D2C18u) { return; }
    }
    ctx->pc = 0x2D2C18u;
label_2d2c18:
    // 0x2d2c18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c1c: 0xc0b5190  jal         func_2D4640
    ctx->pc = 0x2D2C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C24u);
    ctx->pc = 0x2D2C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C1Cu;
            // 0x2d2c20: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4640u;
    if (runtime->hasFunction(0x2D4640u)) {
        auto targetFn = runtime->lookupFunction(0x2D4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C24u; }
        if (ctx->pc != 0x2D2C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4640_0x2d4640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C24u; }
        if (ctx->pc != 0x2D2C24u) { return; }
    }
    ctx->pc = 0x2D2C24u;
label_2d2c24:
    // 0x2d2c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2c28:
    // 0x2d2c28: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2C28u;
    SET_GPR_U32(ctx, 31, 0x2D2C30u);
    ctx->pc = 0x2D2C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C28u;
            // 0x2d2c2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C30u; }
        if (ctx->pc != 0x2D2C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C30u; }
        if (ctx->pc != 0x2D2C30u) { return; }
    }
    ctx->pc = 0x2D2C30u;
label_2d2c30:
    // 0x2d2c30: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D2C30u;
    {
        const bool branch_taken_0x2d2c30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d2c30) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2C38u;
    // 0x2d2c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c3c: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2C3Cu;
    SET_GPR_U32(ctx, 31, 0x2D2C44u);
    ctx->pc = 0x2D2C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C3Cu;
            // 0x2d2c40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C44u; }
        if (ctx->pc != 0x2D2C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C44u; }
        if (ctx->pc != 0x2D2C44u) { return; }
    }
    ctx->pc = 0x2D2C44u;
label_2d2c44:
    // 0x2d2c44: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D2C44u;
    {
        const bool branch_taken_0x2d2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C44u;
            // 0x2d2c48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c44) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2C4Cu;
    // 0x2d2c4c: 0x0  nop
    ctx->pc = 0x2d2c4cu;
    // NOP
label_2d2c50:
    // 0x2d2c50: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2C50u;
    SET_GPR_U32(ctx, 31, 0x2D2C58u);
    ctx->pc = 0x2D2C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C50u;
            // 0x2d2c54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C58u; }
        if (ctx->pc != 0x2D2C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C58u; }
        if (ctx->pc != 0x2D2C58u) { return; }
    }
    ctx->pc = 0x2D2C58u;
label_2d2c58:
    // 0x2d2c58: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2C58u;
    {
        const bool branch_taken_0x2d2c58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D2C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C58u;
            // 0x2d2c5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c58) {
            ctx->pc = 0x2D2C78u;
            goto label_2d2c78;
        }
    }
    ctx->pc = 0x2D2C60u;
    // 0x2d2c60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d2c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c64: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D2C64u;
    SET_GPR_U32(ctx, 31, 0x2D2C6Cu);
    ctx->pc = 0x2D2C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C64u;
            // 0x2d2c68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C6Cu; }
        if (ctx->pc != 0x2D2C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C6Cu; }
        if (ctx->pc != 0x2D2C6Cu) { return; }
    }
    ctx->pc = 0x2D2C6Cu;
label_2d2c6c:
    // 0x2d2c6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D2C6Cu;
    {
        const bool branch_taken_0x2d2c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C6Cu;
            // 0x2d2c70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c6c) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2C74u;
    // 0x2d2c74: 0x0  nop
    ctx->pc = 0x2d2c74u;
    // NOP
label_2d2c78:
    // 0x2d2c78: 0xc0b51e8  jal         func_2D47A0
    ctx->pc = 0x2D2C78u;
    SET_GPR_U32(ctx, 31, 0x2D2C80u);
    ctx->pc = 0x2D2C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C78u;
            // 0x2d2c7c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D47A0u;
    if (runtime->hasFunction(0x2D47A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C80u; }
        if (ctx->pc != 0x2D2C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D47A0_0x2d47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2C80u; }
        if (ctx->pc != 0x2D2C80u) { return; }
    }
    ctx->pc = 0x2D2C80u;
label_2d2c80:
    // 0x2d2c80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2c84: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2C84u;
    {
        const bool branch_taken_0x2d2c84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C84u;
            // 0x2d2c88: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c84) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2C8Cu;
    // 0x2d2c8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d2c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2c90: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2C90u;
    {
        const bool branch_taken_0x2d2c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D2C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C90u;
            // 0x2d2c94: 0x24100107  addiu       $s0, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2c90) {
            ctx->pc = 0x2D2CB4u;
            goto label_2d2cb4;
        }
    }
    ctx->pc = 0x2D2C98u;
    // 0x2d2c98: 0x5880ff7b  blezl       $a0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2D2C98u;
    {
        const bool branch_taken_0x2d2c98 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d2c98) {
            ctx->pc = 0x2D2C9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2C98u;
            // 0x2d2c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2a88;
        }
    }
    ctx->pc = 0x2D2CA0u;
    // 0x2d2ca0: 0xc0b511c  jal         func_2D4470
    ctx->pc = 0x2D2CA0u;
    SET_GPR_U32(ctx, 31, 0x2D2CA8u);
    ctx->pc = 0x2D2CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CA0u;
            // 0x2d2ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4470u;
    if (runtime->hasFunction(0x2D4470u)) {
        auto targetFn = runtime->lookupFunction(0x2D4470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CA8u; }
        if (ctx->pc != 0x2D2CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4470_0x2d4470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CA8u; }
        if (ctx->pc != 0x2D2CA8u) { return; }
    }
    ctx->pc = 0x2D2CA8u;
label_2d2ca8:
    // 0x2d2ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cac: 0x5200ff70  beql        $s0, $zero, . + 4 + (-0x90 << 2)
    ctx->pc = 0x2D2CACu;
    {
        const bool branch_taken_0x2d2cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2cac) {
            ctx->pc = 0x2D2CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CACu;
            // 0x2d2cb0: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2a70;
        }
    }
    ctx->pc = 0x2D2CB4u;
label_2d2cb4:
    // 0x2d2cb4: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D2CB4u;
    SET_GPR_U32(ctx, 31, 0x2D2CBCu);
    ctx->pc = 0x2D2CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CB4u;
            // 0x2d2cb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CBCu; }
        if (ctx->pc != 0x2D2CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CBCu; }
        if (ctx->pc != 0x2D2CBCu) { return; }
    }
    ctx->pc = 0x2D2CBCu;
label_2d2cbc:
    // 0x2d2cbc: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D2CBCu;
    SET_GPR_U32(ctx, 31, 0x2D2CC4u);
    ctx->pc = 0x2D2CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CBCu;
            // 0x2d2cc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CC4u; }
        if (ctx->pc != 0x2D2CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2CC4u; }
        if (ctx->pc != 0x2D2CC4u) { return; }
    }
    ctx->pc = 0x2D2CC4u;
label_2d2cc4:
    // 0x2d2cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d2cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2cc8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d2cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2ccc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d2cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2cd0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d2cd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2cd4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d2cd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2cd8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d2cd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2cdc: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d2cdcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d2ce0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2d2ce0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2ce4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2d2ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d2ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2CE8u;
            // 0x2d2cec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2CF0u;
    ctx->pc = 0x2d2cf0u;
}
