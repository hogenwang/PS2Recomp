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

// Function: sub_002F0640
// Address: 0x2f0640 - 0x2f0668
void sub_002F0640_0x2f0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0640_0x2f0640");
#endif

    ctx->pc = 0x2f0640u;

    // 0x2f0640: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f0640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f0644: 0x340ffffe  ori         $t7, $zero, 0xFFFE
    ctx->pc = 0x2f0644u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x2f0648: 0x1e4782b  sltu        $t7, $t7, $a0
    ctx->pc = 0x2f0648u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2f064c: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F064Cu;
    {
        const bool branch_taken_0x2f064c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F064Cu;
        // 0x2f0650: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f064c) {
            ctx->pc = 0x2F0660u;
            goto label_2f0660;
        }
    }
    ctx->pc = 0x2F0654u;
    // 0x2f0654: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x2f0654u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0658: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x2f0658u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x2f065c: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x2f065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
label_2f0660:
    // 0x2f0660: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0668u;
}
