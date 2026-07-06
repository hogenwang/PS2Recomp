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

// Function: sub_0013E6A0
// Address: 0x13e6a0 - 0x13e6c0
void sub_0013E6A0_0x13e6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E6A0_0x13e6a0");
#endif

    ctx->pc = 0x13e6a0u;

    // 0x13e6a0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x13e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x13e6a4: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x13e6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x13e6a8: 0x2442c870  addiu       $v0, $v0, -0x3790
    ctx->pc = 0x13e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953072));
    // 0x13e6ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13E6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E6B0u;
        // 0x13e6b4: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E6B8u;
    // 0x13e6b8: 0x0  nop
    ctx->pc = 0x13e6b8u;
    // NOP
    // 0x13e6bc: 0x0  nop
    ctx->pc = 0x13e6bcu;
    // NOP
    if (ctx->pc == 0x13e6bcu) { ctx->pc = 0x13e6c0u; }
}
