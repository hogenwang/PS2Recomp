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

// Function: sub_0012E8F0
// Address: 0x12e8f0 - 0x12e920
void sub_0012E8F0_0x12e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E8F0_0x12e8f0");
#endif

    ctx->pc = 0x12e8f0u;

    // 0x12e8f0: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x12e8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x12e8f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e8f8: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x12e8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e8fc: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x12e8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e900: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x12e900u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e904: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x12e904u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e908: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x12e908u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x12e90c: 0xa080000d  sb          $zero, 0xD($a0)
    ctx->pc = 0x12e90cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e910: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x12e910u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x12e914: 0x3e00008  jr          $ra
    ctx->pc = 0x12E914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E914u;
        // 0x12e918: 0xa480000a  sh          $zero, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E91Cu;
    // 0x12e91c: 0x0  nop
    ctx->pc = 0x12e91cu;
    // NOP
}
