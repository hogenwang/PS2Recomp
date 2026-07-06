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

// Function: sub_001FCA60
// Address: 0x1fca60 - 0x1fcaa0
void sub_001FCA60_0x1fca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCA60_0x1fca60");
#endif

    ctx->pc = 0x1fca60u;

    // 0x1fca60: 0x8c820920  lw          $v0, 0x920($a0)
    ctx->pc = 0x1fca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2336)));
    // 0x1fca64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCA64u;
    {
        const bool branch_taken_0x1fca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA64u;
        // 0x1fca68: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca64) {
            ctx->pc = 0x1FCA80u;
            goto label_1fca80;
        }
    }
    ctx->pc = 0x1FCA6Cu;
    // 0x1fca6c: 0x24027512  addiu       $v0, $zero, 0x7512
    ctx->pc = 0x1fca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29970));
    // 0x1fca70: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1fca70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1fca74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA74u;
        // 0x1fca78: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA7Cu;
    // 0x1fca7c: 0x0  nop
    ctx->pc = 0x1fca7cu;
    // NOP
label_1fca80:
    // 0x1fca80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1fca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1fca84: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1fca84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x1fca88: 0x8c23eb40  lw          $v1, -0x14C0($at)
    ctx->pc = 0x1fca88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961984)));
    // 0x1fca8c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1fca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fca90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1fca90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1fca94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA94u;
        // 0x1fca98: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCA9Cu;
    // 0x1fca9c: 0x0  nop
    ctx->pc = 0x1fca9cu;
    // NOP
}
