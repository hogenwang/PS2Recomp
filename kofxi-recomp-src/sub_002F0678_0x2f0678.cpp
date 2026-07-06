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

// Function: sub_002F0678
// Address: 0x2f0678 - 0x2f06a0
void sub_002F0678_0x2f0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0678_0x2f0678");
#endif

    ctx->pc = 0x2f0678u;

    // 0x2f0678: 0x857021  addu        $t6, $a0, $a1
    ctx->pc = 0x2f0678u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f067c: 0x30af0003  andi        $t7, $a1, 0x3
    ctx->pc = 0x2f067cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2f0680: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2f0680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f0684: 0xaf2823  subu        $a1, $a1, $t7
    ctx->pc = 0x2f0684u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x2f0688: 0x1c61021  addu        $v0, $t6, $a2
    ctx->pc = 0x2f0688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
    // 0x2f068c: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F068Cu;
    {
        const bool branch_taken_0x2f068c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F068Cu;
        // 0x2f0690: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f068c) {
            ctx->pc = 0x2F0698u;
            goto label_2f0698;
        }
    }
    ctx->pc = 0x2F0694u;
    // 0x2f0694: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2f0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2f0698:
    // 0x2f0698: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F06A0u;
}
