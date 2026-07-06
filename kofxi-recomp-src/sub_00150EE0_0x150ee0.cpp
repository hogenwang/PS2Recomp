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

// Function: sub_00150EE0
// Address: 0x150ee0 - 0x150f20
void sub_00150EE0_0x150ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150EE0_0x150ee0");
#endif

    ctx->pc = 0x150ee0u;

    // 0x150ee0: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x150ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x150ee4: 0x34e00  sll         $t1, $v1, 24
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x150ee8: 0xa91825  or          $v1, $a1, $t1
    ctx->pc = 0x150ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x150eec: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x150eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x150ef0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x150ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x150ef4: 0xe92825  or          $a1, $a3, $t1
    ctx->pc = 0x150ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x150ef8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x150ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x150efc: 0x1091825  or          $v1, $t0, $t1
    ctx->pc = 0x150efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x150f00: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x150f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x150f04: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x150f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x150f08: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x150f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x150f0c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x150f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x150f10: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x150f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x150f14: 0x3e00008  jr          $ra
    ctx->pc = 0x150F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150F14u;
        // 0x150f18: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150F1Cu;
    // 0x150f1c: 0x0  nop
    ctx->pc = 0x150f1cu;
    // NOP
    if (ctx->pc == 0x150f1cu) { ctx->pc = 0x150f20u; }
}
