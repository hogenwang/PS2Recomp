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

// Function: sub_001FDB98
// Address: 0x1fdb98 - 0x1fdbb0
void sub_001FDB98_0x1fdb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDB98_0x1fdb98");
#endif

    ctx->pc = 0x1fdb98u;

    // 0x1fdb98: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1fdb98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fdb9c: 0xfc820148  sd          $v0, 0x148($a0)
    ctx->pc = 0x1fdb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 328), GPR_U64(ctx, 2));
    // 0x1fdba0: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1fdba0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fdba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBA4u;
        // 0x1fdba8: 0xfc830150  sd          $v1, 0x150($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDBACu;
    // 0x1fdbac: 0x0  nop
    ctx->pc = 0x1fdbacu;
    // NOP
    if (ctx->pc == 0x1fdbacu) { ctx->pc = 0x1fdbb0u; }
}
