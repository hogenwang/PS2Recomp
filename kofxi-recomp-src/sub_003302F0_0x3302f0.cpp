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

// Function: sub_003302F0
// Address: 0x3302f0 - 0x330330
void sub_003302F0_0x3302f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003302F0_0x3302f0");
#endif

    ctx->pc = 0x3302f0u;

    // 0x3302f0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3302f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3302f4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3302f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3302f8: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x3302f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x3302fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3302fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330300: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330304: 0xac80e7e8  sw          $zero, -0x1818($a0)
    ctx->pc = 0x330304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961128), GPR_U32(ctx, 0));
    // 0x330308: 0xac60e7d0  sw          $zero, -0x1830($v1)
    ctx->pc = 0x330308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961104), GPR_U32(ctx, 0));
    // 0x33030c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33030cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330310: 0xac60e7c8  sw          $zero, -0x1838($v1)
    ctx->pc = 0x330310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961096), GPR_U32(ctx, 0));
    // 0x330314: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x330314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330318: 0xac65e7c0  sw          $a1, -0x1840($v1)
    ctx->pc = 0x330318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961088), GPR_U32(ctx, 5));
    // 0x33031c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33031cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x330320: 0x3e00008  jr          $ra
    ctx->pc = 0x330320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330320u;
        // 0x330324: 0xac60e7e0  sw          $zero, -0x1820($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330328u;
    // 0x330328: 0x0  nop
    ctx->pc = 0x330328u;
    // NOP
    // 0x33032c: 0x0  nop
    ctx->pc = 0x33032cu;
    // NOP
    if (ctx->pc == 0x33032cu) { ctx->pc = 0x330330u; }
}
