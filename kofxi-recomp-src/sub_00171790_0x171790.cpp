#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171790
// Address: 0x171790 - 0x1717c0
void sub_00171790_0x171790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171790_0x171790");
#endif

    switch (ctx->pc) {
        case 0x1717a0u: goto label_1717a0;
        case 0x1717acu: goto label_1717ac;
        case 0x1717b4u: goto label_1717b4;
        default: break;
    }

    ctx->pc = 0x171790u;

    // 0x171790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171798: 0xc055684  jal         func_155A10
    ctx->pc = 0x171798u;
    SET_GPR_U32(ctx, 31, 0x1717A0u);
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717A0u; }
        if (ctx->pc != 0x1717A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717A0u; }
        if (ctx->pc != 0x1717A0u) { return; }
    }
    ctx->pc = 0x1717A0u;
label_1717a0:
    // 0x1717a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1717a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1717a4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1717A4u;
    SET_GPR_U32(ctx, 31, 0x1717ACu);
    ctx->pc = 0x1717A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1717A4u;
            // 0x1717a8: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (runtime->hasFunction(0x19F300u)) {
        auto targetFn = runtime->lookupFunction(0x19F300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ACu; }
        if (ctx->pc != 0x1717ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F300_0x19f300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717ACu; }
        if (ctx->pc != 0x1717ACu) { return; }
    }
    ctx->pc = 0x1717ACu;
label_1717ac:
    // 0x1717ac: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x1717ACu;
    SET_GPR_U32(ctx, 31, 0x1717B4u);
    ctx->pc = 0x322A70u;
    if (runtime->hasFunction(0x322A70u)) {
        auto targetFn = runtime->lookupFunction(0x322A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B4u; }
        if (ctx->pc != 0x1717B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00322A70_0x322a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B4u; }
        if (ctx->pc != 0x1717B4u) { return; }
    }
    ctx->pc = 0x1717B4u;
label_1717b4:
    // 0x1717b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1717b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1717B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1717BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1717B8u;
            // 0x1717bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1717C0u;
    ctx->pc = 0x1717c0u;
}
