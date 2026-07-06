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

// Function: sub_0013E1A0
// Address: 0x13e1a0 - 0x13e1d0
void sub_0013E1A0_0x13e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E1A0_0x13e1a0");
#endif

    ctx->pc = 0x13e1a0u;

    // 0x13e1a0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13e1a4: 0x90445c50  lbu         $a0, 0x5C50($v0)
    ctx->pc = 0x13e1a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23632)));
    // 0x13e1a8: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13e1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13e1ac: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E1ACu;
    {
        const bool branch_taken_0x13e1ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e1ac) {
            ctx->pc = 0x13E1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E1ACu;
            // 0x13e1b0: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E1C8u;
            goto label_13e1c8;
        }
    }
    ctx->pc = 0x13E1B4u;
    // 0x13e1b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x13e1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13e1b8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x13e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x13e1bc: 0x64040007  daddiu      $a0, $zero, 0x7
    ctx->pc = 0x13e1bcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
    // 0x13e1c0: 0xa0435c50  sb          $v1, 0x5C50($v0)
    ctx->pc = 0x13e1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23632), (uint8_t)GPR_U32(ctx, 3));
    // 0x13e1c4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x13e1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_13e1c8:
    // 0x13e1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E1D0u;
}
