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

// Function: sub_001F7458
// Address: 0x1f7458 - 0x1f7480
void sub_001F7458_0x1f7458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7458_0x1f7458");
#endif

    switch (ctx->pc) {
        case 0x1f7468u: goto label_1f7468;
        default: break;
    }

    ctx->pc = 0x1f7458u;

    // 0x1f7458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f745c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7460: 0xc07dd20  jal         func_1F7480
    ctx->pc = 0x1F7460u;
    SET_GPR_U32(ctx, 31, 0x1F7468u);
    ctx->pc = 0x1F7480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7480u, 0x1F7460u, 0x1F7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7468u;
label_1f7468:
    // 0x1f7468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f746c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f746cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f7470: 0xac401794  sw          $zero, 0x1794($v0)
    ctx->pc = 0x1f7470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6036), GPR_U32(ctx, 0));
    // 0x1f7474: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7474u;
        // 0x1f7478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F747Cu;
    // 0x1f747c: 0x0  nop
    ctx->pc = 0x1f747cu;
    // NOP
}
