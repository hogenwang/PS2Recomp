#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031F300
// Address: 0x31f300 - 0x31f390
void sub_0031F300_0x31f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F300_0x31f300");
#endif

    switch (ctx->pc) {
        case 0x31f310u: goto label_31f310;
        case 0x31f318u: goto label_31f318;
        case 0x31f320u: goto label_31f320;
        case 0x31f328u: goto label_31f328;
        case 0x31f330u: goto label_31f330;
        case 0x31f338u: goto label_31f338;
        case 0x31f354u: goto label_31f354;
        case 0x31f35cu: goto label_31f35c;
        case 0x31f364u: goto label_31f364;
        case 0x31f36cu: goto label_31f36c;
        case 0x31f374u: goto label_31f374;
        case 0x31f37cu: goto label_31f37c;
        default: break;
    }

    ctx->pc = 0x31f300u;

    // 0x31f300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f308: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x31F308u;
    SET_GPR_U32(ctx, 31, 0x31F310u);
    ctx->pc = 0x1507A0u;
    if (runtime->hasFunction(0x1507A0u)) {
        auto targetFn = runtime->lookupFunction(0x1507A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F310u; }
        if (ctx->pc != 0x31F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001507A0_0x1507a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F310u; }
        if (ctx->pc != 0x31F310u) { return; }
    }
    ctx->pc = 0x31F310u;
label_31f310:
    // 0x31f310: 0xc0c0d9c  jal         func_303670
    ctx->pc = 0x31F310u;
    SET_GPR_U32(ctx, 31, 0x31F318u);
    ctx->pc = 0x303670u;
    if (runtime->hasFunction(0x303670u)) {
        auto targetFn = runtime->lookupFunction(0x303670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F318u; }
        if (ctx->pc != 0x31F318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00303670_0x303670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F318u; }
        if (ctx->pc != 0x31F318u) { return; }
    }
    ctx->pc = 0x31F318u;
label_31f318:
    // 0x31f318: 0xc0551c0  jal         func_154700
    ctx->pc = 0x31F318u;
    SET_GPR_U32(ctx, 31, 0x31F320u);
    ctx->pc = 0x154700u;
    if (runtime->hasFunction(0x154700u)) {
        auto targetFn = runtime->lookupFunction(0x154700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F320u; }
        if (ctx->pc != 0x31F320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154700_0x154700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F320u; }
        if (ctx->pc != 0x31F320u) { return; }
    }
    ctx->pc = 0x31F320u;
label_31f320:
    // 0x31f320: 0xc05d8bc  jal         func_1762F0
    ctx->pc = 0x31F320u;
    SET_GPR_U32(ctx, 31, 0x31F328u);
    ctx->pc = 0x1762F0u;
    if (runtime->hasFunction(0x1762F0u)) {
        auto targetFn = runtime->lookupFunction(0x1762F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F328u; }
        if (ctx->pc != 0x31F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001762F0_0x1762f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F328u; }
        if (ctx->pc != 0x31F328u) { return; }
    }
    ctx->pc = 0x31F328u;
label_31f328:
    // 0x31f328: 0xc05d7ac  jal         func_175EB0
    ctx->pc = 0x31F328u;
    SET_GPR_U32(ctx, 31, 0x31F330u);
    ctx->pc = 0x175EB0u;
    if (runtime->hasFunction(0x175EB0u)) {
        auto targetFn = runtime->lookupFunction(0x175EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F330u; }
        if (ctx->pc != 0x31F330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175EB0_0x175eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F330u; }
        if (ctx->pc != 0x31F330u) { return; }
    }
    ctx->pc = 0x31F330u;
label_31f330:
    // 0x31f330: 0xc06350c  jal         func_18D430
    ctx->pc = 0x31F330u;
    SET_GPR_U32(ctx, 31, 0x31F338u);
    ctx->pc = 0x18D430u;
    if (runtime->hasFunction(0x18D430u)) {
        auto targetFn = runtime->lookupFunction(0x18D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F338u; }
        if (ctx->pc != 0x31F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D430_0x18d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F338u; }
        if (ctx->pc != 0x31F338u) { return; }
    }
    ctx->pc = 0x31F338u;
label_31f338:
    // 0x31f338: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x31f338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x31f33c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31f33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f340: 0x2484b6b0  addiu       $a0, $a0, -0x4950
    ctx->pc = 0x31f340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
    // 0x31f344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31f344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f348: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31f348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f34c: 0xc0558a0  jal         func_156280
    ctx->pc = 0x31F34Cu;
    SET_GPR_U32(ctx, 31, 0x31F354u);
    ctx->pc = 0x31F350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31F34Cu;
            // 0x31f350: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156280u;
    if (runtime->hasFunction(0x156280u)) {
        auto targetFn = runtime->lookupFunction(0x156280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F354u; }
        if (ctx->pc != 0x31F354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156280_0x156280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F354u; }
        if (ctx->pc != 0x31F354u) { return; }
    }
    ctx->pc = 0x31F354u;
label_31f354:
    // 0x31f354: 0xc055684  jal         func_155A10
    ctx->pc = 0x31F354u;
    SET_GPR_U32(ctx, 31, 0x31F35Cu);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F35Cu; }
        if (ctx->pc != 0x31F35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F35Cu; }
        if (ctx->pc != 0x31F35Cu) { return; }
    }
    ctx->pc = 0x31F35Cu;
label_31f35c:
    // 0x31f35c: 0xc064f58  jal         func_193D60
    ctx->pc = 0x31F35Cu;
    SET_GPR_U32(ctx, 31, 0x31F364u);
    ctx->pc = 0x193D60u;
    if (runtime->hasFunction(0x193D60u)) {
        auto targetFn = runtime->lookupFunction(0x193D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F364u; }
        if (ctx->pc != 0x31F364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193D60_0x193d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F364u; }
        if (ctx->pc != 0x31F364u) { return; }
    }
    ctx->pc = 0x31F364u;
label_31f364:
    // 0x31f364: 0xc05ce28  jal         func_1738A0
    ctx->pc = 0x31F364u;
    SET_GPR_U32(ctx, 31, 0x31F36Cu);
    ctx->pc = 0x1738A0u;
    if (runtime->hasFunction(0x1738A0u)) {
        auto targetFn = runtime->lookupFunction(0x1738A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F36Cu; }
        if (ctx->pc != 0x31F36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001738A0_0x1738a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F36Cu; }
        if (ctx->pc != 0x31F36Cu) { return; }
    }
    ctx->pc = 0x31F36Cu;
label_31f36c:
    // 0x31f36c: 0xc05c5f4  jal         func_1717D0
    ctx->pc = 0x31F36Cu;
    SET_GPR_U32(ctx, 31, 0x31F374u);
    ctx->pc = 0x1717D0u;
    if (runtime->hasFunction(0x1717D0u)) {
        auto targetFn = runtime->lookupFunction(0x1717D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F374u; }
        if (ctx->pc != 0x31F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717D0_0x1717d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F374u; }
        if (ctx->pc != 0x31F374u) { return; }
    }
    ctx->pc = 0x31F374u;
label_31f374:
    // 0x31f374: 0xc058f14  jal         func_163C50
    ctx->pc = 0x31F374u;
    SET_GPR_U32(ctx, 31, 0x31F37Cu);
    ctx->pc = 0x163C50u;
    if (runtime->hasFunction(0x163C50u)) {
        auto targetFn = runtime->lookupFunction(0x163C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F37Cu; }
        if (ctx->pc != 0x31F37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00163C50_0x163c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F37Cu; }
        if (ctx->pc != 0x31F37Cu) { return; }
    }
    ctx->pc = 0x31F37Cu;
label_31f37c:
    // 0x31f37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f380: 0x3e00008  jr          $ra
    ctx->pc = 0x31F380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F380u;
            // 0x31f384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F388u;
    // 0x31f388: 0x0  nop
    ctx->pc = 0x31f388u;
    // NOP
    // 0x31f38c: 0x0  nop
    ctx->pc = 0x31f38cu;
    // NOP
    ctx->pc = 0x31f390u;
}
