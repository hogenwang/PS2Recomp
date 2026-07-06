#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FE8C0
// Address: 0x1fe8c0 - 0x1fe8f8
void sub_001FE8C0_0x1fe8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE8C0_0x1fe8c0");
#endif

    switch (ctx->pc) {
        case 0x1fe8c8u: goto label_1fe8c8;
        case 0x1fe8e8u: goto label_1fe8e8;
        default: break;
    }

    ctx->pc = 0x1fe8c0u;

    // 0x1fe8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8C0u;
            // 0x1fe8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE8C8u;
label_1fe8c8:
    // 0x1fe8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe8cc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fe8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe8d4: 0x244536d0  addiu       $a1, $v0, 0x36D0
    ctx->pc = 0x1fe8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14032));
    // 0x1fe8d8: 0x244221a8  addiu       $v0, $v0, 0x21A8
    ctx->pc = 0x1fe8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8616));
    // 0x1fe8dc: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1fe8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1fe8e0: 0xc07fa3e  jal         func_1FE8F8
    ctx->pc = 0x1FE8E0u;
    SET_GPR_U32(ctx, 31, 0x1FE8E8u);
    ctx->pc = 0x1FE8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8E0u;
            // 0x1fe8e4: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8F8u;
    if (runtime->hasFunction(0x1FE8F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FE8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8E8u; }
        if (ctx->pc != 0x1FE8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE8F8_0x1fe8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE8E8u; }
        if (ctx->pc != 0x1FE8E8u) { return; }
    }
    ctx->pc = 0x1FE8E8u;
label_1fe8e8:
    // 0x1fe8e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE8F0u;
            // 0x1fe8f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE8F8u;
    ctx->pc = 0x1fe8f8u;
}
