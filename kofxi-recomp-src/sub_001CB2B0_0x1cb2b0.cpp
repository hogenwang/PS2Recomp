#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CB2B0
// Address: 0x1cb2b0 - 0x1cb2e0
void sub_001CB2B0_0x1cb2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB2B0_0x1cb2b0");
#endif

    switch (ctx->pc) {
        case 0x1cb2c0u: goto label_1cb2c0;
        case 0x1cb2c8u: goto label_1cb2c8;
        case 0x1cb2d0u: goto label_1cb2d0;
        default: break;
    }

    ctx->pc = 0x1cb2b0u;

    // 0x1cb2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb2b8: 0xc0729e0  jal         func_1CA780
    ctx->pc = 0x1CB2B8u;
    SET_GPR_U32(ctx, 31, 0x1CB2C0u);
    ctx->pc = 0x1CA780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA780u, 0x1CB2B8u, 0x1CB2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2C0u;
label_1cb2c0:
    // 0x1cb2c0: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CB2C0u;
    SET_GPR_U32(ctx, 31, 0x1CB2C8u);
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CB2C0u, 0x1CB2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2C8u;
label_1cb2c8:
    // 0x1cb2c8: 0xc072cb8  jal         func_1CB2E0
    ctx->pc = 0x1CB2C8u;
    SET_GPR_U32(ctx, 31, 0x1CB2D0u);
    ctx->pc = 0x1CB2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB2E0u, 0x1CB2C8u, 0x1CB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2D0u;
label_1cb2d0:
    // 0x1cb2d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb2d4: 0x8072a00  j           func_1CA800
    ctx->pc = 0x1CB2D4u;
    ctx->pc = 0x1CB2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB2D4u;
    // 0x1cb2d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB2DCu;
    // 0x1cb2dc: 0x0  nop
    ctx->pc = 0x1cb2dcu;
    // NOP
}
