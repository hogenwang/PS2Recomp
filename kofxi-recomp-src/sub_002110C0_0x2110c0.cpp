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

// Function: sub_002110C0
// Address: 0x2110c0 - 0x2110d0
void sub_002110C0_0x2110c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002110C0_0x2110c0");
#endif

    ctx->pc = 0x2110c0u;

    // 0x2110c0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2110c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2110c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2110C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2110C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110C4u;
        // 0x2110c8: 0x81e2a93a  lb          $v0, -0x56C6($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945082)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2110CCu;
    // 0x2110cc: 0x0  nop
    ctx->pc = 0x2110ccu;
    // NOP
    if (ctx->pc == 0x2110ccu) { ctx->pc = 0x2110d0u; }
}
