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

// Function: sub_001559F0
// Address: 0x1559f0 - 0x155a10
void sub_001559F0_0x1559f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001559F0_0x1559f0");
#endif

    switch (ctx->pc) {
        case 0x155a00u: goto label_155a00;
        default: break;
    }

    ctx->pc = 0x1559f0u;

    // 0x1559f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1559f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1559f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1559f8: 0xc055678  jal         func_1559E0
    ctx->pc = 0x1559F8u;
    SET_GPR_U32(ctx, 31, 0x155A00u);
    ctx->pc = 0x1559E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559E0u, 0x1559F8u, 0x155A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155A00u;
label_155a00:
    // 0x155a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155a04: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x155a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x155a08: 0x3e00008  jr          $ra
    ctx->pc = 0x155A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A08u;
        // 0x155a0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155A10u;
}
