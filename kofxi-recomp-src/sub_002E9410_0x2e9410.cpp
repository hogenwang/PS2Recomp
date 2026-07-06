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

// Function: sub_002E9410
// Address: 0x2e9410 - 0x2e9430
void sub_002E9410_0x2e9410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9410_0x2e9410");
#endif

    switch (ctx->pc) {
        case 0x2e9420u: goto label_2e9420;
        default: break;
    }

    ctx->pc = 0x2e9410u;

    // 0x2e9410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e9414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e9418: 0xc0ba50c  jal         func_2E9430
    ctx->pc = 0x2E9418u;
    SET_GPR_U32(ctx, 31, 0x2E9420u);
    ctx->pc = 0x2E941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9418u;
    // 0x2e941c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9430u, 0x2E9418u, 0x2E9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9420u;
label_2e9420:
    // 0x2e9420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9424: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9424u;
        // 0x2e9428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E942Cu;
    // 0x2e942c: 0x0  nop
    ctx->pc = 0x2e942cu;
    // NOP
    if (ctx->pc == 0x2e942cu) { ctx->pc = 0x2e9430u; }
}
