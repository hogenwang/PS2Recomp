#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025DF38
// Address: 0x25df38 - 0x25e048
void sub_0025DF38_0x25df38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DF38_0x25df38");
#endif

    switch (ctx->pc) {
        case 0x25df78u: goto label_25df78;
        case 0x25df8cu: goto label_25df8c;
        case 0x25dfa8u: goto label_25dfa8;
        case 0x25dfd0u: goto label_25dfd0;
        case 0x25dff0u: goto label_25dff0;
        case 0x25e008u: goto label_25e008;
        case 0x25e014u: goto label_25e014;
        case 0x25e020u: goto label_25e020;
        default: break;
    }

    ctx->pc = 0x25df38u;

    // 0x25df38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25df38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25df3c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x25df3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25df40: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x25df40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25df44: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x25df44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25df4c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25df4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df50: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x25df50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25df54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25df54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25df5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x25df5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df60: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x25df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x25df64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25df64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df68: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25df6c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x25df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x25df70: 0xc09728e  jal         func_25CA38
    ctx->pc = 0x25DF70u;
    SET_GPR_U32(ctx, 31, 0x25DF78u);
    ctx->pc = 0x25DF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF70u;
            // 0x25df74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CA38u;
    if (runtime->hasFunction(0x25CA38u)) {
        auto targetFn = runtime->lookupFunction(0x25CA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF78u; }
        if (ctx->pc != 0x25DF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CA38_0x25ca38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF78u; }
        if (ctx->pc != 0x25DF78u) { return; }
    }
    ctx->pc = 0x25DF78u;
label_25df78:
    // 0x25df78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25df78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df7c: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x25DF7Cu;
    {
        const bool branch_taken_0x25df7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF7Cu;
            // 0x25df80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df7c) {
            ctx->pc = 0x25E020u;
            goto label_25e020;
        }
    }
    ctx->pc = 0x25DF84u;
    // 0x25df84: 0xc08c0ca  jal         func_230328
    ctx->pc = 0x25DF84u;
    SET_GPR_U32(ctx, 31, 0x25DF8Cu);
    ctx->pc = 0x25DF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF84u;
            // 0x25df88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (runtime->hasFunction(0x230328u)) {
        auto targetFn = runtime->lookupFunction(0x230328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF8Cu; }
        if (ctx->pc != 0x25DF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230328_0x230328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DF8Cu; }
        if (ctx->pc != 0x25DF8Cu) { return; }
    }
    ctx->pc = 0x25DF8Cu;
label_25df8c:
    // 0x25df8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25df8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25df90: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DF90u;
    {
        const bool branch_taken_0x25df90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF90u;
            // 0x25df94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df90) {
            ctx->pc = 0x25DFA0u;
            goto label_25dfa0;
        }
    }
    ctx->pc = 0x25DF98u;
    // 0x25df98: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25DF98u;
    {
        const bool branch_taken_0x25df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DF98u;
            // 0x25df9c: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25df98) {
            ctx->pc = 0x25E00Cu;
            goto label_25e00c;
        }
    }
    ctx->pc = 0x25DFA0u;
label_25dfa0:
    // 0x25dfa0: 0xc0973a6  jal         func_25CE98
    ctx->pc = 0x25DFA0u;
    SET_GPR_U32(ctx, 31, 0x25DFA8u);
    ctx->pc = 0x25DFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFA0u;
            // 0x25dfa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CE98u;
    if (runtime->hasFunction(0x25CE98u)) {
        auto targetFn = runtime->lookupFunction(0x25CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFA8u; }
        if (ctx->pc != 0x25DFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CE98_0x25ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFA8u; }
        if (ctx->pc != 0x25DFA8u) { return; }
    }
    ctx->pc = 0x25DFA8u;
label_25dfa8:
    // 0x25dfa8: 0x2e2200ed  sltiu       $v0, $s1, 0xED
    ctx->pc = 0x25dfa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)237) ? 1 : 0);
    // 0x25dfac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DFACu;
    {
        const bool branch_taken_0x25dfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dfac) {
            ctx->pc = 0x25DFBCu;
            goto label_25dfbc;
        }
    }
    ctx->pc = 0x25DFB4u;
    // 0x25dfb4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25DFB4u;
    {
        const bool branch_taken_0x25dfb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFB4u;
            // 0x25dfb8: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfb4) {
            ctx->pc = 0x25E00Cu;
            goto label_25e00c;
        }
    }
    ctx->pc = 0x25DFBCu;
label_25dfbc:
    // 0x25dfbc: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x25DFBCu;
    {
        const bool branch_taken_0x25dfbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFBCu;
            // 0x25dfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfbc) {
            ctx->pc = 0x25DFF8u;
            goto label_25dff8;
        }
    }
    ctx->pc = 0x25DFC4u;
    // 0x25dfc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25dfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfc8: 0xc08a922  jal         func_22A488
    ctx->pc = 0x25DFC8u;
    SET_GPR_U32(ctx, 31, 0x25DFD0u);
    ctx->pc = 0x25DFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFC8u;
            // 0x25dfcc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFD0u; }
        if (ctx->pc != 0x25DFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFD0u; }
        if (ctx->pc != 0x25DFD0u) { return; }
    }
    ctx->pc = 0x25DFD0u;
label_25dfd0:
    // 0x25dfd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x25dfd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfd4: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x25DFD4u;
    {
        const bool branch_taken_0x25dfd4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dfd4) {
            ctx->pc = 0x25DFD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFD4u;
            // 0x25dfd8: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x25DFE4u;
            goto label_25dfe4;
        }
    }
    ctx->pc = 0x25DFDCu;
    // 0x25dfdc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25DFDCu;
    {
        const bool branch_taken_0x25dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFDCu;
            // 0x25dfe0: 0x2410000c  addiu       $s0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dfdc) {
            ctx->pc = 0x25E00Cu;
            goto label_25e00c;
        }
    }
    ctx->pc = 0x25DFE4u;
label_25dfe4:
    // 0x25dfe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25dfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dfe8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x25DFE8u;
    SET_GPR_U32(ctx, 31, 0x25DFF0u);
    ctx->pc = 0x25DFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25DFE8u;
            // 0x25dfec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFF0u; }
        if (ctx->pc != 0x25DFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DFF0u; }
        if (ctx->pc != 0x25DFF0u) { return; }
    }
    ctx->pc = 0x25DFF0u;
label_25dff0:
    // 0x25dff0: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x25dff0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
    // 0x25dff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25dff8:
    // 0x25dff8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25dff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dffc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x25dffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e000: 0xc08be9e  jal         func_22FA78
    ctx->pc = 0x25E000u;
    SET_GPR_U32(ctx, 31, 0x25E008u);
    ctx->pc = 0x25E004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E000u;
            // 0x25e004: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FA78u;
    if (runtime->hasFunction(0x22FA78u)) {
        auto targetFn = runtime->lookupFunction(0x22FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E008u; }
        if (ctx->pc != 0x25E008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FA78_0x22fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E008u; }
        if (ctx->pc != 0x25E008u) { return; }
    }
    ctx->pc = 0x25E008u;
label_25e008:
    // 0x25e008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e00c:
    // 0x25e00c: 0xc0973ac  jal         func_25CEB0
    ctx->pc = 0x25E00Cu;
    SET_GPR_U32(ctx, 31, 0x25E014u);
    ctx->pc = 0x25E010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E00Cu;
            // 0x25e010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEB0u;
    if (runtime->hasFunction(0x25CEB0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E014u; }
        if (ctx->pc != 0x25E014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEB0_0x25ceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E014u; }
        if (ctx->pc != 0x25E014u) { return; }
    }
    ctx->pc = 0x25E014u;
label_25e014:
    // 0x25e014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e018: 0xc0972da  jal         func_25CB68
    ctx->pc = 0x25E018u;
    SET_GPR_U32(ctx, 31, 0x25E020u);
    ctx->pc = 0x25E01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E018u;
            // 0x25e01c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CB68u;
    if (runtime->hasFunction(0x25CB68u)) {
        auto targetFn = runtime->lookupFunction(0x25CB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E020u; }
        if (ctx->pc != 0x25E020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CB68_0x25cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E020u; }
        if (ctx->pc != 0x25E020u) { return; }
    }
    ctx->pc = 0x25E020u;
label_25e020:
    // 0x25e020: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e024: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x25e024u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e028: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x25e028u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e02c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25e02cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e030: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x25e030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25e034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e038: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x25e038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e040: 0x3e00008  jr          $ra
    ctx->pc = 0x25E040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E040u;
            // 0x25e044: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25E048u;
    ctx->pc = 0x25e048u;
}
