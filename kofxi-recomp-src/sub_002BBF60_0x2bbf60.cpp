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

// Function: sub_002BBF60
// Address: 0x2bbf60 - 0x2bbf78
void sub_002BBF60_0x2bbf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBF60_0x2bbf60");
#endif

    ctx->pc = 0x2bbf60u;

    // 0x2bbf60: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2bbf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2bbf64: 0x54450001  bnel        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BBF64u;
    {
        const bool branch_taken_0x2bbf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2bbf64) {
            ctx->pc = 0x2BBF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BBF64u;
            // 0x2bbf68: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BBF6Cu;
            goto label_2bbf6c;
        }
    }
    ctx->pc = 0x2BBF6Cu;
label_2bbf6c:
    // 0x2bbf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBF6Cu;
        // 0x2bbf70: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBF74u;
    // 0x2bbf74: 0x0  nop
    ctx->pc = 0x2bbf74u;
    // NOP
}
