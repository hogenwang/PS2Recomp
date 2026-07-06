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

// Function: sub_002E8568
// Address: 0x2e8568 - 0x2e8590
void sub_002E8568_0x2e8568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8568_0x2e8568");
#endif

    switch (ctx->pc) {
        case 0x2e8580u: goto label_2e8580;
        default: break;
    }

    ctx->pc = 0x2e8568u;

    // 0x2e8568: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e8568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e856c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e856cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8570: 0x8c44ea10  lw          $a0, -0x15F0($v0)
    ctx->pc = 0x2e8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961680)));
    // 0x2e8574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e8578: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2E8578u;
    SET_GPR_U32(ctx, 31, 0x2E8580u);
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2E8578u, 0x2E8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8580u;
label_2e8580:
    // 0x2e8580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8588: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8588u;
        // 0x2e858c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8590u;
}
