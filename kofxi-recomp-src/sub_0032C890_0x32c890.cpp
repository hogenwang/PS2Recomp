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

// Function: sub_0032C890
// Address: 0x32c890 - 0x32c8b0
void sub_0032C890_0x32c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C890_0x32c890");
#endif

    ctx->pc = 0x32c890u;

    // 0x32c890: 0x3c0301dd  lui         $v1, 0x1DD
    ctx->pc = 0x32c890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)477 << 16));
    // 0x32c894: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x32c894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32c898: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x32c898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x32c89c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32c8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x32C8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8A0u;
        // 0x32c8a4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C8A8u;
    // 0x32c8a8: 0x0  nop
    ctx->pc = 0x32c8a8u;
    // NOP
    // 0x32c8ac: 0x0  nop
    ctx->pc = 0x32c8acu;
    // NOP
    if (ctx->pc == 0x32c8acu) { ctx->pc = 0x32c8b0u; }
}
