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

// Function: sub_00329FF0
// Address: 0x329ff0 - 0x32a010
void sub_00329FF0_0x329ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329FF0_0x329ff0");
#endif

    ctx->pc = 0x329ff0u;

    // 0x329ff0: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x329ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x329ff4: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x329ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x329ff8: 0xa0800012  sb          $zero, 0x12($a0)
    ctx->pc = 0x329ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x329ffc: 0xa0800013  sb          $zero, 0x13($a0)
    ctx->pc = 0x329ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a000: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x32a000u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a004: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x32a004u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x32a008: 0x3e00008  jr          $ra
    ctx->pc = 0x32A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A008u;
        // 0x32a00c: 0xa0800014  sb          $zero, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A010u;
}
