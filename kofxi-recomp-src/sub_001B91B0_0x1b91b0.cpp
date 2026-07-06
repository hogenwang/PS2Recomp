#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B91B0
// Address: 0x1b91b0 - 0x1b91e0
void sub_001B91B0_0x1b91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B91B0_0x1b91b0");
#endif

    switch (ctx->pc) {
        case 0x1b91c4u: goto label_1b91c4;
        case 0x1b91ccu: goto label_1b91cc;
        default: break;
    }

    ctx->pc = 0x1b91b0u;

    // 0x1b91b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b91b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b91b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b91b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b91bc: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1B91BCu;
    SET_GPR_U32(ctx, 31, 0x1B91C4u);
    ctx->pc = 0x1B91C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91BCu;
            // 0x1b91c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C4u; }
        if (ctx->pc != 0x1B91C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91C4u; }
        if (ctx->pc != 0x1B91C4u) { return; }
    }
    ctx->pc = 0x1B91C4u;
label_1b91c4:
    // 0x1b91c4: 0xc06e478  jal         func_1B91E0
    ctx->pc = 0x1B91C4u;
    SET_GPR_U32(ctx, 31, 0x1B91CCu);
    ctx->pc = 0x1B91C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91C4u;
            // 0x1b91c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91E0u;
    if (runtime->hasFunction(0x1B91E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91CCu; }
        if (ctx->pc != 0x1B91CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B91E0_0x1b91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B91CCu; }
        if (ctx->pc != 0x1B91CCu) { return; }
    }
    ctx->pc = 0x1B91CCu;
label_1b91cc:
    // 0x1b91cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b91ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b91d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b91d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b91d4: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1B91D4u;
    ctx->pc = 0x1B91D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B91D4u;
            // 0x1b91d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B91DCu;
    // 0x1b91dc: 0x0  nop
    ctx->pc = 0x1b91dcu;
    // NOP
    ctx->pc = 0x1b91e0u;
}
