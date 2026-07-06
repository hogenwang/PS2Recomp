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

// Function: sub_0025A7A0
// Address: 0x25a7a0 - 0x25a7b8
void sub_0025A7A0_0x25a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A7A0_0x25a7a0");
#endif

    ctx->pc = 0x25a7a0u;

    // 0x25a7a0: 0x94830028  lhu         $v1, 0x28($a0)
    ctx->pc = 0x25a7a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x25a7a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x25a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25a7a8: 0x30630188  andi        $v1, $v1, 0x188
    ctx->pc = 0x25a7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)392);
    // 0x25a7ac: 0x38630180  xori        $v1, $v1, 0x180
    ctx->pc = 0x25a7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)384);
    // 0x25a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A7B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7B0u;
        // 0x25a7b4: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A7B8u;
}
