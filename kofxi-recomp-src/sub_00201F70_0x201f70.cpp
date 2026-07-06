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

// Function: sub_00201F70
// Address: 0x201f70 - 0x201f98
void sub_00201F70_0x201f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F70_0x201f70");
#endif

    ctx->pc = 0x201f70u;

    // 0x201f70: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x201F70u;
    {
        const bool branch_taken_0x201f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f70) {
            ctx->pc = 0x201F90u;
            goto label_201f90;
        }
    }
    ctx->pc = 0x201F78u;
    // 0x201f78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x201f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x201f7c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x201f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x201f80: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
    // 0x201f84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x201f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201f88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201f8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x201f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_201f90:
    // 0x201f90: 0x3e00008  jr          $ra
    ctx->pc = 0x201F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F98u;
}
