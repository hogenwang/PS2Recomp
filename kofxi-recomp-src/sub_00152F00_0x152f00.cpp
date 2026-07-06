#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152F00
// Address: 0x152f00 - 0x152f20
void sub_00152F00_0x152f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F00_0x152f00");
#endif

    switch (ctx->pc) {
        case 0x152f10u: goto label_152f10;
        default: break;
    }

    ctx->pc = 0x152f00u;

    // 0x152f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152f08: 0xc054ab8  jal         func_152AE0
    ctx->pc = 0x152F08u;
    SET_GPR_U32(ctx, 31, 0x152F10u);
    ctx->pc = 0x152F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152F08u;
            // 0x152f0c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152AE0u;
    if (runtime->hasFunction(0x152AE0u)) {
        auto targetFn = runtime->lookupFunction(0x152AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F10u; }
        if (ctx->pc != 0x152F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152AE0_0x152ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152F10u; }
        if (ctx->pc != 0x152F10u) { return; }
    }
    ctx->pc = 0x152F10u;
label_152f10:
    // 0x152f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152f14: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x152f14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152f18: 0x3e00008  jr          $ra
    ctx->pc = 0x152F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152F18u;
            // 0x152f1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152F20u;
    ctx->pc = 0x152f20u;
}
