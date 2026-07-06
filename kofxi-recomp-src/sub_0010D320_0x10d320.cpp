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

// Function: sub_0010D320
// Address: 0x10d320 - 0x10d348
void sub_0010D320_0x10d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D320_0x10d320");
#endif

    switch (ctx->pc) {
        case 0x10d330u: goto label_10d330;
        default: break;
    }

    ctx->pc = 0x10d320u;

    // 0x10d320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d328: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x10D328u;
    SET_GPR_U32(ctx, 31, 0x10D330u);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x10D328u, 0x10D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D330u;
label_10d330:
    // 0x10d330: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10d334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10d338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10d33c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d340: 0x3e00008  jr          $ra
    ctx->pc = 0x10D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D340u;
        // 0x10d344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D348u;
}
