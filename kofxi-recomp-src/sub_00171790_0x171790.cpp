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

// Function: sub_00171790
// Address: 0x171790 - 0x1717c0
void sub_00171790_0x171790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171790_0x171790");
#endif

    switch (ctx->pc) {
        case 0x1717a0u: goto label_1717a0;
        case 0x1717acu: goto label_1717ac;
        case 0x1717b4u: goto label_1717b4;
        default: break;
    }

    ctx->pc = 0x171790u;

    // 0x171790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171798: 0xc055684  jal         func_155A10
    ctx->pc = 0x171798u;
    SET_GPR_U32(ctx, 31, 0x1717A0u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x171798u, 0x1717A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717A0u;
label_1717a0:
    // 0x1717a0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1717a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1717a4: 0xc067cc0  jal         func_19F300
    ctx->pc = 0x1717A4u;
    SET_GPR_U32(ctx, 31, 0x1717ACu);
    ctx->pc = 0x1717A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1717A4u;
    // 0x1717a8: 0x248435c0  addiu       $a0, $a0, 0x35C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F300u, 0x1717A4u, 0x1717ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717ACu;
label_1717ac:
    // 0x1717ac: 0xc0c8a9c  jal         func_322A70
    ctx->pc = 0x1717ACu;
    SET_GPR_U32(ctx, 31, 0x1717B4u);
    ctx->pc = 0x322A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A70u, 0x1717ACu, 0x1717B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1717B4u;
label_1717b4:
    // 0x1717b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1717b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1717b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1717B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1717BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1717B8u;
        // 0x1717bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1717B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1717C0u;
}
