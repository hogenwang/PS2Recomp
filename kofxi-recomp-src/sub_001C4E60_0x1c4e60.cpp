#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4E60
// Address: 0x1c4e60 - 0x1c4e90
void sub_001C4E60_0x1c4e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4E60_0x1c4e60");
#endif

    switch (ctx->pc) {
        case 0x1c4e70u: goto label_1c4e70;
        default: break;
    }

    ctx->pc = 0x1c4e60u;

    // 0x1c4e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4e68: 0xc071376  jal         func_1C4DD8
    ctx->pc = 0x1C4E68u;
    SET_GPR_U32(ctx, 31, 0x1C4E70u);
    ctx->pc = 0x1C4DD8u;
    if (runtime->hasFunction(0x1C4DD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C4DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E70u; }
        if (ctx->pc != 0x1C4E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C4DD8_0x1c4dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E70u; }
        if (ctx->pc != 0x1C4E70u) { return; }
    }
    ctx->pc = 0x1C4E70u;
label_1c4e70:
    // 0x1c4e70: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c4e74: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c4e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c4e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4e7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c4e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c4e80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c4e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c4e84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c4e84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c4e88: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E88u;
            // 0x1c4e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4E90u;
    ctx->pc = 0x1c4e90u;
}
