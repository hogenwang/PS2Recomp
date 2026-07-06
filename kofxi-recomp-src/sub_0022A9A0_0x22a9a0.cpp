#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A9A0
// Address: 0x22a9a0 - 0x22a9e0
void sub_0022A9A0_0x22a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A9A0_0x22a9a0");
#endif

    switch (ctx->pc) {
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9c0u: goto label_22a9c0;
        case 0x22a9d0u: goto label_22a9d0;
        default: break;
    }

    ctx->pc = 0x22a9a0u;

    // 0x22a9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a9a8: 0xc08aa78  jal         func_22A9E0
    ctx->pc = 0x22A9A8u;
    SET_GPR_U32(ctx, 31, 0x22A9B0u);
    ctx->pc = 0x22A9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9A8u;
            // 0x22a9ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A9E0u;
    if (runtime->hasFunction(0x22A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9B0u; }
        if (ctx->pc != 0x22A9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A9E0_0x22a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9B0u; }
        if (ctx->pc != 0x22A9B0u) { return; }
    }
    ctx->pc = 0x22A9B0u;
label_22a9b0:
    // 0x22a9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9B4u;
            // 0x22a9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A9BCu;
    // 0x22a9bc: 0x0  nop
    ctx->pc = 0x22a9bcu;
    // NOP
label_22a9c0:
    // 0x22a9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22a9c8: 0xc08aa78  jal         func_22A9E0
    ctx->pc = 0x22A9C8u;
    SET_GPR_U32(ctx, 31, 0x22A9D0u);
    ctx->pc = 0x22A9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9C8u;
            // 0x22a9cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A9E0u;
    if (runtime->hasFunction(0x22A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9D0u; }
        if (ctx->pc != 0x22A9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A9E0_0x22a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A9D0u; }
        if (ctx->pc != 0x22A9D0u) { return; }
    }
    ctx->pc = 0x22A9D0u;
label_22a9d0:
    // 0x22a9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22a9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22A9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A9D4u;
            // 0x22a9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A9DCu;
    // 0x22a9dc: 0x0  nop
    ctx->pc = 0x22a9dcu;
    // NOP
    ctx->pc = 0x22a9e0u;
}
