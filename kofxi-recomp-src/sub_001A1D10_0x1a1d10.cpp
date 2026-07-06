#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1D10
// Address: 0x1a1d10 - 0x1a1d50
void sub_001A1D10_0x1a1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1D10_0x1a1d10");
#endif

    switch (ctx->pc) {
        case 0x1a1d20u: goto label_1a1d20;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d30u: goto label_1a1d30;
        case 0x1a1d38u: goto label_1a1d38;
        case 0x1a1d40u: goto label_1a1d40;
        default: break;
    }

    ctx->pc = 0x1a1d10u;

    // 0x1a1d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1d18: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1A1D18u;
    SET_GPR_U32(ctx, 31, 0x1A1D20u);
    ctx->pc = 0x103068u;
    if (runtime->hasFunction(0x103068u)) {
        auto targetFn = runtime->lookupFunction(0x103068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D20u; }
        if (ctx->pc != 0x1A1D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103068_0x103068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D20u; }
        if (ctx->pc != 0x1A1D20u) { return; }
    }
    ctx->pc = 0x1A1D20u;
label_1a1d20:
    // 0x1a1d20: 0xc040afa  jal         func_102BE8
    ctx->pc = 0x1A1D20u;
    SET_GPR_U32(ctx, 31, 0x1A1D28u);
    ctx->pc = 0x102BE8u;
    if (runtime->hasFunction(0x102BE8u)) {
        auto targetFn = runtime->lookupFunction(0x102BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D28u; }
        if (ctx->pc != 0x1A1D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102BE8_0x102be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D28u; }
        if (ctx->pc != 0x1A1D28u) { return; }
    }
    ctx->pc = 0x1A1D28u;
label_1a1d28:
    // 0x1a1d28: 0xc0400f4  jal         func_1003D0
    ctx->pc = 0x1A1D28u;
    SET_GPR_U32(ctx, 31, 0x1A1D30u);
    ctx->pc = 0x1003D0u;
    if (runtime->hasFunction(0x1003D0u)) {
        auto targetFn = runtime->lookupFunction(0x1003D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D30u; }
        if (ctx->pc != 0x1A1D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003D0_0x1003d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D30u; }
        if (ctx->pc != 0x1A1D30u) { return; }
    }
    ctx->pc = 0x1A1D30u;
label_1a1d30:
    // 0x1a1d30: 0xc040942  jal         func_102508
    ctx->pc = 0x1A1D30u;
    SET_GPR_U32(ctx, 31, 0x1A1D38u);
    ctx->pc = 0x1A1D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D30u;
            // 0x1a1d34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102508u;
    if (runtime->hasFunction(0x102508u)) {
        auto targetFn = runtime->lookupFunction(0x102508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D38u; }
        if (ctx->pc != 0x1A1D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102508_0x102508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D38u; }
        if (ctx->pc != 0x1A1D38u) { return; }
    }
    ctx->pc = 0x1A1D38u;
label_1a1d38:
    // 0x1a1d38: 0xc06871c  jal         func_1A1C70
    ctx->pc = 0x1A1D38u;
    SET_GPR_U32(ctx, 31, 0x1A1D40u);
    ctx->pc = 0x1A1C70u;
    if (runtime->hasFunction(0x1A1C70u)) {
        auto targetFn = runtime->lookupFunction(0x1A1C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D40u; }
        if (ctx->pc != 0x1A1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1C70_0x1a1c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1D40u; }
        if (ctx->pc != 0x1A1D40u) { return; }
    }
    ctx->pc = 0x1A1D40u;
label_1a1d40:
    // 0x1a1d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1D44u;
            // 0x1a1d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1D4Cu;
    // 0x1a1d4c: 0x0  nop
    ctx->pc = 0x1a1d4cu;
    // NOP
    ctx->pc = 0x1a1d50u;
}
