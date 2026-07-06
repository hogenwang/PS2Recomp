#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014CB20
// Address: 0x14cb20 - 0x14cb80
void sub_0014CB20_0x14cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014CB20_0x14cb20");
#endif

    switch (ctx->pc) {
        case 0x14cb30u: goto label_14cb30;
        case 0x14cb40u: goto label_14cb40;
        case 0x14cb50u: goto label_14cb50;
        case 0x14cb64u: goto label_14cb64;
        case 0x14cb74u: goto label_14cb74;
        default: break;
    }

    ctx->pc = 0x14cb20u;

    // 0x14cb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14cb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14cb28: 0xc053030  jal         func_14C0C0
    ctx->pc = 0x14CB28u;
    SET_GPR_U32(ctx, 31, 0x14CB30u);
    ctx->pc = 0x14C0C0u;
    if (runtime->hasFunction(0x14C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x14C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB30u; }
        if (ctx->pc != 0x14CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C0C0_0x14c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB30u; }
        if (ctx->pc != 0x14CB30u) { return; }
    }
    ctx->pc = 0x14CB30u;
label_14cb30:
    // 0x14cb30: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cb34: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cb38: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14CB38u;
    SET_GPR_U32(ctx, 31, 0x14CB40u);
    ctx->pc = 0x14CB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB38u;
            // 0x14cb3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB40u; }
        if (ctx->pc != 0x14CB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB40u; }
        if (ctx->pc != 0x14CB40u) { return; }
    }
    ctx->pc = 0x14CB40u;
label_14cb40:
    // 0x14cb40: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cb44: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cb48: 0xc06d28c  jal         func_1B4A30
    ctx->pc = 0x14CB48u;
    SET_GPR_U32(ctx, 31, 0x14CB50u);
    ctx->pc = 0x14CB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB48u;
            // 0x14cb4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4A30u;
    if (runtime->hasFunction(0x1B4A30u)) {
        auto targetFn = runtime->lookupFunction(0x1B4A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB50u; }
        if (ctx->pc != 0x14CB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4A30_0x1b4a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB50u; }
        if (ctx->pc != 0x14CB50u) { return; }
    }
    ctx->pc = 0x14CB50u;
label_14cb50:
    // 0x14cb50: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cb54: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x14cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
    // 0x14cb58: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cb5c: 0xc06f038  jal         func_1BC0E0
    ctx->pc = 0x14CB5Cu;
    SET_GPR_U32(ctx, 31, 0x14CB64u);
    ctx->pc = 0x14CB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB5Cu;
            // 0x14cb60: 0x24a572c0  addiu       $a1, $a1, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0E0u;
    if (runtime->hasFunction(0x1BC0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BC0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB64u; }
        if (ctx->pc != 0x14CB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC0E0_0x1bc0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB64u; }
        if (ctx->pc != 0x14CB64u) { return; }
    }
    ctx->pc = 0x14CB64u;
label_14cb64:
    // 0x14cb64: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x14cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x14cb68: 0x8c44e4c0  lw          $a0, -0x1B40($v0)
    ctx->pc = 0x14cb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960320)));
    // 0x14cb6c: 0xc06ec04  jal         func_1BB010
    ctx->pc = 0x14CB6Cu;
    SET_GPR_U32(ctx, 31, 0x14CB74u);
    ctx->pc = 0x14CB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB6Cu;
            // 0x14cb70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB010u;
    if (runtime->hasFunction(0x1BB010u)) {
        auto targetFn = runtime->lookupFunction(0x1BB010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB74u; }
        if (ctx->pc != 0x14CB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BB010_0x1bb010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CB74u; }
        if (ctx->pc != 0x14CB74u) { return; }
    }
    ctx->pc = 0x14CB74u;
label_14cb74:
    // 0x14cb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14cb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14cb78: 0x3e00008  jr          $ra
    ctx->pc = 0x14CB78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB78u;
            // 0x14cb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14CB80u;
    ctx->pc = 0x14cb80u;
}
