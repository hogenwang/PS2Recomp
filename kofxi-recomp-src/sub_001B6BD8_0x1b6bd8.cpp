#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6BD8
// Address: 0x1b6bd8 - 0x1b6c08
void sub_001B6BD8_0x1b6bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6BD8_0x1b6bd8");
#endif

    switch (ctx->pc) {
        case 0x1b6becu: goto label_1b6bec;
        case 0x1b6bf4u: goto label_1b6bf4;
        default: break;
    }

    ctx->pc = 0x1b6bd8u;

    // 0x1b6bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b6bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b6bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6be0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b6be4: 0xc06e054  jal         func_1B8150
    ctx->pc = 0x1B6BE4u;
    SET_GPR_U32(ctx, 31, 0x1B6BECu);
    ctx->pc = 0x1B6BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BE4u;
            // 0x1b6be8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8150u;
    if (runtime->hasFunction(0x1B8150u)) {
        auto targetFn = runtime->lookupFunction(0x1B8150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BECu; }
        if (ctx->pc != 0x1B6BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8150_0x1b8150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BECu; }
        if (ctx->pc != 0x1B6BECu) { return; }
    }
    ctx->pc = 0x1B6BECu;
label_1b6bec:
    // 0x1b6bec: 0xc06db02  jal         func_1B6C08
    ctx->pc = 0x1B6BECu;
    SET_GPR_U32(ctx, 31, 0x1B6BF4u);
    ctx->pc = 0x1B6BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BECu;
            // 0x1b6bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C08u;
    if (runtime->hasFunction(0x1B6C08u)) {
        auto targetFn = runtime->lookupFunction(0x1B6C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BF4u; }
        if (ctx->pc != 0x1B6BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6C08_0x1b6c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6BF4u; }
        if (ctx->pc != 0x1B6BF4u) { return; }
    }
    ctx->pc = 0x1B6BF4u;
label_1b6bf4:
    // 0x1b6bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6bf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b6bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6bfc: 0x806e05a  j           func_1B8168
    ctx->pc = 0x1B6BFCu;
    ctx->pc = 0x1B6C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6BFCu;
            // 0x1b6c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8168u;
    if (runtime->hasFunction(0x1B8168u)) {
        auto targetFn = runtime->lookupFunction(0x1B8168u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B8168_0x1b8168(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B6C04u;
    // 0x1b6c04: 0x0  nop
    ctx->pc = 0x1b6c04u;
    // NOP
    ctx->pc = 0x1b6c08u;
}
