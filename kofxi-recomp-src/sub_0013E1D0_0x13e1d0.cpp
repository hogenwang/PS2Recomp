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

// Function: sub_0013E1D0
// Address: 0x13e1d0 - 0x13e200
void sub_0013E1D0_0x13e1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E1D0_0x13e1d0");
#endif

    ctx->pc = 0x13e1d0u;

    // 0x13e1d0: 0x90a30204  lbu         $v1, 0x204($a1)
    ctx->pc = 0x13e1d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 516)));
    // 0x13e1d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13e1d8: 0x2442c870  addiu       $v0, $v0, -0x3790
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953072));
    // 0x13e1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e1e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13e1e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e1e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13E1E4u;
    {
        const bool branch_taken_0x13e1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1e4) {
            ctx->pc = 0x13E1F0u;
            goto label_13e1f0;
        }
    }
    ctx->pc = 0x13E1ECu;
    // 0x13e1ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13e1f0:
    // 0x13e1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E1F8u;
    // 0x13e1f8: 0x0  nop
    ctx->pc = 0x13e1f8u;
    // NOP
    // 0x13e1fc: 0x0  nop
    ctx->pc = 0x13e1fcu;
    // NOP
    if (ctx->pc == 0x13e1fcu) { ctx->pc = 0x13e200u; }
}
