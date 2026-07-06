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

// Function: sub_00155DA0
// Address: 0x155da0 - 0x155dc0
void sub_00155DA0_0x155da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155DA0_0x155da0");
#endif

    ctx->pc = 0x155da0u;

    // 0x155da0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x155DA0u;
    {
        const bool branch_taken_0x155da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x155da0) {
            ctx->pc = 0x155DACu;
            goto label_155dac;
        }
    }
    ctx->pc = 0x155DA8u;
    // 0x155da8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x155da8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_155dac:
    // 0x155dac: 0x3e00008  jr          $ra
    ctx->pc = 0x155DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155DB4u;
    // 0x155db4: 0x0  nop
    ctx->pc = 0x155db4u;
    // NOP
    // 0x155db8: 0x0  nop
    ctx->pc = 0x155db8u;
    // NOP
    // 0x155dbc: 0x0  nop
    ctx->pc = 0x155dbcu;
    // NOP
}
