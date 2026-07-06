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

// Function: sub_001AD1D8
// Address: 0x1ad1d8 - 0x1ad208
void sub_001AD1D8_0x1ad1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD1D8_0x1ad1d8");
#endif

    ctx->pc = 0x1ad1d8u;

    // 0x1ad1d8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1ad1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ad1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad1e0: 0x2463f6f8  addiu       $v1, $v1, -0x908
    ctx->pc = 0x1ad1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964984));
    // 0x1ad1e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ad1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ad1ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ad1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ad1f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ad1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad1f4: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD1F4u;
    {
        const bool branch_taken_0x1ad1f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1F4u;
        // 0x1ad1f8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1f4) {
            ctx->pc = 0x1AD200u;
            goto label_1ad200;
        }
    }
    ctx->pc = 0x1AD1FCu;
    // 0x1ad1fc: 0xac40f6f0  sw          $zero, -0x910($v0)
    ctx->pc = 0x1ad1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964976), GPR_U32(ctx, 0));
label_1ad200:
    // 0x1ad200: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD208u;
}
