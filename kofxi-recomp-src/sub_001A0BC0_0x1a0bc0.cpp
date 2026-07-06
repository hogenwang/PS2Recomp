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

// Function: sub_001A0BC0
// Address: 0x1a0bc0 - 0x1a0be0
void sub_001A0BC0_0x1a0bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0BC0_0x1a0bc0");
#endif

    ctx->pc = 0x1a0bc0u;

    // 0x1a0bc0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0bc4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1a0bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a0bc8: 0x2463dab8  addiu       $v1, $v1, -0x2548
    ctx->pc = 0x1a0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957752));
    // 0x1a0bcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0bd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a0bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0BD4u;
        // 0x1a0bd8: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0BDCu;
    // 0x1a0bdc: 0x0  nop
    ctx->pc = 0x1a0bdcu;
    // NOP
}
