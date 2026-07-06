#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117158
// Address: 0x117158 - 0x1171b0
void sub_00117158_0x117158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117158_0x117158");
#endif

    switch (ctx->pc) {
        case 0x117168u: goto label_117168;
        case 0x117170u: goto label_117170;
        case 0x117178u: goto label_117178;
        case 0x117180u: goto label_117180;
        case 0x117188u: goto label_117188;
        case 0x117190u: goto label_117190;
        case 0x117198u: goto label_117198;
        case 0x1171a0u: goto label_1171a0;
        default: break;
    }

    ctx->pc = 0x117158u;

    // 0x117158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11715c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117160: 0xc045bc2  jal         func_116F08
    ctx->pc = 0x117160u;
    SET_GPR_U32(ctx, 31, 0x117168u);
    ctx->pc = 0x116F08u;
    if (runtime->hasFunction(0x116F08u)) {
        auto targetFn = runtime->lookupFunction(0x116F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117168u; }
        if (ctx->pc != 0x117168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116F08_0x116f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117168u; }
        if (ctx->pc != 0x117168u) { return; }
    }
    ctx->pc = 0x117168u;
label_117168:
    // 0x117168: 0xc045c12  jal         func_117048
    ctx->pc = 0x117168u;
    SET_GPR_U32(ctx, 31, 0x117170u);
    ctx->pc = 0x117048u;
    if (runtime->hasFunction(0x117048u)) {
        auto targetFn = runtime->lookupFunction(0x117048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117170u; }
        if (ctx->pc != 0x117170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117048_0x117048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117170u; }
        if (ctx->pc != 0x117170u) { return; }
    }
    ctx->pc = 0x117170u;
label_117170:
    // 0x117170: 0xc045d8e  jal         func_117638
    ctx->pc = 0x117170u;
    SET_GPR_U32(ctx, 31, 0x117178u);
    ctx->pc = 0x117638u;
    if (runtime->hasFunction(0x117638u)) {
        auto targetFn = runtime->lookupFunction(0x117638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117178u; }
        if (ctx->pc != 0x117178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117638_0x117638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117178u; }
        if (ctx->pc != 0x117178u) { return; }
    }
    ctx->pc = 0x117178u;
label_117178:
    // 0x117178: 0xc045dec  jal         func_1177B0
    ctx->pc = 0x117178u;
    SET_GPR_U32(ctx, 31, 0x117180u);
    ctx->pc = 0x11717Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117178u;
            // 0x11717c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177B0u;
    if (runtime->hasFunction(0x1177B0u)) {
        auto targetFn = runtime->lookupFunction(0x1177B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117180u; }
        if (ctx->pc != 0x117180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001177B0_0x1177b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117180u; }
        if (ctx->pc != 0x117180u) { return; }
    }
    ctx->pc = 0x117180u;
label_117180:
    // 0x117180: 0xc045e7c  jal         func_1179F0
    ctx->pc = 0x117180u;
    SET_GPR_U32(ctx, 31, 0x117188u);
    ctx->pc = 0x1179F0u;
    if (runtime->hasFunction(0x1179F0u)) {
        auto targetFn = runtime->lookupFunction(0x1179F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117188u; }
        if (ctx->pc != 0x117188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001179F0_0x1179f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117188u; }
        if (ctx->pc != 0x117188u) { return; }
    }
    ctx->pc = 0x117188u;
label_117188:
    // 0x117188: 0xc04368e  jal         func_10DA38
    ctx->pc = 0x117188u;
    SET_GPR_U32(ctx, 31, 0x117190u);
    ctx->pc = 0x10DA38u;
    if (runtime->hasFunction(0x10DA38u)) {
        auto targetFn = runtime->lookupFunction(0x10DA38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117190u; }
        if (ctx->pc != 0x117190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadCreateAndStartMainKernelThread_0x10da38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117190u; }
        if (ctx->pc != 0x117190u) { return; }
    }
    ctx->pc = 0x117190u;
label_117190:
    // 0x117190: 0xc045ca0  jal         func_117280
    ctx->pc = 0x117190u;
    SET_GPR_U32(ctx, 31, 0x117198u);
    ctx->pc = 0x117280u;
    if (runtime->hasFunction(0x117280u)) {
        auto targetFn = runtime->lookupFunction(0x117280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117198u; }
        if (ctx->pc != 0x117198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117280_0x117280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117198u; }
        if (ctx->pc != 0x117198u) { return; }
    }
    ctx->pc = 0x117198u;
label_117198:
    // 0x117198: 0xc0459de  jal         func_116778
    ctx->pc = 0x117198u;
    SET_GPR_U32(ctx, 31, 0x1171A0u);
    ctx->pc = 0x116778u;
    if (runtime->hasFunction(0x116778u)) {
        auto targetFn = runtime->lookupFunction(0x116778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171A0u; }
        if (ctx->pc != 0x1171A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00116778_0x116778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1171A0u; }
        if (ctx->pc != 0x1171A0u) { return; }
    }
    ctx->pc = 0x1171A0u;
label_1171a0:
    // 0x1171a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1171a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1171a4: 0x80463b4  j           func_118ED0
    ctx->pc = 0x1171A4u;
    ctx->pc = 0x1171A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1171A4u;
            // 0x1171a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118ED0u;
    {
        auto targetFn = runtime->lookupFunction(0x118ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1171ACu;
    // 0x1171ac: 0x0  nop
    ctx->pc = 0x1171acu;
    // NOP
    ctx->pc = 0x1171b0u;
}
