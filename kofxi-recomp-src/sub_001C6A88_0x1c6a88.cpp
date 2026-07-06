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

// Function: sub_001C6A88
// Address: 0x1c6a88 - 0x1c6ab8
void sub_001C6A88_0x1c6a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A88_0x1c6a88");
#endif

    ctx->pc = 0x1c6a88u;

    // 0x1c6a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6a8c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6A8Cu;
    {
        const bool branch_taken_0x1c6a8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A8Cu;
        // 0x1c6a90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a8c) {
            ctx->pc = 0x1C6AA8u;
            goto label_1c6aa8;
        }
    }
    ctx->pc = 0x1C6A94u;
    // 0x1c6a94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c6a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6a9c: 0x2484a9c0  addiu       $a0, $a0, -0x5640
    ctx->pc = 0x1c6a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
    // 0x1c6aa0: 0x8071ac8  j           func_1C6B20
    ctx->pc = 0x1C6AA0u;
    ctx->pc = 0x1C6AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AA0u;
    // 0x1c6aa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B20u;
    sub_001C6B20_0x1c6b20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6AA8u;
label_1c6aa8:
    // 0x1c6aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6aac: 0xa0850003  sb          $a1, 0x3($a0)
    ctx->pc = 0x1c6aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c6ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AB0u;
        // 0x1c6ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6AB8u;
}
