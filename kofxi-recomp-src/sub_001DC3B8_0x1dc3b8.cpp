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

// Function: sub_001DC3B8
// Address: 0x1dc3b8 - 0x1dc3e0
void sub_001DC3B8_0x1dc3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC3B8_0x1dc3b8");
#endif

    ctx->pc = 0x1dc3b8u;

    // 0x1dc3b8: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dc3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dc3bc: 0xac4480dc  sw          $a0, -0x7F24($v0)
    ctx->pc = 0x1dc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934748), GPR_U32(ctx, 4));
    // 0x1dc3c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC3C0u;
    {
        const bool branch_taken_0x1dc3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC3C0u;
        // 0x1dc3c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc3c0) {
            ctx->pc = 0x1DC3D4u;
            goto label_1dc3d4;
        }
    }
    ctx->pc = 0x1DC3C8u;
    // 0x1dc3c8: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x1dc3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
    // 0x1dc3cc: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1dc3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1dc3d0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1dc3d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1dc3d4:
    // 0x1dc3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC3DCu;
    // 0x1dc3dc: 0x0  nop
    ctx->pc = 0x1dc3dcu;
    // NOP
}
