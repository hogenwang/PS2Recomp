#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6A48
// Address: 0x1e6a48 - 0x1e6a98
void sub_001E6A48_0x1e6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6A48_0x1e6a48");
#endif

    switch (ctx->pc) {
        case 0x1e6a68u: goto label_1e6a68;
        case 0x1e6a80u: goto label_1e6a80;
        default: break;
    }

    ctx->pc = 0x1e6a48u;

    // 0x1e6a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6a4c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e6a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6a54: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6a58: 0x8c453c8c  lw          $a1, 0x3C8C($v0)
    ctx->pc = 0x1e6a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
    // 0x1e6a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6a60: 0x807383c  j           func_1CE0F0
    ctx->pc = 0x1E6A60u;
    ctx->pc = 0x1E6A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A60u;
            // 0x1e6a64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    if (runtime->hasFunction(0x1CE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE0F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE0F0_0x1ce0f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6A68u;
label_1e6a68:
    // 0x1e6a68: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e6a6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6a6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6a78: 0xc073a22  jal         func_1CE888
    ctx->pc = 0x1E6A78u;
    SET_GPR_U32(ctx, 31, 0x1E6A80u);
    ctx->pc = 0x1E6A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A78u;
            // 0x1e6a7c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE888u;
    if (runtime->hasFunction(0x1CE888u)) {
        auto targetFn = runtime->lookupFunction(0x1CE888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A80u; }
        if (ctx->pc != 0x1E6A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE888_0x1ce888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A80u; }
        if (ctx->pc != 0x1E6A80u) { return; }
    }
    ctx->pc = 0x1E6A80u;
label_1e6a80:
    // 0x1e6a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6a84: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1e6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1e6a88: 0x24846ad8  addiu       $a0, $a0, 0x6AD8
    ctx->pc = 0x1e6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27352));
    // 0x1e6a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6a90: 0x8073a28  j           func_1CE8A0
    ctx->pc = 0x1E6A90u;
    ctx->pc = 0x1E6A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A90u;
            // 0x1e6a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE8A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E6A98u;
    ctx->pc = 0x1e6a98u;
}
