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

// Function: sub_0019B800
// Address: 0x19b800 - 0x19b810
void sub_0019B800_0x19b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B800_0x19b800");
#endif

    ctx->pc = 0x19b800u;

    // 0x19b800: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19b800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19b804: 0x3e00008  jr          $ra
    ctx->pc = 0x19B804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B804u;
        // 0x19b808: 0xac64d560  sw          $a0, -0x2AA0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956384), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B80Cu;
    // 0x19b80c: 0x0  nop
    ctx->pc = 0x19b80cu;
    // NOP
}
