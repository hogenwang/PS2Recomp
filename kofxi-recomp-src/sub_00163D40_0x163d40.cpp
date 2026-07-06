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

// Function: sub_00163D40
// Address: 0x163d40 - 0x163d70
void sub_00163D40_0x163d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163D40_0x163d40");
#endif

    ctx->pc = 0x163d40u;

    // 0x163d40: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163d44: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163D44u;
    {
        const bool branch_taken_0x163d44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x163D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D44u;
        // 0x163d48: 0xa06047d0  sb          $zero, 0x47D0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 18384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d44) {
            ctx->pc = 0x163D58u;
            goto label_163d58;
        }
    }
    ctx->pc = 0x163D4Cu;
    // 0x163d4c: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163D50u;
    {
        const bool branch_taken_0x163d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163D50u;
        // 0x163d54: 0xac6047c0  sw          $zero, 0x47C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163d50) {
            ctx->pc = 0x163D60u;
            goto label_163d60;
        }
    }
    ctx->pc = 0x163D58u;
label_163d58:
    // 0x163d58: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x163d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x163d5c: 0xac6447c0  sw          $a0, 0x47C0($v1)
    ctx->pc = 0x163d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18368), GPR_U32(ctx, 4));
label_163d60:
    // 0x163d60: 0x3e00008  jr          $ra
    ctx->pc = 0x163D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163D68u;
    // 0x163d68: 0x0  nop
    ctx->pc = 0x163d68u;
    // NOP
    // 0x163d6c: 0x0  nop
    ctx->pc = 0x163d6cu;
    // NOP
}
