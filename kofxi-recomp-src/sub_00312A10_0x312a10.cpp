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

// Function: sub_00312A10
// Address: 0x312a10 - 0x312a30
void sub_00312A10_0x312a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312A10_0x312a10");
#endif

    ctx->pc = 0x312a10u;

    // 0x312a10: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x312a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x312a14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x312a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x312a18: 0x24634380  addiu       $v1, $v1, 0x4380
    ctx->pc = 0x312a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17280));
    // 0x312a1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x312a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x312a20: 0x3e00008  jr          $ra
    ctx->pc = 0x312A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A20u;
        // 0x312a24: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312A28u;
    // 0x312a28: 0x0  nop
    ctx->pc = 0x312a28u;
    // NOP
    // 0x312a2c: 0x0  nop
    ctx->pc = 0x312a2cu;
    // NOP
}
