#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B27B8
// Address: 0x1b27b8 - 0x1b2850
void sub_001B27B8_0x1b27b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B27B8_0x1b27b8");
#endif

    switch (ctx->pc) {
        case 0x1b27d0u: goto label_1b27d0;
        case 0x1b2810u: goto label_1b2810;
        case 0x1b2820u: goto label_1b2820;
        case 0x1b2828u: goto label_1b2828;
        case 0x1b2830u: goto label_1b2830;
        case 0x1b2838u: goto label_1b2838;
        case 0x1b2840u: goto label_1b2840;
        default: break;
    }

    ctx->pc = 0x1b27b8u;

    // 0x1b27b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b27bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b27bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b27c0: 0x8c442fe8  lw          $a0, 0x2FE8($v0)
    ctx->pc = 0x1b27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12264)));
    // 0x1b27c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b27c8: 0xc06ca5a  jal         func_1B2968
    ctx->pc = 0x1B27C8u;
    SET_GPR_U32(ctx, 31, 0x1B27D0u);
    ctx->pc = 0x1B2968u;
    if (runtime->hasFunction(0x1B2968u)) {
        auto targetFn = runtime->lookupFunction(0x1B2968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27D0u; }
        if (ctx->pc != 0x1B27D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2968_0x1b2968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27D0u; }
        if (ctx->pc != 0x1B27D0u) { return; }
    }
    ctx->pc = 0x1B27D0u;
label_1b27d0:
    // 0x1b27d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b27d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b27d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b27d8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B27D8u;
    {
        const bool branch_taken_0x1b27d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B27DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27D8u;
            // 0x1b27dc: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27d8) {
            ctx->pc = 0x1B2840u;
            goto label_1b2840;
        }
    }
    ctx->pc = 0x1B27E0u;
    // 0x1b27e0: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B27E0u;
    {
        const bool branch_taken_0x1b27e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B27E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27E0u;
            // 0x1b27e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27e0) {
            ctx->pc = 0x1B2844u;
            goto label_1b2844;
        }
    }
    ctx->pc = 0x1B27E8u;
    // 0x1b27e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b27e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b27ec: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B27ECu;
    {
        const bool branch_taken_0x1b27ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B27F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27ECu;
            // 0x1b27f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27ec) {
            ctx->pc = 0x1B2808u;
            goto label_1b2808;
        }
    }
    ctx->pc = 0x1B27F4u;
    // 0x1b27f4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B27F4u;
    {
        const bool branch_taken_0x1b27f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B27F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27F4u;
            // 0x1b27f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27f4) {
            ctx->pc = 0x1B2818u;
            goto label_1b2818;
        }
    }
    ctx->pc = 0x1B27FCu;
    // 0x1b27fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B27FCu;
    {
        const bool branch_taken_0x1b27fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b27fc) {
            ctx->pc = 0x1B2848u;
            goto label_1b2848;
        }
    }
    ctx->pc = 0x1B2804u;
    // 0x1b2804: 0x0  nop
    ctx->pc = 0x1b2804u;
    // NOP
label_1b2808:
    // 0x1b2808: 0xc07396e  jal         func_1CE5B8
    ctx->pc = 0x1B2808u;
    SET_GPR_U32(ctx, 31, 0x1B2810u);
    ctx->pc = 0x1CE5B8u;
    if (runtime->hasFunction(0x1CE5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2810u; }
        if (ctx->pc != 0x1B2810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5B8_0x1ce5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2810u; }
        if (ctx->pc != 0x1B2810u) { return; }
    }
    ctx->pc = 0x1B2810u;
label_1b2810:
    // 0x1b2810: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2810u;
    {
        const bool branch_taken_0x1b2810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2810u;
            // 0x1b2814: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2810) {
            ctx->pc = 0x1B2844u;
            goto label_1b2844;
        }
    }
    ctx->pc = 0x1B2818u;
label_1b2818:
    // 0x1b2818: 0xc07396e  jal         func_1CE5B8
    ctx->pc = 0x1B2818u;
    SET_GPR_U32(ctx, 31, 0x1B2820u);
    ctx->pc = 0x1CE5B8u;
    if (runtime->hasFunction(0x1CE5B8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2820u; }
        if (ctx->pc != 0x1B2820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5B8_0x1ce5b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2820u; }
        if (ctx->pc != 0x1B2820u) { return; }
    }
    ctx->pc = 0x1B2820u;
label_1b2820:
    // 0x1b2820: 0xc073974  jal         func_1CE5D0
    ctx->pc = 0x1B2820u;
    SET_GPR_U32(ctx, 31, 0x1B2828u);
    ctx->pc = 0x1CE5D0u;
    if (runtime->hasFunction(0x1CE5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2828u; }
        if (ctx->pc != 0x1B2828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5D0_0x1ce5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2828u; }
        if (ctx->pc != 0x1B2828u) { return; }
    }
    ctx->pc = 0x1B2828u;
label_1b2828:
    // 0x1b2828: 0xc07397a  jal         func_1CE5E8
    ctx->pc = 0x1B2828u;
    SET_GPR_U32(ctx, 31, 0x1B2830u);
    ctx->pc = 0x1CE5E8u;
    if (runtime->hasFunction(0x1CE5E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2830u; }
        if (ctx->pc != 0x1B2830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5E8_0x1ce5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2830u; }
        if (ctx->pc != 0x1B2830u) { return; }
    }
    ctx->pc = 0x1B2830u;
label_1b2830:
    // 0x1b2830: 0xc073980  jal         func_1CE600
    ctx->pc = 0x1B2830u;
    SET_GPR_U32(ctx, 31, 0x1B2838u);
    ctx->pc = 0x1CE600u;
    if (runtime->hasFunction(0x1CE600u)) {
        auto targetFn = runtime->lookupFunction(0x1CE600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2838u; }
        if (ctx->pc != 0x1B2838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE600_0x1ce600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2838u; }
        if (ctx->pc != 0x1B2838u) { return; }
    }
    ctx->pc = 0x1B2838u;
label_1b2838:
    // 0x1b2838: 0xc07398c  jal         func_1CE630
    ctx->pc = 0x1B2838u;
    SET_GPR_U32(ctx, 31, 0x1B2840u);
    ctx->pc = 0x1CE630u;
    if (runtime->hasFunction(0x1CE630u)) {
        auto targetFn = runtime->lookupFunction(0x1CE630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2840u; }
        if (ctx->pc != 0x1B2840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE630_0x1ce630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2840u; }
        if (ctx->pc != 0x1B2840u) { return; }
    }
    ctx->pc = 0x1B2840u;
label_1b2840:
    // 0x1b2840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2844:
    // 0x1b2844: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2848:
    // 0x1b2848: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2848u;
            // 0x1b284c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2850u;
    ctx->pc = 0x1b2850u;
}
