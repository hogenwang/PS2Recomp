#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DFC10
// Address: 0x2dfc10 - 0x2dfc48
void sub_002DFC10_0x2dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFC10_0x2dfc10");
#endif

    switch (ctx->pc) {
        case 0x2dfc28u: goto label_2dfc28;
        default: break;
    }

    ctx->pc = 0x2dfc10u;

    // 0x2dfc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc1c: 0x80b7ee4  j           func_2DFB90
    ctx->pc = 0x2DFC1Cu;
    ctx->pc = 0x2DFC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC1Cu;
            // 0x2dfc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (runtime->hasFunction(0x2DFB90u)) {
        auto targetFn = runtime->lookupFunction(0x2DFB90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002DFB90_0x2dfb90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2DFC24u;
    // 0x2dfc24: 0x0  nop
    ctx->pc = 0x2dfc24u;
    // NOP
label_2dfc28:
    // 0x2dfc28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfc2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2dfc2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfc34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dfc34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dfc38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfc3c: 0x80b7ee4  j           func_2DFB90
    ctx->pc = 0x2DFC3Cu;
    ctx->pc = 0x2DFC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC3Cu;
            // 0x2dfc40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (runtime->hasFunction(0x2DFB90u)) {
        auto targetFn = runtime->lookupFunction(0x2DFB90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002DFB90_0x2dfb90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2DFC44u;
    // 0x2dfc44: 0x0  nop
    ctx->pc = 0x2dfc44u;
    // NOP
    ctx->pc = 0x2dfc48u;
}
