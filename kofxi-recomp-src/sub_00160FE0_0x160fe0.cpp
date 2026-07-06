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

// Function: sub_00160FE0
// Address: 0x160fe0 - 0x161010
void sub_00160FE0_0x160fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160FE0_0x160fe0");
#endif

    ctx->pc = 0x160fe0u;

    // 0x160fe0: 0xa485003c  sh          $a1, 0x3C($a0)
    ctx->pc = 0x160fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 5));
    // 0x160fe4: 0xa486003e  sh          $a2, 0x3E($a0)
    ctx->pc = 0x160fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 6));
    // 0x160fe8: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x160fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x160fec: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x160fecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x160ff0: 0x8483003e  lh          $v1, 0x3E($a0)
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
    // 0x160ff4: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x160ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x160ff8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x160ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x160ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x160FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FFCu;
        // 0x161000: 0xac80004c  sw          $zero, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161004u;
    // 0x161004: 0x0  nop
    ctx->pc = 0x161004u;
    // NOP
    // 0x161008: 0x0  nop
    ctx->pc = 0x161008u;
    // NOP
    // 0x16100c: 0x0  nop
    ctx->pc = 0x16100cu;
    // NOP
}
