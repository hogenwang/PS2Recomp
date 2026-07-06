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

// Function: sub_00166BA0
// Address: 0x166ba0 - 0x166bc0
void sub_00166BA0_0x166ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166BA0_0x166ba0");
#endif

    ctx->pc = 0x166ba0u;

    // 0x166ba0: 0x8c830494  lw          $v1, 0x494($a0)
    ctx->pc = 0x166ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1172)));
    // 0x166ba4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x166ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x166ba8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x166ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x166bac: 0x3e00008  jr          $ra
    ctx->pc = 0x166BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BACu;
        // 0x166bb0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166BB4u;
    // 0x166bb4: 0x0  nop
    ctx->pc = 0x166bb4u;
    // NOP
    // 0x166bb8: 0x0  nop
    ctx->pc = 0x166bb8u;
    // NOP
    // 0x166bbc: 0x0  nop
    ctx->pc = 0x166bbcu;
    // NOP
}
