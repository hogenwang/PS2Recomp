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

// Function: sub_00342D00
// Address: 0x342d00 - 0x342d30
void sub_00342D00_0x342d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D00_0x342d00");
#endif

    ctx->pc = 0x342d00u;

    // 0x342d00: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342d04: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x342d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x342d08: 0xac604360  sw          $zero, 0x4360($v1)
    ctx->pc = 0x342d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17248), GPR_U32(ctx, 0));
    // 0x342d0c: 0x2405010e  addiu       $a1, $zero, 0x10E
    ctx->pc = 0x342d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x342d10: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342d14: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x342d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x342d18: 0xac654358  sw          $a1, 0x4358($v1)
    ctx->pc = 0x342d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17240), GPR_U32(ctx, 5));
    // 0x342d1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342d20: 0x3e00008  jr          $ra
    ctx->pc = 0x342D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D20u;
        // 0x342d24: 0xac644350  sw          $a0, 0x4350($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342D28u;
    // 0x342d28: 0x0  nop
    ctx->pc = 0x342d28u;
    // NOP
    // 0x342d2c: 0x0  nop
    ctx->pc = 0x342d2cu;
    // NOP
    if (ctx->pc == 0x342d2cu) { ctx->pc = 0x342d30u; }
}
