#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E550
// Address: 0x15e550 - 0x15e5d0
void sub_0015E550_0x15e550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E550_0x15e550");
#endif

    switch (ctx->pc) {
        case 0x15e564u: goto label_15e564;
        case 0x15e56cu: goto label_15e56c;
        case 0x15e574u: goto label_15e574;
        case 0x15e57cu: goto label_15e57c;
        case 0x15e588u: goto label_15e588;
        case 0x15e594u: goto label_15e594;
        case 0x15e5a0u: goto label_15e5a0;
        case 0x15e5acu: goto label_15e5ac;
        case 0x15e5b8u: goto label_15e5b8;
        case 0x15e5c4u: goto label_15e5c4;
        default: break;
    }

    ctx->pc = 0x15e550u;

    // 0x15e550: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e554: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15e554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x15e558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e55c: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x15E55Cu;
    SET_GPR_U32(ctx, 31, 0x15E564u);
    ctx->pc = 0x15E560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E55Cu;
            // 0x15e560: 0x24840d70  addiu       $a0, $a0, 0xD70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (runtime->hasFunction(0x19F300u)) {
        auto targetFn = runtime->lookupFunction(0x19F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E564u; }
        if (ctx->pc != 0x15E564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F300_0x19f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E564u; }
        if (ctx->pc != 0x15E564u) { return; }
    }
    ctx->pc = 0x15E564u;
label_15e564:
    // 0x15e564: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x15E564u;
    SET_GPR_U32(ctx, 31, 0x15E56Cu);
    ctx->pc = 0x322A70u;
    if (runtime->hasFunction(0x322A70u)) {
        auto targetFn = runtime->lookupFunction(0x322A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E56Cu; }
        if (ctx->pc != 0x15E56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322A70_0x322a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E56Cu; }
        if (ctx->pc != 0x15E56Cu) { return; }
    }
    ctx->pc = 0x15E56Cu;
label_15e56c:
    // 0x15e56c: 0xc066b2c  jal         func_19ACB0
    ctx->pc = 0x15E56Cu;
    SET_GPR_U32(ctx, 31, 0x15E574u);
    ctx->pc = 0x19ACB0u;
    if (runtime->hasFunction(0x19ACB0u)) {
        auto targetFn = runtime->lookupFunction(0x19ACB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E574u; }
        if (ctx->pc != 0x15E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ACB0_0x19acb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E574u; }
        if (ctx->pc != 0x15E574u) { return; }
    }
    ctx->pc = 0x15E574u;
label_15e574:
    // 0x15e574: 0xc066b6c  jal         func_19ADB0
    ctx->pc = 0x15E574u;
    SET_GPR_U32(ctx, 31, 0x15E57Cu);
    ctx->pc = 0x19ADB0u;
    if (runtime->hasFunction(0x19ADB0u)) {
        auto targetFn = runtime->lookupFunction(0x19ADB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E57Cu; }
        if (ctx->pc != 0x15E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ADB0_0x19adb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E57Cu; }
        if (ctx->pc != 0x15E57Cu) { return; }
    }
    ctx->pc = 0x15E57Cu;
label_15e57c:
    // 0x15e57c: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e580: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15E580u;
    SET_GPR_U32(ctx, 31, 0x15E588u);
    ctx->pc = 0x15E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E580u;
            // 0x15e584: 0x24844108  addiu       $a0, $a0, 0x4108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E588u; }
        if (ctx->pc != 0x15E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E588u; }
        if (ctx->pc != 0x15E588u) { return; }
    }
    ctx->pc = 0x15E588u;
label_15e588:
    // 0x15e588: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e58c: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15E58Cu;
    SET_GPR_U32(ctx, 31, 0x15E594u);
    ctx->pc = 0x15E590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E58Cu;
            // 0x15e590: 0x24844110  addiu       $a0, $a0, 0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E594u; }
        if (ctx->pc != 0x15E594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E594u; }
        if (ctx->pc != 0x15E594u) { return; }
    }
    ctx->pc = 0x15E594u;
label_15e594:
    // 0x15e594: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e598: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15E598u;
    SET_GPR_U32(ctx, 31, 0x15E5A0u);
    ctx->pc = 0x15E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E598u;
            // 0x15e59c: 0x24844114  addiu       $a0, $a0, 0x4114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16660));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5A0u; }
        if (ctx->pc != 0x15E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5A0u; }
        if (ctx->pc != 0x15E5A0u) { return; }
    }
    ctx->pc = 0x15E5A0u;
label_15e5a0:
    // 0x15e5a0: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e5a4: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15E5A4u;
    SET_GPR_U32(ctx, 31, 0x15E5ACu);
    ctx->pc = 0x15E5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5A4u;
            // 0x15e5a8: 0x24844118  addiu       $a0, $a0, 0x4118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5ACu; }
        if (ctx->pc != 0x15E5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5ACu; }
        if (ctx->pc != 0x15E5ACu) { return; }
    }
    ctx->pc = 0x15E5ACu;
label_15e5ac:
    // 0x15e5ac: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e5b0: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15E5B0u;
    SET_GPR_U32(ctx, 31, 0x15E5B8u);
    ctx->pc = 0x15E5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5B0u;
            // 0x15e5b4: 0x2484411c  addiu       $a0, $a0, 0x411C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16668));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5B8u; }
        if (ctx->pc != 0x15E5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5B8u; }
        if (ctx->pc != 0x15E5B8u) { return; }
    }
    ctx->pc = 0x15E5B8u;
label_15e5b8:
    // 0x15e5b8: 0x3c04009b  lui         $a0, 0x9B
    ctx->pc = 0x15e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)155 << 16));
    // 0x15e5bc: 0xc063d08  jal         func_18F420
    ctx->pc = 0x15E5BCu;
    SET_GPR_U32(ctx, 31, 0x15E5C4u);
    ctx->pc = 0x15E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5BCu;
            // 0x15e5c0: 0x24844120  addiu       $a0, $a0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5C4u; }
        if (ctx->pc != 0x15E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018F420_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E5C4u; }
        if (ctx->pc != 0x15E5C4u) { return; }
    }
    ctx->pc = 0x15E5C4u;
label_15e5c4:
    // 0x15e5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E5C8u;
            // 0x15e5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E5D0u;
    ctx->pc = 0x15e5d0u;
}
