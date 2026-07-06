#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152EE0
// Address: 0x152ee0 - 0x152f00
void sub_00152EE0_0x152ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152EE0_0x152ee0");
#endif

    switch (ctx->pc) {
        case 0x152ef0u: goto label_152ef0;
        default: break;
    }

    ctx->pc = 0x152ee0u;

    // 0x152ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152ee8: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152EE8u;
    SET_GPR_U32(ctx, 31, 0x152EF0u);
    ctx->pc = 0x152EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152EE8u;
            // 0x152eec: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (runtime->hasFunction(0x152AE0u)) {
        auto targetFn = runtime->lookupFunction(0x152AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EF0u; }
        if (ctx->pc != 0x152EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152AE0_0x152ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152EF0u; }
        if (ctx->pc != 0x152EF0u) { return; }
    }
    ctx->pc = 0x152EF0u;
label_152ef0:
    // 0x152ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152ef4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x152ef4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x152EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152EF8u;
            // 0x152efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152F00u;
    ctx->pc = 0x152f00u;
}
