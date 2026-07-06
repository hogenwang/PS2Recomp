#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFDE8
// Address: 0x1dfde8 - 0x1dff10
void sub_001DFDE8_0x1dfde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFDE8_0x1dfde8");
#endif

    switch (ctx->pc) {
        case 0x1dfe48u: goto label_1dfe48;
        case 0x1dfe50u: goto label_1dfe50;
        case 0x1dfe6cu: goto label_1dfe6c;
        case 0x1dfe8cu: goto label_1dfe8c;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfeb0u: goto label_1dfeb0;
        case 0x1dfebcu: goto label_1dfebc;
        case 0x1dfed4u: goto label_1dfed4;
        default: break;
    }

    ctx->pc = 0x1dfde8u;

    // 0x1dfde8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dfde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1dfdec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfdf0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1dfdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1dfdf4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1dfdf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdf8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dfdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dfdfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dfdfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe00: 0x2aa30800  slti        $v1, $s5, 0x800
    ctx->pc = 0x1dfe00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x1dfe04: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1dfe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1dfe08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dfe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dfe0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1dfe0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dfe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dfe14: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1dfe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1dfe18: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1dfe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1dfe1c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1dfe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1dfe20: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dfe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1dfe24: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DFE24u;
    {
        const bool branch_taken_0x1dfe24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE24u;
            // 0x1dfe28: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe24) {
            ctx->pc = 0x1DFEE4u;
            goto label_1dfee4;
        }
    }
    ctx->pc = 0x1DFE2Cu;
    // 0x1dfe2c: 0x1260002d  beqz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DFE2Cu;
    {
        const bool branch_taken_0x1dfe2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE2Cu;
            // 0x1dfe30: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe2c) {
            ctx->pc = 0x1DFEE4u;
            goto label_1dfee4;
        }
    }
    ctx->pc = 0x1DFE34u;
    // 0x1dfe34: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1dfe34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfe38: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfe3c: 0x24120800  addiu       $s2, $zero, 0x800
    ctx->pc = 0x1dfe3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1dfe40: 0x2722021  addu        $a0, $s3, $s2
    ctx->pc = 0x1dfe40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1dfe44: 0x0  nop
    ctx->pc = 0x1dfe44u;
    // NOP
label_1dfe48:
    // 0x1dfe48: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1DFE48u;
    SET_GPR_U32(ctx, 31, 0x1DFE50u);
    ctx->pc = 0x1DFE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE48u;
            // 0x1dfe4c: 0x2b22823  subu        $a1, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (runtime->hasFunction(0x1FEE00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE50u; }
        if (ctx->pc != 0x1DFE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE00_0x1fee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE50u; }
        if (ctx->pc != 0x1DFE50u) { return; }
    }
    ctx->pc = 0x1DFE50u;
label_1dfe50:
    // 0x1dfe50: 0x26520800  addiu       $s2, $s2, 0x800
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2048));
    // 0x1dfe54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfe54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dfe58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe5c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DFE5Cu;
    {
        const bool branch_taken_0x1dfe5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE5Cu;
            // 0x1dfe60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe5c) {
            ctx->pc = 0x1DFED4u;
            goto label_1dfed4;
        }
    }
    ctx->pc = 0x1DFE64u;
    // 0x1dfe64: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x1DFE64u;
    SET_GPR_U32(ctx, 31, 0x1DFE6Cu);
    ctx->pc = 0x1FF018u;
    if (runtime->hasFunction(0x1FF018u)) {
        auto targetFn = runtime->lookupFunction(0x1FF018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE6Cu; }
        if (ctx->pc != 0x1DFE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF018_0x1ff018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE6Cu; }
        if (ctx->pc != 0x1DFE6Cu) { return; }
    }
    ctx->pc = 0x1DFE6Cu;
label_1dfe6c:
    // 0x1dfe6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dfe6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe70: 0x14770015  bne         $v1, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFE70u;
    {
        const bool branch_taken_0x1dfe70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x1DFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE70u;
            // 0x1dfe74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe70) {
            ctx->pc = 0x1DFEC8u;
            goto label_1dfec8;
        }
    }
    ctx->pc = 0x1DFE78u;
    // 0x1dfe78: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1dfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfe7c: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DFE7Cu;
    {
        const bool branch_taken_0x1dfe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dfe7c) {
            ctx->pc = 0x1DFE80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE7Cu;
            // 0x1dfe80: 0xae360014  sw          $s6, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFECCu;
            goto label_1dfecc;
        }
    }
    ctx->pc = 0x1DFE84u;
    // 0x1dfe84: 0xc077f6e  jal         func_1DFDB8
    ctx->pc = 0x1DFE84u;
    SET_GPR_U32(ctx, 31, 0x1DFE8Cu);
    ctx->pc = 0x1DFDB8u;
    if (runtime->hasFunction(0x1DFDB8u)) {
        auto targetFn = runtime->lookupFunction(0x1DFDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE8Cu; }
        if (ctx->pc != 0x1DFE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFDB8_0x1dfdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE8Cu; }
        if (ctx->pc != 0x1DFE8Cu) { return; }
    }
    ctx->pc = 0x1DFE8Cu;
label_1dfe8c:
    // 0x1dfe8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfe8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe90: 0xc077fd4  jal         func_1DFF50
    ctx->pc = 0x1DFE90u;
    SET_GPR_U32(ctx, 31, 0x1DFE98u);
    ctx->pc = 0x1DFE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE90u;
            // 0x1dfe94: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE98u; }
        if (ctx->pc != 0x1DFE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFE98u; }
        if (ctx->pc != 0x1DFE98u) { return; }
    }
    ctx->pc = 0x1DFE98u;
label_1dfe98:
    // 0x1dfe98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfe98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe9c: 0xc077ffc  jal         func_1DFFF0
    ctx->pc = 0x1DFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DFEA4u);
    ctx->pc = 0x1DFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFE9Cu;
            // 0x1dfea0: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFF0u;
    if (runtime->hasFunction(0x1DFFF0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEA4u; }
        if (ctx->pc != 0x1DFEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFFF0_0x1dfff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEA4u; }
        if (ctx->pc != 0x1DFEA4u) { return; }
    }
    ctx->pc = 0x1DFEA4u;
label_1dfea4:
    // 0x1dfea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfea8: 0xc077ff0  jal         func_1DFFC0
    ctx->pc = 0x1DFEA8u;
    SET_GPR_U32(ctx, 31, 0x1DFEB0u);
    ctx->pc = 0x1DFEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEA8u;
            // 0x1dfeac: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFC0u;
    if (runtime->hasFunction(0x1DFFC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEB0u; }
        if (ctx->pc != 0x1DFEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFFC0_0x1dffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEB0u; }
        if (ctx->pc != 0x1DFEB0u) { return; }
    }
    ctx->pc = 0x1DFEB0u;
label_1dfeb0:
    // 0x1dfeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfeb4: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1DFEB4u;
    SET_GPR_U32(ctx, 31, 0x1DFEBCu);
    ctx->pc = 0x1DFEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEB4u;
            // 0x1dfeb8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (runtime->hasFunction(0x1FEEC8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEBCu; }
        if (ctx->pc != 0x1DFEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEEC8_0x1feec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFEBCu; }
        if (ctx->pc != 0x1DFEBCu) { return; }
    }
    ctx->pc = 0x1DFEBCu;
label_1dfebc:
    // 0x1dfebc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DFEBCu;
    {
        const bool branch_taken_0x1dfebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEBCu;
            // 0x1dfec0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfebc) {
            ctx->pc = 0x1DFEE8u;
            goto label_1dfee8;
        }
    }
    ctx->pc = 0x1DFEC4u;
    // 0x1dfec4: 0x0  nop
    ctx->pc = 0x1dfec4u;
    // NOP
label_1dfec8:
    // 0x1dfec8: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x1dfec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
label_1dfecc:
    // 0x1dfecc: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1DFECCu;
    SET_GPR_U32(ctx, 31, 0x1DFED4u);
    ctx->pc = 0x1DFED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFECCu;
            // 0x1dfed0: 0xae360018  sw          $s6, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (runtime->hasFunction(0x1FEEC8u)) {
        auto targetFn = runtime->lookupFunction(0x1FEEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFED4u; }
        if (ctx->pc != 0x1DFED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEEC8_0x1feec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFED4u; }
        if (ctx->pc != 0x1DFED4u) { return; }
    }
    ctx->pc = 0x1DFED4u;
label_1dfed4:
    // 0x1dfed4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1dfed4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1dfed8: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x1dfed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dfedc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1DFEDCu;
    {
        const bool branch_taken_0x1dfedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFEDCu;
            // 0x1dfee0: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfedc) {
            ctx->pc = 0x1DFE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dfe48;
        }
    }
    ctx->pc = 0x1DFEE4u;
label_1dfee4:
    // 0x1dfee4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dfee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfee8:
    // 0x1dfee8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dfee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfeec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dfeecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfef0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1dfef0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dfef4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1dfef4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfef8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1dfef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dfefc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1dfefcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dff00: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1dff00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dff04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dff04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dff08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFF08u;
            // 0x1dff0c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DFF10u;
    ctx->pc = 0x1dff10u;
}
