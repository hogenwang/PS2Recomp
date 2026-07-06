#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002722E8
// Address: 0x2722e8 - 0x272310
void sub_002722E8_0x2722e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002722E8_0x2722e8");
#endif

    switch (ctx->pc) {
        case 0x272300u: goto label_272300;
        default: break;
    }

    ctx->pc = 0x2722e8u;

    // 0x2722e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2722e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2722ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2722ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2722f0: 0x8c44343c  lw          $a0, 0x343C($v0)
    ctx->pc = 0x2722f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13372)));
    // 0x2722f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2722f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2722f8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2722F8u;
    SET_GPR_U32(ctx, 31, 0x272300u);
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272300u; }
        if (ctx->pc != 0x272300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272300u; }
        if (ctx->pc != 0x272300u) { return; }
    }
    ctx->pc = 0x272300u;
label_272300:
    // 0x272300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272308: 0x3e00008  jr          $ra
    ctx->pc = 0x272308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272308u;
            // 0x27230c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272310u;
    ctx->pc = 0x272310u;
}
