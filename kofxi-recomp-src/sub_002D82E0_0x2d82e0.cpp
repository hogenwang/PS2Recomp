#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D82E0
// Address: 0x2d82e0 - 0x2d8300
void sub_002D82E0_0x2d82e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D82E0_0x2d82e0");
#endif

    ctx->pc = 0x2d82e0u;

    // 0x2d82e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d82e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d82e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d82e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d82e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d82ec: 0x44200a  movz        $a0, $v0, $a0
    ctx->pc = 0x2d82ecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2d82f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d82f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d82f4: 0x809ed08  j           func_27B420
    ctx->pc = 0x2D82F4u;
    ctx->pc = 0x2D82F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D82F4u;
            // 0x2d82f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B420u;
    if (runtime->hasFunction(0x27B420u)) {
        auto targetFn = runtime->lookupFunction(0x27B420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0027B420_0x27b420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D82FCu;
    // 0x2d82fc: 0x0  nop
    ctx->pc = 0x2d82fcu;
    // NOP
    ctx->pc = 0x2d8300u;
}
