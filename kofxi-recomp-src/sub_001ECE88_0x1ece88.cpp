#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECE88
// Address: 0x1ece88 - 0x1ecfe0
void sub_001ECE88_0x1ece88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE88_0x1ece88");
#endif

    switch (ctx->pc) {
        case 0x1eceacu: goto label_1eceac;
        case 0x1eced0u: goto label_1eced0;
        case 0x1ecf14u: goto label_1ecf14;
        case 0x1ecf44u: goto label_1ecf44;
        case 0x1ecf50u: goto label_1ecf50;
        case 0x1ecf60u: goto label_1ecf60;
        case 0x1ecf74u: goto label_1ecf74;
        case 0x1ecf88u: goto label_1ecf88;
        case 0x1ecf9cu: goto label_1ecf9c;
        case 0x1ecfb0u: goto label_1ecfb0;
        case 0x1ecfc0u: goto label_1ecfc0;
        default: break;
    }

    ctx->pc = 0x1ece88u;

    // 0x1ece88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ece88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ece8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ece8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ece90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ece90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ece94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ece98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ece9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ece9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ecea0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ecea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ecea4: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x1ECEA4u;
    SET_GPR_U32(ctx, 31, 0x1ECEACu);
    ctx->pc = 0x1ECEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEA4u;
            // 0x1ecea8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF018u;
    if (runtime->hasFunction(0x1FF018u)) {
        auto targetFn = runtime->lookupFunction(0x1FF018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEACu; }
        if (ctx->pc != 0x1ECEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF018_0x1ff018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECEACu; }
        if (ctx->pc != 0x1ECEACu) { return; }
    }
    ctx->pc = 0x1ECEACu;
label_1eceac:
    // 0x1eceac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1eceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eceb0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x1eceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1eceb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1eceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eceb8: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1eceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1ecebc: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1ecebcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ecec0: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1ECEC0u;
    {
        const bool branch_taken_0x1ecec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECEC0u;
            // 0x1ecec4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecec0) {
            ctx->pc = 0x1ECFC8u;
            goto label_1ecfc8;
        }
    }
    ctx->pc = 0x1ECEC8u;
    // 0x1ecec8: 0xc07fd02  jal         func_1FF408
    ctx->pc = 0x1ECEC8u;
    SET_GPR_U32(ctx, 31, 0x1ECED0u);
    ctx->pc = 0x1FF408u;
    if (runtime->hasFunction(0x1FF408u)) {
        auto targetFn = runtime->lookupFunction(0x1FF408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECED0u; }
        if (ctx->pc != 0x1ECED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF408_0x1ff408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECED0u; }
        if (ctx->pc != 0x1ECED0u) { return; }
    }
    ctx->pc = 0x1ECED0u;
label_1eced0:
    // 0x1eced0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECED0u;
    {
        const bool branch_taken_0x1eced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECED0u;
            // 0x1eced4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eced0) {
            ctx->pc = 0x1ECEE4u;
            goto label_1ecee4;
        }
    }
    ctx->pc = 0x1ECED8u;
    // 0x1eced8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1eced8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1ecedc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ecedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ecee0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ecee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ecee4:
    // 0x1ecee4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecee8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1ecee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eceec: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x1eceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1ecef0: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x1ecef0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ecef4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ecef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ecef8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ecef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ecefc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1ecefcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1ecf00: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1ecf00u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1ecf04: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ecf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ecf08: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1ecf08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ecf0c: 0xc07fe46  jal         func_1FF918
    ctx->pc = 0x1ECF0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF14u);
    ctx->pc = 0x1ECF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF0Cu;
            // 0x1ecf10: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF918u;
    if (runtime->hasFunction(0x1FF918u)) {
        auto targetFn = runtime->lookupFunction(0x1FF918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF14u; }
        if (ctx->pc != 0x1ECF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF918_0x1ff918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF14u; }
        if (ctx->pc != 0x1ECF14u) { return; }
    }
    ctx->pc = 0x1ECF14u;
label_1ecf14:
    // 0x1ecf14: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ecf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ecf18: 0x2a10006e  slti        $s0, $s0, 0x6E
    ctx->pc = 0x1ecf18u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x1ecf1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ecf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf24: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1ecf24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1ecf28: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1ecf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1ecf2c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECF2Cu;
    {
        const bool branch_taken_0x1ecf2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF2Cu;
            // 0x1ecf30: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf2c) {
            ctx->pc = 0x1ECF38u;
            goto label_1ecf38;
        }
    }
    ctx->pc = 0x1ECF34u;
    // 0x1ecf34: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1ecf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1ecf38:
    // 0x1ecf38: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1ecf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ecf3c: 0xc07b3f8  jal         func_1ECFE0
    ctx->pc = 0x1ECF3Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF44u);
    ctx->pc = 0x1ECF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF3Cu;
            // 0x1ecf40: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECFE0u;
    if (runtime->hasFunction(0x1ECFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF44u; }
        if (ctx->pc != 0x1ECF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECFE0_0x1ecfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF44u; }
        if (ctx->pc != 0x1ECF44u) { return; }
    }
    ctx->pc = 0x1ECF44u;
label_1ecf44:
    // 0x1ecf44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf48: 0xc07b41c  jal         func_1ED070
    ctx->pc = 0x1ECF48u;
    SET_GPR_U32(ctx, 31, 0x1ECF50u);
    ctx->pc = 0x1ECF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF48u;
            // 0x1ecf4c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED070u;
    if (runtime->hasFunction(0x1ED070u)) {
        auto targetFn = runtime->lookupFunction(0x1ED070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF50u; }
        if (ctx->pc != 0x1ECF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED070_0x1ed070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF50u; }
        if (ctx->pc != 0x1ECF50u) { return; }
    }
    ctx->pc = 0x1ECF50u;
label_1ecf50:
    // 0x1ecf50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf54: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x1ecf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1ecf58: 0xc07b44a  jal         func_1ED128
    ctx->pc = 0x1ECF58u;
    SET_GPR_U32(ctx, 31, 0x1ECF60u);
    ctx->pc = 0x1ECF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF58u;
            // 0x1ecf5c: 0x240600bd  addiu       $a2, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED128u;
    if (runtime->hasFunction(0x1ED128u)) {
        auto targetFn = runtime->lookupFunction(0x1ED128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF60u; }
        if (ctx->pc != 0x1ECF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED128_0x1ed128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF60u; }
        if (ctx->pc != 0x1ECF60u) { return; }
    }
    ctx->pc = 0x1ECF60u;
label_1ecf60:
    // 0x1ecf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf64: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1ecf64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1ecf68: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x1ecf68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x1ecf6c: 0xc07b44a  jal         func_1ED128
    ctx->pc = 0x1ECF6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF74u);
    ctx->pc = 0x1ECF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF6Cu;
            // 0x1ecf70: 0x240600bf  addiu       $a2, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED128u;
    if (runtime->hasFunction(0x1ED128u)) {
        auto targetFn = runtime->lookupFunction(0x1ED128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF74u; }
        if (ctx->pc != 0x1ECF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED128_0x1ed128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF74u; }
        if (ctx->pc != 0x1ECF74u) { return; }
    }
    ctx->pc = 0x1ECF74u;
label_1ecf74:
    // 0x1ecf74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf78: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1ecf78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1ecf7c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1ecf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ecf80: 0xc07b44a  jal         func_1ED128
    ctx->pc = 0x1ECF80u;
    SET_GPR_U32(ctx, 31, 0x1ECF88u);
    ctx->pc = 0x1ECF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF80u;
            // 0x1ecf84: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED128u;
    if (runtime->hasFunction(0x1ED128u)) {
        auto targetFn = runtime->lookupFunction(0x1ED128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF88u; }
        if (ctx->pc != 0x1ECF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED128_0x1ed128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF88u; }
        if (ctx->pc != 0x1ECF88u) { return; }
    }
    ctx->pc = 0x1ECF88u;
label_1ecf88:
    // 0x1ecf88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf8c: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x1ecf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x1ecf90: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1ecf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ecf94: 0xc07b44a  jal         func_1ED128
    ctx->pc = 0x1ECF94u;
    SET_GPR_U32(ctx, 31, 0x1ECF9Cu);
    ctx->pc = 0x1ECF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF94u;
            // 0x1ecf98: 0x240600ef  addiu       $a2, $zero, 0xEF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 239));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED128u;
    if (runtime->hasFunction(0x1ED128u)) {
        auto targetFn = runtime->lookupFunction(0x1ED128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF9Cu; }
        if (ctx->pc != 0x1ECF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED128_0x1ed128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECF9Cu; }
        if (ctx->pc != 0x1ECF9Cu) { return; }
    }
    ctx->pc = 0x1ECF9Cu;
label_1ecf9c:
    // 0x1ecf9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecfa0: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x1ecfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x1ecfa4: 0x2626004c  addiu       $a2, $s1, 0x4C
    ctx->pc = 0x1ecfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1ecfa8: 0xc07b468  jal         func_1ED1A0
    ctx->pc = 0x1ECFA8u;
    SET_GPR_U32(ctx, 31, 0x1ECFB0u);
    ctx->pc = 0x1ECFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFA8u;
            // 0x1ecfac: 0x8e250044  lw          $a1, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED1A0u;
    if (runtime->hasFunction(0x1ED1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFB0u; }
        if (ctx->pc != 0x1ECFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED1A0_0x1ed1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFB0u; }
        if (ctx->pc != 0x1ECFB0u) { return; }
    }
    ctx->pc = 0x1ECFB0u;
label_1ecfb0:
    // 0x1ecfb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecfb4: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x1ecfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ecfb8: 0xc07b48e  jal         func_1ED238
    ctx->pc = 0x1ECFB8u;
    SET_GPR_U32(ctx, 31, 0x1ECFC0u);
    ctx->pc = 0x1ECFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFB8u;
            // 0x1ecfbc: 0x2626005c  addiu       $a2, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED238u;
    if (runtime->hasFunction(0x1ED238u)) {
        auto targetFn = runtime->lookupFunction(0x1ED238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFC0u; }
        if (ctx->pc != 0x1ECFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED238_0x1ed238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECFC0u; }
        if (ctx->pc != 0x1ECFC0u) { return; }
    }
    ctx->pc = 0x1ECFC0u;
label_1ecfc0:
    // 0x1ecfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecfc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ecfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ecfc8:
    // 0x1ecfc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ecfc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecfcc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ecfccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ecfd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ecfd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecfd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ecfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ecfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECFD8u;
            // 0x1ecfdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECFE0u;
    ctx->pc = 0x1ecfe0u;
}
