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

// Function: sub_001ABD68
// Address: 0x1abd68 - 0x1abd80
void sub_001ABD68_0x1abd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABD68_0x1abd68");
#endif

    ctx->pc = 0x1abd68u;

    // 0x1abd68: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1abd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1abd6c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABD6Cu;
    {
        const bool branch_taken_0x1abd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD6Cu;
        // 0x1abd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd6c) {
            ctx->pc = 0x1ABD78u;
            goto label_1abd78;
        }
    }
    ctx->pc = 0x1ABD74u;
    // 0x1abd74: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1abd74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1abd78:
    // 0x1abd78: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABD80u;
}
