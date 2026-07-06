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

// Function: sub_00163DF0
// Address: 0x163df0 - 0x163e00
void sub_00163DF0_0x163df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163DF0_0x163df0");
#endif

    ctx->pc = 0x163df0u;

    // 0x163df0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x163df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x163df4: 0x3e00008  jr          $ra
    ctx->pc = 0x163DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163DF4u;
        // 0x163df8: 0x8c4247a8  lw          $v0, 0x47A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18344)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163DFCu;
    // 0x163dfc: 0x0  nop
    ctx->pc = 0x163dfcu;
    // NOP
    if (ctx->pc == 0x163dfcu) { ctx->pc = 0x163e00u; }
}
