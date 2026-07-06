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

// Function: sub_001FDBB0
// Address: 0x1fdbb0 - 0x1fdbc8
void sub_001FDBB0_0x1fdbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDBB0_0x1fdbb0");
#endif

    ctx->pc = 0x1fdbb0u;

    // 0x1fdbb0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1fdbb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdbb4: 0xfc820158  sd          $v0, 0x158($a0)
    ctx->pc = 0x1fdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 344), GPR_U64(ctx, 2));
    // 0x1fdbb8: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1fdbb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fdbbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBBCu;
        // 0x1fdbc0: 0xfc830160  sd          $v1, 0x160($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 352), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDBC4u;
    // 0x1fdbc4: 0x0  nop
    ctx->pc = 0x1fdbc4u;
    // NOP
}
