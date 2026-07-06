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

// Function: sub_0020F2A8
// Address: 0x20f2a8 - 0x20f2d8
void sub_0020F2A8_0x20f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F2A8_0x20f2a8");
#endif

    ctx->pc = 0x20f2a8u;

    // 0x20f2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x20F2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2A8u;
        // 0x20f2ac: 0x80820028  lb          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F2B0u;
    // 0x20f2b0: 0x90820029  lbu         $v0, 0x29($a0)
    ctx->pc = 0x20f2b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x20f2b4: 0x908f0028  lbu         $t7, 0x28($a0)
    ctx->pc = 0x20f2b4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x20f2b8: 0x504f0004  beql        $v0, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F2B8u;
    {
        const bool branch_taken_0x20f2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x20f2b8) {
            ctx->pc = 0x20F2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F2B8u;
            // 0x20f2bc: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F2CCu;
            goto label_20f2cc;
        }
    }
    ctx->pc = 0x20F2C0u;
    // 0x20f2c0: 0xa08f0029  sb          $t7, 0x29($a0)
    ctx->pc = 0x20f2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 15));
    // 0x20f2c4: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x20f2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f2c8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x20f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_20f2cc:
    // 0x20f2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2CCu;
        // 0x20f2d0: 0x21603  sra         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F2D4u;
    // 0x20f2d4: 0x0  nop
    ctx->pc = 0x20f2d4u;
    // NOP
    if (ctx->pc == 0x20f2d4u) { ctx->pc = 0x20f2d8u; }
}
