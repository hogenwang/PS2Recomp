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

// Function: sub_00351F90
// Address: 0x351f90 - 0x351fa0
void sub_00351F90_0x351f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351F90_0x351f90");
#endif

    ctx->pc = 0x351f90u;

    // 0x351f90: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x351f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x351f94: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x351f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x351f98: 0x3e00008  jr          $ra
    ctx->pc = 0x351F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F98u;
        // 0x351f9c: 0xa464be90  sh          $a0, -0x4170($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351FA0u;
}
