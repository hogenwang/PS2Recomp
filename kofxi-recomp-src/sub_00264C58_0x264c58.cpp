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

// Function: sub_00264C58
// Address: 0x264c58 - 0x264c88
void sub_00264C58_0x264c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264C58_0x264c58");
#endif

    switch (ctx->pc) {
        case 0x264c60u: goto label_264c60;
        default: break;
    }

    ctx->pc = 0x264c58u;

    // 0x264c58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264C58u;
    {
        const bool branch_taken_0x264c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C58u;
        // 0x264c5c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c58) {
            ctx->pc = 0x264C78u;
            goto label_264c78;
        }
    }
    ctx->pc = 0x264C60u;
label_264c60:
    // 0x264c60: 0x2442ffdf  addiu       $v0, $v0, -0x21
    ctx->pc = 0x264c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967263));
    // 0x264c64: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x264c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x264c68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x264C68u;
    {
        const bool branch_taken_0x264c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264c68) {
            ctx->pc = 0x264C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264C68u;
            // 0x264c6c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264C78u;
            goto label_264c78;
        }
    }
    ctx->pc = 0x264C70u;
    // 0x264c70: 0x3e00008  jr          $ra
    ctx->pc = 0x264C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C70u;
        // 0x264c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C78u;
label_264c78:
    // 0x264c78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x264C78u;
    {
        const bool branch_taken_0x264c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C78u;
        // 0x264c7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c78) {
            ctx->pc = 0x264C60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_264c60;
        }
    }
    ctx->pc = 0x264C80u;
    // 0x264c80: 0x3e00008  jr          $ra
    ctx->pc = 0x264C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C80u;
        // 0x264c84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264C88u;
}
