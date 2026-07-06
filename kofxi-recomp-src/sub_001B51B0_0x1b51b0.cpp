#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B51B0
// Address: 0x1b51b0 - 0x1b51e0
void sub_001B51B0_0x1b51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B51B0_0x1b51b0");
#endif

    switch (ctx->pc) {
        case 0x1b51c8u: goto label_1b51c8;
        default: break;
    }

    ctx->pc = 0x1b51b0u;

    // 0x1b51b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b51b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b51b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b51b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b51bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b51c0: 0xc06a698  jal         func_1A9A60
    ctx->pc = 0x1B51C0u;
    SET_GPR_U32(ctx, 31, 0x1B51C8u);
    ctx->pc = 0x1B51C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51C0u;
            // 0x1b51c4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9A60u;
    if (runtime->hasFunction(0x1A9A60u)) {
        auto targetFn = runtime->lookupFunction(0x1A9A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51C8u; }
        if (ctx->pc != 0x1B51C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9A60_0x1a9a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B51C8u; }
        if (ctx->pc != 0x1B51C8u) { return; }
    }
    ctx->pc = 0x1B51C8u;
label_1b51c8:
    // 0x1b51c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b51c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b51cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b51ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b51d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b51d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b51d4: 0x806a602  j           func_1A9808
    ctx->pc = 0x1B51D4u;
    ctx->pc = 0x1B51D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B51D4u;
            // 0x1b51d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9808u;
    {
        auto targetFn = runtime->lookupFunction(0x1A9808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B51DCu;
    // 0x1b51dc: 0x0  nop
    ctx->pc = 0x1b51dcu;
    // NOP
    ctx->pc = 0x1b51e0u;
}
