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

// Function: sub_00152810
// Address: 0x152810 - 0x152840
void sub_00152810_0x152810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152810_0x152810");
#endif

    ctx->pc = 0x152810u;

    // 0x152810: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x152810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x152814: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x152814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x152818: 0x24a5e7b8  addiu       $a1, $a1, -0x1848
    ctx->pc = 0x152818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961080));
    // 0x15281c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152820: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x152820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x152824: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x152824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x152828: 0xa080008a  sb          $zero, 0x8A($a0)
    ctx->pc = 0x152828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 138), (uint8_t)GPR_U32(ctx, 0));
    // 0x15282c: 0xa4800086  sh          $zero, 0x86($a0)
    ctx->pc = 0x15282cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x152830: 0x3e00008  jr          $ra
    ctx->pc = 0x152830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152830u;
        // 0x152834: 0xa4800088  sh          $zero, 0x88($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 136), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152838u;
    // 0x152838: 0x0  nop
    ctx->pc = 0x152838u;
    // NOP
    // 0x15283c: 0x0  nop
    ctx->pc = 0x15283cu;
    // NOP
}
