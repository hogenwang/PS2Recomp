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

// Function: sub_001970D0
// Address: 0x1970d0 - 0x1970f0
void sub_001970D0_0x1970d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001970D0_0x1970d0");
#endif

    ctx->pc = 0x1970d0u;

    // 0x1970d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1970d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1970d4: 0x8c63d0c8  lw          $v1, -0x2F38($v1)
    ctx->pc = 0x1970d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955208)));
    // 0x1970d8: 0x90630059  lbu         $v1, 0x59($v1)
    ctx->pc = 0x1970d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 89)));
    // 0x1970dc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1970DCu;
    {
        const bool branch_taken_0x1970dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970dc) {
            ctx->pc = 0x1970E8u;
            goto label_1970e8;
        }
    }
    ctx->pc = 0x1970E4u;
    // 0x1970e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1970e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1970e8:
    // 0x1970e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1970E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1970E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1970F0u;
}
