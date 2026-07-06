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

// Function: sub_0025CE98
// Address: 0x25ce98 - 0x25ceb0
void sub_0025CE98_0x25ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CE98_0x25ce98");
#endif

    ctx->pc = 0x25ce98u;

    // 0x25ce98: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x25ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
    // 0x25ce9c: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x25ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x25cea0: 0xac8200dc  sw          $v0, 0xDC($a0)
    ctx->pc = 0x25cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
    // 0x25cea4: 0x3e00008  jr          $ra
    ctx->pc = 0x25CEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEA4u;
        // 0x25cea8: 0xaca40048  sw          $a0, 0x48($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CEACu;
    // 0x25ceac: 0x0  nop
    ctx->pc = 0x25ceacu;
    // NOP
}
